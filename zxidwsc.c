/* zxidwsc.c  -  Handwritten nitty-gritty functions for Liberty ID-WSF Web Services Client
 * Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidwsc.c,v 1.15 2009-10-16 13:36:33 sampo Exp $
 *
 * 7.1.2007,  created --Sampo
 * 7.10.2008, added documentation --Sampo
 */

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "wsf.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

#define BOOL_STR_TEST(x) ((x) && (x) != '0')

/*() Try to map security mechanisms across different frame works. Low level function. */

/* Called by:  zxid_wsc_call */
int zxid_map_sec_mech(struct zx_a_EndpointReference_s* epr)
{
  int len;
  char* s;
  if (!epr)
    return 0;
  if (!epr->Metadata)
    return 0;
  if (!epr->Metadata->SecurityContext)
    return 0;
  if (!epr->Metadata->SecurityContext->SecurityMechID)
    return 0;
  
  len = epr->Metadata->SecurityContext->SecurityMechID->content->len;
  s = epr->Metadata->SecurityContext->SecurityMechID->content->s;

  if (!len || !s)
    return 0;

#define SEC_MECH_TEST(ret, val) if (len == sizeof(val)-1 && !memcmp(s, val, sizeof(val)-1)) return ret;
  
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF10_SEC_MECH_NULL_BEARER);
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF10_SEC_MECH_TLS_BEARER);
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF11_SEC_MECH_NULL_BEARER);
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF11_SEC_MECH_TLS_BEARER);
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF11_SEC_MECH_CLTLS_BEARER);
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF20_SEC_MECH_NULL_BEARER);
  SEC_MECH_TEST(ZXID_SEC_MECH_BEARER, WSF20_SEC_MECH_TLS_BEARER);
     
  SEC_MECH_TEST(ZXID_SEC_MECH_NULL, WSF11_SEC_MECH_NULL_NULL);
  SEC_MECH_TEST(ZXID_SEC_MECH_NULL, WSF11_SEC_MECH_TLS_NULL);
  SEC_MECH_TEST(ZXID_SEC_MECH_NULL, WSF11_SEC_MECH_CLTLS_NULL);
  SEC_MECH_TEST(ZXID_SEC_MECH_NULL, WSF20_SEC_MECH_NULL_NULL);
  SEC_MECH_TEST(ZXID_SEC_MECH_NULL, WSF20_SEC_MECH_TLS_NULL);

  SEC_MECH_TEST(ZXID_SEC_MECH_X509, WSF11_SEC_MECH_NULL_X509);
  SEC_MECH_TEST(ZXID_SEC_MECH_X509, WSF11_SEC_MECH_TLS_X509);
  SEC_MECH_TEST(ZXID_SEC_MECH_X509, WSF11_SEC_MECH_CLTLS_X509);
  
  SEC_MECH_TEST(ZXID_SEC_MECH_SAML, WSF11_SEC_MECH_NULL_SAML);
  SEC_MECH_TEST(ZXID_SEC_MECH_SAML, WSF11_SEC_MECH_TLS_SAML);
  SEC_MECH_TEST(ZXID_SEC_MECH_SAML, WSF11_SEC_MECH_CLTLS_SAML);
  SEC_MECH_TEST(ZXID_SEC_MECH_SAML, WSF20_SEC_MECH_NULL_SAML2);
  SEC_MECH_TEST(ZXID_SEC_MECH_SAML, WSF20_SEC_MECH_TLS_SAML2);
  SEC_MECH_TEST(ZXID_SEC_MECH_SAML, WSF20_SEC_MECH_CLTLS_SAML2);
     
  SEC_MECH_TEST(ZXID_SEC_MECH_PEERS, WSF20_SEC_MECH_CLTLS_PEERS2);

  ERR("Unknown security mechanism(%.*s), taking a guess...", len, s);
  
  if (len >= sizeof("Bearer")-1 && zx_memmem(s, len, "Bearer", sizeof("Bearer")-1))
    return ZXID_SEC_MECH_BEARER;
  if (len >= sizeof("SAML")-1 && zx_memmem(s, len, "SAML", sizeof("SAML")-1))
    return ZXID_SEC_MECH_BEARER;
  if (len >= sizeof("X509")-1 && zx_memmem(s, len, "X509", sizeof("X509")-1))
    return ZXID_SEC_MECH_BEARER;
  
  return 0;
}

/*(i) zxid_wsc_call() implements the main low level ID-WSF web service call logic, including
 * preparation of SOAP headers, use of sec mech (e.g. preparation of wsse:Security
 * header and signing of appropriate compoments of the message), and sequencing
 * of the call. In particular, it is possible that WSP requests user interaction
 * and thus the caller web application will need to perform a redirect and then
 * later call this function again to continue the web service call after interaction.
 *
 * env (rather than Body) is taken as argument so that caller can prepare
 * additional SOAP headers at will before calling this function. This function
 * will add Liberty ID-WSF specific SOAP headers. */

/* Called by:  main x15, zxid_callf, zxid_get_epr */
struct zx_e_Envelope_s* zxid_wsc_call(struct zxid_conf* cf, struct zxid_ses* ses, struct zx_a_EndpointReference_s* epr, struct zx_e_Envelope_s* env)
{
  int i, res, secmech;
  struct zx_root_s* root;

  if (!env || !env->Body) {
    ERR("NULL SOAP envelope or body %p", env);
    return 0;
  }
  
  if (!env->Header)
    env->Header = zx_NEW_e_Header(cf->ctx);
  
  /* Populate SOAP headers. */
  
  env->Header->Framework = zx_NEW_sbf_Framework(cf->ctx);
  env->Header->Framework->version = zx_ref_str(cf->ctx, "2.0");
  env->Header->Framework->Id = zx_ref_str(cf->ctx, "FWK");
  env->Header->Framework->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->Framework->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);

#if 0
  /* *** Conor claims Sender is not mandatory */
  env->Header->Sender = zx_NEW_b_Sender(cf->ctx);
  env->Header->Sender->Id = zx_ref_str(cf->ctx, "PRV");
  env->Header->Sender->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->Sender->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
  if (cf->affiliation)
    env->Header->Sender->affiliationID = zx_ref_str(cf->ctx, cf->affiliation);
  env->Header->Sender->providerID = zxid_my_entity_id(cf);
#endif

#if 0
  /**** for now, this is just implied by the sec mech */
  env->Header->TargetIdentity = zx_NEW_b_TargetIdentity(cf->ctx);
  env->Header->TargetIdentity->Id = zx_ref_str(cf->ctx, "TRG");
  env->Header->TargetIdentity->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->TargetIdentity->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  env->Header->RelatesTo = zx_NEW_a_RelatesTo(cf->ctx);
  env->Header->RelatesTo->gg.content = zx_ref_str(cf->ctx, );
  env->Header->RelatesTo->Id = zx_ref_str(cf->ctx, "RELxxx");
  env->Header->RelatesTo->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->RelatesTo->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

  env->Header->To = zx_NEW_a_To(cf->ctx);
  env->Header->To->gg.content = epr->Address->gg.content;
  env->Header->To->Id = zx_ref_str(cf->ctx, "TO");
  env->Header->To->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->To->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);

#if 0
  env->Header->Action = zx_NEW_a_Action(cf->ctx);
  env->Header->Action->gg.content = zx_ref_str(cf->ctx, ***);
  env->Header->Action->Id = zx_ref_str(cf->ctx, "ACT");
  env->Header->Action->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->Action->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  env->Header->From = zx_NEW_a_From(cf->ctx);
  env->Header->From->Address = zxid_mk_addr(cf, zx_strf(cf->ctx, "%s?o=P", cf->url));
  env->Header->From->Id = zx_ref_str(cf->ctx, "FRM");
  env->Header->From->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->From->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  /* Usually not relevant for a request. */
  env->Header->ReplyTo = zx_NEW_a_ReplyTo(cf->ctx);
  env->Header->ReplyTo->Address = zxid_mk_addr(cf, zx_strf(cf->ctx, "%s?o=P", cf->url));
  env->Header->ReplyTo->Id = zx_ref_str(cf->ctx, "REP");
  env->Header->ReplyTo->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->ReplyTo->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  /* Omission means to use same address as ReplyTo */
  env->Header->FaultTo = zx_NEW_a_FaultTo(cf->ctx);
  env->Header->FaultTo->Address = zx_mk_addr(cf->ctx, zx_strf(cf->ctx, "%s?o=P", cf->url));
  env->Header->FaultTo->Id = zx_ref_str(cf->ctx, "FLT");
  env->Header->FaultTo->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->FaultTo->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  env->Header->ReferenceParameters = zx_NEW_a_ReferenceParameters(cf->ctx);
  env->Header->ReferenceParameters->Id = zx_ref_str(cf->ctx, "PAR");
  env->Header->->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->ReferenceParameters->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  /* If you want this header, you should
   * create it prior to calling zxid_wsc_call() */
  env->Header->UsageDirective = zx_NEW_b_UsageDirective(cf->ctx);
  env->Header->UsageDirective->Id = zx_ref_str(cf->ctx, "DIR");
  env->Header->UsageDirective->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->UsageDirective->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif

#if 0
  /* Interaction or redirection. If you want this header, you should
   * create it prior to calling zxid_wsc_call() */
  env->Header->UserInteraction = zx_NEW_b_UserInteraction(cf->ctx);
  env->Header->UserInteraction->Id = zx_ref_str(cf->ctx, "UIA");
  env->Header->UserInteraction->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->UserInteraction->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
#endif
  
  env->Header->Security = zx_NEW_wsse_Security(cf->ctx);
  env->Header->Security->Id = zx_ref_str(cf->ctx, "SEC");
  env->Header->Security->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->Security->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
  env->Header->Security->Timestamp = zx_NEW_wsu_Timestamp(cf->ctx);
  env->Header->Security->Timestamp->Created = zx_NEW_wsu_Created(cf->ctx);
  env->Header->Security->Timestamp->Id = zx_ref_str(cf->ctx, "TS");
  
  env->Header->MessageID = zx_NEW_a_MessageID(cf->ctx);
  env->Header->MessageID->Id = zx_ref_str(cf->ctx, "MID");
  env->Header->MessageID->actor = zx_ref_str(cf->ctx, SOAP_ACTOR_NEXT);
  env->Header->MessageID->mustUnderstand = zx_ref_str(cf->ctx, ZXID_TRUE);
  
  for (i=0; i < cf->max_soap_retry; ++i) {
    
    /* Every iteration gets its own MessageID, Timestamp, and credential assertion. */
    
    env->Header->MessageID->gg.content = zxid_mk_id(cf, "urn:M", ZXID_ID_BITS);;
    env->Header->Security->Timestamp->Created->gg.content = zxid_date_time(cf, time(0));
    
    /* Clear away any credentials from previous iteration. */
    env->Header->Security->Signature = 0;
    env->Header->Security->BinarySecurityToken = 0;
    env->Header->Security->SecurityTokenReference = 0;
    env->Header->Security->Assertion = 0;
    env->Header->Security->sa11_Assertion = 0;
    env->Header->Security->ff12_Assertion = 0;
    
    /* Sign all Headers that have Id set. See wsc_sign_sec_mech() */
    switch (secmech = zxid_map_sec_mech(epr)) {
    case ZXID_SEC_MECH_NULL:
      break;
    case ZXID_SEC_MECH_BEARER:
      env->Header->Security->Assertion = epr->Metadata->SecurityContext->Token->Assertion;
      env->Header->Security->SecurityTokenReference = zx_NEW_wsse_SecurityTokenReference(cf->ctx);
      env->Header->Security->SecurityTokenReference->KeyIdentifier = zx_NEW_wsse_KeyIdentifier(cf->ctx);
      env->Header->Security->SecurityTokenReference->KeyIdentifier->ValueType = zx_ref_str(cf->ctx, SAMLID_TOK_PROFILE);
      env->Header->Security->SecurityTokenReference->KeyIdentifier->gg.content = env->Header->Security->Assertion->ID;
      /* *** Sign SEC, MID, TO, ACT (if any) */
      break;
    case ZXID_SEC_MECH_SAML:
      env->Header->Security->Assertion = epr->Metadata->SecurityContext->Token->Assertion;
      /* *** Sign SEC, MID, TO, ACT (if any) */
      break;
    case ZXID_SEC_MECH_X509:
      /* *** Sign SEC, MID, TO, ACT (if any) */
      break;
    case ZXID_SEC_MECH_PEERS:
      /* *** ? */
      break;
    default:
      ERR("Unknown secmech %d", secmech);
    }
    
    root = zxid_soap_call_envelope(cf, epr->Address->gg.content, env);
    if (!root || !root->Envelope || !root->Envelope->Body) {
      ERR("soap call returned empty or seriously flawed response %p", root);
      return 0;
    }
    if (root->Envelope->Body->Fault) {
      D("SOAP Fault(%.*s) string(%.*s) actor(%.*s)", root->Envelope->Body->Fault->faultcode?root->Envelope->Body->Fault->faultcode->content->len:1, root->Envelope->Body->Fault->faultcode?root->Envelope->Body->Fault->faultcode->content->s:"?", root->Envelope->Body->Fault->faultstring?root->Envelope->Body->Fault->faultstring->content->len:1, root->Envelope->Body->Fault->faultstring?root->Envelope->Body->Fault->faultstring->content->s:"?", root->Envelope->Body->Fault->faultactor?root->Envelope->Body->Fault->faultactor->content->len:1, root->Envelope->Body->Fault->faultactor?root->Envelope->Body->Fault->faultactor->content->s:"?");
      return 0;
    }
    
    //res = zxid_wsf_analyze_result_headers(cf, ret);
    res = ZXID_OK;
    switch (res) {
    case ZXID_OK:
      return root->Envelope;
#if 0
    case ZXID_NEW_CRED:
      break;
    case ZXID_EP_MOVE:
      break;
    case ZXID_EP_UPDATE:
      break;
#endif
    case ZXID_REDIR_OK:
      D("Redirection requested (e.g. Interaction Service) %d", 0);
      return (void*)ZXID_REDIR_OK;
    default:
      ERR("Unknown result code: %d", res);
      return 0;
    }
  }
  ERR("Number of soap call retries exhausted max_soap_retry=%d", cf->max_soap_retry);
  return 0;
}

/* ----------------------------------------
 * Simplify writing WSCs */

static char zx_env_open[]  = "<e:Envelope xmlns:e=\""zx_xmlns_e"\"><e:Header></e:Header><e:Body>";
static char zx_env_close[] = "</e:Body></e:Envelope>";

/*() Create new SOAP envelope given the format string, which should
 * be XML as string parametrized with format specifiers. */

/* Called by:  zxid_callf, zxid_new_envf */
struct zx_e_Envelope_s* vzxid_new_envf(struct zxid_conf* cf, char* body_f, va_list ap)
{
  va_list ap2;
  int len;
  char* env_s;
  char buf[2]; 
  struct zx_root_s* r;
  struct zx_e_Envelope_s* env;
  
  /* First allocate temporary buffer for string representation of the SOAP Envelope */
  
  va_copy(ap2, ap);
  len = vsnprintf(buf, 1, body_f, ap2);
  va_end(ap2);
  if (len < 0) {
    perror("vsnprintf");
    D("Broken vsnprintf? Impossible to compute length of string. Be sure to `export LANG=C' if you get errors about multibyte characters. Length returned: %d", len);
    return 0;
  }
  env_s = ZX_ALLOC(cf->ctx, sizeof(zx_env_open)-1 + len + sizeof(zx_env_close)-1 + 1);
  
  /* Now render string representation of envelope and body payload. */
  
  memcpy(env_s, zx_env_open, sizeof(zx_env_open)-1);
  vsnprintf(env_s + sizeof(zx_env_open)-1, len+1, body_f, ap);
  memcpy(env_s + sizeof(zx_env_open)-1 + len, zx_env_close, sizeof(zx_env_close));
  D("env_s(%s)", env_s);

  /* Parse the envelope */

  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, env_s,
		     env_s + sizeof(zx_env_open)-1 + len + sizeof(zx_env_close)-1);
  r = zx_DEC_root(cf->ctx, 0, 1);
  env = r->Envelope;
  if (!env) {
    ERR("Malformed XML env_s(%s)", env_s);
  }
  ZX_FREE(cf->ctx, r);
  /* *** What about freeing env_s? Can't be done safely because some of
   *     the parsed data can reference it. Bohren conservative garbage
   *     collector would seem to be the only sane way to fix this. Of course
   *     none of this is an issue in CGI environment. */
  return env;
}

/* Called by:  main */
struct zx_e_Envelope_s* zxid_new_envf(struct zxid_conf* cf, char* body_f, ...)
{
  struct zx_e_Envelope_s* env;
  va_list ap;
  va_start(ap, body_f);
  env = vzxid_new_envf(cf, body_f, ap);
  va_end(ap);
  return env;
}

/*(i) Make a SOAP call given XML payload for SOAP <Body> specified by the
 * format string. This is your WSC work horse for calling almost any kind
 * of web service. Simple and intuitive specification of XML as string. No need
 * to build complex data structures.
 *
 * cf:: ZXID configuration object
 * ses:: Session object that contains the EPR cache
 * svctype:: URN specifying the kind of service we wish to call. Used for EPR lookup or discovery
 * body_f:: printf(3) style format string for XML payload
 * ...:: Additional arguments that will satisfy the format specifiers in ~body_f~
 * return:: XML data structure for SOAP response envelope. You can walk
 *     the response to determine if it was successful and what it returned.
 *     The macro ZXID_CHK_STATUS() may prove helpful. */

/* Called by:  main */
struct zx_e_Envelope_s* zxid_callf(struct zxid_conf* cf, struct zxid_ses* ses, char* svctype, char* body_f, ...)
{
  struct zx_e_Envelope_s* env;
  struct zx_a_EndpointReference_s* epr;
  va_list ap;
  
  epr = zxid_get_epr(cf, ses, svctype, 1);   /*zx_xmlns_idhrxml *** */
  if (!epr) {
    ERR("EPR could not be discovered for svctype(%s)", svctype);
    return 0;
  }
  va_start(ap, body_f);
  env = vzxid_new_envf(cf, body_f, ap);
  va_end(ap);
  env = zxid_wsc_call(cf, ses, epr, env);
  if (!env) {
    ERR("Web services call failed svctype(%s)", svctype);
    return 0;
  }
  return env;
}

/*(i) Make a SOAP call given XML payload for SOAP <e:Envelope> or <e:Body> content,
 * specified by the format string. See zxid_simple_call() for further description.

 * cf:: ZXID configuration object, see zxid_new_conf()
 * ses:: Session object that contains the EPR cache
 * svctype:: URI (often the namespace URI) specifying the kind of service we
 *     wish to call. Used for EPR lookup or discovery.
 * url:: (Optional) If provided, this argument has to match either
 *     the ProviderID, EntityID, or actual service end point URL.
 * env_f:: printf(3) style format string for XML payload
 * ...:: Additional arguments that will satisfy the format specifiers in ~body_f~
 * return:: SOAP Envelope of the response, as a string. You can parse this
 *     string to obtain all returned SOAP headers as well as the Body and its
 *     content. */

/* Called by:  main */
struct zx_str* zxid_simple_callf(struct zxid_conf* cf, struct zxid_ses* ses, char* svctype, char* url, char* env_f, ...)
{
  struct zx_e_Envelope_s* env;
  struct zx_a_EndpointReference_s* epr;
  va_list ap;
  
  epr = zxid_get_epr(cf, ses, svctype, 1);
  if (!epr) {
    ERR("EPR could not be discovered for svctype(%s)", svctype);
    return 0;
  }
  va_start(ap, env_f);
  env = vzxid_new_envf(cf, env_f, ap);
  va_end(ap);
  env = zxid_wsc_call(cf, ses, epr, env);
  if (!env) {
    ERR("Web services call failed svctype(%s)", svctype);
    return 0;
  }
  return env;
}

/*(i) Make a SOAP call given XML payload for SOAP <e:Envelope> or <e:Body> content,
 * specified by the string. This is your WSC work horse for calling almost any kind
 * of web service. Simple and intuitive specification of XML as string: no need
 * to build complex data structures.
 *
 * If the string starts by "<e:Envelope", then string
 * should be a complete SOAP envelope including <e:Header> and <e:Body> parts. This
 * allows caller to specify custom SOAP headers, in addition to the ones
 * that the underlying zxid_wsc_call() will add. Usually the payload service
 * will be passed as the contents of the body. If the string starts by
 * "<e:Body", then the <e:Envelope> and <e:Header> are automatically added. If
 * the string starts by neither of the above (be careful to use the "e:" as
 * namespace prefix), the it is assumed to be the payload content of the <b:Body>
 * and the rest of the SOAP envelope is added.
 *
 * cf:: ZXID configuration object, see zxid_new_conf()
 * ses:: Session object that contains the EPR cache
 * svctype:: URI (often the namespace URI) specifying the kind of service we
 *     wish to call. Used for EPR lookup or discovery.
 * url:: (Optional) If provided, this argument has to match either
 *     the ProviderID, EntityID, or actual service end point URL.
 * env:: XML payload
 * return:: SOAP Envelope of the response, as a string. You can parse this
 *     string to obtain all returned SOAP headers as well as the Body and its
 *     content. */

/* Called by:  main */
struct zx_str* zxid_simple_call(struct zxid_conf* cf, struct zxid_ses* ses, char* svctype, char* url, char* envi)
{
  struct zx_e_Envelope_s* env;
  struct zx_a_EndpointReference_s* epr;
  
  //*** Needs thought and development

  epr = zxid_get_epr(cf, ses, svctype, 1);
  if (!epr) {
    ERR("EPR could not be discovered for svctype(%s)", svctype);
    return 0;
  }
  //env = vzxid_new_envf(cf, envi, ap);
  env = zxid_wsc_call(cf, ses, epr, env);
  if (!env) {
    ERR("Web services call failed svctype(%s)", svctype);
    return 0;
  }
  return env;
}

/* EOF  --  zxidwsc.c */
