/* zxidcurl.c  -  libcurl interface for making SOAP calls and getting metadata
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidcurl.c,v 1.5 2007-10-15 21:09:18 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 4.10.2007, fixed missing Content-length header found by Damien Laniel --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 *           http://curl.haxx.se/libcurl/
 */

#include <string.h>

#ifdef USE_CURL
#include <curl/curl.h>

#if LIBCURL_VERSION_NUM < 0x070c00
#define CURL_EASY_STRERR(ec) "error-not-avail-in-curl-before-0x070c00"
#else
#define CURL_EASY_STRERR(ec) curl_easy_strerror(ec)
#endif

#endif

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

/* ============== CoT and Metadata of Others ============== */

/* Called by: */
size_t zxid_curl_write_data(void *buffer, size_t size, size_t nmemb, void *userp)
{
  int len = size * nmemb;
#if 1
  struct zxid_curl_ctx* rc = (struct zxid_curl_ctx*)userp;
  if (rc->p + len > rc->lim) {
    ERR("Metadata is too long. Wont fit in %d byte buffer.", ZXID_MAX_MD);
    return 0;
  }
  memcpy(rc->p, buffer, len);
  rc->p += len;
  D("RECV(%.*s) %d chars", len, (char*)buffer, len);
#else
  int fd = (int)userp;
  write_all_fd(fd, buffer, len);
#endif
  return len;
}

/* Called by: */
size_t zxid_curl_read_data(void *buffer, size_t size, size_t nmemb, void *userp)
{
  int len = size*nmemb;
  struct zxid_curl_ctx* wc = (struct zxid_curl_ctx*)userp;
  if (len > (wc->lim - wc->p))
    len = wc->lim - wc->p;
  memcpy(buffer, wc->p, len);
  wc->p += len;
  D("SEND(%.*s) %d chars", len, (char*)buffer, len);
  return len;
}

/* Called by:  opt, zxid_get_meta_ss */
struct zxid_entity* zxid_get_meta(struct zxid_conf* cf, char* url)
{
  struct zxid_entity* ent;
  CURLcode res;
#ifdef USE_CURL
#if 1
  struct zxid_curl_ctx rc;
  char* md_buf = ZX_ALLOC(cf->ctx, ZXID_MAX_MD+1);
  rc.p = md_buf;
  rc.lim = md_buf + ZXID_MAX_MD;
  curl_easy_setopt(cf->curl, CURLOPT_WRITEDATA, &rc);
#else
  /* TEST CODE (usually disabled) */
  int fd = open_fd_from_path(O_CREAT | O_WRONLY | O_TRUNC, 0666, "get_meta TEST", "%s" ZXID_COT_DIR "test", cf->path);
  if (fd == -1) {
    perror("open meta to write");
    ERR("Failed to open file(%s) for writing metadata", url);
    return 0;
  }
  curl_easy_setopt(cf->curl, CURLOPT_WRITEDATA, fd);
#endif
  curl_easy_setopt(cf->curl, CURLOPT_WRITEFUNCTION, zxid_curl_write_data);
  curl_easy_setopt(cf->curl, CURLOPT_NOPROGRESS, 1);
  curl_easy_setopt(cf->curl, CURLOPT_FOLLOWLOCATION, 1);
  curl_easy_setopt(cf->curl, CURLOPT_MAXREDIRS, 110);
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYPEER, 0);
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYHOST, 0);
  curl_easy_setopt(cf->curl, CURLOPT_URL, url);

  D("get_meta: url(%s)", url);
  if (cf->log_level>1)
    zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "W", "GETMD", url, 0);
  res = curl_easy_perform(cf->curl);
  rc.lim = rc.p;
  rc.p[1] = 0;
  rc.p = md_buf;
  if (rc.lim - rc.p < 300) {
    ERR("Metadata response too short (%d chars, min 300 required). url(%s) CURLcode(%d) CURLerr(%s) buf(%.*s)",
	rc.lim-md_buf, url, res, CURL_EASY_STRERR(res), rc.lim-md_buf, md_buf);
    ZX_FREE(cf->ctx, md_buf);
    return 0;
  }

  ent = zxid_parse_meta(cf, &rc.p, rc.lim);
  if (!ent) {
    ERR("Failed to parse metadata response url(%s) CURLcode(%d) CURLerr(%s) buf(%.*s)",
	url, res, CURL_EASY_STRERR(res), rc.lim-md_buf, md_buf);
    ZX_FREE(cf->ctx, md_buf);
    return 0;
  }
  if (cf->log_level>0)
    zxlog(cf, 0, 0, 0, 0, 0, 0, 0, "N", "W", "GOTMD", url, 0);
  return ent;
#else
  ERR("This copy of zxid was compiled to NOT use libcurl. As such metadata fetching is not supported. Add -DUSE_CURL and recompile. %d", 0);
  return 0;
#endif
}

/* Called by:  zxid_get_ent_ss */
struct zxid_entity* zxid_get_meta_ss(struct zxid_conf* cf, struct zx_str* url)
{
  return zxid_get_meta(cf, zx_str_to_c(cf->ctx, url));
}

/* ============== SOAP Call ============= */

/* Called by:  zxid_soap_call_body */
struct zx_root_s* zxid_soap_call_raw(struct zxid_conf* cf, struct zx_str* url, struct zx_str* data)
{
#ifdef USE_CURL
  struct zx_root_s* r;
  CURLcode res;
  struct zxid_curl_ctx rc;
  struct zxid_curl_ctx wc;
  struct curl_slist content_type;
  struct curl_slist SOAPaction;
  char* urli;
  char* buf = ZX_ALLOC(cf->ctx, ZXID_MAX_SOAP+1);
  rc.p = buf;
  rc.lim = buf + ZXID_MAX_SOAP;
  curl_easy_setopt(cf->curl, CURLOPT_WRITEDATA, &rc);
  curl_easy_setopt(cf->curl, CURLOPT_WRITEFUNCTION, zxid_curl_write_data);
  curl_easy_setopt(cf->curl, CURLOPT_NOPROGRESS, 1);
  curl_easy_setopt(cf->curl, CURLOPT_FOLLOWLOCATION, 1);
  curl_easy_setopt(cf->curl, CURLOPT_MAXREDIRS, 110);
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYPEER, 0);  /* *** arrange verification */
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYHOST, 0);  /* *** arrange verification */
  urli = zx_str_to_c(cf->ctx, url);
  D("urli(%s) len=%d", urli, data->len);
  curl_easy_setopt(cf->curl, CURLOPT_URL, urli);
  
  wc.p = data->s;
  wc.lim = data->s + data->len;
  
  curl_easy_setopt(cf->curl, CURLOPT_POST, 1);
  curl_easy_setopt(cf->curl, CURLOPT_POSTFIELDSIZE, data->len);
  curl_easy_setopt(cf->curl, CURLOPT_READDATA, &wc);
  curl_easy_setopt(cf->curl, CURLOPT_READFUNCTION, zxid_curl_read_data);

  memset(&content_type, 0, sizeof(content_type));
  content_type.data = "Content-Type: text/xml";
  memset(&SOAPaction, 0, sizeof(SOAPaction));
  SOAPaction.data = "SOAPAction: \"\"";
  SOAPaction.next = &content_type;    //curl_slist_append(3)
  curl_easy_setopt(cf->curl, CURLOPT_HTTPHEADER, &SOAPaction);
  
  D("------------------------ url(%.*s) ------------------------", url->len, url->s);
  res = curl_easy_perform(cf->curl);  /* <========= Actual call, blocks. */
  ZX_FREE(cf->ctx, urli);
  rc.lim = rc.p;
  rc.p[1] = 0;
  rc.p = buf;
  
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, buf, rc.lim);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r || !r->Envelope || !r->Envelope->Body) {
    ERR("Failed to parse SOAP response url(%.*s) CURLcode(%d) CURLerr(%s) buf(%.*s)",
	url->len, url->s, res, CURL_EASY_STRERR(res), rc.lim-buf, buf);
    return 0;
  }
  return r;
#else
  ERR("This copy of zxid was compiled to NOT use libcurl. SOAP calls (such as Artifact profile and WSC) are not supported. Add -DUSE_CURL and recompile. %d", 0);
  return 0;
#endif
}

/* EOF  --  zxidcurl.c */
