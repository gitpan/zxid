/* zxutil.c  -  Utility functions
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxutil.c,v 1.10 2006/09/01 05:36:32 sampo Exp $
 *
 * 15.4.2006, created over Easter holiday --Sampo
 */

#include "errmac.h"

#include <pthread.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <openssl/sha.h>
#include <zlib.h>

#include "zx.h"
#include "zxidconf.h"

#if !defined(DSSTDIO) && !defined(MINGW)
/* *** Static initialization of struct flock is suspect since man fcntl() documentation
 * does not guarantee ordering of the fields, or that they would be the first fields.
 * On Linux-2.4 and 2.6 as well as Solaris-8 the ordering is as follows, but this needs
 * to be checked on other platforms.
 *                       l_type,  l_whence, l_start, l_len */
struct flock ds_rdlk = { F_RDLCK, SEEK_SET, 0, 0 };
struct flock ds_wrlk = { F_WRLCK, SEEK_SET, 0, 0 };
struct flock ds_unlk = { F_UNLCK, SEEK_SET, 0, 0 };
#endif

int name_from_path(char* buf, int buf_len, char* base, char* dir, char* name)
{
  int base_len, dir_len, len, fd;
  if (base) {
    base_len = strlen(base);
    if (base_len >= buf_len)
      goto too_long;
    memcpy(buf, base, base_len);
  } else
    base_len = 0;
  if (dir) {
    dir_len = strlen(dir);
    if (base_len + dir_len >= buf_len)
      goto too_long;
    memcpy(buf + base_len, dir, dir_len);
  } else
    dir_len = 0;
  len = strlen(name);
  if (base_len + dir_len + len >= buf_len - 1)
    goto too_long;
  strcpy(buf + base_len + dir_len, name);
  return 1;

 too_long:
  ERR("Path too long base(%s) dir(%s) name(%s)\n", base, dir, name);
  return 0;
}

int open_fd_from_path(char* base, char* dir, char* name, int flags, int mode)
{
  int fd;
  char buf[ZXID_MAX_BUF];
  if (!name_from_path(buf, sizeof(buf), base, dir, name))
    return -1;
  fd = open(buf, flags, mode);
  if (fd == -1) {
    perror("open");
    ERR("File(%s) not found.", buf);
    return -1;
  }
  return fd;
}

/* Low level function that keeps on sucking from a file descriptor until
 * want is satisfied or error happens. */

int read_all_fd(int fd, char* p, int want, int* got_all)
{
#ifdef DSSTDIO
  int got;
  got = fread(p, 1, want, (FILE*)fd);
  if (got_all) *got_all = got;
#elif defined(MINGW)
  DWORD got;
  if (!ReadFile((HANDLE)fd, p, want, &got, 0))
    return -1;
  if (got_all) *got_all = got;
#else
  int got = 0;
  if (got_all) *got_all = 0;
  while (want) {
    got = read(fd, p, want);
    if (got <= 0) break;  /* EOF, possibly premature */
    if (got_all) *got_all += got;
    p += got;
    want -= got;
  }
#endif
  return got;
}

int write_all_fd(int fd, char* p, int pending)
{
#ifdef MINGW
  DWORD wrote;
  if (!fd || !pending || !p) return 0;  
  if (!WriteFile((HANDLE)fd, p, pending, &wrote, 0))
    return 0;
  FlushFileBuffers((HANDLE)fd);
  D("write_all_fd(%x, `%.*s', %d) wrote=%d\n", fd, pending, p, pending, wrote);
#else
  int wrote;
  if ((fd < 0) || !pending || !p) return 0;
  while (pending) {
    wrote = write(fd, p, pending);
    if (wrote <= 0) return 0;
    pending -= wrote;
    p += wrote;
  }
#endif
  return 1;
}

int write_or_append_lock_c_path(char* c_path, char* data, int len, CU8* which, int seeky, int flag)
{
  int fd;
  if (!c_path || !data)
    return 0;
#ifdef MINGW
  fd = CreateFile(c_path, MINGW_RW_PERM, 0 /* 0  means no sharing allowed */, 0 /* security */,
		  (flag == O_APPEND) ? OPEN_ALWAYS : CREATE_ALWAYS /* truncates, too? */,
		  FILE_ATTRIBUTE_NORMAL, 0);
  if (!fd) goto badopen;
  if (flag == O_APPEND) {
    MS_LONG zero = 0;
    SetFilePointer(fd, 0, &zero, FILE_END);  /* seek to end */
  }

  if (!write_all_fd(fd, data, len)) {
    ERR("%s: Writing to file `%s' %d bytes failed: %d %s. Check permissions and disk space.", which, c_path, len, errno, STRERROR(errno));
    return 0;
  }
  
#else
  fd = open(c_path, O_WRONLY | O_CREAT | flag, 0666);
  if (fd == -1) goto badopen;
  if (
#ifdef USE_LOCK
      flock(fd, LOCK_EX)
#else
      lockf(fd, F_LOCK, 0)
#endif
      == -1) {
    ERR("%s: Locking exclusively file `%s' failed: %d %s. Check permissions and that the file system supports locking.", which, c_path, errno, STRERROR(errno));
    close(fd);
    return 0;
  }
  
  lseek(fd,0,seeky);
  if (!write_all_fd(fd, data, len)) {
    ERR("%s: Writing to file(%s) %d bytes failed: %d %s. Check permissions and disk space.", which, c_path, len, errno, STRERROR(errno));
#ifdef USE_LOCK
    flock(fd, LOCK_UN);
#else
    lockf(fd, F_ULOCK, 0);
#endif
    return 0;
  }
  
#ifdef USE_LOCK
  flock(fd, LOCK_UN);
#else
  lockf(fd, F_ULOCK, 0);
#endif
#endif
  if (close(fd) < 0) {
    ERR("%s: closing file(%s) after writing %d bytes failed: %d %s. Check permissions and disk space. Could be NFS problem.", which, c_path, len, errno, STRERROR(errno));
    return 0;
  }
  return 1;
badopen:
  ERR("%s: Opening file(%s) for writing failed: %d %s. Check permissions.", which, c_path, errno, STRERROR(errno));
  return 0;
}

int hexdump(char* msg, char* p, char* lim, int max)
{
  int i;
  char* lim16;
  char buf[3*16+1+1+16+1];
  if (!msg)
    msg = "";
  if (lim-p > max)
    lim = p + max;
  
  buf[sizeof(buf)-1] = '\0';
  
  while (p<lim) {
    memset(buf, ' ', sizeof(buf)-1);
    lim16 = MIN(p+16, lim);
    for (i = 0; p<lim16; ++p, ++i) {
      buf[3*i+(i>7?1:0)]   = HEX_DIGIT((*p >> 4) & 0x0f);
      buf[3*i+1+(i>7?1:0)] = HEX_DIGIT(*p & 0x0f);
      switch (*p) {
      case '\0': buf[3*16+1+1+i] = '~'; break;
      case '\r': buf[3*16+1+1+i] = '['; break;
      case '\n': buf[3*16+1+1+i] = ']'; break;
      case '~':  buf[3*16+1+1+i] = '^'; break;
      case '[':  buf[3*16+1+1+i] = '^'; break;
      case ']':  buf[3*16+1+1+i] = '^'; break;
      default:
	buf[3*16+1+1+i] = *p < ' ' ? '^' : *p;
      }
    }
    fprintf(stderr, "%s%s\n", msg, buf);
  }
  return 0;
}

/*
 *  Base 64 encoding and decoding in its canonical and URL safe forms.
 */

/* Base64 std, RFC3548, defines also safe base64, the form that does not need URL encoding
 * and is also otherwise more filesystem safe (i.e. / is not used). */

#define MAX_LINE  76 /* size of encoded lines */
char std_basis_64[64]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
char safe_basis_64[64] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";

/* Raw version. Can use any encoding table and arbitrary line length.
 * Known bug: line_len is not fully respected on last line: it can
 * be up to 3 characters longer than specified.
 * Every three chars (from alphabet of 256) of input map to
 * four chars (from alphabet of 64) of output.
 * Returns pointer one past last byte written in r. */

/* Called by:  base64_fancy, safe_base64 */
char* base64_fancy_raw(char* p, int len,  /* input and its length */
		       char* r,           /* Output buffer. Will not be NUL terminated. */
		       char* basis_64,    /* The 64 character alphabet to be used, see above. */
		       int line_len,      /* Length of each line. 76 is cusomary. */
		       int eol_len,       /* Length of End-of-Line string. */
		       char* eol,         /* End-of-Line string, inserted every line_len. */
		       char eq_pad)       /* Padding character, usually equals (=) */
{
  unsigned char c1,c2,c3;
  int chunk;
  line_len /= 4;
  
  for (chunk=0; len > 2; len -= 3, ++chunk) {
    if ((chunk == line_len) && eol_len) {  /* 19 chunks (3x19=57chars) per line */
      memcpy(r, eol, eol_len);
      r += eol_len;
      chunk = 0;
    }
    c1 = *p++;
    c2 = *p++;  // *** len==1 causes bug if no null term
    *r++ = basis_64[c1>>2];
    *r++ = basis_64[((c1 & 0x0003)<< 4) | ((c2 & 0x00f0) >> 4)];
    
    c3 = *p++;
    *r++ = basis_64[((c2 & 0x000f) << 2) | ((c3 & 0x00c0) >> 6)];
    *r++ = basis_64[c3 & 0x003f];
  }
  
  /* Post processing to handle the last line, which is often incomplete. */
  
  c1 = *p++;
  switch (len) {
  case 2:
    c2 = *p++;  // *** len==1 causes bug if no null term
    *r++ = basis_64[c1>>2];
    *r++ = basis_64[((c1 & 0x0003)<< 4) | ((c2 & 0x00f0) >> 4)];
    *r++ = basis_64[(c2 & 0x000f) << 2];
    *r++ = eq_pad;
    break;
  case 1:
    *r++ = basis_64[c1>>2];
    *r++ = basis_64[(c1 & 0x0003)<< 4];
    *r++ = eq_pad;
    *r++ = eq_pad;
    break;
  case 0:
    break;  /* no padding needed */
  default:
    NEVERNEVER("Corrupt len=%d", len);
  }
  if (eol_len) {
    memcpy(r, eol, eol_len);
    r += eol_len;
  }
  return r;
}

#define XX      255     /* illegal base64 char */
#define Eq      254     /* padding */
#define INVALID XX

unsigned char zx_std_index_64[256] = {
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,62, Eq,62,XX,63,  /* `+' ',' '-' `/' */
    52,53,54,55, 56,57,58,59, 60,61,XX,XX, XX,Eq,XX,XX,  /* `=' */
    XX, 0, 1, 2,  3, 4, 5, 6,  7, 8, 9,10, 11,12,13,14,
    15,16,17,18, 19,20,21,22, 23,24,25,XX, XX,XX,XX,63,  /* `_' */
    XX,26,27,28, 29,30,31,32, 33,34,35,36, 37,38,39,40,
    41,42,43,44, 45,46,47,48, 49,50,51,XX, XX,XX,XX,XX,

    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX,
    XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX, XX,XX,XX,XX
};

/*! Raw version. Can use any decoding table, but also assumes r has been allocated
 * to correct length. Is able to perform the operation in place, i.e. p and r can
 * point to the same buffer. Both canonical and safe base64 are handled. */

/* Called by:  unbase64 */
char* unbase64_raw(char* p, char* lim, char* r, char* index_64)
{
  int i;
  unsigned char c[4];
  unsigned char uc;
  
  while (p < lim) {
    i = 0;
    do {
      uc = index_64[(int)*p++];
      if (uc != INVALID)
	c[i++] = uc;
      
      if (p == lim) {
	if (i < 4) {
	  if (i)
	    ERR("Premature end of base64 data. (incomplete base64 input) i=%d\n", i);
	  if (i < 2) return r;
	  if (i == 2) c[2] = Eq;
	  c[3] = Eq;
	}
	break;
      }
    } while (i < 4);
    
    if (c[0] == Eq || c[1] == Eq) {
      ERR("Premature end of base64 data. (incomplete base64 input) c0(%c)\n", c[0]);
      break;
    }
    /* D("c0=%d,c1=%d,c2=%d,c3=%d\n", c[0],c[1],c[2],c[3]); */
    
    *r++ = (c[0] << 2) | ((c[1] & 0x30) >> 4);
    if (c[2] == Eq) break;
    *r++ = ((c[1] & 0x0f) << 4) | ((c[2] & 0x3c) >> 2);
    if (c[3] == Eq) break;
    *r++ = ((c[2] & 0x03) << 6) | c[3];
  }
  return r;
}

/* The out_buf should be 28+1 chars in length (+1 for nul termination). */

void sha1_safe_base64(char* out_buf, int len, char* data)
{
  char sha1[20];
  SHA1(data, len, sha1);
  base64_fancy_raw(sha1, 20, out_buf, safe_basis_64, 1<<31, 0, 0, '.');
  out_buf[28] = 0;
}

voidpf zx_zlib_zalloc(void* opaque, uInt items, uInt size)
{
  return ZX_ALLOC(opaque, items*size);
}

void zx_zlib_zfree(void* opaque, voidpf addr)
{
  ZX_FREE(opaque, addr);
}

char* zx_zlib_raw_deflate(struct zx_ctx* c, int in_len, char* in, int* out_len)
{
  int ret, dlen;
  char* out;
  z_stream z;
  *out_len = 0;
  memset(&z, 0, sizeof(z_stream));
  z.zalloc = zx_zlib_zalloc;
  z.zfree = zx_zlib_zfree;
  z.opaque = c;
  z.next_in = in;
  z.avail_in = in_len;
  ret = deflateInit2(&z, 9, Z_DEFLATED, -15, 9, Z_DEFAULT_STRATEGY);
  if (ret != Z_OK) {
    ERR("zlib deflateInit2 error: %d", ret);
    return 0;
  }
  
  dlen = in_len + (in_len >> 8) + 12;  /* orig_size * 1.001 + 12 */
  out = ZX_ALLOC(c, dlen);
  z.next_out = out;
  z.avail_out = dlen;
  
  ret = deflate(&z, Z_FINISH);
  if (ret != Z_STREAM_END) {
    deflateEnd(&z);
    ERR("zlib deflate error: %d", ret);
    return 0;
  }
  *out_len = z.total_out;
  deflateEnd(&z);
  return out;
}

char* zx_zlib_raw_inflate(struct zx_ctx* c, int in_len, char* in, int* out_len)
{
  int ret, dlen, iter = 30;
  char* out;
  char* old_out;
  z_stream z;
  *out_len = 0;
  memset(&z, 0, sizeof(z_stream));
  z.zalloc = zx_zlib_zalloc;
  z.zfree = zx_zlib_zfree;
  z.opaque = c;
  z.next_in = in;
  z.avail_in = in_len;
  
  dlen = in_len << 3;  /* guess inflated size: orig_size * 8 */
  out = ZX_ALLOC(c, dlen);
  z.next_out = out;
  z.avail_out = dlen;
  
  ret = inflateInit2(&z, -15);
  if (ret != Z_OK) {
    ERR("zlib inflateInit failed with error code %d", ret);
    return 0;
  }
  
#if 0
  ret = inflate(&z, Z_FINISH);
  if (ret != Z_STREAM_END) {
    inflateEnd(&z);
    ERR("zlib inflate failed with error code %d. Most probably the input data is empty, corrupt, or not in zlib format.", ret);
    return 0;
  }
#else
  while (--iter) {  /* Make sure we can never be caught in infinite loop */
    ret = inflate(&z, Z_SYNC_FLUSH);
    switch (ret) {
    case Z_STREAM_END: goto done;
    case Z_OK:  /* avail_out should be 0 now. Time to grow the buffer. */
      ret = z.next_out - (Bytef*)out;
      dlen += dlen;
      old_out = out;
      out = ZX_ALLOC(c, dlen);
      memcpy(out, old_out, ret);
      z.next_out = out + ret;
      z.avail_out = dlen - ret;
      break;
    default:
      inflateEnd(&z);
      ERR("zlib inflate failed with error code %d. Most probably the input data is empty, corrupt, or not in zlib or gzip format.", ret);
      return 0;
    }
  }
#endif
 done:
  *out_len = z.total_out;
  inflateEnd(&z);
  return out;
}

#if 1
/* N.B. Many other Liberty implementations expect nearly everything to be URL encoded. */
#define URL_BAD(x) (!A_Z_a_z_0_9_(x))
#else
#define URL_BAD(x) (((x)<=' ')||((x)>=0x7f)||ONE_OF_4((x),'+','%','=','&')||ONE_OF_2((x),'#','?'))
#endif

char* zx_url_encode(struct zx_ctx* c, int in_len, char* in, int* out_len)
{
  int n;
  char* out;
  char* p;
  char* lim;
  char* r;
  /* scan through to see how many escape expansions are needed */
  p = in;
  lim = in + in_len;
  for (n = 0; p < lim; ++p)
    if (URL_BAD(*p)) ++n;
  
  p = in;
  out = ZX_ALLOC(c, n+n+in_len+1);
  *out_len = n+n+in_len;
  
  for (r = out; p < lim; ++p)
    if (URL_BAD(*p)) {
      *r++ = '%';
      *r++ = HEX_DIGIT((*p >> 4) & 0x0f);
      *r++ = HEX_DIGIT(*p & 0x0f);
    } else
      *r++ = *p;
  *r = '\0';
  return out;
}

/* EOF  --  zxutil.c */
