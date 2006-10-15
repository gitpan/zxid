/* c/zx-is-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-is-data.h"
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

#define EL_NAME   is_Confirm
#define EL_STRUCT zx_is_Confirm_s
#define EL_NS     is
#define EL_TAG    Confirm

/* FUNC(zx_LEN_SO_is_Confirm) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Confirm")-1 + 1 + sizeof("</is:Confirm>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->name, sizeof("name")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Help(c, e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Label")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Value")-1, zx_ns_tab+zx_xmlns_ix_is);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Confirm) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Confirm")-1 + 1 + 2 + sizeof("Confirm")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->name, sizeof("name")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Help(c, e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Hint")-1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Label")-1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Value")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Confirm) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Confirm");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->name, " name=\"", sizeof(" name=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Help(c, e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Hint", sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Label", sizeof("is:Label")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Value", sizeof("is:Value")-1, zx_ns_tab+zx_xmlns_ix_is);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Confirm>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Confirm) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, char* p )
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
  ZX_OUT_MEM(p, "Confirm", sizeof("Confirm")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->name, "name=\"", sizeof("name=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Confirm) */

struct zx_str* zx_EASY_ENC_SO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Confirm(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Confirm(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Confirm) */

struct zx_str* zx_EASY_ENC_WO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Confirm(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Confirm(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_Help_s
#define EL_NS     is
#define EL_TAG    Help

/* FUNC(zx_LEN_SO_is_Help) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Help")-1 + 1 + sizeof("</is:Help>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->label, sizeof("label")-1);
  len += zx_attr_so_len(x->link, sizeof("link")-1);
  len += zx_attr_so_len(x->moreLink, sizeof("moreLink")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Help) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Help")-1 + 1 + 2 + sizeof("Help")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->label, sizeof("label")-1);
  len += zx_attr_wo_len(x->link, sizeof("link")-1);
  len += zx_attr_wo_len(x->moreLink, sizeof("moreLink")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Help) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Help");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->label, " label=\"", sizeof(" label=\"")-1);
  p = zx_attr_so_enc(p, x->link, " link=\"", sizeof(" link=\"")-1);
  p = zx_attr_so_enc(p, x->moreLink, " moreLink=\"", sizeof(" moreLink=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Help>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Help) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, char* p )
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
  ZX_OUT_MEM(p, "Help", sizeof("Help")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->label, "label=\"", sizeof("label=\"")-1);
  p = zx_attr_wo_enc(p, x->link, "link=\"", sizeof("link=\"")-1);
  p = zx_attr_wo_enc(p, x->moreLink, "moreLink=\"", sizeof("moreLink=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Help) */

struct zx_str* zx_EASY_ENC_SO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Help(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Help(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Help) */

struct zx_str* zx_EASY_ENC_WO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Help(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Help(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_Inquiry_s
#define EL_NS     is
#define EL_TAG    Inquiry

/* FUNC(zx_LEN_SO_is_Inquiry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Inquiry")-1 + 1 + sizeof("</is:Inquiry>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->title, sizeof("title")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Help(c, e);
  }
  {
      struct zx_is_Select_s* e;
      for (e = x->Select; e; e = (struct zx_is_Select_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Select(c, e);
  }
  {
      struct zx_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zx_is_Confirm_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Confirm(c, e);
  }
  {
      struct zx_is_Text_s* e;
      for (e = x->Text; e; e = (struct zx_is_Text_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Text(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Inquiry) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Inquiry")-1 + 1 + 2 + sizeof("Inquiry")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->title, sizeof("title")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Help(c, e);
  }
  {
      struct zx_is_Select_s* e;
      for (e = x->Select; e; e = (struct zx_is_Select_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Select(c, e);
  }
  {
      struct zx_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zx_is_Confirm_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Confirm(c, e);
  }
  {
      struct zx_is_Text_s* e;
      for (e = x->Text; e; e = (struct zx_is_Text_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Text(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Inquiry) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Inquiry");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->title, " title=\"", sizeof(" title=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Help(c, e, p);
  }
  {
      struct zx_is_Select_s* e;
      for (e = x->Select; e; e = (struct zx_is_Select_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Select(c, e, p);
  }
  {
      struct zx_is_Confirm_s* e;
      for (e = x->Confirm; e; e = (struct zx_is_Confirm_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Confirm(c, e, p);
  }
  {
      struct zx_is_Text_s* e;
      for (e = x->Text; e; e = (struct zx_is_Text_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Text(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Inquiry>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Inquiry) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, char* p )
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
  ZX_OUT_MEM(p, "Inquiry", sizeof("Inquiry")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->title, "title=\"", sizeof("title=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Inquiry) */

struct zx_str* zx_EASY_ENC_SO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Inquiry(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Inquiry(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Inquiry) */

struct zx_str* zx_EASY_ENC_WO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Inquiry(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Inquiry(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_InteractionRequest_s
#define EL_NS     is
#define EL_TAG    InteractionRequest

/* FUNC(zx_LEN_SO_is_InteractionRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:InteractionRequest")-1 + 1 + sizeof("</is:InteractionRequest>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->id, sizeof("id")-1);
  len += zx_attr_so_len(x->language, sizeof("language")-1);
  len += zx_attr_so_len(x->maxInteractTime, sizeof("maxInteractTime")-1);
  len += zx_attr_so_len(x->signed_is_c_keyword, sizeof("signed")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Inquiry(c, e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_SO_ds_KeyInfo(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_InteractionRequest) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionRequest")-1 + 1 + 2 + sizeof("InteractionRequest")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->id, sizeof("id")-1);
  len += zx_attr_wo_len(x->language, sizeof("language")-1);
  len += zx_attr_wo_len(x->maxInteractTime, sizeof("maxInteractTime")-1);
  len += zx_attr_wo_len(x->signed_is_c_keyword, sizeof("signed")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Inquiry(c, e);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  len += zx_LEN_WO_ds_KeyInfo(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_InteractionRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:InteractionRequest");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->language, " language=\"", sizeof(" language=\"")-1);
  p = zx_attr_so_enc(p, x->maxInteractTime, " maxInteractTime=\"", sizeof(" maxInteractTime=\"")-1);
  p = zx_attr_so_enc(p, x->signed_is_c_keyword, " signed=\"", sizeof(" signed=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Inquiry(c, e, p);
  }
  {
      struct zx_ds_KeyInfo_s* e;
      for (e = x->KeyInfo; e; e = (struct zx_ds_KeyInfo_s*)e->gg.g.n)
	  p = zx_ENC_SO_ds_KeyInfo(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:InteractionRequest>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_InteractionRequest) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, char* p )
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
  ZX_OUT_MEM(p, "InteractionRequest", sizeof("InteractionRequest")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->id, "id=\"", sizeof("id=\"")-1);
  p = zx_attr_wo_enc(p, x->language, "language=\"", sizeof("language=\"")-1);
  p = zx_attr_wo_enc(p, x->maxInteractTime, "maxInteractTime=\"", sizeof("maxInteractTime=\"")-1);
  p = zx_attr_wo_enc(p, x->signed_is_c_keyword, "signed=\"", sizeof("signed=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_InteractionRequest) */

struct zx_str* zx_EASY_ENC_SO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_InteractionRequest(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_InteractionRequest(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_InteractionRequest) */

struct zx_str* zx_EASY_ENC_WO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_InteractionRequest(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_InteractionRequest(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_InteractionResponse_s
#define EL_NS     is
#define EL_TAG    InteractionResponse

/* FUNC(zx_LEN_SO_is_InteractionResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:InteractionResponse")-1 + 1 + sizeof("</is:InteractionResponse>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_SO_lu_Status(c, e);
  }
  {
      struct zx_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zx_is_InteractionStatement_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_InteractionStatement(c, e);
  }
  {
      struct zx_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zx_is_Parameter_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Parameter(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_InteractionResponse) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionResponse")-1 + 1 + 2 + sizeof("InteractionResponse")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  len += zx_LEN_WO_lu_Status(c, e);
  }
  {
      struct zx_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zx_is_InteractionStatement_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_InteractionStatement(c, e);
  }
  {
      struct zx_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zx_is_Parameter_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Parameter(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_InteractionResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:InteractionResponse");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_lu_Status_s* e;
      for (e = x->Status; e; e = (struct zx_lu_Status_s*)e->gg.g.n)
	  p = zx_ENC_SO_lu_Status(c, e, p);
  }
  {
      struct zx_is_InteractionStatement_s* e;
      for (e = x->InteractionStatement; e; e = (struct zx_is_InteractionStatement_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_InteractionStatement(c, e, p);
  }
  {
      struct zx_is_Parameter_s* e;
      for (e = x->Parameter; e; e = (struct zx_is_Parameter_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Parameter(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:InteractionResponse>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_InteractionResponse) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, char* p )
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
  ZX_OUT_MEM(p, "InteractionResponse", sizeof("InteractionResponse")-1);
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

/* FUNC(zx_EASY_ENC_SO_is_InteractionResponse) */

struct zx_str* zx_EASY_ENC_SO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_InteractionResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_InteractionResponse(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_InteractionResponse) */

struct zx_str* zx_EASY_ENC_WO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_InteractionResponse(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_InteractionResponse(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_InteractionStatement_s
#define EL_NS     is
#define EL_TAG    InteractionStatement

/* FUNC(zx_LEN_SO_is_InteractionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:InteractionStatement")-1 + 1 + sizeof("</is:InteractionStatement>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Inquiry(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  if (e != c->exclude_sig)
              len += zx_LEN_SO_ds_Signature(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_InteractionStatement) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("InteractionStatement")-1 + 1 + 2 + sizeof("InteractionStatement")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Inquiry(c, e);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  if (e != c->exclude_sig)
              len += zx_LEN_WO_ds_Signature(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_InteractionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:InteractionStatement");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_is_Inquiry_s* e;
      for (e = x->Inquiry; e; e = (struct zx_is_Inquiry_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Inquiry(c, e, p);
  }
  {
      struct zx_ds_Signature_s* e;
      for (e = x->Signature; e; e = (struct zx_ds_Signature_s*)e->gg.g.n)
	  if (e != c->exclude_sig)
              p = zx_ENC_SO_ds_Signature(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:InteractionStatement>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_InteractionStatement) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, char* p )
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
  ZX_OUT_MEM(p, "InteractionStatement", sizeof("InteractionStatement")-1);
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

/* FUNC(zx_EASY_ENC_SO_is_InteractionStatement) */

struct zx_str* zx_EASY_ENC_SO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_InteractionStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_InteractionStatement(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_InteractionStatement) */

struct zx_str* zx_EASY_ENC_WO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_InteractionStatement(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_InteractionStatement(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_Item_s
#define EL_NS     is
#define EL_TAG    Item

/* FUNC(zx_LEN_SO_is_Item) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Item")-1 + 1 + sizeof("</is:Item>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->label, sizeof("label")-1);
  len += zx_attr_so_len(x->value, sizeof("value")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Item) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Item")-1 + 1 + 2 + sizeof("Item")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->label, sizeof("label")-1);
  len += zx_attr_wo_len(x->value, sizeof("value")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Hint")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Item) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Item");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->label, " label=\"", sizeof(" label=\"")-1);
  p = zx_attr_so_enc(p, x->value, " value=\"", sizeof(" value=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Hint", sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Item>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Item) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, char* p )
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
  ZX_OUT_MEM(p, "Item", sizeof("Item")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->label, "label=\"", sizeof("label=\"")-1);
  p = zx_attr_wo_enc(p, x->value, "value=\"", sizeof("value=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Item) */

struct zx_str* zx_EASY_ENC_SO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Item(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Item(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Item) */

struct zx_str* zx_EASY_ENC_WO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Item(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Item(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_Parameter_s
#define EL_NS     is
#define EL_TAG    Parameter

/* FUNC(zx_LEN_SO_is_Parameter) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Parameter")-1 + 1 + sizeof("</is:Parameter>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->name, sizeof("name")-1);
  len += zx_attr_so_len(x->value, sizeof("value")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Parameter) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Parameter")-1 + 1 + 2 + sizeof("Parameter")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->name, sizeof("name")-1);
  len += zx_attr_wo_len(x->value, sizeof("value")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Parameter) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Parameter");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->name, " name=\"", sizeof(" name=\"")-1);
  p = zx_attr_so_enc(p, x->value, " value=\"", sizeof(" value=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Parameter>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Parameter) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, char* p )
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
  ZX_OUT_MEM(p, "Parameter", sizeof("Parameter")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->name, "name=\"", sizeof("name=\"")-1);
  p = zx_attr_wo_enc(p, x->value, "value=\"", sizeof("value=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Parameter) */

struct zx_str* zx_EASY_ENC_SO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Parameter(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Parameter(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Parameter) */

struct zx_str* zx_EASY_ENC_WO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Parameter(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Parameter(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_Select_s
#define EL_NS     is
#define EL_TAG    Select

/* FUNC(zx_LEN_SO_is_Select) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Select")-1 + 1 + sizeof("</is:Select>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->multiple, sizeof("multiple")-1);
  len += zx_attr_so_len(x->name, sizeof("name")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Help(c, e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Label")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Value")-1, zx_ns_tab+zx_xmlns_ix_is);
  {
      struct zx_is_Item_s* e;
      for (e = x->Item; e; e = (struct zx_is_Item_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Item(c, e);
  }


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Select) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Select")-1 + 1 + 2 + sizeof("Select")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->multiple, sizeof("multiple")-1);
  len += zx_attr_wo_len(x->name, sizeof("name")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Help(c, e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Hint")-1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Label")-1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Value")-1);
  {
      struct zx_is_Item_s* e;
      for (e = x->Item; e; e = (struct zx_is_Item_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Item(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Select) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Select");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->multiple, " multiple=\"", sizeof(" multiple=\"")-1);
  p = zx_attr_so_enc(p, x->name, " name=\"", sizeof(" name=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Help(c, e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Hint", sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Label", sizeof("is:Label")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Value", sizeof("is:Value")-1, zx_ns_tab+zx_xmlns_ix_is);
  {
      struct zx_is_Item_s* e;
      for (e = x->Item; e; e = (struct zx_is_Item_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Item(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Select>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Select) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, char* p )
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
  ZX_OUT_MEM(p, "Select", sizeof("Select")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->multiple, "multiple=\"", sizeof("multiple=\"")-1);
  p = zx_attr_wo_enc(p, x->name, "name=\"", sizeof("name=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Select) */

struct zx_str* zx_EASY_ENC_SO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Select(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Select(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Select) */

struct zx_str* zx_EASY_ENC_WO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Select(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Select(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
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
#define EL_STRUCT zx_is_Text_s
#define EL_NS     is
#define EL_TAG    Text

/* FUNC(zx_LEN_SO_is_Text) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

int zx_LEN_SO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = sizeof("<is:Text")-1 + 1 + sizeof("</is:Text>")-1;
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  len += zx_attr_so_len(x->format, sizeof("format")-1);
  len += zx_attr_so_len(x->maxChars, sizeof("maxChars")-1);
  len += zx_attr_so_len(x->minChars, sizeof("minChars")-1);
  len += zx_attr_so_len(x->name, sizeof("name")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_SO_is_Help(c, e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Label")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_simple_elem(c,se, sizeof("is:Value")-1, zx_ns_tab+zx_xmlns_ix_is);


  len += zx_len_so_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_LEN_WO_is_Text) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

int zx_LEN_WO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Text")-1 + 1 + 2 + sizeof("Text")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;

  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->format, sizeof("format")-1);
  len += zx_attr_wo_len(x->maxChars, sizeof("maxChars")-1);
  len += zx_attr_wo_len(x->minChars, sizeof("minChars")-1);
  len += zx_attr_wo_len(x->name, sizeof("name")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  len += zx_LEN_WO_is_Help(c, e);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Hint")-1);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Label")-1);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_WO_simple_elem(c, se, sizeof("Value")-1);


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  return len;
}

/* FUNC(zx_ENC_SO_is_Text) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

char* zx_ENC_SO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, char* p )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se;
#if 1 /* NORMALMODE */
  ZX_OUT_TAG(p, "<is:Text");
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_is, &pop_seen);

  p = zx_attr_so_enc(p, x->format, " format=\"", sizeof(" format=\"")-1);
  p = zx_attr_so_enc(p, x->maxChars, " maxChars=\"", sizeof(" maxChars=\"")-1);
  p = zx_attr_so_enc(p, x->minChars, " minChars=\"", sizeof(" minChars=\"")-1);
  p = zx_attr_so_enc(p, x->name, " name=\"", sizeof(" name=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_is_Help_s* e;
      for (e = x->Help; e; e = (struct zx_is_Help_s*)e->gg.g.n)
	  p = zx_ENC_SO_is_Help(c, e, p);
  }
  for (se = x->Hint; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Hint", sizeof("is:Hint")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Label; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Label", sizeof("is:Label")-1, zx_ns_tab+zx_xmlns_ix_is);
  for (se = x->Value; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(c, se, p, "is:Value", sizeof("is:Value")-1, zx_ns_tab+zx_xmlns_ix_is);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</is:Text>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  return p;
}

/* FUNC(zx_ENC_WO_is_Text) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

char* zx_ENC_WO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, char* p )
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
  ZX_OUT_MEM(p, "Text", sizeof("Text")-1);
  qq = p;
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->format, "format=\"", sizeof("format=\"")-1);
  p = zx_attr_wo_enc(p, x->maxChars, "maxChars=\"", sizeof("maxChars=\"")-1);
  p = zx_attr_wo_enc(p, x->minChars, "minChars=\"", sizeof("minChars=\"")-1);
  p = zx_attr_wo_enc(p, x->name, "name=\"", sizeof("name=\"")-1);

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

/* FUNC(zx_EASY_ENC_SO_is_Text) */

struct zx_str* zx_EASY_ENC_SO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_is_Text(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_is_Text(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_is_Text) */

struct zx_str* zx_EASY_ENC_WO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_is_Text(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_is_Text(c, x, buf ), buf, len);
}




/* EOF -- c/zx-is-enc.c */
