/* zx.h  -  Common definitions for zx generated code (encoders, decoders, etc.)
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zx.h,v 1.21 2006/10/01 19:35:50 sampo Exp $
 *
 * 28.5.2006, created --Sampo
 * 7.8.2006,  renamed from dec.h to zx.h and added comments --Sampo
 * 26.8.2006, some refactoring for CSE --Sampo
 * 23.9.2006, mild re-engineering for WO support --Sampo
 *
 * This file is included from various generated grammar files.
 */

#ifndef _zx_h
#define _zx_h

#include <memory.h>
#include <string.h>
#include <stdarg.h>

#define ZXERR_EOF             0x0001  /* return due to EOF condition */
#define ZXERR_MISMATCH_CLOSE  0x0002  /* mismatching close tag */
#define ZXERR_BAD_ATTR_NS     0x0004  /* namespace violation in attribute */
#define ZXERR_BAD_ELEM_NS     0x0008  /* namespace violation in element */
#define ZXERR_MISSING_ATTR    0x0010  /* mandatory attribute(s) missing */
#define ZXERR_EXTRA_ATTR      0x0020  /* unforeseen attribute(s) present */
#define ZXERR_MISSING_ELEM    0x0040  /* mandatory element(s) missing or of wrong cardinality */
#define ZXERR_EXTRA_ELEM      0x0080  /* unforeseen element(s) present */
#define ZXERR_ELEM_ORDER      0x0100  /* ordering of elements violates schema */
#define ZXERR_BAD_NS_PREFIX   0x0200  /* unknown namespace prefix has appeared */
#define ZXERR_TAG_NOT_CLOSED  0x0400  /* open tag seen, but eof seen before close */
#define ZXERR_MASK            0x7fff
#define ZXERR_ATTR_FLAG       0x8000  /* Not an error. Marker to distinguish elements from attributes. */

struct zx_any_elem_s;
struct zx_any_attr_s;

/* Namespace management. The context references this table. The array is
 * terminated by an element with empty URL (url_len == 0). The elements
 * of the array are the official namespace prefixes derived from
 * target() directives in the .sg files. The linked list hanging from
 * n field contains a stack of runtime assigned namespace prefixes.
 * The empty marker element serves as a root for list holding namespace
 * prefixes of namespaces not understood by the system. */

struct zx_ns_s {
  struct zx_ns_s* n;        /* For holding runtime equivalences as a linked list. */
  struct zx_ns_s* m;        /* For an equivalence, pointer to the master entry. */
  struct zx_ns_s* seen;     /* Pointer to other "seen" namespaces with same prefix (stack) */
  struct zx_ns_s* seen_n;   /* Next prefix in seen structure (list) */
  struct zx_ns_s* seen_p;   /* Next prefix in seen structure (list) */
  struct zx_ns_s* seen_pop; /* Pop list for seen stack (used in end of element). */
  int prefix_len;
  char* prefix;
  int url_len;  /* 0 = end of list */
  char* url;
};

/* Context tracks the input and namespaces. It is also passed to memory allocator. */

struct zx_ctx {
  char* base;
  char* p;     /* Current scan pointer */
  char* lim;
  struct zx_ns_s* ns_tab;
  /* Namespace prefixes that have been "seen", each prefix is a stack.
   * We keep these prefixes in a doubly linked list so we can add and
   * remove in the middle. */
  struct zx_ns_s guard_seen_n;
  struct zx_ns_s guard_seen_p;
  void* exclude_sig;  /* If nonnull, causes specified signature to be excluded. */
};

/* We arrange all structs to start with a common header. */

struct zx_node_s {
  struct zx_node_s* n;    /* next pointer for compile time construction of data structures */
  struct zx_node_s* wo;   /* next pointer for canonicalization order (wire order) */
  struct zx_ns_s* ns;     /* namespace of an element or attribute */
  short tok;              /* token number of the tag represented by this struct */
  short err;              /* error mask */
};

#define ZX_NEXT(x) ((void*)((struct zx_node_s*)(x))->n)

/* Simple elements, base type for complex elements. */

struct zx_elem_s {
  struct zx_node_s g;              /* Common fields for all nodes */
  struct zx_elem_s* kids;          /* root of wo list representing child elements */
  struct zx_any_attr_s* any_attr;  /* list of attributes not understood by parser */
  struct zx_any_elem_s* any_elem;  /* list of elements not understood by parser */
  struct zx_str* xmlns;            /* xmlns attributes, if any */
  struct zx_str* content;          /* non-element content, if any */
};

struct zx_elem_s* zx_new_simple_elem(struct zx_ctx* c, struct zx_str* ss);
struct zx_elem_s* zx_ref_len_simple_elem(struct zx_ctx* c, int len, char* s);
struct zx_elem_s* zx_ref_simple_elem(struct zx_ctx* c, char* s);
struct zx_elem_s* zx_dup_len_simple_elem(struct zx_ctx* c, int len, char* s);
struct zx_elem_s* zx_dup_simple_elem(struct zx_ctx* c, char* s);

/* All attributes are represented as a string, as follows. */

struct zx_str {
  struct zx_node_s g;
  int len;
  char* s;
};

struct zx_str* zx_ref_str(struct zx_ctx* c, char* s);  /* ref points to underlying data */
struct zx_str* zx_ref_len_str(struct zx_ctx* c, int len, char* s);
struct zx_str* zx_dup_str(struct zx_ctx* c, char* s);  /* data is new memory */
struct zx_str* zx_dup_len_str(struct zx_ctx* c, int len, char* s);
struct zx_str* zx_strf(struct zx_ctx* c, char* f, ...);  /* data is new memory */
void zx_str_free(struct zx_ctx* c, struct zx_str* ss);
char* zx_str_to_c(struct zx_ctx* c, struct zx_str* ss);
void zx_str_conv(struct zx_str* ss, int* out_len, char** out_s);  /* SWIG typemap friendly */
int zx_str_ends_in(struct zx_str* ss, int len, char* suffix);
#define ZX_STR_ENDS_IN_CONST(ss, suffix) zx_str_ends_in((ss), sizeof(suffix)-1, (suffix))

/* Elements that are unforeseen (errornous or extensions). */

struct zx_any_elem_s {
  struct zx_elem_s gg;
  int name_len;
  char* name;
};

#define ZX_ANY_EL(x) ((struct zx_any_elem_s*)(x))

/* Attributes that are unforeseen (errornous or extensions). */

struct zx_any_attr_s {
  struct zx_str ss;
  int name_len;
  char* name;
};

#define ZX_ANY_AT(x) ((struct zx_any_attr_s*)(x))

#define ZX_ELEM_EXT struct zx_elem_s gg;

void* zx_alloc(struct zx_ctx* c, int size);
void* zx_zalloc(struct zx_ctx* c, int size);
void* zx_free(struct zx_ctx* c, void* p);
#define ZX_ALLOC(c, size) zx_zalloc((c), (size))
#define ZX_ZALLOC(c, typ) ((typ*)zx_zalloc((c), sizeof(typ)))
#define ZX_DUPALLOC(c, typ, n, o) (n) = (typ*)zx_alloc((c), sizeof(typ)); memcpy((n), (o), sizeof(typ))
#define ZX_FREE(c, p) zx_free((c), (p))

/* N.B. All string scanning assumes buffer is terminated with C string style nul byte. */
#define ZX_SKIP_WS_P(c,p,x) MB for (; ONE_OF_4(*(p), ' ', '\n', '\r', '\t'); ++(p)) ; if (!*(p)) return x; ME
#define ZX_LOOK_FOR_P(c,ch,p,x) MB (p) = memchr((p), (ch), (c)->lim - (p)); if (!(p)) return x; ME
#define ZX_SKIP_WS(c,x)       ZX_SKIP_WS_P((c),(c)->p,x)
#define ZX_LOOK_FOR(c,ch,x)   ZX_LOOK_FOR_P((c),(ch),(c)->p,x)

#define ZX_OUT_CH(p, ch)        (*((p)++) = (ch))
#define ZX_OUT_MEM(p, mem, len) MB memcpy((p), (mem), (len)); (p) += (len); ME
#define ZX_OUT_STR(p, str) ZX_OUT_MEM(p, ((struct zx_str*)(x))->s, ((struct zx_str*)(x))->len)

#define ZX_OUT_TAG(p, tag) ZX_OUT_MEM(p, tag, sizeof(tag)-1)
#define ZX_OUT_SIMPLE_TAG(p, tag, len) MB ZX_OUT_CH(p, '<'); ZX_OUT_MEM(p, tag, len); ME
#define ZX_OUT_CLOSE_TAG(p, tag) ZX_OUT_MEM(p, tag, sizeof(tag)-1)
#define ZX_OUT_SIMPLE_CLOSE_TAG(p, tag, len) MB ZX_OUT_CH(p, '<'); ZX_OUT_CH(p, '/'); ZX_OUT_MEM(p, tag, len); ZX_OUT_CH(p, '>'); ME

/* Special token values. */
#define ZX_TOK_XMLNS     (-3)
#define ZX_TOK_DATA      (-2)
#define ZX_TOK_NOT_FOUND (-1)
struct zx_tok { const char* name; const char* prefix; struct zx_ns_s* ns; };

/*struct zx_note_s* zx_clone_any(struct zx_ctx* c, struct zx_note_s* n, int dup_strs); TBD */
/*void zx_free_any(struct zx_ctx* c, struct zx_note_s* n, int free_strs); TBD */

void zx_fix_any_elem_dec(struct zx_ctx* c, struct zx_any_elem_s* x, char* nam, int namlen);
struct zx_ns_s* zx_locate_ns_by_prefix(struct zx_ctx* c, int len, char* prefix);
int zx_is_ns_prefix(struct zx_ns_s* ns, int len, char* prefix);
struct zx_ns_s* zx_prefix_seen(struct zx_ctx* c, int len, char* prefix);
struct zx_ns_s* zx_prefix_seen_whine(struct zx_ctx* c, int len, char* prefix, char* logkey);
struct zx_ns_s* zx_scan_xmlns(struct zx_ctx* c);
void zx_pop_seen(struct zx_ns_s* ns);

/* Common Subexpression Elimination (CSE) for generated code. */

const struct zx_tok* zx_tok_by_ns(const struct zx_tok* zt, const struct zx_tok* lim,
				  int len, char* name, struct zx_ns_s* ns);
int zx_len_xmlns_if_not_seen(struct zx_ctx* c, struct zx_ns_s* ns, struct zx_ns_s** pop_seen);
char* zx_enc_xmlns_if_not_seen(struct zx_ctx* c, char* p, struct zx_ns_s* ns, struct zx_ns_s** pop_seen);
void zx_add_xmlns_if_not_seen(struct zx_ctx* c, struct zx_ns_s* ns, struct zx_ns_s** pop_seen);
char* zx_enc_seen(char* p, struct zx_ns_s* ns);
int zx_len_so_common(struct zx_ctx* c, struct zx_elem_s* x);
int zx_len_wo_common(struct zx_ctx* c, struct zx_elem_s* x);
char* zx_enc_unknown_attrs(char* p, struct zx_any_attr_s* aa);
char* zx_enc_so_unknown_elems_and_content(struct zx_ctx* c, char* p, struct zx_elem_s* x);
struct zx_str* zx_easy_enc_common(struct zx_ctx* c, char* p, char* buf, int len);
int zx_attr_so_len(struct zx_str* attr, int name_size);
char* zx_attr_so_enc(char* p, struct zx_str* attr, char* name, int name_len);
int zx_attr_wo_len(struct zx_str* attr, int name_size);
char* zx_attr_wo_enc(char* p, struct zx_str* attr, char* name, int name_len);
void zx_dup_attr(struct zx_ctx* c, struct zx_str* attr);
void zx_free_attr(struct zx_ctx* c, struct zx_str* attr, int free_strs);
struct zx_str* zx_clone_attr(struct zx_ctx* c, struct zx_str* attr);
void zx_free_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int free_strs);
struct zx_elem_s* zx_clone_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int size, int dup_strs);
void zx_dup_strs_common(struct zx_ctx* c, struct zx_elem_s* x);
int zx_walk_so_unknown_attributes(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_walk_so_unknown_elems_and_content(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
struct zx_elem_s* zx_deep_clone_simple_elems(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs);
int zx_walk_so_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
void zx_free_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, int free_strs);
void zx_dup_strs_simple_elems(struct zx_ctx* c, struct zx_elem_s* se);

void zx_prepare_dec_ctx(struct zx_ctx* c, struct zx_ns_s* ns_tab, char* start, char* lim);

#endif
