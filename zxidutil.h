/* zxidutil.h  -  (Private) Utility API functions
 * Copyright (c) 2009-2011 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * Copyright (c) 2006-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxid.h,v 1.94 2010-01-08 02:10:09 sampo Exp $
 *
 * 12.8.2006,  created --Sampo
 * 31.5.2010,  eliminated many include dependencies from the public API --Sampo
 * 13.11.2010, added ZXID_DECL for benefit of the Windows port --Sampo
 * 12.12.2010, separate zxidpriv.h and zxidutil.h from zxid.h --Sampo
 * 10.1.2011,  added TrustPDP support --Sampo
 */

#ifndef _zxidutil_h
#define _zxidutil_h

#include <memory.h>
#include <string.h>
#include <zx/zx.h>

/* ZXID_DECL allows all API functions to be qualified with a declatation, such
 * as relating to the calling convention (e.g. c-decl). Such qualification
 * is very important in the Windows environment. In such environment ZXID_DECL
 * will be defined in Makefile to cause the desired effect. */

#ifndef ZXID_DECL
#define ZXID_DECL
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* zxidsso - trivial mapping functions */

ZXID_DECL int zxid_protocol_binding_map_saml2(struct zx_str* b);
ZXID_DECL const char* zxid_saml2_map_nid_fmt(const char* f);
ZXID_DECL const char* zxid_saml2_map_protocol_binding(const char* b);
ZXID_DECL char* zxid_saml2_map_authn_ctx(char* c);
ZXID_DECL void zxid_sigres_map(int sigres, char** sigval, char** sigmsg);
ZXID_DECL int zxid_map_sec_mech(zxid_epr* epr);

/* zxlog */

/* zxlog(cf, ourts, srcts, ipport4, entid, msgid6, a7nid, nid8, sigval, res, op, arg, fmt, ...); */

ZXID_DECL struct zx_str* zxlog_path(zxid_conf* cf, struct zx_str* entid, struct zx_str* objid, const char* dir, const char* kind, int create_dirs);

/* zxidepr */

ZXID_DECL int zxid_nice_sha1(zxid_conf* cf, char* buf, int buf_len, struct zx_str* name, struct zx_str* contint, int ign_prefix);
ZXID_DECL void zxid_fold_svc(char* path, int len);
ZXID_DECL int zxid_epr_path(zxid_conf* cf, char* dir, char* sid, char* buf, int buf_len, struct zx_str* svc, struct zx_str* cont);

ZXID_DECL int zxid_call_trustpdp(zxid_conf* cf, zxid_cgi* cgi, zxid_ses* ses, struct zxid_map* pepmap, const char* start, const char* lim, zxid_epr* epr);

/* zxutil */

ZXID_DECL char* base64_fancy_raw(const char* p, int len, char* r, const char* basis_64, int line_len, int eol_len, const char* eol, char eq_pad);
ZXID_DECL char* unbase64_raw(const char* p, const char* lim, char* r, const unsigned char* index_64);
ZXID_DECL char* zx_zlib_raw_deflate(struct zx_ctx* c, int in_len, const char* in, int* out_len);  /* gzip */
ZXID_DECL char* zx_zlib_raw_inflate(struct zx_ctx* c, int in_len, const char* in, int* out_len);  /* gunzip */
ZXID_DECL int   zx_url_encode_len(int in_len, const char* in);
ZXID_DECL char* zx_url_encode_raw(int in_len, const char* in, char* out);
ZXID_DECL char* zx_hexdec(char* dst, char* src, int src_len, const unsigned char* trans);

ZXID_DECL int get_file_size(fdtype fd);
ZXID_DECL char* read_all_alloc(struct zx_ctx* c, const char* logkey, int reperr, int* lenp, const char* name_fmt, ...);
ZXID_DECL int read_all(int maxlen, char* buf, const char* logkey, int reperr, const char* name_fmt, ...);
ZXID_DECL int name_from_path(char* buf, int buf_len, const char* name_fmt, ...);
ZXID_DECL fdtype open_fd_from_path(int flags, int mode, const char* logkey, int reperr, const char* name_fmt, ...);
ZXID_DECL int read_all_fd(fdtype fd, char* p, int want, int* got_all);
ZXID_DECL int write_all_fd(fdtype fd, const char* p, int pending);
ZXID_DECL int write_all_path_fmt(const char* logkey, int len, char* buf, const char* path_fmt, const char* prepath, const char* postpath, const char* data_fmt, ...);
ZXID_DECL int copy_file(const char* from, const char* to, const char* logkey, int may_link);
ZXID_DECL int close_file(fdtype fd, const char* logkey);

struct zxid_curl_ctx {
  char* p;
  char* buf;
  char* lim;
};

ZXID_DECL size_t zxid_curl_write_data(void* buffer, size_t size, size_t nmemb, void* userp);
ZXID_DECL size_t zxid_curl_read_data(void* buffer, size_t size, size_t nmemb, void* userp);

#include <zx/zxidnoswig.h>

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _zxidutil_h */
