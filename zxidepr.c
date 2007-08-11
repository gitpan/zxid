/* zxidepr.c  -  Handwritten functions for EPR and bootstrap handling
 * Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidepr.c,v 1.9 2007-06-21 23:32:32 sampo Exp $
 *
 * 5.2.2007, created --Sampo
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

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-ns.h"

/* Compute (and fold) unique EPR name according to /var/zxid/ses/SESID/SVC-SHA1 */

/* Called by:  zxid_snarf_eprs_from_ses x2 */
int zxid_epr_path(struct zxid_conf* cf, struct zxid_ses* ses,
		  char* buf, int buf_len, struct zx_str* svc, struct zx_str* cont)
{
  char* p;
  char* q;
  int len;
  char sha1_cont[28];
  sha1_safe_base64(sha1_cont, cont->len, cont->s);
  sha1_cont[27] = 0;
  len = snprintf(buf, buf_len, "%s" ZXID_SES_DIR "%s/%.*s,%s", cf->path, ses->sid, svc->len, svc->s, sha1_cont);
  if (len < 0) {
    perror("snprintf");
    D("Broken snprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", len);
    if (buf && buf_len > 0)
      buf[0] = 0;
    return 0;
  }

  /* Sanity scan the svc part, folding dangerous chars to _. */
  p = buf + cf->path_len + sizeof(ZXID_SES_DIR)-1 + strlen(ses->sid) + 1;
  q = MIN(p + svc->len, buf + buf_len);
  for (; p<q; ++p)
    if (ONE_OF_2(*p, '/',','))
      *p = '_';
  return 0;
}

int zxid_cache_epr(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_a_EndpointReference_s* epr)
{
  int fd;
  struct zx_str* ss;
  char path[ZXID_MAX_BUF];
  if (!epr)
    return 0;

  if (!epr->Metadata) {
    ERR("EPR is not a ID-WSF 2.0 Bootstrap: no Metadata %d", 0);
    return 0;
  }
  ss = zx_EASY_ENC_WO_a_EndpointReference(cf->ctx, epr);
  zxid_epr_path(cf, ses, path, sizeof(path),
		epr->Metadata->ServiceType->content, ss);
  fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666);
  if (fd == -1) {
    perror("open for write epr");
    ERR("EPR path(%s) creation failed", path);
  } else if (write_all_fd(fd, ss->s, ss->len) == -1) {
    perror("Trouble writing EPR");
    close(fd);
  } else
    close(fd);
  zx_str_free(cf->ctx, ss);
  return 1;
}

/* Look into attribute statements of a SSO assertion and extract anything
 * that looks like EPR, storing results in the session for later reference.
 * N.B. This approach ignores the official attribute names totally. Anything
 * that looks like EPR and that is strcturally in right place will work.
 * Typical name /var/zxid/ses/SESID/SVCTYPE,SHA1 */

/* Called by:  zxid_sp_sso_finalize */
int zxid_snarf_eprs_from_ses(struct zxid_conf* cf, struct zxid_ses* ses)
{
  struct zx_sa_AttributeStatement_s* as;
  struct zx_sa_Attribute_s* at;
  struct zx_sa_AttributeValue_s* av;
  int fd, wsf11 = 0, wsf20 = 0;
  
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
	    
	    zxid_epr_path(cf, ses, path, sizeof(path),
			  av->EndpointReference->Metadata->ServiceType->content, ss);
	    fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666);
	    if (fd == -1) {
	      perror("open for write epr");
	      ERR("EPR path(%s) creation failed", path);
	    } else if (write_all_fd(fd, ss->s, ss->len) == -1) {
	      perror("Trouble writing EPR");
	      close(fd);
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

/* Search the EPRs cached under the session for a match. First directory is searched
 * for files whose name starts by service type. These files are opened and parsed
 * as EPR and further checks are made. The nth match is returned. 1 means first.
 * Typical name: /var/zxid/ses/SESID/SVCTYPE,SHA1 */

/* Called by:  main */
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
      D("Internal svctype(.*s) does not match desired(%s)", r->EndpointReference->Metadata->ServiceType->content->len, r->EndpointReference->Metadata->ServiceType->content->s, svc);
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

/* First search epr cache, and if miss, go discover an EPR */

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
