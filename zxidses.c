/* zxidses.c  -  Handwritten functions for SP session handling
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidses.c,v 1.10 2007/02/26 04:38:21 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, split from zxidlib.c --Sampo
 * 5.2.2007,  added EPR handling --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-ns.h"

/* ============== Sessions ============== */

#define ZXID_MAX_SES (256)      /* Just the session nid and path to assertion */
#define ZXID_MAX_A7N (32*1024)

/* When session is loaded, we only get the reference to assertion. This
 * is to avoid parsing overhead when the assertion really is not needed.
 * But when the assertion is needed, you have to call this function to load
 * it from file (under /var/zxid/log/rely/EID/a7n/AID) and parse it. */

/* Called by:  zxid_idp_loc, zxid_ses_to_ldif, zxid_snarf_eprs_from_ses, zxid_sp_nireg_location, zxid_sp_nireg_redir, zxid_sp_nireg_soap, zxid_sp_slo_location, zxid_sp_slo_redir, zxid_sp_slo_soap */
int zxid_get_ses_sso_a7n(struct zxid_conf* cf, struct zxid_ses* ses)
{
  struct zx_str* nid;
  struct zx_root_s* r;
  int gotall;
  if (ses->a7n || ses->a7n11 || ses->a7n12)  /* already in cache */
    return 1;
  if (!ses->sso_a7n_path) {
    D("Session object does not have any SSO assertion sid(%s)", ses->sid);
    return 0;
  }
  ses->sso_a7n_buf = ZX_ALLOC(cf->ctx, ZXID_MAX_A7N);
  gotall = read_all(ZXID_MAX_A7N-1, ses->sso_a7n_buf, "get_ses_sso_a7n", "%s", ses->sso_a7n_path);
  if (!gotall)
    return 0;
  ses->sso_a7n_buf[gotall] = 0;
  
  DD("a7n(%.*s)", gotall, ses->sso_a7n_buf);
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, ses->sso_a7n_buf, ses->sso_a7n_buf + gotall);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r) {
    ERR("Failed to decode the sso assertion of session sid(%s) from  path(%s), a7n data(%.*s)",
	ses->sid, ses->sso_a7n_path, gotall, ses->sso_a7n_buf);
    return 0;
  }
  
  ses->a7n   = r->Assertion;
  ses->a7n11 = r->sa11_Assertion;
  ses->a7n12 = r->ff12_Assertion;
  if (ses->a7n)
    nid = ses->a7n->Subject->NameID->gg.content;
  else if (ses->a7n11)
    nid = ses->a7n11->AuthenticationStatement->Subject->NameIdentifier->gg.content;
  else if (ses->a7n12)
    nid = ses->a7n12->AuthenticationStatement->Subject->NameIdentifier->gg.content;
  
  if (nid) {
    if (ses->nid) {
      if (memcmp(ses->nid, nid->s, nid->len)) {
	ERR("Session sid(%s), nid(%s), SSO assertion in path(%s) had different nid(%.*s). a7n data(%.*s)",
	    ses->sid, ses->nid, ses->sso_a7n_path, nid->len, nid->s, gotall, ses->sso_a7n_buf);
      }
    } else
      ses->nid = zx_str_to_c(cf->ctx, nid);
  } else
    ERR("Session sid(%s) SSO assertion in path(%s) did not have Name ID. a7n data(%.*s)",
	ses->sid, ses->sso_a7n_path, gotall, ses->sso_a7n_buf);
  return 1;
}

/* Allocate memory and get session object from the filesystem */

/* Called by: */
struct zxid_ses* zxid_fetch_ses(struct zxid_conf* cf, char* sid)
{
  struct zxid_ses* ses = ZX_ZALLOC(cf->ctx, struct zxid_ses);
  if (sid && sid[0])
    if (!zxid_get_ses(cf, ses, sid)) {
      ZX_FREE(cf->ctx, ses);
      return 0;
    }
  return ses;
}

/* Get simple session object from the filesystem. This just gets the nameid
 * and reference to the assertion. Use zxid_get_ses_sso_a7n() to actually
 * load the assertion, if needed. */

/* Called by:  main, zxid_fetch_ses, zxid_simple_cf */
int zxid_get_ses(struct zxid_conf* cf, struct zxid_ses* ses, char* sid)
{
  char* p;
  int gotall;
  memset(ses, 0, sizeof(struct zxid_ses));
  ses->magic = ZXID_SES_MAGIC;

  gotall = strlen(sid);
  if (gotall != strspn(sid, safe_basis_64)) {
    ERR("EVIL Session ID(%s)", sid);
    return 0;
  }
  
  ses->sesbuf = ZX_ALLOC(cf->ctx, ZXID_MAX_SES);
  gotall = read_all(ZXID_MAX_SES-1, ses->sesbuf, "get_ses", "%s" ZXID_SES_DIR "%s/.ses", cf->path, sid);
  if (!gotall)
    return 0;
  DD("ses(%.*s) len=%d", gotall, ses->sesbuf, gotall);
  ses->sesbuf[gotall] = 0;
  DD("ses(%s)", ses->sesbuf);
  ses->sid = sid;
  ses->nid = ses->sesbuf;
  p = strchr(ses->sesbuf, '|');
  if (p) {
    *p++ = 0;
    ses->sso_a7n_path = p;
  }
  D("GOT ses(%s) nid(%s) sso_a7n_path(%s)", sid, ses->nid, STRNULLCHK(ses->sso_a7n_path));
  return 1;
}

/* Create new session object in file system. The assertion must have
 * been created separately. */

/* Called by:  zxid_sp_sso_finalize */
int zxid_put_ses(struct zxid_conf* cf, struct zxid_ses* ses)
{
  char dir[ZXID_MAX_BUF];
  char* sesbuf;
  int fd, len;
  struct zx_str* ss;
  
  if (ses->sid) {
    fd = strlen(ses->sid);
    if (fd != strspn(ses->sid, safe_basis_64)) {
      ERR("EVIL Session ID(%s)", ses->sid);
      return 0;
    }
  } else {  /* New session */
    ss = zxid_mk_id(cf, "S", ZXID_ID_BITS);
    ses->sid = ss->s;
    ZX_FREE(cf->ctx, ss);
  }
  
  name_from_path(dir, sizeof(dir), "%s" ZXID_SES_DIR "%s", cf->path, ses->sid);
  if (MKDIR(dir, 0777) && errno != EEXIST) {
    perror("mkdir for session");
    ERR("Creating session directory(%s) failed", dir);
    return 0;
  }
  
  fd = open_fd_from_path(O_CREAT | O_WRONLY | O_TRUNC, 0666, "put_ses", "%s" ZXID_SES_DIR "%s/.ses", cf->path, ses->sid);
  if (fd == -1) return 0;
  
  sesbuf = ZX_ALLOC(cf->ctx, ZXID_MAX_SES);
  
  /* The new thinking is to reference the assertions from /var/zxid/log/rely/E/a7n/AID */
  len = snprintf(sesbuf, ZXID_MAX_SES, "%s|%s", ses->nid, STRNULLCHK(ses->sso_a7n_path));
  if (len < 0) {
    perror("snprintf");
    D("Broken snprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", len);
    len = 0;
  }
  if (write_all_fd(fd, sesbuf, len) == -1) {
    perror("Trouble writing session.");
    close(fd);
    return 0;
  }
  ZX_FREE(cf->ctx, sesbuf);
  close(fd);
  return 1;
}

/* Delete, or archive session object from file system. Assertion, if any,
 * is not deleted. */

/* Called by:  zxid_mgmt x3, zxid_simple_cf x4, zxid_sp_dispatch x2, zxid_sp_dispatch_location x2, zxid_sp_soap_dispatch */
int zxid_del_ses(struct zxid_conf* cf, struct zxid_ses* ses)
{
  char old[ZXID_MAX_BUF];
  char new[ZXID_MAX_BUF];
  int len;
  if (!ses || !ses->sid) {
    D("No session in place. %d", 0);
    return 0;
  }
  
  if (ses->sid) {
    len = strlen(ses->sid);
    if (len != strspn(ses->sid, safe_basis_64)) {
      ERR("EVIL Session ID(%s)", ses->sid);
      return 0;
    }
  }
  
  if (!name_from_path(old, sizeof(old), "%s" ZXID_SES_DIR "%s", cf->path, ses->sid))
    return 0;
  
  if (cf->ses_arch_dir) {
    if (!name_from_path(new, sizeof(new), "%s%s", cf->ses_arch_dir, ses->sid))
      return 0;
    if (rename(old,new) == -1) {
      perror("rename to archieve session");
      ERR("Deleting session by renaming failed old(%s) new(%s)", old, new);
      return 0;
    }
  } else {
    DIR* dir;
    struct dirent * de;
    
    dir = opendir(old);
    if (!dir) {
      perror("opendir to delete session");
      ERR("Deleting session by opendir failed old(%s)", old);
      return 0;
    }
    while (de = readdir(dir)) {
      if (de->d_name[0] == '.' && ONE_OF_2(de->d_name[1], '.', 0))   /* skip . and .. */
	continue;
      if (!name_from_path(new, sizeof(new), "%s" ZXID_SES_DIR "%s/%s", cf->path, ses->sid, de->d_name))
	return 0;
      if (unlink(new) == -1) {
	perror("unlink to delete files in session");
	ERR("Deleting session file(%s) by unlink failed", new);
	return 0;
      }
    }
    closedir(dir);
    if (rmdir(old) == -1) {
      perror("rmdir to delete session");
      ERR("Deleting session by rmdir failed old(%s)", old);
      return 0;
    }
  }
  return 1;
}

/* EOF  --  zxidses.c */
