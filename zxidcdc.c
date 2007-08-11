/* zxidcdc.c  -  Handwritten functions for Common Domain Cookie handling at SP
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidcdc.c,v 1.2 2007/02/23 05:00:29 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 * 16.1.2007, split from zxidlib.c --Sampo
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"

/* ============== CDC ============== */

/* Called by:  main, zxid_simple_cf */
int zxid_cdc_read(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  char* p;
  char* cdc = 0;
  char* cookie = getenv("HTTP_COOKIE");
  if (cookie) {
    cdc = strstr(cookie, "_saml_idp");
    if (!cdc)
      cdc = strstr(cookie, "_liberty_idp");
    if (cdc) {
      cdc = strchr(cdc, '=');
      if (cdc) {
	if (cdc[1] == '"') {
	  cdc += 2;
	  p = strchr(cdc, '"');
	  if (p)
	    *p = 0;
	  else
	    cdc = 0;
	} else
	  cdc = 0;
      }
    }
  }
  printf("Location: %s?o=E&c=%s\r\n\r\n", ZXID_URL, cdc?cdc:"");
  /* *** should prepare AuthnReq and redirect directly to the IdP (if any). */
  return 0;
}

/* Called by:  main, zxid_simple_cf */
int zxid_cdc_check(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  struct zxid_entity* ent;
  char* idp_eid;
  if (!cgi->cdc) return 0;
  for (idp_eid = strtok(cgi->cdc, " "); idp_eid; idp_eid = strtok(0, " ")) {
    if (!(ent = zxid_get_ent(cf, idp_eid)))
      continue;
    switch (cf->cdc_choice) {
    case ZXID_CDC_CHOICE_ALWAYS_FIRST:  /* Do not offer UI, always pick first on CDC list. */
      break;
    case ZXID_CDC_CHOICE_ALWAYS_LAST:   /* Do not offer UI, always pick last on CDC list. */
      /* *** How to detect "lastness" in strtok() list? */
      break;
    case ZXID_CDC_CHOICE_ALWAYS_ONLY:   /* If CDC has only one IdP, always pick it. */
      /* *** How to detect "onlyness" in strtok() list? */
      break;
    case ZXID_CDC_CHOICE_UI_PREF:       /* Offer UI with the CDC designated IdPs first. */
      /* *** */
      break;
    case ZXID_CDC_CHOICE_UI_NOPREF:     /* Offer UI. Do not give preference to CDC IdPs. */
      /* *** */
      break;
    default: NEVER("Bad CDC choice(%d)\n", cf->cdc_choice);
    }
  }
  return 1;
}

/* EOF  --  zxidcdc.c */
