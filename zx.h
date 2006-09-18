/* zx.h  -  Common definitions for zx generated code (encoders, decoders, etc.)
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zx.h,v 1.13 2006/09/16 20:00:36 sampo Exp $
 *
 * 28.5.2006, created --Sampo
 * 7.8.2006,  renamed from dec.h to zx.h and added comments --Sampo
 * 26.8.2006, some refactoring for CSE --Sampo
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

struct zx_any_elem_s;
struct zx_any_attr_s;

/* Context tracks the input and namespaces. It is also passed to memory allocator. */

struct zx_ctx {
  char* base;
  char* p;     /* Current scan pointer */
  char* lim;
  struct zx_ns_s* ns_tab;
};

/* Namespace management. The contxt references this table. The array is
 * terminated by an element with empty URL (url_len == 0). The elements
 * of the array are the official namespace prefixes derived from
 * target() directives in the .sg files. The linked list hanging from
 * n field contains a stack of runtime assigned namespace prefixes.
 * The empty marker element serves as a root for list holding namespace
 * prefixes of namespaces not understood by the system. */

struct zx_ns_s {
  struct zx_ns_s* n;   /* For holding runtime equivalences as a linked list stack. */
  int prefix_len;
  char* prefix;
  int url_len;  /* 0 = end of list */
  char* url;
};

/* We arrange all structs to start with a common header. */

struct zx_node_s {
  struct zx_node_s* n;  /* next pointer for compile time construction of data structures */
  struct zx_node_s* wo; /* next pointer for canonicalization order (wire order) */
  struct zx_ns_s* ns;   /* namespace of an element or attribute */
  short tok;            /* token number of the tag represented by this struct */
  short err;            /* error mask */
  char* span_start;     /* The span of input that the element covers */
  char* span_end;
};

#define ZX_NEXT(x) ((void*)((struct zx_node_s*)(x))->n)

/* Simple elements, base type for complex elements. */

struct zx_elem_s {
  struct zx_node_s g;   /* Common fields for all nodes */
  struct zx_any_attr_s* any_attr;  /* list of attributes not understood by parser */
  struct zx_any_elem_s* any_elem;  /* list of elements not understood by parser */
  struct zx_str_s* xmlns;          /* xmlns attributes, if any */
  struct zx_str_s* content;        /* non-element content, if any */
};

struct zx_elem_s* zx_new_simple_elem(struct zx_ctx* c, struct zx_str_s* ss);
struct zx_elem_s* zx_ref_len_simple_elem(struct zx_ctx* c, int len, char* s);
struct zx_elem_s* zx_ref_simple_elem(struct zx_ctx* c, char* s);
struct zx_elem_s* zx_dup_len_simple_elem(struct zx_ctx* c, int len, char* s);
struct zx_elem_s* zx_dup_simple_elem(struct zx_ctx* c, char* s);

/* All attributes are represented as a string, as follows. */

struct zx_str_s {
  struct zx_node_s g;
  int len;
  char* s;
};

struct zx_str_s* zx_ref_str(struct zx_ctx* c, char* s);  /* ref points to underlying data */
struct zx_str_s* zx_ref_len_str(struct zx_ctx* c, int len, char* s);
struct zx_str_s* zx_dup_str(struct zx_ctx* c, char* s);  /* data is new memory */
struct zx_str_s* zx_dup_len_str(struct zx_ctx* c, int len, char* s);
struct zx_str_s* zx_strf(struct zx_ctx* c, char* f, ...);  /* data is new memory */
void zx_str_free(struct zx_ctx* c, struct zx_str_s* ss);
char* zx_str_to_c(struct zx_ctx* c, struct zx_str_s* ss);
void zx_str_conv(struct zx_str_s* ss, int* out_len, char** out_s);  /* SWIG typemap friendly */

/* Elements that are unforeseen (errornous or extensions). */

struct zx_any_elem_s {
  struct zx_elem_s gg;
  int name_len;
  char* name;
};

/* Attributes that are unforeseen (errornous or extensions). */

struct zx_any_attr_s {
  struct zx_str_s ss;
  int name_len;
  char* name;
};

#define ZX_ELEM_EXT struct zx_elem_s gg;

char* zx_alloc(struct zx_ctx* c, int size);
char* zx_zalloc(struct zx_ctx* c, int size);
char* zx_free(struct zx_ctx* c, void* p);
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

#define ZX_TOK_XMLNS (-3)
#define ZX_TOK_DATA (-2)
#define ZX_TOK_NOT_FOUND (-1)
struct zx_tok { const char* name; const char* prefix; struct zx_ns_s* ns; };

/*struct zx_note_s* zx_clone_any(struct zx_ctx* c, struct zx_note_s* n, int dup_strs); TBD */
/*void zx_free_any(struct zx_ctx* c, struct zx_note_s* n, int free_strs); TBD */

void zx_fix_any_elem_dec(struct zx_ctx* c, struct zx_any_elem_s* x, char* nam, int namlen);
struct zx_ns_s* zx_locate_ns_by_prefix(struct zx_ctx* c, int len, char* prefix);
struct zx_ns_s* zx_locate_ns_by_url(struct zx_ctx* c, int len, char* url);
int zx_is_ns_prefix(struct zx_ns_s* ns, int len, char* prefix);
void zx_xmlns_decl(struct zx_ctx* c, int prefix_len, char* prefix, int url_len, char* url);
struct zx_ns_s* zx_scan_xmlns(struct zx_ctx* c);

/* Common Subexpression Elimination (CSE) for generated code. */

int zx_len_common(struct zx_elem_s* x);
char* zx_enc_so_unknown_attrs(char* p, struct zx_any_attr_s* aa);
char* zx_enc_so_unknown_elems_and_content(char* p, struct zx_elem_s* x);
struct zx_str_s* zx_easy_enc_common(struct zx_ctx* c, char* p, char* buf, int len);
int zx_attr_len(struct zx_str_s* attr, int name_size);
char* zx_attr_enc(char* p, struct zx_str_s* attr, char* name, int name_len);
void zx_dup_attr(struct zx_ctx* c, struct zx_str_s* attr);
void zx_free_attr(struct zx_ctx* c, struct zx_str_s* attr, int free_strs);
struct zx_str_s* zx_clone_attr(struct zx_ctx* c, struct zx_str_s* attr);
void zx_free_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int free_strs);
struct zx_elem_s* zx_clone_elem_common(struct zx_ctx* c, struct zx_elem_s* x, int size, int dup_strs);
void zx_dup_strs_common(struct zx_ctx* c, struct zx_elem_s* x);
int zx_walk_so_unknown_attributes(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_walk_so_unknown_elems_and_content(struct zx_ctx* c, struct zx_elem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
struct zx_elem_s* zx_deep_clone_simple_elems(struct zx_ctx* c, struct zx_elem_s* x, int dup_strs);
int zx_walk_so_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
void zx_free_simple_elems(struct zx_ctx* c, struct zx_elem_s* se, int free_strs);
void zx_dup_strs_simple_elems(struct zx_ctx* c, struct zx_elem_s* se);

#endif
