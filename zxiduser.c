/* zxiduser.c  -  Handwritten functions for SP user local account management
 * Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxiduser.c,v 1.3 2007-10-20 16:57:29 sampo Exp $
 *
 * 12.10.2007, created --Sampo
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

#define ZXID_MAX_USER (256)

/* Locate user file using a NameID, which may be old or current. If old,
 * chase the MNIptr fields until current is found. */

struct zx_sa_NameID_s* zxid_get_user_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* oldnid)
{
  char sha1_name[28];
  char* buf;
  char* p;
  char* idpent;
  char* spqual;
  char* nid;
  char* mniptr;
  struct zx_str* ss;
  struct zx_sa_NameID_s* nameid;
  
  if (!cf->user_local)
    return oldnid;
  
  if (!oldnid->NameQualifier) {
    sha1_safe_base64(sha1_name, oldnid->gg.content->len, oldnid->gg.content->s);
  } else {
    ss = zx_strf(cf->ctx, "%.*s|%.*s", oldnid->NameQualifier->len, oldnid->NameQualifier->s, oldnid->gg.content->len, oldnid->gg.content->s);
    sha1_safe_base64(sha1_name, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
  }
  sha1_name[27] = 0;
  buf = ZX_ALLOC(cf->ctx, ZXID_MAX_USER);
  mniptr = sha1_name;

  while (mniptr && *mniptr) {
    read_all(ZXID_MAX_USER, buf, __FUNCTION__, "%s" ZXID_USER_DIR "%s/.mni", cf->path, mniptr);

    p = strchr(buf, '|');
    if (!p) {
      idpent = 0;
      spqual = 0;
      nid = 0;
      mniptr = 0;
    } else {
      *p = 0;
      idpent = ++p;
      p = strchr(p, '|');
      if (!p) {
	spqual = 0;
	nid = 0;
	mniptr = 0;
      } else {
	*p = 0;
	spqual = ++p;
	p = strchr(p, '|');
	if (!p) {
	  nid = 0;
	  mniptr = 0;
	} else {
	  *p = 0;
	  nid = ++p;
	  p = strchr(p, '|');
	  if (!p) {
	    mniptr = 0;
	  } else {
	    *p = 0;
	    mniptr = ++p;
	    p = strchr(p, '|');
	    if (p)
	      *p = 0;
	  }
	}
      }
    }
    if (!mniptr || !*mniptr)
      break;
    if (!strcmp(mniptr, sha1_name)) {
      ERR("Infinite loop in MNI changed NameIDs in user database mniptr(%s)", mniptr);
      break;
    }
  }
  
  nameid = zx_NEW_sa_NameID(cf->ctx);
  if (buf && *buf)
    nameid->Format = zx_ref_str(cf->ctx, buf);
  if (idpent && *idpent)
    nameid->NameQualifier = zx_ref_str(cf->ctx, idpent);
  if (spqual && *spqual)
    nameid->SPNameQualifier = zx_ref_str(cf->ctx, spqual);
  if (nid && *nid)
    nameid->gg.content = zx_ref_str(cf->ctx, nid);
  return nameid;
}

/* Change a NameID to newnym. Old NameID's user entry is rewritten to have mniptr */

/* Called by: zxid_mni_do */
void zxid_user_change_nameid(struct zxid_conf* cf, struct zx_sa_NameID_s* oldnid, struct zx_str* newnym)
{
  struct zx_str* ss;
  char sha1_name[28];

  if (!oldnid->NameQualifier) {
    sha1_safe_base64(sha1_name, newnym->len, newnym->s);
  } else {
    ss = zx_strf(cf->ctx, "%.*s|%.*s", oldnid->NameQualifier->len, oldnid->NameQualifier->s, newnym->len, newnym->s);
    sha1_safe_base64(sha1_name, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
  }
  sha1_name[27] = 0;

  zxid_put_user(cf, oldnid->Format, oldnid->NameQualifier, oldnid->SPNameQualifier, newnym, 0);
  zxid_put_user(cf, oldnid->Format, oldnid->NameQualifier, oldnid->SPNameQualifier, oldnid->gg.content, sha1_name);
}

/* Create new session object in file system. The assertion must have
 * been created separately. */

/* Called by:  zxid_sp_sso_finalize */
int zxid_put_user(struct zxid_conf* cf, struct zx_str* nidfmt, struct zx_str* idpent, struct zx_str* spqual, struct zx_str* idpnid, char* mniptr)
{
  char sha1_name[28];
  char dir[ZXID_MAX_BUF];
  char* buf;
  struct zx_str* ss;
  
  if (!cf->user_local)
    return 0;
  
  if (!idpnid) {
    ERR("Missing NameID %p", idpent);
    return 0;
  }
  
  if (!idpent) {
    sha1_safe_base64(sha1_name, idpnid->len, idpnid->s);
  } else {
    ss = zx_strf(cf->ctx, "%.*s|%.*s", idpent->len, idpent->s, idpnid->len, idpnid->s);
    sha1_safe_base64(sha1_name, ss->len, ss->s);
    zx_str_free(cf->ctx, ss);
  }
  sha1_name[27] = 0;
  
  name_from_path(dir, sizeof(dir), "%s" ZXID_USER_DIR "%s", cf->path, sha1_name);
  if (MKDIR(dir, 0777) && errno != EEXIST) {
    perror("mkdir for user");
    ERR("Creating user directory(%s) failed", dir);
    return 0;
  }
  
  buf = ZX_ALLOC(cf->ctx, ZXID_MAX_USER);
  write_all_path_fmt("put_user", ZXID_MAX_USER, buf,
		     "%s" ZXID_USER_DIR "%s/.mni", cf->path, sha1_name,
		     "%.*s|%.*s|%.*s|%.*s|%s",
		     nidfmt?nidfmt->len:0, nidfmt?nidfmt->s:"",
		     idpent?idpent->len:0, idpent?idpent->s:"",
		     spqual?spqual->len:0, spqual?spqual->s:"",
		     idpnid->len, idpnid->s,
		     STRNULLCHK(mniptr));
  ZX_FREE(cf->ctx, buf);
  return 1;
}

/* EOF  --  zxiduser.c */
