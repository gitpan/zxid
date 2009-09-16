/* zxidepr.c  -  Handwritten functions for EPR and bootstrap handling
 * Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidepr.c,v 1.16 2009-09-05 02:23:41 sampo Exp $
 *
 * 5.2.2007, created --Sampo
 * 7.10.2008, added documentation --Sampo
 *
 * See also: zxidsimp.c (attributes to LDIF), and zxida7n.c (general attribute querying)
 *
 * N.B. Like session storage, the epr cache makes case preserving assumption about
 * underlying filesystem. Case insensitive filesystem will insignificantly increase
 * chances of naming collitions.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <dirent.h>
#include <unistd.h>

#include "errmac.h"
#include "zxid.h"
#include "platform.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-ns.h"

/*() Compute (and fold) unique nice sha1 name according to NAME,SHA1
 *
 * This name format is designed to ensure unique name, while
 * maintainting human readability. This is
 * useful in the common case where WSC wants to call a specific type of web service.
 *
 * cf::  ZXID configuration object, also used for memory allocation
 * buf:: result parameter. The buffer, which must have been allocated, will be
 *     modified to have the path. The path will be nul terminated.
 * buf_len:: The length of the buf (including nul termination), usually sizeof(buf)
 * name:: Often Service name or SP Entity ID
 * cont:: content of EPR or the SP EntityID, used to compute sha1 hash that becomes part
 *     of the file name
 * return:: 0 on success (the real return value is returned via ~buf~ result parameter) */

int zxid_nice_sha1(struct zxid_conf* cf, char* buf, int buf_len,
		   struct zx_str* name, struct zx_str* cont)
{
  char* p;
  char* q;
  int len;
  char sha1_cont[28];
  sha1_safe_base64(sha1_cont, cont->len, cont->s);
  sha1_cont[27] = 0;
  len = snprintf(buf, buf_len, "%.*s,%s", MAX(name->len-7,0), name->s+7, sha1_cont);

  /* 012345678
   * http://
   * https://   */

  /* Sanity scan the name part (svc or eid), folding dangerous chars to _. */
  p = buf;
  q = MIN(p + MAX(name->len-7,0), buf + buf_len);
  for (; p<q; ++p)
    if (ONE_OF_6(*p, ':','/',',','?','&','='))
      *p = '_';
  return 0;
}

/*() Compute (and fold) unique EPR name according to /var/zxid/ses/SESID/SVC,SHA1
 *
 * This name format is designed to ensure unique name for each EPR, while
 * also making it easy to determine the service type from the name. This is
 * useful in the common case where WSC wants to call a specific type of web service.
 *
 * cf::  ZXID configuration object, also used for memory allocation
 * dir:: Directory, such as "ses/"
 * sid:: Session ID whose EPR cache the file is/will be located
 * buf:: result parameter. The buffer, which must have been allocated, will be
 *     modified to have the path. The path will be nul terminated.
 * buf_len:: The length of the buf (including nul termination), usually sizeof(buf)
 * svc:: Service name
 * cont:: content of EPR, used to compute sha1 hash that becomes part of the file name
 * return:: 0 on success (the real return value is returned via ~buf~ result parameter)
 *
 * N.B. This function relies on specific, ANSI documented, functioning
 * of snprintf(3) library function. Unfortunately, it has been found that
 * on some platforms this function only works correctly in the 'C' locale. If
 * you suspect this to be the case, you may want to try
 *
 *    export LANG=C
 *
 * especially if you get errors about multibyte characters. */

/* Called by:  zxid_cache_epr, zxid_snarf_eprs_from_ses */
int zxid_epr_path(struct zxid_conf* cf, char* dir, char* sid,
		  char* buf, int buf_len, struct zx_str* svc, struct zx_str* cont)
{
  int len = snprintf(buf, buf_len, "%s%s%s/", cf->path, dir, sid);
  if (len < 0) {
    perror("snprintf");
    ERR("Broken snprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", len);
    if (buf && buf_len > 0)
      buf[0] = 0;
    return 1;
  }
  return zxid_nice_sha1(cf, buf+len, buf_len - len, svc, cont);
}

/*() Serialize EPR data structure to XML and write it to session's EPR cache under
 * file name that is both unique and indicates the service type.
 *
 * cf:: ZXID configuration object, also used for memory allocation
 * ses:: Session object in whose EPR cache the file will be located
 * epr:: XML data structure representing the EPR
 * return:: 1 on success, 0 on failure */

/* Called by:  main x2, zxid_get_epr, zxid_snarf_eprs_from_ses */
int zxid_cache_epr(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_a_EndpointReference_s* epr)
{
  fdtype fd;
  struct zx_str* ss;
  char path[ZXID_MAX_BUF];
  if (!epr)
    return 0;

  if (!epr->Metadata) {
    ERR("EPR is not a ID-WSF 2.0 Bootstrap: no Metadata %d", 0);
    return 0;
  }
  ss = zx_EASY_ENC_WO_a_EndpointReference(cf->ctx, epr);
  zxid_epr_path(cf, ZXID_SES_DIR, ses->sid, path, sizeof(path),
		epr->Metadata->ServiceType->content, ss);
  //fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666);
  fd = open_fd_from_path(O_CREAT | O_WRONLY | O_TRUNC, 0666, "zxid_cache_epr", "%s" ZXID_COT_DIR "%s", path, "");
  if (fd == BADFD) {
    perror("open for write epr");
    ERR("EPR path(%s) creation failed", path);
  } else if (write_all_fd(fd, ss->s, ss->len) == -1) {
    perror("Trouble writing EPR");
  }
  close_file(fd, __FUNCTION__);
  zx_str_free(cf->ctx, ss);
  return 1;
}

/*() Look into attribute statements of a SSO assertion and extract anything
 * that looks like EPR, storing results in the session for later reference.
 *
 * cf:: ZXID configuration object, also used for memory allocation
 * ses:: Session object in whose EPR cache will be populated
 *
 * N.B. This approach ignores the official attribute names totally. Anything
 * that looks like an EPR and that is strcturally in right place will work.
 * Typical name /var/zxid/ses/SESID/SVCTYPE,SHA1 */

/* Called by:  zxid_sp_anon_finalize, zxid_sp_sso_finalize */
void zxid_snarf_eprs_from_ses(struct zxid_conf* cf, struct zxid_ses* ses)
{
  struct zx_sa_AttributeStatement_s* as;
  struct zx_sa_Attribute_s* at;
  struct zx_sa_AttributeValue_s* av;
  int wsf11 = 0, wsf20 = 0;
  
  zxid_get_ses_sso_a7n(cf, ses);
  if (ses->a7n)
    for (as = ses->a7n->AttributeStatement; as; as = (struct zx_sa_AttributeStatement_s*)as->gg.g.n)
      for (at = as->Attribute; at; at = (struct zx_sa_Attribute_s*)at->gg.g.n)
	for (av = at->AttributeValue; av; av = (struct zx_sa_AttributeValue_s*)av->gg.g.n) {
	  if (av->EndpointReference) {
	    ++wsf20;
	    D("Detected wsf20 EPR. %d", wsf20);
	    zxid_cache_epr(cf, ses, av->EndpointReference);
	    D("EPR cached ok %d", 0);
	  }
	  if (av->ResourceOffering) {
	    ++wsf11;
	    D("Detected wsf11 resource offering. %d", wsf11);
#if 0	    
	    ss = zx_EASY_ENC_WO_di12_ResourceOffering(cf->ctx, av->ResourceOffering);
	    
	    zxid_epr_path(cf, ZXID_SES_DIR, ses->sid, path, sizeof(path),
			  av->EndpointReference->Metadata->ServiceType->content, ss);
	    fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666);
	    if (fd == -1) {
	      perror("open for write epr");
	      ERR("EPR path(%s) creation failed", path);
	    } else if (write_all_fd(fd, ss->s, ss->len) == -1) {
	      perror("Trouble writing EPR");
	      close__file(fd, __FUNCTION__);
	    }
	    zx_str_free(cf->ctx, ss);
#endif
	  }
	}
#if 0
  if (ses->a7n12)
    for (as = ses->a7n->AttributeStatement; as; as = (struct zx_sa11_AttributeStatement_s*)as->gg.g.n)
      for (at = as->Attribute; at; at = (struct zx_sa_Attribute_s*)at->gg.g.n)
	for (av = at->AttributeValue; av; av = (struct zx_sa_AttributeValue_s*)av->gg.g.n) {
	}
#endif
}

/*() Search the EPRs cached under the session for a match. First directory is searched
 * for files whose name starts by service type. These files are opened and parsed
 * as EPR and further checks are made. The nth match is returned. 1 means first.
 * Typical name: /var/zxid/ses/SESID/SVCTYPE,SHA1
 *
 * cf:: ZXID configuration object, also used for memory allocation
 * ses:: Session object in whose EPR cache the file is searched
 * svc:: Service type (usually a URN)
 * n:: How manieth matching instance is returned. 1 means first
 * return:: EPR data structure on success, 0 on failure */

/* Called by:  main x3, zxid_get_epr x2 */
struct zx_a_EndpointReference_s* zxid_find_epr(struct zxid_conf* cf, struct zxid_ses* ses, char* svc, int n)
{
  struct zx_root_s* r;
  int len, epr_len;
  char* p;
  char path[ZXID_MAX_BUF];
  char epr_buf[32*1024];
  DIR* dir;
  struct dirent * de;
  struct zx_a_EndpointReference_s* epr = 0;
  
  if (!name_from_path(path, sizeof(path), "%s" ZXID_SES_DIR "%s", cf->path, ses->sid))
    return 0;
  
  D("Looking in session dir(%s)", path);
  dir = opendir(path);
  if (!dir) {
    perror("opendir to find epr in session");
    ERR("Opening session for find epr by opendir failed path(%s)", path);
    return 0;
  }
  
  len = strlen(svc);
  len = MIN(len, sizeof(path)-1);
  memcpy(path, svc, len);
  path[len] = 0;
  for (p = path; *p; ++p)
    if (ONE_OF_2(*p, '/',','))
      *p = '_';
  
  while (de = readdir(dir)) {
    DD("Considering file(%s)", de->d_name);
    if (memcmp(de->d_name, path, len) || de->d_name[len] != ',')
      continue;
    if (de->d_name[strlen(de->d_name)-1] == '~')  /* Ignore backups from hand edited EPRs. */
      continue;
    epr_len = read_all(sizeof(epr_buf), epr_buf, "find_epr",
		       "%s" ZXID_SES_DIR "%s/%s", cf->path, ses->sid, de->d_name);
    if (!epr_len)
      continue;
    zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, epr_buf, epr_buf + epr_len);
    r = zx_DEC_root(cf->ctx, 0, 1);
    /* *** add ID-WSF 1.1 handling */
    if (!r || !r->EndpointReference || !r->EndpointReference->Metadata
	|| !r->EndpointReference->Metadata->ServiceType
	|| !r->EndpointReference->Metadata->ServiceType->content
	|| !r->EndpointReference->Metadata->ServiceType->content->len) {
      ERR("Failed to parse epr_buf(%.*s)", epr_len, epr_buf);
      continue;
    }
    if (len != r->EndpointReference->Metadata->ServiceType->content->len
	|| memcmp(svc, r->EndpointReference->Metadata->ServiceType->content->s, len)) {
      D("Internal svctype(%.*s) does not match desired(%s)", r->EndpointReference->Metadata->ServiceType->content->len, r->EndpointReference->Metadata->ServiceType->content->s, svc);
      continue;
    }
    if (--n)
      continue;
    epr = r->EndpointReference;
    /* *** free root? */
    D("Found svc(%s) url(%.*s)", svc, r->EndpointReference->Address->gg.content->len, r->EndpointReference->Address->gg.content->s);
    break;
  }
  closedir(dir);
  return epr;
}

/*(i) First search epr cache, and if miss, go discover an EPR over the net.
 * This is the main work horse for WSCs wishing to call WSPs via EPR.
 *
 * cf:: ZXID configuration object, also used for memory allocation
 * ses:: Session object in whose EPR cache the file will be searched
 * svc:: Service type (usually a URN)
 * n:: How manieth matching instance is returned. 1 means first
 * return:: EPR data structure on success, 0 on failure (no discovery EPR in cache, or
 *     not found by the discovery service) */

/* Called by:  main x7, zxid_callf */
struct zx_a_EndpointReference_s* zxid_get_epr(struct zxid_conf* cf, struct zxid_ses* ses, char* svc, int n)
{
  struct zx_e_Envelope_s* env;
  struct zx_a_EndpointReference_s* epr;
  epr = zxid_find_epr(cf, ses, svc, n);
  if (epr)
    return epr;
  
  ERR("Discovering svc(%s)...", svc);
  env = zx_NEW_e_Envelope(cf->ctx);
  env->Header = zx_NEW_e_Header(cf->ctx);
  env->Body = zx_NEW_e_Body(cf->ctx);
  env->Body->Query = zxid_mk_di_query(cf, svc);
  epr = zxid_find_epr(cf, ses, zx_xmlns_di, 1);
  if (!epr) {
    ERR("EPR for svc(%s) not found in cache and no discovery EPR in cache, thus no way to discover the svc.", svc);
    return 0;
  }
  env = zxid_wsc_call(cf, ses, epr, env);
  if (env && env->Body) {
    if (env->Body->QueryResponse)
      for (epr = env->Body->QueryResponse->EndpointReference; epr; epr = ZX_NEXT(epr))
	zxid_cache_epr(cf, ses, epr);
    if (env->Body->QueryResponse)
      epr = env->Body->QueryResponse->EndpointReference;
    else
      epr = 0;
    if (!epr)
      ERR("No end point discovered for svc(%s)", svc);
    return epr;
  }
  ERR("discovery call failed envelope=%p", env);
  return 0;
}

/* EOF  --  zxidepr.c */
