/* zxidloc.c  -  Handwritten functions implementing service locator (based on metadata)
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidloc.c,v 1.6 2007-10-20 16:57:29 sampo Exp $
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

/*static struct zx_str err_res = { {0,0,0,0,0}, 42, "ERR-metadata-does-not-have-url-for-binding" };*/

/* ============== Service Locator ============= */

/* *** figure out a way to leverage commonality. */

/* Called by:  zxid_idp_loc x3, zxid_sp_dispatch x2, zxid_sp_dispatch_location x2 */
struct zx_str* zxid_idp_loc_raw(struct zxid_conf* cf, struct zxid_cgi* cgi,
				struct zxid_entity* idp_meta, int svc_type, char* binding, int req)
{
  struct zx_str* loc;
  struct zx_md_SingleLogoutService_s* slo_svc;
  struct zx_md_ManageNameIDService_s* mni_svc;
  
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
    loc = req ? slo_svc->Location : (slo_svc->ResponseLocation ? slo_svc->ResponseLocation : slo_svc->Location);
    if (!loc)
      break;
    return loc;
  case ZXID_MNI_SVC:
    for (mni_svc = idp_meta->ed->IDPSSODescriptor->ManageNameIDService;
	 mni_svc;
	 mni_svc = (struct zx_md_ManageNameIDService_s*)mni_svc->gg.g.n)
      if (mni_svc->Binding  && !memcmp(binding, mni_svc->Binding->s, mni_svc->Binding->len)
	  /*&& svc->index && !memcmp(end_pt_ix, svc->index->s, svc->index->len)*/
	  && mni_svc->Location)
	break;
    if (!mni_svc)
      goto nosvc;
    loc = req ? mni_svc->Location : (mni_svc->ResponseLocation ? mni_svc->ResponseLocation : mni_svc->Location);
    if (!loc)
      break;
    return loc;
  }

 nosvc:
  ERR("Entity(%.*s) does not have any %d service with %s binding (metadata problem)", svc_type, binding, idp_meta->eid_len, idp_meta->eid);
  return 0;
}

/* Called by:  zxid_idp_soap, zxid_sp_mni_location, zxid_sp_mni_redir, zxid_sp_slo_location, zxid_sp_slo_redir */
struct zx_str* zxid_idp_loc(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses,
			    struct zxid_entity* idp_meta, int svc_type, char* binding)
{
  zxid_get_ses_sso_a7n(cf, ses);
  
  if (ses->a7n) {
    return zxid_idp_loc_raw(cf, cgi, idp_meta, svc_type, binding, 1);
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

/* Called by:  zxid_sp_mni_soap, zxid_sp_slo_soap */
struct zx_root_s* zxid_idp_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses,
				struct zxid_entity* idp_meta, int svc_type, struct zx_e_Body_s* body)
{
  struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, idp_meta, svc_type, SAML2_SOAP);
  if (!loc)
    return 0;
  return zxid_soap_call_body(cf, loc, body);
}

/* EOF  --  zxidloc.c */
