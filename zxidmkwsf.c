/* zxidmkwsf.c  -  Handwritten nitty-gritty functions for constructing various elems
 * Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidmkwsf.c,v 1.7 2007/05/10 18:19:57 sampo Exp $
 *
 * 12.1.2007, created --Sampo
 */

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "wsf.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

/* *** What correct API should look like? This is still in flux
 * and the initial goal is just to make single query for single
 * service. All other complicated options and multi service queries
 * will come in later releases. */

/* Called by:  zxid_mk_di_query */
struct zx_di_RequestedService_s* zxid_mk_di_req_svc(struct zxid_conf* cf, int req_id, char* svc_type)
{
  struct zx_di_RequestedService_s* rs = zx_NEW_di_RequestedService(cf->ctx);
#if 0
  rs->reqID = zx_strf(cf->ctx, "RS%x", req_id);
  rs->resultType = zx_ref_str(cf->ctx, "all");  /* OPTIONAL: "best", "only-one" */
  rs->FrameWork = zx_NEW_di_Framework(cf->ctx);
  rs->FrameWork->version = zx_ref_str(cf->ctx, "XXX");  /* Request specific framework, omit=any */
  rs->Action;
  rs->Options;
  rs->SecurityMechID = zx_ref_simple_elem(cf->ctx, WSF20_SEC_MECH_TLS_BEARER);
  rs->SecurityMechID = zx_ref_simple_elem(cf->ctx, WSF20_SEC_MECH_TLS_SAML2);
#endif
  if (svc_type)
    rs->ServiceType = zx_ref_simple_elem(cf->ctx, svc_type);
  return rs;
}

/* Called by:  main */
struct zx_di_Query_s* zxid_mk_di_query(struct zxid_conf* cf, char* svc_type)
{
  struct zx_di_Query_s* q = zx_NEW_di_Query(cf->ctx);
  struct zx_di_RequestedService_s* rq;
  q->RequestedService = zxid_mk_di_req_svc(cf, 1, svc_type);
  return q;
}

struct zx_a_Address_s* zxid_mk_addr(struct zxid_conf* cf, struct zx_str* url)
{
  struct zx_a_Address_s* addr = zx_NEW_a_Address(cf->ctx);
  addr->gg.content = url;
  return addr;
}

/* --------------- DAP: Select and QueryItem -------------- */

struct zx_dap_Select_s* zxid_mk_dap_select(struct zxid_conf* cf, char* dn, char* filter, char* attributes, int derefaliases, int scope, int sizelimit, int timelimit, int typesonly)
{
  struct zx_dap_Select_s* sel = zx_NEW_dap_Select(cf->ctx);
  if (dn)           sel->dn = zx_ref_simple_elem(cf->ctx, dn);
  if (filter)       sel->filter = zx_ref_simple_elem(cf->ctx, filter);
  if (attributes)   sel->attributes = zx_ref_str(cf->ctx, attributes);
  if (derefaliases) sel->derefaliases = zx_strf(cf->ctx, "%d", derefaliases);
  if (scope)        sel->scope = zx_strf(cf->ctx, "%d", scope);
  if (sizelimit)    sel->sizelimit = zx_strf(cf->ctx, "%d", sizelimit);
  if (timelimit)    sel->timelimit = zx_strf(cf->ctx, "%d", timelimit);
  if (typesonly)    sel->typesonly = zx_ref_str(cf->ctx, ZXID_TRUE);
  return sel;
}

struct zx_dap_QueryItem_s* zxid_mk_dap_query_item(struct zxid_conf* cf, struct zx_dap_Select_s* sel, char* objtype, char* predef, char* sort, char* changed_since, int incl_common_attr, int offset, int count, char* setreq, char* setid, char* contingent_itemidref)
{
  struct zx_dap_QueryItem_s* qi = zx_NEW_dap_QueryItem(cf->ctx);
  qi->Select = sel;
  if (objtype)       qi->objectType = zx_ref_str(cf->ctx, objtype);
  if (changed_since) qi->changedSince = zx_ref_str(cf->ctx, changed_since);
  if (predef)        qi->predefined = zx_ref_str(cf->ctx, predef);
  if (sort)          qi->Sort = zx_ref_simple_elem(cf->ctx, sort);

#if 0
  /* ID-DAP specification only allows ChangeFormat == "currentElements"
   * and in fact recommends omitting it altogether. */
  if (changed_elems)
    qi->ChangeFormat = zx_ref_simple_elem(cf->ctx, "changedElements");
  if (curr_elems) {
    if (qi->ChangeFormat)
      qi->ChangeFormat->g.n = (struct zx_node_s*)zx_ref_simple_elem(cf->ctx, "currentElements");
    else
      qi->ChangeFormat = zx_ref_simple_elem(cf->ctx, "currentElements");
  }
#endif

  if (incl_common_attr) qi->includeCommonAttributes = zx_ref_str(cf->ctx, ZXID_TRUE);
  if (offset)           qi->offset = zx_strf(cf->ctx, "%d", offset);
  if (count)            qi->count = zx_strf(cf->ctx, "%d", count);
  
  if (setreq) qi->setReq = zx_ref_str(cf->ctx, setreq);  /* Request new set */
  if (setid)  qi->setID = zx_ref_str(cf->ctx, setid);    /* Continue to use existing set */
  
  qi->itemID = zxid_mk_id(cf, "qi", ZXID_ID_BITS);
  
  if (contingent_itemidref) {
    qi->itemIDRef = zx_ref_str(cf->ctx, contingent_itemidref);
    qi->contingency = zx_ref_str(cf->ctx, ZXID_TRUE);
  }
  return qi;
}

/* --------------- DAP: Test -------------- */

struct zx_dap_TestOp_s* zxid_mk_dap_testop(struct zxid_conf* cf, char* dn, char* filter, char* attributes, int derefaliases, int scope, int sizelimit, int timelimit, int typesonly)
{
  struct zx_dap_TestOp_s* sel = zx_NEW_dap_TestOp(cf->ctx);
  if (dn)           sel->dn = zx_ref_simple_elem(cf->ctx, dn);
  if (filter)       sel->filter = zx_ref_simple_elem(cf->ctx, filter);
  if (attributes)   sel->attributes = zx_ref_str(cf->ctx, attributes);
  if (derefaliases) sel->derefaliases = zx_strf(cf->ctx, "%d", derefaliases);
  if (scope)        sel->scope = zx_strf(cf->ctx, "%d", scope);
  if (sizelimit)    sel->sizelimit = zx_strf(cf->ctx, "%d", sizelimit);
  if (timelimit)    sel->timelimit = zx_strf(cf->ctx, "%d", timelimit);
  if (typesonly)    sel->typesonly = zx_ref_str(cf->ctx, ZXID_TRUE);
  return sel;
}

struct zx_dap_TestItem_s* zxid_mk_dap_test_item(struct zxid_conf* cf, struct zx_dap_TestOp_s* top, char* objtype, char* predef)
{
  struct zx_dap_TestItem_s* ti = zx_NEW_dap_TestItem(cf->ctx);
  ti->TestOp = top;
  ti->id = ti->itemID = zxid_mk_id(cf, "ti", ZXID_ID_BITS);
  if (objtype) ti->objectType = zx_ref_str(cf->ctx, objtype);
  if (predef)  ti->predefined = zx_ref_str(cf->ctx, predef);
  return ti;
}

/* --------------- DAP: ResultQuery and Subscription -------------- */

struct zx_dap_ResultQuery_s* zxid_mk_dap_resquery(struct zxid_conf* cf, struct zx_dap_Select_s* sel, char* objtype, char* predef, char* sort, char* changed_since, int incl_common_attr, char* contingent_itemidref)
{
  struct zx_dap_ResultQuery_s* qi = zx_NEW_dap_ResultQuery(cf->ctx);
  qi->Select = sel;
  if (objtype)       qi->objectType = zx_ref_str(cf->ctx, objtype);
  if (changed_since) qi->changedSince = zx_ref_str(cf->ctx, changed_since);
  if (predef)        qi->predefined = zx_ref_str(cf->ctx, predef);
  if (sort)          qi->Sort = zx_ref_simple_elem(cf->ctx, sort);

#if 0
  /* ID-DAP specification only allows ChangeFormat == "currentElements"
   * and in fact recommends omitting it altogether. */
  if (changed_elems)
    qi->ChangeFormat = zx_ref_simple_elem(cf->ctx, "changedElements");
  if (curr_elems) {
    if (qi->ChangeFormat)
      qi->ChangeFormat->g.n = (struct zx_node_s*)zx_ref_simple_elem(cf->ctx, "currentElements");
    else
      qi->ChangeFormat = zx_ref_simple_elem(cf->ctx, "currentElements");
  }
#endif
  
  if (incl_common_attr) qi->includeCommonAttributes = zx_ref_str(cf->ctx, ZXID_TRUE);
  
  qi->itemID = zxid_mk_id(cf, "qi", ZXID_ID_BITS);
  
  if (contingent_itemidref) {
    qi->itemIDRef = zx_ref_str(cf->ctx, contingent_itemidref);
    qi->contingency = zx_ref_str(cf->ctx, ZXID_TRUE);
  }
  return qi;
}

struct zx_dap_Subscription_s* zxid_mk_dap_subscription(struct zxid_conf* cf, char* subsID, char* itemidref, struct zx_dap_ResultQuery_s* rq, char* aggreg, char* trig, char* starts, char* expires, int incl_data, char* admin_notif, char* notify_ref)
{
  struct zx_dap_Subscription_s* subs = zx_NEW_dap_Subscription(cf->ctx);
  if (itemidref) {
    subs->RefItem = zx_NEW_subs_RefItem(cf->ctx);
    subs->RefItem->itemIDRef = zx_ref_str(cf->ctx, itemidref);
    if (subsID)
      subs->RefItem->subscriptionID = zx_ref_str(cf->ctx, subsID);
  }
  subs->ResultQuery = rq;
  if (aggreg)  subs->Aggregation = zx_ref_simple_elem(cf->ctx, aggreg);
  if (trig)    subs->Trigger = zx_ref_simple_elem(cf->ctx, trig);
  if (starts)  subs->starts = zx_ref_str(cf->ctx, starts);
  if (expires) subs->expires = zx_ref_str(cf->ctx, expires);
  if (incl_data)   subs->includeData = zx_ref_str(cf->ctx, ZXID_TRUE);
  if (admin_notif) subs->adminNotifyToRef = zx_ref_str(cf->ctx, admin_notif);
  if (notify_ref)  subs->notifyToRef = zx_ref_str(cf->ctx, notify_ref);
  subs->subscriptionID = zxid_mk_id(cf, "subs", ZXID_ID_BITS);;
  return subs;
}

/* --------------- DAP: Query -------------- */

struct zx_dap_Query_s* zxid_mk_dap_query(struct zxid_conf* cf, struct zx_dap_TestItem_s* tis, struct zx_dap_QueryItem_s* qis, struct zx_dap_Subscription_s* subs)
{
  struct zx_dap_Query_s* q = zx_NEW_dap_Query(cf->ctx);
  q->TestItem = tis;
  q->QueryItem = qis;
  q->Subscription = subs;
  q->itemID = zx_ref_str(cf->ctx, "QRY");
  return q;
}

/* EOF  --  zxidmkwsf.c */
