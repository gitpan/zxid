/* zxlog.c  -  Liberty oriented logging facility with log signing and encryption
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxlog.c,v 1.16 2007-10-14 03:34:27 sampo Exp $
 *
 * 18.11.2006, created --Sampo
 * 10.10.2007, added ipport --Sampo
 *
 * See also: Logging chapter in README.zxid
 */

#include <signal.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifdef USE_OPENSSL
#include <openssl/x509.h>
#include <openssl/rsa.h>
#include <openssl/evp.h>
#include <openssl/aes.h>
#endif

#ifdef USE_CURL
#include <curl/curl.h>
#endif

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

#define ZXID_LOG_DIR "log/"
#define ZXLOG_TIME_FMT "%04d%02d%02d-%02d%02d%02d.%03ld"
#define ZXLOG_TIME_ARG(t,usec) t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, \
                               t.tm_hour, t.tm_min, t.tm_sec, usec/1000

/* Called by:  zxlog_write_line x3 */
static char* zxlog_alloc_zbuf(struct zxid_conf* cf, int *zlen, char* zbuf, int len, char* sig, int nonce)
{
  char* p;
  p = ZX_ALLOC(cf->ctx, nonce + 2 + len + *zlen);
  if (nonce)
    zx_rand(p, nonce);
  p[nonce] = (len >> 8) & 0xff;
  p[nonce+1] = len & 0xff;
  if (len) {
    memcpy(p+nonce+2, sig, len);
    ZX_FREE(cf->ctx, sig);
  }
  memcpy(p+nonce+2+len, zbuf, *zlen);
  ZX_FREE(cf->ctx, zbuf);
  *zlen += nonce + 2 + len;
  return p;
}

/* Called by:  test_mode x12, zxlog x2 */
void zxlog_write_line(struct zxid_conf* cf, char* c_path, int encflags, int n, char* logbuf)
{
  struct rsa_st* rsa_pkey;
  struct aes_key_st aes_key;
  int len = 0, blen, zlen;
  char sigletter = 'P';
  char encletter = 'P';
  char* p;
  char* sig = 0;
  char* zbuf;
  char* b64;
  char sigbuf[28+4];   /* Space for "SP " and sha1 */
  char keybuf[16];
  char ivec[16];
  if (n == -2)
    n = strlen(logbuf);
  if (encflags & 0x70) {          /* Encrypt check */
    zbuf = zx_zlib_raw_deflate(cf->ctx, n-1, logbuf, &zlen);
    switch (encflags & 0x06) {     /* Sign check */
    case 0x02:      /* Sx plain sha1 */
      sigletter = 'S';
      sig = ZX_ALLOC(cf->ctx, 20);
      SHA1(zbuf, zlen, sig);
      len = 20;
      break;
    case 0x04:      /* Rx RSA-SHA1 signature */
      sigletter = 'R';
      if (!cf->log_sign_pkey)
	cf->log_sign_pkey = zxid_read_private_key(cf, "logsign-nopw-cert.pem");
      len = zxsig_data_rsa_sha1(cf->ctx, zlen, zbuf, &sig, cf->log_sign_pkey, "enc log line");
      break;
    case 0x06:      /* Dx DSA-SHA1 signature */
      ERR("DSA-SHA1 sig not implemented in encrypted mode. Use RSA-SHA1 or none. %x", encflags);
      break;
    case 0: break;  /* Px no signing */
    }
    
    switch (encflags & 0x70) {
    case 0x10:  /* xZ RFC1951 zip + safe base64 */
      encletter = 'Z';
      zbuf = zxlog_alloc_zbuf(cf, &zlen, zbuf, len, sig, 0);
      break;
    case 0x20:  /* xA RSA-AES */
      encletter = 'A';
      zbuf = zxlog_alloc_zbuf(cf, &zlen, zbuf, len, sig, 16);
      zx_rand(keybuf, 16);
      AES_set_encrypt_key(keybuf, 128, &aes_key);
      memcpy(ivec, zbuf, sizeof(ivec));
      AES_cbc_encrypt(zbuf+16, zbuf+16, zlen-16, &aes_key, ivec, 1);

      if (!cf->log_enc_cert)
	cf->log_enc_cert = zxid_read_cert(cf, "logenc-nopw-cert.pem");
      rsa_pkey = zx_get_rsa_pub_from_cert(cf->log_enc_cert, "log_enc_cert");
      
      len = RSA_size(rsa_pkey);
      sig = ZX_ALLOC(cf->ctx, len);
      if (RSA_public_encrypt(16, keybuf, sig, rsa_pkey, RSA_PKCS1_OAEP_PADDING) < 0) {
	ERR("RSA enc fail %x", encflags);
	zx_report_openssl_error("zxlog rsa enc");
	return;
      }
      p = ZX_ALLOC(cf->ctx, 2 + len + zlen);
      p[0] = (len >> 8) & 0xff;
      p[1] = len & 0xff;
      memcpy(p+2, sig, len);
      memcpy(p+2+len, zbuf, zlen);
      ZX_FREE(cf->ctx, sig);
      ZX_FREE(cf->ctx, zbuf);
      zbuf = p;
      zlen += 2 + len;
      break;
    case 0x30:  /* xT RSA-3DES */
      encletter = 'T';
      ERR("Enc not implemented %x", encflags);
      break;
    case 0x40:  /* xB AES */
      encletter = 'B';
      zbuf = zxlog_alloc_zbuf(cf, &zlen, zbuf, len, sig, 16);
      if (!cf->log_symkey[0])
	zxid_sha1_file(cf, "logenc.key", cf->log_symkey);
      AES_set_encrypt_key(cf->log_symkey, 128, &aes_key);
      memcpy(ivec, zbuf, sizeof(ivec));
      AES_cbc_encrypt(zbuf+16, zbuf+16, zlen-16, &aes_key, ivec, 1);
      break;
    case 0x50:  /* xU 3DES */
      encletter = 'U';
      ERR("Enc not implemented %x", encflags);
      break;
    default:
      ERR("Enc not implemented %x", encflags);
      break;
    }

    blen = SIMPLE_BASE64_LEN(zlen) + 3 + 1;
    b64 = ZX_ALLOC(cf->ctx, blen);
    b64[0] = sigletter;
    b64[1] = encletter;
    b64[2] = ' ';
    p = base64_fancy_raw(zbuf, zlen, b64+3, safe_basis_64, 1<<31, 0, 0, '.');
    blen = p-b64 + 1;
    *p = '\n';
    write2_or_append_lock_c_path(c_path, 0, 0, blen, b64, "zxlog enc", SEEK_END, O_APPEND);
    return;
  }

  switch (encflags & 0x06) {
  case 0x02:   /* SP plain sha1 */
    strcpy(sigbuf, "SP ");
    sha1_safe_base64(sigbuf+3, n-1, logbuf);
    sigbuf[3+27] = ' ';
    len = 3+27+1;
    p = sigbuf;
    break;
  case 0x04:   /* RP RSA-SHA1 signature */
    if (!cf->log_sign_pkey)
      cf->log_sign_pkey = zxid_read_private_key(cf, "logsign-nopw-cert.pem");
    zlen = zxsig_data_rsa_sha1(cf->ctx, n-1, logbuf, &zbuf, cf->log_sign_pkey, "log line");
    len = SIMPLE_BASE64_LEN(zlen) + 4;
    sig = ZX_ALLOC(cf->ctx, len);
    strcpy(sig, "RP ");
    p = base64_fancy_raw(zbuf, zlen, sig+3, safe_basis_64, 1<<31, 0, 0, '.');
    len = p-sig + 1;
    *p = ' ';
    p = sig;
    break;
  case 0x06:   /* DP DSA-SHA1 signature */
    ERR("DSA-SHA1 signature not implemented %x", encflags);
    break;
  case 0:      /* Plain logging, no signing, no encryption. */
    len = 5;
    p = "PP - ";
    break;
  }
  write2_or_append_lock_c_path(c_path, len, p, n, logbuf, "zxlog sig", SEEK_END, O_APPEND);
  if (sig)
    ZX_FREE(cf->ctx, sig);
}

/* Log to activity and/or error log depending on res and configuration settings. */

/* Called by:  zxid_sp_sso_finalize x2 */
int zxlog(struct zxid_conf* cf,
	  struct timeval* ourts,
	  struct timeval* srcts,
	  char* ipport,
	  struct zx_str* entid,
	  struct zx_str* msgid,
	  struct zx_str* a7nid,
	  struct zx_str* nid,
	  char* sigval,
	  char* res,
	  char* op,
	  char* arg,
	  char* fmt, ...)
{
  int n;
  char* p;
  char sha1_name[28];
  char logbuf[1024];
  char c_path[ZXID_MAX_BUF];
  struct tm ot;
  struct tm st;
  struct timeval ourtsdefault;
  struct timeval srctsdefault;
  va_list ap;
  va_start(ap, fmt);
  
  /* Precheck to avoid computation if logging is hopeless. */
  
  if (!((cf->log_err_in_act || res[0] == 'K') && cf->log_act)
      && !(cf->log_err && res[0] != 'K')) {
    return 0;
  }
  
  /* Prepare values */

  if (!ourts) {
    ourts = &ourtsdefault;
    GETTIMEOFDAY(ourts, 0);
  }
  if (!srcts) {
    srcts = &srctsdefault;
    srctsdefault.tv_sec = 0;
    srctsdefault.tv_usec = 501000;
  }
  GMTIME_R(ourts->tv_sec, ot);
  GMTIME_R(srcts->tv_sec, st);
  
  if (entid && entid->len && entid->s) {
    sha1_safe_base64(sha1_name, entid->len, entid->s);
    sha1_name[27] = 0;
  } else {
    sha1_name[0] = '-';
    sha1_name[1] = 0;
  }
  
  if (!ipport) {
    ipport = cf->ipport;
    if (!ipport)
      ipport = "-:-";
  }
  
  /* Format */
  
  n = snprintf(logbuf, sizeof(logbuf)-3, ZXLOG_TIME_FMT " " ZXLOG_TIME_FMT
	       " %s %s %.*s %.*s %.*s %s %s %s %s ",
	       ZXLOG_TIME_ARG(ot, ourts->tv_usec), ZXLOG_TIME_ARG(st, srcts->tv_usec),
	       ipport, sha1_name,
	       msgid?msgid->len:1, msgid?msgid->s:"-",
	       a7nid?a7nid->len:1, a7nid?a7nid->s:"-",
	       nid?nid->len:1,     nid?nid->s:"-",
	       sigval, res, op, arg?arg:"-");
  if (n <= 0 || n >= sizeof(logbuf)-3) {
    if (n < 0) {
      perror("snprintf");
      D("Broken snprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", n);
    }
    D("Log buffer too short: %d chars needed", n);
    if (n <= 0)
      n = 0;
    else
      n = sizeof(logbuf)-3;
  } else { /* Space left: try printing the format string as well! */
    p = logbuf+n;
    if (fmt && fmt[0]) {
      n = vsnprintf(p, sizeof(logbuf)-n-2, fmt?fmt:"-", ap);
      if (n <= 0 || n >= sizeof(logbuf)-(p-logbuf)-2) {
	if (n < 0) {
	  perror("vsnprintf");
	  D("Broken vsnprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", n);
	}
	D("Log buffer truncated during format print: %d chars needed", n);
	if (n <= 0)
	  n = p-logbuf;
	else
	  n = sizeof(logbuf)-(p-logbuf)-2;
      } else
	n += p-logbuf;
    } else {
      logbuf[n++] = '-';
    }
  }
  logbuf[n++] = '\n';
  logbuf[sizeof(logbuf)-1] = 0;
  
  va_end(ap);
  
  /* Output stage */
  
  if ((cf->log_err_in_act || res[0] == 'K') && cf->log_act) {
    name_from_path(c_path, sizeof(c_path), "%s" ZXID_LOG_DIR "act", cf->path);
    zxlog_write_line(cf, c_path, cf->log_act, n, logbuf);
  }
  if (cf->log_err && res[0] != 'K') {
    name_from_path(c_path, sizeof(c_path), "%s" ZXID_LOG_DIR "err", cf->path);
    zxlog_write_line(cf, c_path, cf->log_err, n, logbuf);
  }
  return 0;
}

/* Log assertion depending on settings. Returns 0 if all ok. Returns 1 if
 * duplicate detected. */

/* Compute path for logging. */

/* Called by:  zxid_sp_sso_finalize */
struct zx_str* zxlog_path(struct zxid_conf* cf,
			  struct zx_str* entid,  /* issuer or target entity ID */
			  struct zx_str* objid,  /* AssertionID or MessageID */
			  char* dir,             /* rely/ or issue/ */
			  char* kind,            /* /a7n/ or /msg/ */
			  int create_dirs)
{
  struct stat st;
  int dir_len = strlen(dir);
  int kind_len = strlen(kind);
  int len = cf->path_len + sizeof("log/")-1 + dir_len + 27 + kind_len + 27;
  char* s = ZX_ALLOC(cf->ctx, len+1);
  char* p;
  memcpy(s, cf->path, cf->path_len);
  p = s + cf->path_len;
  memcpy(p, "log/", sizeof("log/"));
  p += sizeof("log/")-1;
  if (stat(s, &st)) {
    ERR("zxid log directory missing path(%s): giving up (%d %s)", s, errno, STRERROR(errno));
    ZX_FREE(cf->ctx, s);
    return 0;
  }
  
  memcpy(p, dir, dir_len+1);
  p += dir_len;
  if (stat(s, &st)) {
    if (create_dirs) {
      if (MKDIR(s, 0777)) {
	ERR("mkdir path(%s) failed: %d %s", s, errno, STRERROR(errno));
	ZX_FREE(cf->ctx, s);
	return 0;	
      }
    } else {
      ERR("directory missing path(%s) and no create_dirs (%d %s)", s, errno, STRERROR(errno));
      ZX_FREE(cf->ctx, s);
      return 0;
    }
  }
  
  sha1_safe_base64(p, entid->len, entid->s);
  p[27] = 0;
  p+=27;
  if (stat(s, &st)) {
    if (create_dirs) {
      if (MKDIR(s, 0777)) {
	ERR("mkdir path(%s) failed: %d %s", s, errno, STRERROR(errno));
	ZX_FREE(cf->ctx, s);
	return 0;	
      }
    } else {
      ERR("directory missing path(%s) and no create_dirs (%d %s)", s, errno, STRERROR(errno));
      ZX_FREE(cf->ctx, s);
      return 0;
    }
  }
  
  memcpy(p, kind, kind_len+1);
  p += kind_len;
  if (stat(s, &st)) {
    if (create_dirs) {
      if (MKDIR(s, 0777)) {
	ERR("mkdir path(%s) failed: %d %s", s, errno, STRERROR(errno));
	ZX_FREE(cf->ctx, s);
	return 0;	
      }
    } else {
      ERR("zxid directory missing path(%s) and no create_dirs (%d %s)", s, errno, STRERROR(errno));
      ZX_FREE(cf->ctx, s);
      return 0;
    }
  }
  
  sha1_safe_base64(p, objid->len, objid->s);
  p[27] = 0;
  p+=27;
  return zx_ref_len_str(cf->ctx, len, s);
}

/* Since each uniquely ID'd object has unique path, mere existence of a file
 * serves as duplicate ID check. */

/* Called by:  zxid_sp_sso_finalize */
int zxlog_dup_check(struct zxid_conf* cf, struct zx_str* path, char* logkey)
{
  struct stat st;
  /* We need a c path, but get zx_str. However, the zx_str will come from zxlog_path()
   * so we should be having the nul termination as needed. Just checking. */
  ASSERTOP(path->s[path->len], ==, 0);
  if (!stat(path->s, &st)) {
    ERR("Duplicate %s path(%.*s)", logkey, path->len, path->s);
    return 1;
  }
  return 0;
}

/* Write a blob of content to log file according to logflag (see zxidconf.h). If
 * the file already exists, i.e. there is a duplicate, the data is simply appended. */

/* Called by:  zxid_sp_sso_finalize */
int zxlog_blob(struct zxid_conf* cf, int logflag, struct zx_str* path, struct zx_str* blob)
{
  if (!logflag)
    return 0;
  if (logflag != 1) {
    ERR("Unimplemented blob logging format: %x", logflag);
    return 0;
  }
  
  /* We need a c path, but get zx_str. However, the zx_str will come from zxlog_path()
   * so we should be having the nul termination as needed. Just checking. */
  ASSERTOP(path->s[path->len], ==, 0);
  write2_or_append_lock_c_path(path->s, blob->len, blob->s, 0, 0, "zxlog blob", SEEK_END,O_APPEND);
  return 1;
}

/* EOF  --  zxlog.c */
