/* zxida7n.c  -  Handwritten functions for Assertion handling
 * Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxida7n.c,v 1.2 2007/02/08 00:39:36 sampo Exp $
 *
 * 3.2.2007, created --Sampo
 *
 * See also: zxidsimp.c (attributes to LDIF), and zxidepr.c
 */

#include <string.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-ns.h"

/* Look into attribute statement(s) of an assertion and scan
 * for nth occurance of named attribute. Ordering of attributes
 * is accoring to their occurance in attribute statement, or
 * more broadly according to ordering of the attribute statements
 * themselves.
 * - NULL or zero length nfmt (name format) will match any
 * - NULL or zero length name will match any
 * - NULL or zero length friendly (name) will match any
 * - minus one (-1) as either length field will cause strlen() to be done
 * - the index n is one based
 */

struct zx_sa_Attribute_s* zxid_find_attribute(struct zx_sa_Assertion_s* a7n, int nfmt_len, char* nfmt, int name_len, char* name, int friendly_len, char* friendly, int n)
{
  struct zx_sa_Attribute_s* at;
  struct zx_sa_AttributeStatement_s* as;
  if (!nfmt) { nfmt_len = 0; nfmt = ""; }
  if (nfmt_len == -1 && nfmt) nfmt_len = strlen(nfmt);
  if (!name) { name_len = 0; name = ""; }
  if (name_len == -1 && name) name_len = strlen(name);
  if (!friendly) { friendly_len = 0; friendly = ""; }
  if (friendly_len == -1 && friendly) friendly_len = strlen(friendly);
  if (!a7n) {
    ERR("No assertion supplied (null assertion pointer) when looking for attribute nfmt(%.*s) name(%.*s) friendly(%.*s) n=%d", nfmt_len, nfmt, name_len, name, friendly_len, friendly, n);
    return 0;
  }
  for (as = a7n->AttributeStatement; as; as = (struct zx_sa_AttributeStatement_s*)as->gg.g.n)
    for (at = as->Attribute; at; at = (struct zx_sa_Attribute_s*)at->gg.g.n)
      if ((nfmt_len ? (at->NameFormat
		       && at->NameFormat->len == nfmt_len
		       && !memcmp(at->NameFormat->s, nfmt, nfmt_len)) : 1)
	  && (name_len ? (at->Name
			  && at->Name->len == name_len
			  && !memcmp(at->Name->s, name, name_len)) : 1)
	  && (friendly_len ? (at->FriendlyName
			      && at->FriendlyName->len == friendly_len
			      && !memcmp(at->FriendlyName->s, friendly, friendly_len)) : 1)) {
	--n;
	if (!n)
	  return at;
      }
  return 0;
}

/* EOF  --  zxida7n.c */
