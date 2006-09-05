/* zxidmeta.c  -  Handwritten functions for metadata and CoT handling
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxidmeta.c,v 1.10 2006/08/31 15:44:42 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 *           http://curl.haxx.se/libcurl/
 */

#include <pthread.h>
#include <signal.h>
#include <fcntl.h>
#include <netdb.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#ifdef USE_OPENSSL
#include <openssl/sha.h>
#include <openssl/x509.h>
#include <openssl/rsa.h>
#endif
#ifdef USE_CURL
#include <curl/curl.h>
#endif

#include "errmac.h"
#include "saml2.h"
#include "zxid.h"
#include "zxidconf.h"
#include "c/saml2-const.h"
#include "c/saml2-ns.h"
#include "c/saml2-data.h"
#include "c/saml2md-const.h"
#include "c/saml2md-ns.h"
#include "c/saml2md-data.h"

#define PEM_CERT_START_MAKER  "-----BEGIN CERTIFICATE-----"
#define PEM_CERT_END_MAKER    "-----END CERTIFICATE-----"
#define PEM_RSA_PRIVATE_KEY_START_MAKER  "-----BEGIN RSA PRIVATE KEY-----"
#define PEM_RSA_PRIVATE_KEY_END_MAKER    "-----END RSA PRIVATE KEY-----"
#define PEM_DSA_PRIVATE_KEY_START_MAKER  "-----BEGIN DSA PRIVATE KEY-----"
#define PEM_DSA_PRIVATE_KEY_END_MAKER    "-----END DSA PRIVATE KEY-----"

/* ============== CoT and Metadata of Others ============== */

#define ZXID_COT_DIR "cot/"
#define ZXID_MAX_MD (64*1024)

size_t zxid_curl_write_data(void *buffer, size_t size, size_t nmemb, void *userp)
{
  int len = size*nmemb;
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
  int fd = open_fd_from_path(cf->path, ZXID_COT_DIR, "test", O_CREAT | O_WRONLY | O_TRUNC, 0666);
  if (fd == -1) {
    perror("open");
    ERR("Failed to open file(%s) for writing", url);
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
  res = curl_easy_perform(cf->curl);
  /*close(fd);*/
  rc.lim = rc.p;
  rc.p[1] = 0;
  rc.p = md_buf;
  ent = zxid_parse_meta(cf, &rc.p, rc.lim);
  if (!ent) {
    ERR("Failed to parse metadata response url(%s) CURLcode(%d) CURLerr(%s) buf(%.*s)", url, res, curl_easy_strerror(res), rc.lim-md_buf, md_buf);
    ZX_FREE(cf->ctx, md_buf);
    return 0;
  }
  return ent;
#else
  ERR("This copy of zxid was compiled to NOT use libcurl. As such metadata fetching is not supported. Add -DUSE_CURL and recompile. %d", 0);
  return 0;
#endif
}

struct zxid_entity* zxid_get_meta_ss(struct zxid_conf* cf, struct zx_str_s* url)
{
  return zxid_get_meta(cf, zx_str_to_c(cf->ctx, url));
}

struct zxid_entity* zxid_parse_meta(struct zxid_conf* cf, char** md, char* lim)
{
  struct zxid_entity* ent;
  struct zxmd_md_EntityDescriptor_s* ed;
  struct zxmd_root_s* r;
  cf->ctx->ns_tab = zxmd_ns_tab;
  cf->ctx->base = cf->ctx->p = *md;
  cf->ctx->lim = lim;
  r = zxmd_DEC_root(cf->ctx);
  *md = cf->ctx->p;
  if (!r)
    return 0;
  if (r->EntityDescriptor) {
    ed = r->EntityDescriptor;
  } else if (r->EntitiesDescriptor) {
    if (!r->EntitiesDescriptor->EntityDescriptor)
      goto bad_md;
    ed = r->EntitiesDescriptor->EntityDescriptor;
    ZX_FREE(cf->ctx, r->EntitiesDescriptor);
  } else
    goto bad_md;
  ZX_FREE(cf->ctx, r);  /* N.B Shallow free only, do not free the descriptor. */
  ent = ZX_ZALLOC(cf->ctx, struct zxid_entity);
  ent->ed = ed;
  if (!ed->entityID)
    goto bad_md;
  ent->eid_len = ed->entityID->len;
  ent->eid = ed->entityID->s;
  return ent;
  
 bad_md:
  ERR("Bad metadata. EntityDescriptor could not be found or was corrupt. MD(%.*s) %d chars parsed.", lim-cf->ctx->base, cf->ctx->base, *md - cf->ctx->base);
  zxmd_FREE_root(cf->ctx, r, 0);
  return 0;
}

int zxid_write_ent_to_cache(struct zxid_conf* cf, struct zxid_entity* ent)
{
  struct zx_str_s* ss;
  int fd = open_fd_from_path(cf->path, ZXID_COT_DIR, ent->sha1_name,
			     O_CREAT | O_WRONLY | O_TRUNC, 0666);
  if (fd == -1) {
    perror("open metadata for write");
    ERR("Failed to open file for writing: sha1_name(%s)", ent->sha1_name);
    return 0;
  }
  
  ss = zxmd_EASY_ENC_SO_md_EntityDescriptor(cf->ctx, ent->ed);
  if (!ss)
    return 0;
  write_all_fd(fd, ss->s, ss->len);
  zx_str_free(cf->ctx, ss);
  close(fd);
  return 1;
}

struct zxid_entity* zxid_get_ent_from_file(struct zxid_conf* cf, char* sha1_name)
{
  int fd,n,got;
  char* md_buf;
  char* p;
  struct zxid_entity* ent;
  
  fd = open_fd_from_path(cf->path, ZXID_COT_DIR, sha1_name, O_RDONLY, 0);
  if (fd == -1) {
    perror("open metadata");
    D("No metadata file found for sha1_name(%s)", sha1_name);
    return 0;
  }
  
  md_buf = ZX_ALLOC(cf->ctx, ZXID_MAX_MD+1);
  n = read_all_fd(fd, md_buf, ZXID_MAX_MD, &got);
  if (n == -1) {
    perror("read metadata");
    ERR("Failed to read metadata for sha1_name(%s)", sha1_name);
    close(fd);
    return 0;
  }
  close(fd);
  
  p = md_buf;
  ent = zxid_parse_meta(cf, &p, md_buf+got);
  if (!ent) {
    ZX_FREE(cf->ctx, md_buf);
    return 0;
  }
  ent->sha1_name = ZX_ALLOC(cf->ctx, strlen(sha1_name)+1);
  strcpy(ent->sha1_name, sha1_name);
  ent->n = cf->cot;
  cf->cot = ent;
  D("GOT sha1_name(%s)", sha1_name);
  return ent;
}

struct zxid_entity* zxid_get_ent_from_cache(struct zxid_conf* cf, struct zx_str_s* eid)
{
  struct zxid_entity* ent;
  char sha1_name[28+1];
  for (ent = cf->cot; ent; ent = ent->n)  /* Check in memory cache. */
    if (eid->len == ent->eid_len && !memcmp(eid->s, ent->eid, eid->len))
      return ent;
  sha1_safe_base64(sha1_name, eid->len, eid->s);
  return zxid_get_ent_from_file(cf, sha1_name);
}

struct zxid_entity* zxid_get_ent_ss(struct zxid_conf* cf, struct zx_str_s* eid)
{
  struct zxid_entity* ent;
  
  D("get_ent: eid(%.*s)\n", eid->len, eid->s);
  if (cf->md_cache_first) {
    ent = zxid_get_ent_from_cache(cf, eid);
    if (ent)
      return ent;
  }
  
  if (cf->md_fetch) {
    ent = zxid_get_meta_ss(cf, eid);
    if (ent) {
      ent->sha1_name = ZX_ALLOC(cf->ctx, 28+1);
      sha1_safe_base64(ent->sha1_name, ent->eid_len, ent->eid);
      ent->n = cf->cot;
      cf->cot = ent;
      
      if (cf->md_populate_cache)
	zxid_write_ent_to_cache(cf, ent);
      return ent;
    }
  }
  
  if (cf->md_cache_last) {
    ent = zxid_get_ent_from_cache(cf, eid);
    if (ent)
      return ent;
  }
  D("get_ent: eid(%.*s) NOT FOUND\n", eid->len, eid->s);
  return 0;
}

struct zxid_entity* zxid_get_ent(struct zxid_conf* cf, char* eid)
{
  struct zx_str_s ss;
  if (!eid)
    return 0;
  ss.s = eid;
  ss.len = strlen(eid);
  return zxid_get_ent_ss(cf, &ss);
}

struct zxid_entity* zxid_get_ent_by_sha1_name(struct zxid_conf* cf, char* sha1_name)
{
  struct zxid_entity* ent;
  for (ent = cf->cot; ent; ent = ent->n)  /* Check in-memory cache. */
    if (!strcmp(sha1_name, ent->sha1_name))
      return ent;
  D("Trying sha1_name(%s)", sha1_name);
  return zxid_get_ent_from_file(cf, sha1_name);
}

struct zxid_entity* zxid_get_ent_by_succinct_id(struct zxid_conf* cf, char* raw_succinct_id)
{
  struct zxid_entity* ent;
  char sha1_name[28+1];
  char* p = base64_fancy_raw(raw_succinct_id, 20, sha1_name, safe_basis_64, 1<<31, 0, 0, '.');
  *p = 0;
  return zxid_get_ent_by_sha1_name(cf, sha1_name);
}

/* Usually you will want to use the get_ent() methods if you need
 * specific entities. Loading the entire cache is expansive and
 * only useful if you really need to enumerate through all
 * available entities, as may be the case  when rendering login
 * buttons for all IdPs in a user interface. */

struct zxid_entity* zxid_load_cot_cache(struct zxid_conf* cf)
{
  struct dirent* de;
  DIR* dir;
  char buf[4096];
  int base_len, dir_len, len, fd;
  if (cf->path_len + sizeof(ZXID_COT_DIR) > sizeof(buf)) {
    ERR("Too long path(%.*s) for config dir. Has %d chars. Max allowed %d. (config problem)",
	cf->path_len, cf->path, cf->path_len, sizeof(buf) - sizeof(ZXID_COT_DIR));
    return 0;
  }
  memcpy(buf, cf->path, cf->path_len);
  memcpy(buf + cf->path_len, ZXID_COT_DIR, sizeof(ZXID_COT_DIR));

  dir = opendir(buf);
  if (!dir) {
    perror("opendir for /var/zxid/cot (or other if configured)");
    return 0;
  }
  
  while (de = readdir(dir))
    zxid_get_ent_by_sha1_name(cf, de->d_name);
  
  closedir(dir);
  return cf->cot;
}

/* ============== Our Metadata ============== */

struct zxmd_md_KeyDescriptor_s* zxid_key_desc(struct zxid_conf* cf, char* use, X509* x)
{
  int len;
  char* dd;
  char* d;
  char* pp;
  char* p;
  struct zxmd_md_KeyDescriptor_s* kd = zxmd_NEW_md_KeyDescriptor(cf->ctx);
  kd->use = zx_ref_str(cf->ctx, use);
  kd->KeyInfo = zxmd_NEW_ds_KeyInfo(cf->ctx);
  kd->KeyInfo->X509Data = zxmd_NEW_ds_X509Data(cf->ctx);

#ifdef USE_OPENSSL
  /* Build PEM encoding */
  
  len = i2d_X509(x, 0);
  if (len <= 0) {
    ERR("DER encoding certificate failed: %d", len);
  } else {
    dd = d = ZX_ALLOC(cf->ctx, len);
    i2d_X509(x, (unsigned char**)&d);
    pp = p = ZX_ALLOC(cf->ctx, (len+4) * 4 / 3 + (len/64) + 6
		      + sizeof(PEM_CERT_START_MAKER)
		      + sizeof(PEM_CERT_END_MAKER));    
    memcpy(p, PEM_CERT_START_MAKER, sizeof(PEM_CERT_START_MAKER)-1);
    p += sizeof(PEM_CERT_START_MAKER)-1;
    *p++ = '\n';
    p = base64_fancy_raw(dd, len, p, std_basis_64, 64, 1, "\n", '=');
    memcpy(p, PEM_CERT_END_MAKER, sizeof(PEM_CERT_END_MAKER)-1);
    p += sizeof(PEM_CERT_END_MAKER)-1;
    /**p++ = '\n';*/
    *p = 0;

    kd->KeyInfo->X509Data->X509Certificate = zx_ref_len_simple_elem(cf->ctx, p-pp, pp);
  }
#else
  ERR("This copy of zxid was compiled to NOT use OpenSSL. Generating KeyInfo is not supported. Add -DUSE_OPENSSL and recompile. %d", 0);
#endif
  return kd;
}

struct zxmd_md_SingleLogoutService_s* zxid_slo_desc(struct zxid_conf* cf,
						    char* binding, char* loc, char* resp_loc)
{
  struct zxmd_md_SingleLogoutService_s* d = zxmd_NEW_md_SingleLogoutService(cf->ctx);
  d->Binding = zx_ref_str(cf->ctx, binding);
  d->Location = zx_strf(cf->ctx, "%s%s", cf->url, loc);
  if (resp_loc)
    d->ResponseLocation = zx_strf(cf->ctx, "%s%s", cf->url, resp_loc);
  return d;
}

struct zxmd_md_ManageNameIDService_s* zxid_nireg_desc(struct zxid_conf* cf,
						      char* binding, char* loc, char* resp_loc)
{
  struct zxmd_md_ManageNameIDService_s* d = zxmd_NEW_md_ManageNameIDService(cf->ctx);
  d->Binding = zx_ref_str(cf->ctx, binding);
  d->Location = zx_strf(cf->ctx, "%s%s", cf->url, loc);
  if (resp_loc)
    d->ResponseLocation = zx_strf(cf->ctx, "%s%s", cf->url, resp_loc);
  return d;
}

struct zxmd_md_AssertionConsumerService_s* zxid_ac_desc(struct zxid_conf* cf,
							char* binding, char* loc, char* ix)
{
  struct zxmd_md_AssertionConsumerService_s* d = zxmd_NEW_md_AssertionConsumerService(cf->ctx);
  d->Binding = zx_ref_str(cf->ctx, binding);
  d->Location = zx_strf(cf->ctx, "%s%s", cf->url, loc);
  d->index = zx_ref_str(cf->ctx, ix);
  return d;
}

struct zxmd_md_SPSSODescriptor_s* zxid_sp_sso_desc(struct zxid_conf* cf)
{
  struct zxmd_md_SPSSODescriptor_s* sp_ssod = zxmd_NEW_md_SPSSODescriptor(cf->ctx);
  sp_ssod->AuthnRequestsSigned        = zx_ref_str(cf->ctx, cf->authn_req_sign);
  sp_ssod->WantAssertionsSigned       = zx_ref_str(cf->ctx, cf->want_sso_a7n_signed);
  sp_ssod->errorURL                   = zx_strf(cf->ctx, "%s?o=E", cf->url);
  sp_ssod->protocolSupportEnumeration = zx_ref_str(cf->ctx, SAML2_PROTO);

  zxmd_md_SPSSODescriptor_PUSH_KeyDescriptor(sp_ssod,
					zxid_key_desc(cf, "encryption", cf->enc_cert));
  zxmd_md_SPSSODescriptor_PUSH_KeyDescriptor(sp_ssod,
					zxid_key_desc(cf, "signing", cf->sign_cert));

  zxmd_md_SPSSODescriptor_PUSH_SingleLogoutService(sp_ssod,
     zxid_slo_desc(cf, SAML2_REDIR, "?o=K", "?o=K"));
  zxmd_md_SPSSODescriptor_PUSH_SingleLogoutService(sp_ssod,
     zxid_slo_desc(cf, SAML2_SOAP, "?o=S", 0));

  zxmd_md_SPSSODescriptor_PUSH_ManageNameIDService(sp_ssod,
     zxid_nireg_desc(cf, SAML2_REDIR, "?o=I", "?o=I"));
  zxmd_md_SPSSODescriptor_PUSH_ManageNameIDService(sp_ssod,
     zxid_nireg_desc(cf, SAML2_SOAP, "?o=S", 0));

  zxmd_md_SPSSODescriptor_PUSH_NameIDFormat(sp_ssod,
     zx_ref_simple_elem(cf->ctx, SAML2_PERSISTENT_NID_FMT));
  zxmd_md_SPSSODescriptor_PUSH_NameIDFormat(sp_ssod,
     zx_ref_simple_elem(cf->ctx, SAML2_TRANSIENT_NID_FMT));

  /* N.B. The index values should not be changed. They are used in
   * AuthnReq to choose profile using AssertionConsumerServiceIndex */
  zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService(sp_ssod,
     zxid_ac_desc(cf, SAML2_PAOS, "?o=A", "4"));
  zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService(sp_ssod,
     zxid_ac_desc(cf, SAML2_SOAP, "?o=S", "3"));
  zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService(sp_ssod,
     zxid_ac_desc(cf, SAML2_POST, "?o=P", "2"));
  zxmd_md_SPSSODescriptor_PUSH_AssertionConsumerService(sp_ssod,
     zxid_ac_desc(cf, SAML2_ART, "", "1"));
  
  return sp_ssod;
}

struct zx_str_s* zxid_my_entity_id(struct zxid_conf* cf)
{
  return zx_strf(cf->ctx, "%s?o=B", cf->url);
}

struct zx_sa_Issuer_s* zxid_my_issuer(struct zxid_conf* cf)
{
  struct zx_sa_Issuer_s* is = zx_NEW_sa_Issuer(cf->ctx);
  is->gg.content = zxid_my_entity_id(cf);
  if (cf->affiliation && cf->affiliation[0])
    is->NameQualifier = zx_ref_str(cf->ctx, cf->affiliation);
  return is;
}

int zxid_send_sp_meta(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zx_str_s* ss;
  struct zxmd_md_EntityDescriptor_s* ed;
  
  ed = zxmd_NEW_md_EntityDescriptor(cf->ctx);
  ed->entityID = zxid_my_entity_id(cf);
  ed->SPSSODescriptor = zxid_sp_sso_desc(cf);
  
  ss = zxmd_EASY_ENC_SO_md_EntityDescriptor(cf->ctx, ed);
  if (!ss)
    return 0;
  write_all_fd(1, ss->s, ss->len);
  zx_str_free(cf->ctx, ss);
  return 0;
}

/* EOF  --  zxidmeta.c */
