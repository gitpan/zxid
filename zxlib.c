/* zxlib.c  -  Utility functions for generated (and other) code
 * Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxlib.c,v 1.28 2007-08-10 19:19:10 sampo Exp $
 *
 * 28.5.2006, created --Sampo
 * 8.8.2006,  moved lookup functions to generated code --Sampo
 * 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 * 26.8.2006, significatn Common Subexpression Elimination (CSE) --Sampo
 */

//#include <pthread.h>
#ifndef MACOSX
#include <malloc.h>
#endif
#include <memory.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

#include "errmac.h"
#include "zx.h"
#include "c/zx-data.h"  /* Also generic zx_simple_elem, etc. */

char* zx_memmem(char* haystack, int haystack_len, char* needle, int needle_len)
{
  char* lim = haystack + haystack_len - needle_len;
  for (; haystack < lim; ++haystack)
    if (!memcmp(haystack, needle, needle_len))
      return haystack;
  return 0;
}

/* Called by:  zx_zalloc */
void* zx_alloc(struct zx_ctx* c, int size)
{
  char* p;
  p = malloc(size);
  if (!p) {
    ERR("Out-of-memory(%d)", size);
    exit(1);
  }
  return p;
}

/* Called by: */
void* zx_zalloc(struct zx_ctx* c, int size)
{
  char* p = zx_alloc(c, size);
  memset(p, 0, size);
  return p;
}

/* Called by: */
void* zx_free(struct zx_ctx* c, void* p)
{
  if (p)
    free(p);
  return 0;
}

/* Called by:  zxid_simple_cf x4 */
char* zx_dup_cstr(struct zx_ctx* c, char* str)
{
  int len = strlen(str);
  char* s = ZX_ALLOC(c, len+1);
  memcpy(s, str, len+1);
  return s;
}

/* Called by:  zxid_get_meta_ss, zxid_get_ses_sso_a7n, zxid_soap_call_hdr_body, zxid_sp_sso_finalize x2 */
char* zx_str_to_c(struct zx_ctx* c, struct zx_str* ss)
{
  char* p = ZX_ALLOC(c, ss->len+1);
  memcpy(p, ss->s, ss->len);
  p[ss->len] = 0;
  return p;
}

/* zx_str_conv() helps SWIG typemaps to achieve natural conversion
 * to native length + data representations of scripting languages. */

/* Called by: */
void zx_str_conv(struct zx_str* ss, int* out_len, char** out_s)  /* SWIG typemap friendly */
{
  *out_s = 0;
  *out_len = 0;
  if (!ss)
    return;
  *out_s = ss->s;
  *out_len = ss->len;
}

/* Called by:  zxid_idp_list_cf, zxid_lecp_check, zxid_saml2_location, zxid_saml2_redir, zxid_saml2_redir_url, zxid_saml2_resp_location, zxid_saml2_resp_redir, zxid_send_sp_meta, zxid_simple_cf x4, zxid_snarf_eprs_from_ses x2, zxid_start_sso_location, zxid_write_ent_to_cache */
void zx_str_free(struct zx_ctx* c, struct zx_str* ss)
{
  if (ss->s)
    ZX_FREE(c, ss->s);
  ZX_FREE(c, ss);
}

/* Called by:  zx_easy_enc_common, zx_ref_len_simple_elem, zx_ref_str, zx_strf, zxid_mk_idp_list, zxid_saml2_redir_enc x2, zxlog_path */
struct zx_str* zx_ref_len_str(struct zx_ctx* c, int len, char* s)
{
  struct zx_str* ss = ZX_ZALLOC(c, struct zx_str);
  ss->s = s;  /* ref points to underlying data */
  ss->len = len;
  return ss;
}

/* Called by:  zxid_ac_desc x2, zxid_issuer, zxid_key_desc x2, zxid_mk_Status x2, zxid_mk_art_deref x2, zxid_mk_authn_req x8, zxid_mk_di_req_svc x2, zxid_mk_ecp_Request_hdr x2, zxid_mk_logout x2, zxid_mk_logout_resp x2, zxid_mk_nireg, zxid_mk_nireg_resp, zxid_mk_paos_Request_hdr x3, zxid_nireg_desc, zxid_slo_desc, zxid_sp_sso_desc x3 */
struct zx_str* zx_ref_str(struct zx_ctx* c, char* s)
{
  return zx_ref_len_str(c, strlen(s), s);
}

/* Called by:  zx_dup_len_simple_elem, zx_dup_str */
struct zx_str* zx_dup_len_str(struct zx_ctx* c, int len, char* s)
{
  struct zx_str* ss = ZX_ZALLOC(c, struct zx_str);
  ss->s = ZX_ALLOC(c, len+1);
  memcpy(ss->s, s, len);
  ss->s[len] = 0;
  ss->len = len;
  return ss;
}

/* Called by:  zxid_fed_mgmt_cf, zxid_idp_list_cf x2, zxid_idp_select, zxid_mk_authn_req */
struct zx_str* zx_dup_str(struct zx_ctx* c, char* s)
{
  return zx_dup_len_str(c, strlen(s), s);
}

/* Called by:  zxid_ac_desc, zxid_date_time, zxid_fed_mgmt_cf x3, zxid_idp_list_cf, zxid_idp_select x3, zxid_lecp_check, zxid_mk_di_req_svc, zxid_mk_id, zxid_mk_paos_Request_hdr, zxid_my_cdc_url, zxid_my_entity_id, zxid_nireg_desc x2, zxid_saml2_location, zxid_saml2_redir_url, zxid_saml2_resp_location, zxid_saml_ok, zxid_ses_to_ldif, zxid_simple_cf x3, zxid_slo_desc x2, zxid_sp_sso_desc, zxid_start_sso_location */
struct zx_str* zx_strf(struct zx_ctx* c, char* f, ...)  /* data is new memory */
{
  va_list ap;
  int len;
  char* s;
  char buf[2]; 
  va_start(ap, f);
  len = vsnprintf(buf, 1, f, ap);
  va_end(ap);
  if (len < 0) {
    perror("vsnprintf");
    D("Broken vsnprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", len);
    return zx_dup_str(c, "");
  }
  s = ZX_ALLOC(c, len+1);
  va_start(ap, f);
  vsnprintf(s, len+1, f, ap);
  va_end(ap);
  return zx_ref_len_str(c, len, s);
}

/* Called by: */
int zx_str_ends_in(struct zx_str* ss, int len, char* suffix)
{
  return !memcmp(ss->s + ss->len - len, suffix, len);
}

/* Called by:  zx_dup_len_simple_elem, zx_ref_len_simple_elem, zxid_mk_logout x2, zxid_mk_nireg x2 */
struct zx_elem_s* zx_new_simple_elem(struct zx_ctx* c, struct zx_str* ss)
{
  struct zx_elem_s* el;
  el = ZX_ZALLOC(c, struct zx_elem_s);
  el->content = ss;
  return el;
}

/* Called by:  zx_ref_simple_elem, zxid_key_desc x2 */
struct zx_elem_s* zx_ref_len_simple_elem(struct zx_ctx* c, int len, char* s)
{
  return zx_new_simple_elem(c, zx_ref_len_str(c, len, s));
}

/* Called by:  zxid_mk_Status, zxid_mk_art_deref x2, zxid_mk_authn_req, zxid_mk_di_req_svc x3, zxid_sp_sso_desc x2 */
struct zx_elem_s* zx_ref_simple_elem(struct zx_ctx* c, char* s)
{
  return zx_ref_len_simple_elem(c, strlen(s), s);
}

/* Called by:  zx_dup_simple_elem */
struct zx_elem_s* zx_dup_len_simple_elem(struct zx_ctx* c, int len, char* s)
{
  return zx_new_simple_elem(c, zx_dup_len_str(c, len, s));
}

/* Called by: */
struct zx_elem_s* zx_dup_simple_elem(struct zx_ctx* c, char* s)
{
  return zx_dup_len_simple_elem(c, strlen(s), s);
}

/* ------------- All the manner namespace management ------------- */

/* Called by: */
void zx_fix_any_elem_dec(struct zx_ctx* c, struct zx_any_elem_s* x, char* nam, int namlen)
{
  char* p = memchr(nam, ':', namlen);
  if (p) {
    x->gg.g.ns = zx_locate_ns_by_prefix(c, p-nam, nam);
    ++p;
    namlen -= p-nam;
    nam = p;
  }
  x->name = nam;
  x->name_len = namlen;
}

/* Called by: */
int zx_is_ns_prefix(struct zx_ns_s* ns, int len, char* prefix)
{
  struct zx_ns_s* alias;
  if (!ns)
    return 0;
  if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
    return 1;
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
      return 1;
  return 0;
}

/* Called by:  zx_fix_any_elem_dec, zx_init_tok_tab, zx_xmlns_decl */
struct zx_ns_s* zx_locate_ns_by_prefix(struct zx_ctx* c, int len, char* prefix)
{
  struct zx_ns_s* ns;
  struct zx_ns_s* alias;
  for (ns = c->ns_tab; ns->url_len; ++ns) {
    if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
      return ns;
    for (alias = ns->n; alias; alias = alias->n)
      if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
	return ns;
  }
  
  /* Trailer element holds unknown namespaces. */
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->prefix_len == len && (!len || !memcmp(alias->prefix, prefix, len)))
      return alias;
  return 0;
}

/* Called by:  zx_xmlns_decl */
static struct zx_ns_s* zx_locate_ns_by_url(struct zx_ctx* c, int len, char* url)
{
  struct zx_ns_s* ns;
  struct zx_ns_s* alias;
  for (ns = c->ns_tab; ns->url_len; ++ns) {
    if (ns->url_len == len && (!len || !memcmp(ns->url, url, len)))
      return ns;
    for (alias = ns->n; alias; alias = alias->n)
      if (alias->url_len == len && (!len || !memcmp(alias->url, url, len)))
	return alias;
  }

  /* Trailer element holds unknown namespaces. */
  for (alias = ns->n; alias; alias = alias->n)
    if (alias->url_len == len && (!len || !memcmp(alias->url, url, len)))
      return alias;
  return 0;
}

/* Called by:  zx_push_seen x2 */
static struct zx_ns_s* zx_xmlns_decl(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url)
{
  struct zx_ns_s* alias;
  struct zx_ns_s* ns = zx_locate_ns_by_url(c, url_len, url);
  if (!ns) {
    D("Namespace(%.*s) not found by URL(%.*s) (probably wrong namespace URL)", prefix_len, prefix, url_len, url);
    ns = zx_locate_ns_by_prefix(c, prefix_len, prefix);
    if (!ns) {
      D("Namespace not found by prefix(%.*s) or URL(%.*s) (probably wrong namespace URL)", prefix_len, prefix, url_len, url);
      return;  /* Namespace not known by compiled in schemata. */
    }
  }
  /* Always alloc a new one because we may need to push to stack multiple instances of same. */
  alias = ZX_ZALLOC(c, struct zx_ns_s);
  alias->prefix_len = prefix_len;
  alias->prefix = prefix;
  alias->url_len = url_len;
  alias->url =url;
  alias->n = ns->n;
  ns->n = alias;
  return alias;
}

/* Called by:  zx_prefix_seen_whine, zx_push_seen */
struct zx_ns_s* zx_prefix_seen(struct zx_ctx* c, int len, char* prefix)
{
  struct zx_ns_s* ns;
  for (ns = c->guard_seen_n.seen_n; ns->seen_n; ns = ns->seen_n)
    if (ns->prefix_len == len && (!len || !memcmp(ns->prefix, prefix, len)))
      return ns;
  return 0;
}

/* Called by:  TXattr_lookup, TXelem_lookup */
struct zx_ns_s* zx_prefix_seen_whine(struct zx_ctx* c, int len, char* prefix, char* logkey)
{
  struct zx_ns_s* ns = zx_prefix_seen(c, len, prefix);
  if (!ns) {
    /* Try to locate the namespace by the prefix from among the namespaces
     * naturally known to zxid. */
    ns = zx_locate_ns_by_prefix(c, len, prefix);
    if (!ns) {
      D("Undefined namespace prefix(%.*s) at(%s). NS not known from any context.", len, prefix, logkey);
    } else {
      D("Undefined namespace prefix(%.*s) at(%s) mapped to uri(%.*s) by built-in table.", len, prefix, logkey, ns->url_len, ns->url);
    }
  }
  return ns;
}

/* See if prefix has been seen, and in the same meaning. If not, the allocate
 * a new node and push or add it to the doubly linked list as well as to the
 * pop_seen list. Returns 0 if no addition was done (i.e. ns had been seen already). */

/* Called by:  zx_add_xmlns_if_not_seen, zx_enc_xmlns_if_not_seen, zx_len_xmlns_if_not_seen, zx_scan_xmlns */
static struct zx_ns_s* zx_push_seen(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url, struct zx_ns_s** pop_seen)
{
  struct zx_ns_s* old_ns;
  struct zx_ns_s* ns;
  old_ns = zx_prefix_seen(c, prefix_len, prefix);
  if (old_ns) {
    if (old_ns->url_len == url_len && (!url_len || !memcmp(old_ns->url, url, url_len)))
      return 0;
    ns = zx_xmlns_decl(c, prefix_len, prefix, url_len, url);
    ns->seen = old_ns;            /* Push */
    ns->seen_n = old_ns->seen_n;  /* Replace old_ns in middle of the list */
    ns->seen_p = old_ns->seen_p;
    old_ns->seen_n->seen_p = ns;
    old_ns->seen_p->seen_n = ns;
  } else {
    ns = zx_xmlns_decl(c, prefix_len, prefix, url_len, url);
    ns->seen_n = c->guard_seen_n.seen_n;  /* Add to beginning of seen_n list. */
    c->guard_seen_n.seen_n = ns;
    ns->seen_n->seen_p = ns;
    ns->seen_p = &c->guard_seen_n;
  }
  ns->seen_pop = *pop_seen;
  *pop_seen = ns;
  return ns;
}

/* Called by:  TXDEC_ELNAME, TXENC_SO_ELNAME, TXENC_WO_ELNAME, TXLEN_SO_ELNAME, TXLEN_WO_ELNAME */
void zx_pop_seen(struct zx_ns_s* ns)
{
  for (; ns; ns = ns->seen_pop) {
    if (ns->seen) {
      ns->seen->seen_n = ns->seen_n;   /* Replace ns with old_ns (ns->seen) in middle of list */
      ns->seen->seen_p = ns->seen_p;
      ns->seen_n->seen_p = ns->seen;
      ns->seen_p->seen_n = ns->seen;
    } else {
      ns->seen_n->seen_p = ns->seen_p; /* Remove ns from middle of the seen_n list. */
      ns->seen_p->seen_n = ns->seen_n;
    }
  }
}

/* When trying to scan an element, an annoying feature of XML namespaces is that the
 * namespace may be declared in a xmlns attribute within the element itself. Thus
 * at the time of scanning the <ns:element part we can't know its namespace. What
 * a lousy design. In order to handle this we need to either backtrack or
 * make a special case forward scan for xmlns attributes (which is redundant with
 * normal attribute scanning). It seems simpler to do the latter, so here goes...
 *
 * The return value represents the list of namespaces that were newly declared
 * at this level, i.e. pushed to the seen stacks. This list is used to pop the
 * seen stacks after we are through with the element. */

/* Called by:  TXDEC_ELNAME */
struct zx_ns_s* zx_scan_xmlns(struct zx_ctx* c)
{
  struct zx_ns_s* pop_seen = 0;  /* build a list of namespaces declared here */
  char* prefix;
  char* url;
  char* p = c->p;  /* We need to keep the original c->p so normal attributes can be scanned. */
  char quote;
  int prefix_len, url_len;

  /* The tag name has already been detected. Process attributes until '>' */
  
  for ( ; 1; ++p) {
    ZX_SKIP_WS_P(c, p, pop_seen);
    if (ONE_OF_2(*p, '>', '/'))
      break;
    if (!memcmp(p, "xmlns", sizeof("xmlns")-1)) {
      switch (p[5]) {
      case '=':  /* Default namespace decl. */
	prefix = p;
	goto scan_URL;
      case ':':  /* Qualified namespace decl. */
	prefix = p += 6;
	ZX_LOOK_FOR_P(c,'=',p, pop_seen);
      scan_URL:
	++p;
	if (!ONE_OF_2(*p, '"', '\''))
	  return pop_seen;
	quote = *p;
	url = ++p;
	ZX_LOOK_FOR_P(c, quote, p, pop_seen);

	prefix_len = (url - 2) - prefix;
	url_len = p - url;
	zx_push_seen(c, prefix_len, prefix, url_len, url, &pop_seen);
	goto next;
      default:
	D("Illformed attributes. Bad char(%c)", p[5]);
	return pop_seen;
      }
    }
    
    /* Skip over any other attributes. */
    
    ZX_LOOK_FOR_P(c,'=',p, pop_seen);
    ++p;
    if (!ONE_OF_2(*p, '"', '\''))
      return pop_seen;
    quote = *p;
    ++p;
    ZX_LOOK_FOR_P(c,quote,p, pop_seen);
  next:
    continue;
  }
  return pop_seen;
}

/* Disambiguate token by considering its namespace.
 * See zx_attr_lookup(), zx_elem_lookup() */
/* Called by:  TXattr_lookup, TXelem_lookup */
const struct zx_tok* zx_tok_by_ns(const struct zx_tok* zt, const struct zx_tok* lim,
				  int len, char* name, struct zx_ns_s* ns)
{
  struct zx_ns_s* alias;
  const struct zx_tok* ztt;

  /* First find token whose name matches. The token table CAN have duplicate entries,
   * see -D flag to gperf. */
  for (; zt < lim && (memcmp(zt->name, name, len) || zt->name[len]); ++zt) ;
  ztt = zt < lim ? zt : 0;  /* Remember first "hit" in case we fail. */
  if (!ns)
    return ztt;
  
  /* Now check for namespace match. */
  for (; zt < lim && (!memcmp(zt->name, name, len) && !zt->name[len]); ++zt)
    for (alias = zt->ns; alias; alias = alias->n)
      if (alias == ns)
	return zt;
  return ztt;
}

#if 0
/* N.B. Generally this function is not needed since tokens can be arranged
 * to point to respective struct zx_ns_s at compile time using static
 * initialization. This is handled by xsd2sg.pl */
/*if (!zx_init_tok_tab(&ctx, zx_elems, zx_elems + sizeof(zx_elems) / sizeof(struct zx_tok)))  DIE("Inconsistency between tokens and namespaces");*/
/* Called by: */
int zx_init_tok_tab(struct zx_ctx* c, struct zx_tok* tok_tab, struct zx_tok* tok_tab_lim)
{
  for (; tok_tab < tok_tab_lim; ++tok_tab)
    if (!(tok_tab->ns = zx_locate_ns_by_prefix(c, strlen(tok_tab->prefix), (char*)tok_tab->prefix)))
      return 0;
  return 1;
}
#endif

/* Called by: */
int zx_len_xmlns_if_not_seen(struct zx_ctx* c, struct zx_ns_s* ns, struct zx_ns_s** pop_seen)
{
  if (!zx_push_seen(c, ns->prefix_len, ns->prefix, ns->url_len, ns->url, pop_seen))
    return 0;
  return sizeof(" xmlns")-1
    + (ns->prefix_len ? ns->prefix_len+1 : 0) + 2 + ns->url_len + 1;
}

/* Called by: */
char* zx_enc_xmlns_if_not_seen(struct zx_ctx* c, char* p, struct zx_ns_s* ns, struct zx_ns_s** pop_seen)
{
  if (!zx_push_seen(c, ns->prefix_len, ns->prefix, ns->url_len, ns->url, pop_seen))
    return p;
  
  ZX_OUT_MEM(p, " xmlns", sizeof(" xmlns")-1);
  if (ns->prefix_len) {
    ZX_OUT_CH(p, ':');
    ZX_OUT_MEM(p, ns->prefix, ns->prefix_len);
  }
  ZX_OUT_CH(p, '=');
  ZX_OUT_CH(p, '"');
  ZX_OUT_MEM(p, ns->url, ns->url_len);
  ZX_OUT_CH(p, '"');
  return p;
}

/* For WO encoder the sort of xmlns declarations is not known at compile
 * time. Thus we first add them to the pop_seen list using insertion
 * sort (pop_seen is smallest and prefixes grow from there) and
 * then later render the list using zx_enc_seen(). */

/* Called by: */
void zx_add_xmlns_if_not_seen(struct zx_ctx* c, struct zx_ns_s* ns, struct zx_ns_s** pop_seen)
{
  struct zx_ns_s* pop_seen_dummy=0;
  struct zx_ns_s* new_ns;
  int res;
  new_ns = zx_push_seen(c, ns->prefix_len, ns->prefix, ns->url_len, ns->url, &pop_seen_dummy);
  if (!new_ns)
    return;
  if (!*pop_seen) {
    *pop_seen = new_ns;
    return;
  }
  if (!new_ns->prefix_len) {       /* Default namespace (empty prefix) sorts first. */
first:
    new_ns->seen_pop = *pop_seen;
    *pop_seen = new_ns;
    return;
  }

  ns = *pop_seen;
  if (ns->prefix_len) {
    res = memcmp(ns->prefix, new_ns->prefix, MIN(ns->prefix_len, new_ns->prefix_len));
    if ((res > 0) || !res && ns->prefix_len >= new_ns->prefix_len)
      goto first;
  }
  for (; ns->seen_pop; ns = ns->seen_pop) {
    res = memcmp(ns->seen_pop->prefix, new_ns->prefix,
		 MIN(ns->seen_pop->prefix_len, new_ns->prefix_len));
    if ((res > 0) || !res && ns->seen_pop->prefix_len >= new_ns->prefix_len)
      break;
  }
  new_ns->seen_pop = ns->seen_pop;
  ns->seen_pop = new_ns;
}

/* Called by:  TXENC_WO_ELNAME */
char* zx_enc_seen(char* p, struct zx_ns_s* ns)
{
  for (; ns; ns = ns->seen_pop) {
    ZX_OUT_MEM(p, " xmlns", sizeof(" xmlns")-1);
    if (ns->prefix_len) {
      ZX_OUT_CH(p, ':');
      ZX_OUT_MEM(p, ns->prefix, ns->prefix_len);
    }
    ZX_OUT_CH(p, '=');
    ZX_OUT_CH(p, '"');
    ZX_OUT_MEM(p, ns->url, ns->url_len);
    ZX_OUT_CH(p, '"');
  }
  return p;
}

/* Render the unknown attributes list. CSE for almost all tags. */

/* Called by:  TXLEN_SO_ELNAME */
int zx_len_so_common(struct zx_ctx* c, struct zx_elem_s* x)
{
  int len = 0;
  struct zx_str* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  
  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    if (aa->ss.g.ns && aa->ss.g.ns->prefix_len)
      len += aa->ss.g.ns->prefix_len + 1;
    len += 1 + aa->name_len + 1 + 1 + aa->ss.len + 1;  /* attr="val" */
  }

  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)    /* unknown elements */
    len += zx_LEN_SO_simple_elem(c, &ae->gg, ae->name_len, 0);          /* *** figure namespaces */
  
  for (ss = x->content; ss; ss = (struct zx_str*)ss->g.n)             /* content */
    len += ss->len;
  
  return len;
}

/* Called by:  TXLEN_WO_ELNAME, TXLEN_WO_any_elem */
int zx_len_wo_common(struct zx_ctx* c, struct zx_elem_s* x)
{
  int len = 0;
  struct zx_str* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  
  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    if (aa->ss.g.ns && aa->ss.g.ns->prefix_len)
      len += aa->ss.g.ns->prefix_len + 1;
    len += 1 + aa->name_len + 1 + 1 + aa->ss.len + 1;  /* attr="val" */
  }

  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)    /* unknown elements */
    len += zx_LEN_WO_simple_elem(c, &ae->gg, ae->name_len);
  
  for (ss = x->content; ss; ss = (struct zx_str*)ss->g.n)             /* content */
    len += ss->len;
  
  return len;
}

/* Called by:  TXENC_SO_ELNAME, TXENC_WO_ELNAME, TXENC_WO_any_elem */
char* zx_enc_unknown_attrs(char* p, struct zx_any_attr_s* aa)
{
  for (; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    ZX_OUT_CH(p, ' ');
    if (aa->ss.g.ns && aa->ss.g.ns->prefix_len) {
      ZX_OUT_MEM(p, aa->ss.g.ns->prefix, aa->ss.g.ns->prefix_len);
      ZX_OUT_CH(p, ':');
    }
    
    ZX_OUT_MEM(p, aa->name, aa->name_len);
    ZX_OUT_CH(p, '=');
    ZX_OUT_CH(p, '"');
    ZX_OUT_MEM(p, aa->ss.s, aa->ss.len);
    ZX_OUT_CH(p, '"');
  }
  ZX_OUT_CH(p, '>');
  return p;
}

/* Called by:  TXENC_SO_ELNAME */
char* zx_enc_so_unknown_elems_and_content(struct zx_ctx* c, char* p, struct zx_elem_s* x)
{
  struct zx_str* ss;
  struct zx_any_elem_s* ae;
  
  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)    /* unknown elements */
    p = zx_ENC_SO_simple_elem(c, &ae->gg, p, ae->name, ae->name_len, ae->gg.g.ns);
  
  for (ss = x->content; ss; ss = (struct zx_str*)ss->g.n)             /* content */
    ZX_OUT_MEM(p, ss->s, ss->len);
  
  return p;
}

/* Called by:  TXEASY_ENC_SO_ELNAME, TXEASY_ENC_WO_ELNAME, TXEASY_ENC_WO_any_elem */
struct zx_str* zx_easy_enc_common(struct zx_ctx* c, char* p, char* buf, int len)
{
  if (p != buf+len) {
    ERR("Encoded length(%d) does not match computed length(%d). ED(%.*s)", p-buf, len, p-buf, buf);
    len = p-buf;
  }
  buf[len] = 0;
  return zx_ref_len_str(c, len, buf);
}

/* Called by: */
int zx_attr_so_len(struct zx_str* attr, int name_size)
{
  int len = 0;
  /* In legal XML there should really be just one attribute, but we acommodate multioccurances. */
  for (; attr; attr = (struct zx_str*)attr->g.n)
    len += 1 + name_size + 1 + 1 + attr->len + 1;
  return len;
}

/* Both attribute name and the namespace prefix are known at compile time
 * and are passed in in name and name_len. */
/* Called by: */
char* zx_attr_so_enc(char* p, struct zx_str* attr, char* name, int name_len)
{
  /* In legal XML there should really be just one attribute, but we acommodate multioccurances. */
  for (; attr; attr = (struct zx_str*)attr->g.n) {
    ZX_OUT_MEM(p, name, name_len);
    ZX_OUT_MEM(p, attr->s, attr->len);
    ZX_OUT_CH(p, '"');
  }
  return p;
}

/* Called by: */
int zx_attr_wo_len(struct zx_str* attr, int name_size)
{
  int len = 0;
  /* In legal XML there should really be just one attribute, but we acommodate multioccurances. */
  for (; attr; attr = (struct zx_str*)attr->g.n) {
    if (attr->g.ns && attr->g.ns->prefix_len)
      len += attr->g.ns->prefix_len + 1;
    len += 1 + name_size + 1 + 1 + attr->len + 1;
  }
  return len;
}

/* The attribute name is known at compile time and passed as name and name_len, but
 * the namespace prefix is only known at runtime and has to be fished out of attr->g.ns */
/* Called by: */
char* zx_attr_wo_enc(char* p, struct zx_str* attr, char* name, int name_len)
{
  /* In legal XML there should really be just one attribute, but we acommodate multioccurances. */
  for (; attr; attr = (struct zx_str*)attr->g.n) {
    ZX_OUT_CH(p, ' ');
    if (attr->g.ns && attr->g.ns->prefix_len) {
      ZX_OUT_MEM(p, attr->g.ns->prefix, attr->g.ns->prefix_len);
      ZX_OUT_CH(p, ':');
    }
    ZX_OUT_MEM(p, name, name_len);
    ZX_OUT_MEM(p, attr->s, attr->len);
    ZX_OUT_CH(p, '"');
  }
  return p;
}

/* Called by: */
void zx_free_attr(struct zx_ctx* c, struct zx_str* attr, int free_strs)
{
  struct zx_str* attrn;
  for (; attr; attr = attrn) {
    attrn = (struct zx_str*)attr->g.n;
    if (free_strs && attr->s)
	ZX_FREE(c, attr->s);
    ZX_FREE(c, attr);
  }
}

/* Called by:  TXFREE_ELNAME */
void zx_free_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int free_strs)
{
  struct zx_str* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  struct zx_str* ssn;
  struct zx_any_attr_s* aan;
  struct zx_any_elem_s* aen;
  
  if (x->g.tok == ZX_TOK_NOT_FOUND && free_strs) {
    ae = (struct zx_any_elem_s*)x;
    if (ae->name)
      ZX_FREE(c, ae->name);
  }
  for (aa = x->any_attr; aa; aa = aan) {   /* unknown attributes */
    aan = (struct zx_any_attr_s*)aa->ss.g.n;
    if (free_strs && aa->name)
      ZX_FREE(c, aa->name);
    if (free_strs && aa->ss.s)
      ZX_FREE(c, aa->ss.s);
    ZX_FREE(c, aa);
  }
  for (ae = x->any_elem; ae; ae = aen) {  /* unknown elements */
    aen = (struct zx_any_elem_s*)ae->gg.g.n;
    zx_FREE_simple_elem(c, &ae->gg, free_strs);
  }
  for (ss = x->content; ss; ss = ssn) {   /* content */
    ssn = (struct zx_str*)ss->g.n;
    if (free_strs && ss->s)
      ZX_FREE(c, ss->s);
  }
  ZX_FREE(c, x);
}

/* Called by: */
void zx_free_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, int free_strs)
{
  struct zx_elem_s* sen;
  for (; se; se = sen) {
    sen = (struct zx_elem_s*)se->g.n;
    zx_FREE_simple_elem(c, se, free_strs);
  }
}

#ifdef ZX_ENA_AUX

/* Called by: */
void zx_dup_attr(struct zx_ctx* c, struct zx_str* attr)
{
  char* p;
  for (; attr; attr = (struct zx_str*)attr->g.n)
    if (attr->s) {
      p = ZX_ALLOC(c, attr->len);
      memcpy(p, attr->s, attr->len);
      attr->s = p;
    }
}

/* Called by: */
struct zx_str* zx_clone_attr(struct zx_ctx* c, struct zx_str* attr)
{
  struct zx_str* ret;
  struct zx_str* attrnn;
  struct zx_str* attrn;
  char* p;
  for (attrnn = 0; attr; attr = (struct zx_str*)attr->g.n) {
    ZX_DUPALLOC(c, struct zx_str, attrn, attr);
    if (!attrnn)
      ret = attrn;
    else
      attrnn->g.n = &attrn->g;
    attrnn = attrn;
    if (attrn->s) {
      p = ZX_ALLOC(c, attrn->len);
      memcpy(p, attrn->s, attrn->len);
      attrn->s = p;
    }
  }
  return ret;
}

/* Called by:  TXDEEP_CLONE_ELNAME */
struct zx_elem_s* zx_clone_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int size, int dup_strs)
{
  struct zx_str* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  struct zx_str* ssn;
  struct zx_any_attr_s* aan;
  struct zx_any_elem_s* aen;
  struct zx_str* ssnn;
  struct zx_any_attr_s* aann;
  struct zx_any_elem_s* aenn;
  char* p;

  if (x->g.tok == ZX_TOK_NOT_FOUND) {
    ae = (struct zx_any_elem_s*)x;
    ZX_DUPALLOC(c, struct zx_any_elem_s, aen, ae);
    if (dup_strs) {
      aen->name = ZX_ALLOC(c, ae->name_len);
      memcpy(aen->name, ae->name, ae->name_len);
    }
    x = &aen->gg;
  } else {
    struct zx_elem_s* xx = (struct zx_elem_s*)ZX_ALLOC(c, size);
    memcpy(xx, x, size);
    x = xx;
  }
  
  /* *** deal with xmlns specifications in exc c14n way */
  
  for (aann = 0, aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    ZX_DUPALLOC(c, struct zx_any_attr_s, aan, aa);
    if (!aann)
      x->any_attr = aan;
    else
      aann->ss.g.n = &aan->ss.g;
    aann = aan;
    
    if (dup_strs && aan->name) {
      p = ZX_ALLOC(c, aan->name_len);
      memcpy(p, aan->name, aan->name_len);
      aan->name = p;
    }
    if (dup_strs && aan->ss.s) {
      p = ZX_ALLOC(c, aan->ss.len);
      memcpy(p, aan->ss.s, aan->ss.len);
      aan->ss.s = p;
    }
  }
  
  for (aenn = 0, ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n) {  /* unknown elements */
    aen = (struct zx_any_elem_s*)zx_DEEP_CLONE_simple_elem(c, &ae->gg, dup_strs);
    if (!aenn)
      x->any_elem = aen;
    else
      aenn->gg.g.n = &aen->gg.g;
    aenn = aen;
  }
  
  for (ssnn = 0, ss = x->content; ss; ss = (struct zx_str*)ss->g.n) {   /* content */
    ZX_DUPALLOC(c, struct zx_str, ssn, ss);
    if (!ssnn)
      x->content = ssn;
    else
      ssnn->g.n = &ssn->g;
    ssnn = ssn;
    if (ssn->s) {
      p = ZX_ALLOC(c, ssn->len);
      memcpy(p, ssn->s, ssn->len);
      ssn->s = p;
    }
  }
  
  return x;
}

/* Called by:  TXDUP_STRS_ELNAME */
void zx_dup_strs_common(struct zx_ctx* c, struct zx_elem_s* x)
{
  struct zx_str* ss;
  struct zx_any_attr_s* aa;
  struct zx_any_elem_s* ae;
  char* p;
  
  if (x->g.tok == ZX_TOK_NOT_FOUND) {
    ae = (struct zx_any_elem_s*)x;
    p = ZX_ALLOC(c, ae->name_len);
    memcpy(p, ae->name, ae->name_len);
    ae->name = p;
  }
  
  /* *** deal with xmlns specifications in exc c14n way */

  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    if (aa->name) {
      p = ZX_ALLOC(c, aa->name_len);
      memcpy(p, aa->name, aa->name_len);
      aa->name = p;
    }
    if (aa->ss.s) {
      p = ZX_ALLOC(c, aa->ss.len);
      memcpy(p, aa->ss.s, aa->ss.len);
      aa->ss.s = p;
    }
  }

  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n)   /* unknown elements */
    zx_DUP_STRS_simple_elem(c, &ae->gg);

  for (ss = x->content; ss; ss = (struct zx_str*)ss->g.n)    /* content */
    if (ss->s) {
      p = ZX_ALLOC(c, ss->len);
      memcpy(p, ss->s, ss->len);
      ss->s = p;
    }
}

int zx_walk_so_unknown_attributes(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_any_attr_s* aa;
  int ret;
  
  for (aa = x->any_attr; aa; aa = (struct zx_any_attr_s*)aa->ss.g.n) {  /* unknown attributes */
    ret = callback(&aa->ss.g, ctx);
    if (ret)
      return ret;
  }
  return 0;
}

int zx_walk_so_unknown_elems_and_content(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_str* ss;
  struct zx_any_elem_s* ae;
  int ret;
  
  for (ae = x->any_elem; ae; ae = (struct zx_any_elem_s*)ae->gg.g.n) {  /* unknown elements */
    ret = zx_WALK_SO_simple_elem(c, &ae->gg, ctx, callback);
    if (ret)
      return ret;
  }
  
  for (ss = x->content; ss; ss = (struct zx_str*)ss->g.n) {   /* content */
    ret = callback(&ss->g, ctx);
    if (ret)
      return ret;
  }
  return 0;
}

/* Called by: */
struct zx_elem_s* zx_deep_clone_simple_elems(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs)
{
  struct zx_elem_s* se;
  struct zx_elem_s* sen;
  struct zx_elem_s* senn;
  
  for (senn = 0, se = x; se; se = (struct zx_elem_s*)se->g.n) {
    sen = zx_DEEP_CLONE_simple_elem(c, se, dup_strs);
    if (!senn)
      x = sen;
    else
      senn->g.n = &sen->g;
    senn = sen;
  }
  return x;
}


int zx_walk_so_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  int ret;

  for (; se; se = (struct zx_elem_s*)se->g.n) {
    ret = zx_WALK_SO_simple_elem(c, se, ctx, callback);
    if (ret)
      return ret;
  }
  return 0;
}

/* Called by: */
void zx_dup_strs_simple_elems(struct zx_ctx* c, struct zx_elem_s* se)
{
  for (; se; se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_simple_elem(c, se);
}

#endif

#if 0
/* In ionterest of efficiency, we leave these inlined. */
/* Called by: */
int zx_len_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, int siz)
{
  int len = 0;
  for (; se; se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_so_simple_elem(se, siz);
  return len;
}

/* Called by: */
char* zx_enc_so_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, char* p, char* name, int len)
{
  for (; se; se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_simple_elem(se, p, name, len);
  return p;
}
#endif

/* Called by:  main x2, zxid_find_epr, zxid_get_ses_sso_a7n, zxid_parse_meta, zxid_soap_call_hdr_body, zxid_sp_dispatch, zxid_sp_dispatch_location, zxid_sp_soap_parse */
void zx_prepare_dec_ctx(struct zx_ctx* c, struct zx_ns_s* ns_tab, char* start, char* lim)
{
  c->guard_seen_n.seen_n = &c->guard_seen_p;
  c->guard_seen_p.seen_p = &c->guard_seen_n;
  c->ns_tab = ns_tab;
  c->base = c->p = start;
  c->lim = lim;
}

/* EOF -- zxlib.c */
