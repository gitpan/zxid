/* c/zx-wsse-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing. See file COPYING.
 ** Id: enc-templ.c,v 1.21 2006/10/01 19:35:50 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 ** 23.9.2006, added WO logic --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** N.B2: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-wsse-data.h"
#include "c/zx-ns.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_BinarySecurityToken_s
#define EL_NS     wsse
#define EL_TAG    BinarySecurityToken

/* FUNC(zx_LEN_SO_wsse_BinarySecurityToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:BinarySecurityToken")-1 + 1 + sizeof("</wsse:BinarySecurityToken>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->EncodingType, sizeof("EncodingType")-1);
  len += zx_attr_so_len(x->ValueType, sizeof("ValueType")-1);
  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_BinarySecurityToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("BinarySecurityToken")-1 + 1 + 2 + sizeof("BinarySecurityToken")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->EncodingType, sizeof("EncodingType")-1);
  len += zx_attr_wo_len(x->ValueType, sizeof("ValueType")-1);
  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_BinarySecurityToken) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:BinarySecurityToken");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->EncodingType, " EncodingType=\"", sizeof(" EncodingType=\"")-1);
  p = zx_attr_so_enc(p, x->ValueType, " ValueType=\"", sizeof(" ValueType=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:BinarySecurityToken>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_BinarySecurityToken) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "BinarySecurityToken", sizeof("BinarySecurityToken")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->EncodingType, "EncodingType=\"", sizeof("EncodingType=\"")-1);
  p = zx_attr_wo_enc(p, x->ValueType, "ValueType=\"", sizeof("ValueType=\"")-1);
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_BinarySecurityToken) */

struct zx_str* zx_EASY_ENC_SO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_BinarySecurityToken(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_BinarySecurityToken(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_BinarySecurityToken) */

struct zx_str* zx_EASY_ENC_WO_wsse_BinarySecurityToken(struct zx_ctx* c, struct zx_wsse_BinarySecurityToken_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_BinarySecurityToken(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_BinarySecurityToken(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_Embedded_s
#define EL_NS     wsse
#define EL_TAG    Embedded

/* FUNC(zx_LEN_SO_wsse_Embedded) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:Embedded")-1 + 1 + sizeof("</wsse:Embedded>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);

  len += zx_attr_so_len(x->ValueType, sizeof("ValueType")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_Embedded) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Embedded")-1 + 1 + 2 + sizeof("Embedded")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->ValueType, sizeof("ValueType")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_Embedded) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:Embedded");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);

  p = zx_attr_so_enc(p, x->ValueType, " ValueType=\"", sizeof(" ValueType=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:Embedded>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_Embedded) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Embedded", sizeof("Embedded")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->ValueType, "ValueType=\"", sizeof("ValueType=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_Embedded) */

struct zx_str* zx_EASY_ENC_SO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_Embedded(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_Embedded(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_Embedded) */

struct zx_str* zx_EASY_ENC_WO_wsse_Embedded(struct zx_ctx* c, struct zx_wsse_Embedded_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_Embedded(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_Embedded(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_KeyIdentifier_s
#define EL_NS     wsse
#define EL_TAG    KeyIdentifier

/* FUNC(zx_LEN_SO_wsse_KeyIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:KeyIdentifier")-1 + 1 + sizeof("</wsse:KeyIdentifier>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->EncodingType, sizeof("EncodingType")-1);
  len += zx_attr_so_len(x->ValueType, sizeof("ValueType")-1);
  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_KeyIdentifier) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("KeyIdentifier")-1 + 1 + 2 + sizeof("KeyIdentifier")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->EncodingType, sizeof("EncodingType")-1);
  len += zx_attr_wo_len(x->ValueType, sizeof("ValueType")-1);
  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_KeyIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:KeyIdentifier");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->EncodingType, " EncodingType=\"", sizeof(" EncodingType=\"")-1);
  p = zx_attr_so_enc(p, x->ValueType, " ValueType=\"", sizeof(" ValueType=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:KeyIdentifier>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_KeyIdentifier) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "KeyIdentifier", sizeof("KeyIdentifier")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->EncodingType, "EncodingType=\"", sizeof("EncodingType=\"")-1);
  p = zx_attr_wo_enc(p, x->ValueType, "ValueType=\"", sizeof("ValueType=\"")-1);
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_KeyIdentifier) */

struct zx_str* zx_EASY_ENC_SO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_KeyIdentifier(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_KeyIdentifier(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_KeyIdentifier) */

struct zx_str* zx_EASY_ENC_WO_wsse_KeyIdentifier(struct zx_ctx* c, struct zx_wsse_KeyIdentifier_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_KeyIdentifier(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_KeyIdentifier(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_Nonce_s
#define EL_NS     wsse
#define EL_TAG    Nonce

/* FUNC(zx_LEN_SO_wsse_Nonce) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:Nonce")-1 + 1 + sizeof("</wsse:Nonce>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->EncodingType, sizeof("EncodingType")-1);
  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_Nonce) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Nonce")-1 + 1 + 2 + sizeof("Nonce")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->EncodingType, sizeof("EncodingType")-1);
  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_Nonce) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:Nonce");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->EncodingType, " EncodingType=\"", sizeof(" EncodingType=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:Nonce>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_Nonce) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Nonce", sizeof("Nonce")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->EncodingType, "EncodingType=\"", sizeof("EncodingType=\"")-1);
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_Nonce) */

struct zx_str* zx_EASY_ENC_SO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_Nonce(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_Nonce(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_Nonce) */

struct zx_str* zx_EASY_ENC_WO_wsse_Nonce(struct zx_ctx* c, struct zx_wsse_Nonce_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_Nonce(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_Nonce(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_Password_s
#define EL_NS     wsse
#define EL_TAG    Password

/* FUNC(zx_LEN_SO_wsse_Password) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:Password")-1 + 1 + sizeof("</wsse:Password>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->Type, sizeof("Type")-1);
  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_Password) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Password")-1 + 1 + 2 + sizeof("Password")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Type, sizeof("Type")-1);
  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_Password) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:Password");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->Type, " Type=\"", sizeof(" Type=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:Password>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_Password) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Password", sizeof("Password")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Type, "Type=\"", sizeof("Type=\"")-1);
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_Password) */

struct zx_str* zx_EASY_ENC_SO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_Password(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_Password(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_Password) */

struct zx_str* zx_EASY_ENC_WO_wsse_Password(struct zx_ctx* c, struct zx_wsse_Password_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_Password(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_Password(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_Reference_s
#define EL_NS     wsse
#define EL_TAG    Reference

/* FUNC(zx_LEN_SO_wsse_Reference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:Reference")-1 + 1 + sizeof("</wsse:Reference>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);

  len += zx_attr_so_len(x->URI, sizeof("URI")-1);
  len += zx_attr_so_len(x->ValueType, sizeof("ValueType")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_Reference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Reference")-1 + 1 + 2 + sizeof("Reference")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->URI, sizeof("URI")-1);
  len += zx_attr_wo_len(x->ValueType, sizeof("ValueType")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:Reference");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);

  p = zx_attr_so_enc(p, x->URI, " URI=\"", sizeof(" URI=\"")-1);
  p = zx_attr_so_enc(p, x->ValueType, " ValueType=\"", sizeof(" ValueType=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:Reference>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_Reference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Reference", sizeof("Reference")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->URI, "URI=\"", sizeof("URI=\"")-1);
  p = zx_attr_wo_enc(p, x->ValueType, "ValueType=\"", sizeof("ValueType=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_Reference) */

struct zx_str* zx_EASY_ENC_SO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_Reference(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_Reference(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_Reference) */

struct zx_str* zx_EASY_ENC_WO_wsse_Reference(struct zx_ctx* c, struct zx_wsse_Reference_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_Reference(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_Reference(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_Security_s
#define EL_NS     wsse
#define EL_TAG    Security

/* FUNC(zx_LEN_SO_wsse_Security) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:Security")-1 + 1 + sizeof("</wsse:Security>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_Security) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Security")-1 + 1 + 2 + sizeof("Security")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_Security) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:Security");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:Security>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_Security) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Security", sizeof("Security")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_Security) */

struct zx_str* zx_EASY_ENC_SO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_Security(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_Security(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_Security) */

struct zx_str* zx_EASY_ENC_WO_wsse_Security(struct zx_ctx* c, struct zx_wsse_Security_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_Security(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_Security(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_SecurityTokenReference_s
#define EL_NS     wsse
#define EL_TAG    SecurityTokenReference

/* FUNC(zx_LEN_SO_wsse_SecurityTokenReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:SecurityTokenReference")-1 + 1 + sizeof("</wsse:SecurityTokenReference>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->Usage, sizeof("wsse_Usage")-1);
  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_SecurityTokenReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("SecurityTokenReference")-1 + 1 + 2 + sizeof("SecurityTokenReference")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Usage, sizeof("Usage")-1);
  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_SecurityTokenReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:SecurityTokenReference");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->Usage, " wsse_Usage=\"", sizeof(" wsse_Usage=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:SecurityTokenReference>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_SecurityTokenReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "SecurityTokenReference", sizeof("SecurityTokenReference")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Usage, "Usage=\"", sizeof("Usage=\"")-1);
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_SecurityTokenReference) */

struct zx_str* zx_EASY_ENC_SO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_SecurityTokenReference(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_SecurityTokenReference(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_SecurityTokenReference) */

struct zx_str* zx_EASY_ENC_WO_wsse_SecurityTokenReference(struct zx_ctx* c, struct zx_wsse_SecurityTokenReference_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_SecurityTokenReference(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_SecurityTokenReference(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_TransformationParameters_s
#define EL_NS     wsse
#define EL_TAG    TransformationParameters

/* FUNC(zx_LEN_SO_wsse_TransformationParameters) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:TransformationParameters")-1 + 1 + sizeof("</wsse:TransformationParameters>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_TransformationParameters) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("TransformationParameters")-1 + 1 + 2 + sizeof("TransformationParameters")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_TransformationParameters) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:TransformationParameters");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:TransformationParameters>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_TransformationParameters) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "TransformationParameters", sizeof("TransformationParameters")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_TransformationParameters) */

struct zx_str* zx_EASY_ENC_SO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_TransformationParameters(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_TransformationParameters(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_TransformationParameters) */

struct zx_str* zx_EASY_ENC_WO_wsse_TransformationParameters(struct zx_ctx* c, struct zx_wsse_TransformationParameters_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_TransformationParameters(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_TransformationParameters(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_Username_s
#define EL_NS     wsse
#define EL_TAG    Username

/* FUNC(zx_LEN_SO_wsse_Username) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:Username")-1 + 1 + sizeof("</wsse:Username>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_Username) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Username")-1 + 1 + 2 + sizeof("Username")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_Username) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:Username");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:Username>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_Username) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Username", sizeof("Username")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_Username) */

struct zx_str* zx_EASY_ENC_SO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_Username(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_Username(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_Username) */

struct zx_str* zx_EASY_ENC_WO_wsse_Username(struct zx_ctx* c, struct zx_wsse_Username_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_Username(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_Username(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_wsse_UsernameToken_s
#define EL_NS     wsse
#define EL_TAG    UsernameToken

/* FUNC(zx_LEN_SO_wsse_UsernameToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<wsse:UsernameToken")-1 + 1 + sizeof("</wsse:UsernameToken>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->Id, sizeof("wsu_Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zx_wsse_Username_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsse_Username(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_wsse_UsernameToken) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("UsernameToken")-1 + 1 + 2 + sizeof("UsernameToken")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zx_wsse_Username_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsse_Username(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_wsse_UsernameToken) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<wsse:UsernameToken");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsse, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->Id, " wsu_Id=\"", sizeof(" wsu_Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_wsse_Username_s* e;
      for (e = x->Username; e; e = (struct zx_wsse_Username_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsse_Username(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsse:UsernameToken>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_wsse_UsernameToken) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x, char* p )
{
  struct zx_elem_s* kid;
#if 1 /* NORMALMODE */
  struct zx_ns_s* pop_seen = 0;
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "UsernameToken", sizeof("UsernameToken")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsse_UsernameToken) */

struct zx_str* zx_EASY_ENC_SO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsse_UsernameToken(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsse_UsernameToken(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsse_UsernameToken) */

struct zx_str* zx_EASY_ENC_WO_wsse_UsernameToken(struct zx_ctx* c, struct zx_wsse_UsernameToken_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsse_UsernameToken(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsse_UsernameToken(c, x, buf ), buf, len);
}




/* EOF -- c/zx-wsse-enc.c */
