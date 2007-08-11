/* zxidloc.c  -  Handwritten functions implementing service locator (based on metadata)
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidloc.c,v 1.3 2007/03/04 08:21:32 sampo Exp $
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
#include "saml2.h"
#include "c/zx-data.h"

/* ============== Service Locator ============= */

/* *** figure out a way to leverage commonality. */

/* Called by:  zxid_idp_loc x3, zxid_sp_dispatch x2, zxid_sp_dispatch_location x2 */
struct zx_str* zxid_idp_loc_raw(struct zxid_conf* cf, struct zxid_cgi* cgi,
				struct zx_sa_Issuer_s* Issuer, int svc_type, char* binding, int req)
{
  struct zx_md_SingleLogoutService_s* slo_svc;
  struct zx_md_ManageNameIDService_s* nireg_svc;
  struct zxid_entity* idp_meta;
  idp_meta = zxid_get_ent_ss(cf, Issuer->gg.content);
  if (!idp_meta) {
    ERR("Can not find metadata for IdP(%.*s).", Issuer->gg.content->len, Issuer->gg.content->s);
    return 0;
  }
  
  if (!idp_meta->ed->IDPSSODescriptor) {
    ERR("Entity(%.*s) does not have IdP SSO Descriptor (metadata problem)", idp_meta->eid_len, idp_meta->eid);
    return 0;
  }

  switch (svc_type) {
  case ZXID_SLO_SVC:
    for (slo_svc = idp_meta->ed->IDPSSODescriptor->SingleLogoutService;
	 slo_svc;
	 slo_svc = (struct zx_md_SingleLogoutService_s*)slo_svc->gg.g.n)
      if (slo_svc->Binding  && !memcmp(binding, slo_svc->Binding->s, slo_svc->Binding->len)
	  /*&& svc->index && !memcmp(end_pt_ix, svc->index->s, svc->index->len)*/
	  && slo_svc->Location)
	break;
    if (!slo_svc)
      goto nosvc;
    return req ? slo_svc->Location : slo_svc->ResponseLocation;
    break;
  case ZXID_NIREG_SVC:
    for (nireg_svc = idp_meta->ed->IDPSSODescriptor->ManageNameIDService;
	 nireg_svc;
	 nireg_svc = (struct zx_md_ManageNameIDService_s*)nireg_svc->gg.g.n)
      if (nireg_svc->Binding  && !memcmp(binding, nireg_svc->Binding->s, nireg_svc->Binding->len)
	  /*&& svc->index && !memcmp(end_pt_ix, svc->index->s, svc->index->len)*/
	  && nireg_svc->Location)
	break;
    if (!nireg_svc)
      goto nosvc;
    return req ? nireg_svc->Location : nireg_svc->ResponseLocation;
  }

 nosvc:
  ERR("Entity(%.*s) does not have any %d service with %s binding (metadata problem)", svc_type, binding, idp_meta->eid_len, idp_meta->eid);
  return 0;
}

/* Called by:  zxid_idp_soap, zxid_sp_nireg_location, zxid_sp_nireg_redir, zxid_sp_slo_location, zxid_sp_slo_redir */
struct zx_str* zxid_idp_loc(struct zxid_conf* cf, struct zxid_cgi* cgi,
			    struct zxid_ses* ses, int svc_type, char* binding)
{
  struct zx_md_SingleLogoutService_s* slo_svc;
  struct zx_md_ManageNameIDService_s* nireg_svc;
  struct zxid_entity* idp_meta;
  
  zxid_get_ses_sso_a7n(cf, ses);
  
  if (ses->a7n) {
    return zxid_idp_loc_raw(cf, cgi, ses->a7n->Issuer, svc_type, binding, 1);
  }
  if (ses->a7n11) {
    ERR("Not implemented: obtaining location from SAML 1.1 assetion %d", 0);
    //return zxid_idp_loc_raw(cf, cgi, ses->a7n->Issuer, svc_type, binding, 1);
  }
  if (ses->a7n12) {
    ERR("Not implemented: obtaining location from ID-FF 1.2 type SAML 1.1 assetion %d", 0);
    //return zxid_idp_loc_raw(cf, cgi, ses->a7n->Issuer, svc_type, binding, 1);
  }
  
  ERR("Session sid(%s) appears to lack SSO assertion.", ses->sid);
  return 0;
}

/* Called by:  zxid_sp_nireg_soap, zxid_sp_slo_soap */
struct zx_root_s* zxid_idp_soap(struct zxid_conf* cf, struct zxid_cgi* cgi,
				struct zxid_ses* ses, int svc_type, struct zx_e_Body_s* body)
{
  struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, svc_type, SAML2_SOAP);
  if (!loc)
    return 0;
  return zxid_soap_call_body(cf, loc, body);
}

/* EOF  --  zxidloc.c */
