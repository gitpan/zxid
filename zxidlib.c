/* zxidlib.c  -  Handwritten functions for implementing common application logic for SP
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxidlib.c,v 1.22 2006/10/15 00:27:26 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 */

#include <pthread.h>
#include <signal.h>
#include <fcntl.h>
#include <netdb.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#ifdef USE_OPENSSL
#include <openssl/rand.h>
#include <openssl/x509.h>
#include <openssl/rsa.h>
#endif
#ifdef USE_CURL
#include <curl/curl.h>
#endif

#include "errmac.h"
#include "zxid.h"
#include "zxidconf.h"
#include "saml2.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"
#include "c/zx-data.h"

#define PEM_CERT_START_MAKER  "-----BEGIN CERTIFICATE-----"
#define PEM_CERT_END_MAKER    "-----END CERTIFICATE-----"
#define PEM_RSA_PRIVATE_KEY_START_MAKER  "-----BEGIN RSA PRIVATE KEY-----"
#define PEM_RSA_PRIVATE_KEY_END_MAKER    "-----END RSA PRIVATE KEY-----"
#define PEM_DSA_PRIVATE_KEY_START_MAKER  "-----BEGIN DSA PRIVATE KEY-----"
#define PEM_DSA_PRIVATE_KEY_END_MAKER    "-----END DSA PRIVATE KEY-----"

int zxid_version()
{
  return ZXID;
}

char* zxid_version_str()
{
  return REL " libzxid (zxid.org)";
}

/* ============== CGI Parsing ==============
 * N.B. This CGI parsing is very specific for needs of ZXID. It is not generic. */

int zxid_parse_cgi(struct zxid_cgi* cgi, char* qs)
{
  char *p, *n, *v, *val, *name;
  while (*qs) {
    for (; *qs == '&'; ++qs) ;                  /* Skip over & or && */
    if (!*qs) break;
    
    for (name = qs; *qs && *qs != '='; ++qs) ;  /* Scan name (until '=') */
    if (!*qs) break;
    if (qs == name) {                           /* Key was an empty string: skip it */
      for (; *qs && *qs != '&'; ++qs) ;         /* Scan value (until '&') */
      continue;
    }
    for (; name < qs && *name <= ' '; ++name) ; /* Skip over initial whitespace before name */
    n = p = name;
    URL_DECODE(name, p, qs);
    *p = 0;
    
    for (val = ++qs; *qs && *qs != '&'; ++qs) ; /* Skip over = and scan value (until '&') */
    v = p = val;
    URL_DECODE(val, p, qs);
    if (*qs)
      ++qs;
    *p = 0;
    
    switch (n[0]) {
    case 'o': cgi->op = v[0];         break;
    case 's': cgi->sid = v;           break;
    case 'u': cgi->user = v;          break;
    case 'p': cgi->pw = v;            break;
    case 'c': cgi->cdc = v;           break;
      
      /* The following two entity IDs, combined with various login buttons
       * aim at supporting may different user interface layouts. You need to
       * understand how they interact to avoid undesired conflicts. */
    case 'e':                                 /* EntityID field (manual entry) */
    case 'd': if (v[0]) cgi->eid = v; break;  /* EntityID popup or radio box */
    case 'l':
      /* Login button names are like lP<eid>, where "l" is literal ell, P is
       * protocol profile designator, and <eid> is Entity ID of the IdP.
       * N.B. If eid is omitted from button name, it may be provided using
       * d or e fields (see above). */
      cgi->pr_ix = n[1];
      if (n[2])
	cgi->eid = n+2;
      cgi->op = 'L';
      D("cgi: login eid(%s)", cgi->eid);
      break;
    case 'i':
      /* IdP and protocol index selection popup values are like P<eid>
       * N.B. If eid is omitted from button name, it may be provided using
       * d or e fields (see above). This effectively allows i to be just
       * a protocol selection popup. */
      cgi->pr_ix = v[0];
      if (v[1])
	cgi->eid = v+1;
      break;
    case 'f':  /* flags and (hidden) fields found in typical SP login form */
      switch (n[1]) {
      case 'c': cgi->allow_create = v[0]; break;
      case 'p': cgi->ispassive = v[0];    break;
      case 'f': cgi->force_authn = v[0];  break;
      case 'n': cgi->nid_fmt = v;         break;
      case 'q': cgi->affil = v;           break;
      case 'y': cgi->consent = v;         break;
      case 'm': cgi->matching_rule = v;   break;
      case 'a': cgi->authn_ctx = v;       break;
      case 'r': cgi->rs = v;              break;
      }
      break;
    case 'g':
      switch (n[1]) {
      case 'l':
      case 'r':
      case 's':
      case 't':
      case 'u': cgi->op = n[1]; break;
      }
      break;
    case 'R':
      if (!strcmp(n, "RelayState")) {
	cgi->rs = v;
	break;
      }
      break;
    case 'S':
      if (!strcmp(n, "SAMLart")) {
	cgi->saml_art = v;
	cgi->op = 'A';
	break;
      }
      if (!strcmp(n, "SAMLResponse")) {
	cgi->saml_resp = v;
	cgi->op = 'P';
	break;
      }
      if (!strcmp(n, "SAMLRequest")) {
	cgi->saml_req = v;
	cgi->op = 'Q';
	break;
      }
      if (!strcmp(n, "SigAlg")) {
	cgi->sigalg = v;
	break;
      }
      if (!strcmp(n, "Signature")) {
	cgi->sig = v;
	break;
      }
      /* fall thru */
    default:  D("Unknown CGI field(%s) val(%s)", n, v);
    }
  }
  return 0;
}

struct zxid_cgi* zxid_new_cgi(struct zxid_conf* cf, char* qs)
{
  struct zxid_cgi* cgi = ZX_ZALLOC(cf->ctx, struct zxid_cgi);
  if (qs)
    zxid_parse_cgi(cgi, qs);
  return cgi;
}

/* ============== Sessions ============== */

#define ZXID_SES_DIR "ses/"
#define ZXID_MAX_SES (32*1024)

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

int zxid_get_ses(struct zxid_conf* cf, struct zxid_ses* ses, char* sid)
{
  struct zx_root_s* r;
  char* base;
  char* lim;
  int gotall;
  int fd = strlen(sid);
  if (fd != strspn(sid, safe_basis_64)) {
    ERR("EVIL Session ID(%s)", sid);
    return 0;
  }
  
  fd = open_fd_from_path(cf->path, ZXID_SES_DIR, sid, O_RDONLY, 0);
  if (fd == -1) return 0;
  
  ses->sesbuf = ZX_ALLOC(cf->ctx, ZXID_MAX_SES);
  
  if (read_all_fd(fd, ses->sesbuf, ZXID_MAX_SES - 1, &gotall) == -1) {
    perror("Trouble reading session.");
    close(fd);
    return 0;
  }
  close(fd);
  ses->sesbuf[gotall] = 0;
  ses->sid = sid;
  ses->nid = strtok(ses->sesbuf, "|");
  base = strtok(0,"|");
  if (base) {
    lim = base + strlen(base);
    D("a7n(%.*s)", lim - base, base);
    zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, base, lim);
    r = zx_DEC_root(cf->ctx, 0, 1);
    if (r) {
      ses->a7n   = r->Assertion;
      ses->a7n11 = r->sa11_Assertion;
      ses->a7n12 = r->ff12_Assertion;
      if (ses->a7n)
	ses->nid = zx_str_to_c(cf->ctx, ses->a7n->Subject->NameID->gg.content);
      else if (ses->a7n11)
	ses->nid = zx_str_to_c(cf->ctx, ses->a7n11->AuthenticationStatement->Subject->NameIdentifier->gg.content);
      else if (ses->a7n12)
	ses->nid = zx_str_to_c(cf->ctx, ses->a7n12->AuthenticationStatement->Subject->NameIdentifier->gg.content);
    } else
      ERR("Failed to decode the session(%s)", sid);
  }
  D("GOT ses(%s)", sid);
  return 1;
}

int zxid_put_ses(struct zxid_conf* cf, struct zxid_ses* ses)
{
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
  }
  
  fd = open_fd_from_path(cf->path, ZXID_SES_DIR, ses->sid, O_CREAT | O_WRONLY | O_TRUNC, 0666);
  if (fd == -1) return 0;
  
  sesbuf = ZX_ALLOC(cf->ctx, ZXID_MAX_SES);

  if (ses->a7n) {
    ss = zx_EASY_ENC_SO_sa_Assertion(cf->ctx, ses->a7n);
    len = snprintf(sesbuf, ZXID_MAX_SES, "%s|%.*s", ses->nid, ss->len, ss->s);
  } else
    len = snprintf(sesbuf, ZXID_MAX_SES, "%s", ses->nid);
  if (write_all_fd(fd, sesbuf, len) == -1) {
    perror("Trouble writing session.");
    close(fd);
    return 0;
  }
  ZX_FREE(cf->ctx, sesbuf);
  close(fd);
  return 1;
}

int zxid_del_ses(struct zxid_conf* cf, struct zxid_ses* ses)
{
  char old[ZXID_MAX_BUF];
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
  
  if (!name_from_path(old, sizeof(old), cf->path, ZXID_SES_DIR, ses->sid))
    return 0;
  
  if (cf->ses_arch_dir) {
    char new[ZXID_MAX_BUF];
    if (!name_from_path(new, sizeof(new), cf->ses_arch_dir, 0, ses->sid))
      return 0;
    if (rename(old,new) == -1) {
      perror("rename");
      ERR("Deleting session by renaming failed old(%s) new(%s)", old, new);
      return 0;
    }
  } else {
    if (unlink(old) == -1) {
      perror("unlink");
      ERR("Deleting session by unlink failed old(%s)", old);
      return 0;
    }
  }
  return 1;
}

/* ============== LECP or ECP ============== */

int zxid_lecp_check(struct zxid_conf* cf, struct zxid_cgi* cgi)
{
  char* le;
  char* authn_req = "";
  le = getenv("HTTP_LIBERTY_ENABLED");
  if (le) {
    /* *** start ID-FF 1.2 LECP processing */
    /* authn_req = ...; */
  } else {
    le = getenv("HTTP_PAOS");
    if (!le) return 0;
    /* *** check that the header really is SAML2_SSO_ECP */
    /* *** start SAML 2.0 ECP processing */
    /* authn_req = ...; */
  }
  printf("CACHE-CONTROL: no-cache, no-store, must-revalidate, private" CRLF);
  printf("PRAGMA: no-cache" CRLF);
  printf("CONTENT-TYPE: " PAOS_CONTENT CRLF2);  /* content type only specified for ECP */
  printf("%s", authn_req);
  return 1;
}

/* ============== CDC ============== */

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

/* ============== Configuration ============== */
/* Eventually configuration will be read from some file, but for
 * now, we settle for compilation time configuration, see zxidconf.h */

#define ZXID_PEM_DIR "pem/"

#ifdef USE_OPENSSL
X509* zxid_read_cert(struct zxid_conf* cf, char* name)
{
  int fd, gotall;
  char buf[4096];
  char* pp;
  char* p;
  char* e;
  X509* x = 0;  /* Forces d2i_X509() to alloc the memory. */
  
  fd = open_fd_from_path(cf->path, ZXID_PEM_DIR, name, O_RDONLY, 0);
  if (fd == -1) return 0;
  if (read_all_fd(fd, buf, sizeof(buf)-1, &gotall) == -1) {
    perror("Trouble reading.");
    close(fd);
    return 0;
  }
  close(fd);
  
  p = strstr(buf, PEM_CERT_START_MAKER);
  if (!p) {
    ERR("No certificate found in file(%s)\n", name);
    return 0;
  }
  p += sizeof(PEM_CERT_START_MAKER) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;

  e = strstr(buf, PEM_CERT_END_MAKER);
  if (!e) return 0;
  
  pp = buf;
  p = unbase64_raw(p, e, pp, zx_std_index_64);
  if (!d2i_X509(&x, (const unsigned char**)&pp, p-pp) || !x) {
    ERR("DER decoding of X509 certificate failed.\n%d", 0);
    return 0;
  }
  return x;
#if 0
  p = e + sizeof(PEM_CERT_END_MAKER) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
#endif
}

RSA* zxid_read_private_key(struct zxid_conf* cf, char* name)
{
  int fd, gotall;
  char buf[4096];
  char* pp;
  char* p;
  char* e;
  EVP_PKEY* pk = 0;  /* Forces d2i_PrivateKey() to alloc the memory. */
  RSA* rsa = 0;
  
  fd = open_fd_from_path(cf->path, ZXID_PEM_DIR, name, O_RDONLY, 0);
  if (fd == -1) return 0;
  if (read_all_fd(fd, buf, sizeof(buf)-1, &gotall) == -1) {
    perror("Trouble reading.");
    close(fd);
    return 0;
  }
  close(fd);
  
  p = strstr(buf, PEM_RSA_PRIVATE_KEY_START_MAKER);
  if (!p) {
    ERR("No private key found in file(%s)\n", name);
    return 0;
  }
  p += sizeof(PEM_RSA_PRIVATE_KEY_START_MAKER) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
  
  e = strstr(buf, PEM_RSA_PRIVATE_KEY_END_MAKER);
  if (!e) return 0;

  pp = buf;
  p = unbase64_raw(p, e, pp, zx_std_index_64);
  if (!d2i_PrivateKey(EVP_PKEY_RSA, &pk, (const unsigned char**)&pp, p-pp) || !pk) {
    ERR("DER decoding of private key failed.\n%d", 0);
    return 0;
  }
  rsa = EVP_PKEY_get1_RSA(pk);
  return rsa;
#if 0
  p = e + sizeof(PEM_RSA_PRIVATE_KEY_END_MAKER) - 1;
  if (*p == 0xd) ++p;
  if (*p != 0xa) return 0;
  ++p;
#endif
}
#endif

int zxid_set_opt(struct zxid_conf* cf, int which, int val)
{
  switch (which) {
  case 1: debug = val; return val;
  }
  return -1;
}

void zxid_url_set(struct zxid_conf* cf, char* url)
{
  if (!cf || !url) return;
  cf->url = url;
}

int zxid_init_conf(struct zxid_conf* cf, char* zxid_path)
{
  D("Initconf with path(%s)", zxid_path);
  memset(cf, 0, sizeof(struct zxid_conf));
  cf->path = zxid_path;
  cf->path_len = strlen(zxid_path);
  cf->nice_name = ZXID_NICE_NAME;
  cf->url = ZXID_URL;
  cf->cdc_url = ZXID_CDC_URL;
  cf->cdc_choice = ZXID_CDC_CHOICE;
  cf->authn_req_sign = ZXID_AUTHN_REQ_SIGN;
  cf->want_sso_a7n_signed = ZXID_WANT_SSO_A7N_SIGNED;
#ifdef USE_OPENSSL
  cf->sign_cert = zxid_read_cert(cf, "sign-cert-nopw.pem");
  cf->sign_pkey = zxid_read_private_key(cf, "sign-cert-nopw.pem");
  cf->enc_cert = zxid_read_cert(cf, "enc-cert-nopw.pem");
  cf->enc_pkey = zxid_read_private_key(cf, "enc-cert-nopw.pem");
#else
  ERR("This copy of zxid was compiled to NOT use OpenSSL. Reading certificate and private key is not supported. Signing and signature verification are not supported either. Add -DUSE_OPENSSL and recompile. %d", 0);
#endif
  cf->md_fetch = ZXID_MD_FETCH;
  cf->md_populate_cache = ZXID_MD_POPULATE_CACHE;
  cf->md_cache_first = ZXID_MD_CACHE_FIRST;
  cf->md_cache_last = ZXID_MD_CACHE_LAST;
  cf->ses_arch_dir = ZXID_SES_ARCH_DIR;
  return 0;
}

struct zxid_conf* zxid_new_conf(char* zxid_path)
{
  struct zxid_conf* cf = malloc(sizeof(struct zxid_conf));  /* *** unholy: should use our own allocator! */
  if (!cf) {
    ERR("out-of-memory %d", sizeof(struct zxid_conf));
  }
  zxid_init_conf(cf, zxid_path);
  cf->ctx = malloc(sizeof(struct zx_ctx));
  memset(cf->ctx, 0, sizeof(struct zx_ctx));
  cf->ctx->guard_seen_n.seen_n = &cf->ctx->guard_seen_p;
  cf->ctx->guard_seen_p.seen_p = &cf->ctx->guard_seen_n;
#ifdef USE_CURL
  cf->curl = curl_easy_init();
  if (!cf->curl) {
    ERR("Failed to initialize libcurl %d",0);
    exit(2);
  }
#endif
  return cf;
}

/* ============== Service Locator ============= */

/* *** figure out a way to leverage commonality. */

struct zx_str* zxid_idp_loc_raw(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zx_sa_Issuer_s* Issuer, int svc_type, char* binding, int req)
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

struct zx_str* zxid_idp_loc(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int svc_type, char* binding)
{
  struct zx_md_SingleLogoutService_s* slo_svc;
  struct zx_md_ManageNameIDService_s* nireg_svc;
  struct zxid_entity* idp_meta;
  
  if (!ses->a7n) {
    ERR("Session sid(%s) appears to lack SSO assertion.", ses->sid);
    return 0;
  }
  return zxid_idp_loc_raw(cf, cgi, ses->a7n->Issuer, svc_type, binding, 1);
}

struct zx_root_s* zxid_idp_soap(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zxid_ses* ses, int svc_type, struct zx_se_Body_s* body)
{
  struct zx_str* loc = zxid_idp_loc(cf, cgi, ses, svc_type, SAML2_SOAP);
  if (!loc)
    return 0;
  return zxid_soap_call_body(cf, loc, body);
}

/* See also: http://curl.haxx.se/libcurl/ */

#define ZXID_MAX_SOAP (64*1024)

struct zx_root_s* zxid_soap_call_body(struct zxid_conf* cf, struct zx_str* url, struct zx_se_Body_s* body)
{
#ifdef USE_CURL
  struct zx_se_Envelope_s* env = zx_NEW_se_Envelope(cf->ctx);
  struct zx_root_s* r;
  struct zx_str* ss;
  CURLcode res;
  struct zxid_curl_ctx rc;
  struct zxid_curl_ctx wc;
  struct curl_slist content_type;
  char* urli;
  char* buf = ZX_ALLOC(cf->ctx, ZXID_MAX_SOAP+1);
  rc.p = buf;
  rc.lim = buf + ZXID_MAX_SOAP;
  curl_easy_setopt(cf->curl, CURLOPT_WRITEDATA, &rc);
  curl_easy_setopt(cf->curl, CURLOPT_WRITEFUNCTION, zxid_curl_write_data);
  curl_easy_setopt(cf->curl, CURLOPT_NOPROGRESS, 1);
  curl_easy_setopt(cf->curl, CURLOPT_FOLLOWLOCATION, 1);
  curl_easy_setopt(cf->curl, CURLOPT_MAXREDIRS, 110);
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYPEER, 0);  /* *** arrange verification */
  curl_easy_setopt(cf->curl, CURLOPT_SSL_VERIFYHOST, 0);  /* *** arrange verification */
  urli = zx_str_to_c(cf->ctx, url);
  curl_easy_setopt(cf->curl, CURLOPT_URL, urli);
  
  env->Header = zx_NEW_se_Header(cf->ctx);
  env->Body = body;
  ss = zx_EASY_ENC_SO_se_Envelope(cf->ctx, env);
  wc.p = ss->s;
  wc.lim = ss->s + ss->len;
  
  curl_easy_setopt(cf->curl, CURLOPT_POST, 1);
  curl_easy_setopt(cf->curl, CURLOPT_POSTFIELDSIZE, ss->len);
  curl_easy_setopt(cf->curl, CURLOPT_READDATA, &wc);
  curl_easy_setopt(cf->curl, CURLOPT_READFUNCTION, zxid_curl_read_data);
  
  memset(&content_type, 0, sizeof(content_type));
  content_type.data = "CONTENT-TYPE: text/xml";
  curl_easy_setopt(cf->curl, CURLOPT_HTTPHEADER, &content_type);
  
  D("------------------------ url(%.*s) ------------------------", url->len, url->s);
  res = curl_easy_perform(cf->curl);
  ZX_FREE(cf->ctx, urli);
  rc.lim = rc.p;
  rc.p[1] = 0;
  rc.p = buf;
  
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, buf, rc.lim);
  r = zx_DEC_root(cf->ctx, 0, 1);
  if (!r || !r->Envelope || !r->Envelope->Body) {
    ERR("Failed to parse SOAP response url(%.*s) CURLcode(%d) CURLerr(%s) buf(%.*s)", url->len, url->s, res, curl_easy_strerror(res), rc.lim-buf, buf);
    return 0;
  }
  return r;
#else
  ERR("This copy of zxid was compiled to NOT use libcurl. SOAP calls (such as Artifact profile and WSC) are not supported. Add -DUSE_CURL and recompile. %d", 0);
  return 0;
#endif
}

int zxid_soap_cgi_resp_body(struct zxid_conf* cf, struct zx_se_Body_s* body)
{
  struct zx_se_Envelope_s* env = zx_NEW_se_Envelope(cf->ctx);
  struct zx_str* ss;
  
  env->Header = zx_NEW_se_Header(cf->ctx);
  env->Body = body;
  ss = zx_EASY_ENC_SO_se_Envelope(cf->ctx, env);

  D("SOAP_RESP(%.*s)", ss->len, ss->s);
  printf("text/xml" CRLF2 "%.*s", ss->len, ss->s);
  return ZXID_REDIR_OK;
}

/* Returns query string part of redirection URL */

struct zx_str* zxid_saml2_redir_enc(struct zxid_conf* cf, struct zx_str* pay_load)
{
  char* zbuf;
  char* b64;
  char* url;
  char* p;
  int zlen, len;
  
  /* RFC1951 per SAML2 binding line 576 (p.17) */
  zbuf = zx_zlib_raw_deflate(cf->ctx, pay_load->len, pay_load->s, &zlen);
  if (!zbuf)
    return 0;
  len = zlen * 4 / 3 + 6;  /* rough conservative estimate */
  b64 = ZX_ALLOC(cf->ctx, len);
  p = base64_fancy_raw(zbuf, zlen, b64, std_basis_64, 1<<31, 0, 0, '=');
  url = zx_url_encode(cf->ctx, p-b64, b64, &len);
  
  /* *** relay state ... */
  /* *** signature ... */
  
  return zx_ref_len_str(cf->ctx, len, url);
}

struct zx_str* zxid_saml2_redir_url(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("%.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
  return zx_strf(cf->ctx, "%.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
}

int zxid_saml2_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("Location: %.*s?SAMLRequest=%.*s", loc->len, loc->s, rse->len, rse->s);
  printf("Location: %.*s?SAMLRequest=%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  fflush(stdout);
  return ZXID_REDIR_OK;
}

int zxid_saml2_resp_redir(struct zxid_conf* cf, struct zx_str* loc, struct zx_str* rs)
{
  struct zx_str* rse = zxid_saml2_redir_enc(cf, rs);
  if (!loc) {
    ERR("Redirection location URL missing. %d", 0);
    return 0;
  }
  D("Location: %.*s?SAMLResponse=%.*s", loc->len, loc->s, rse->len, rse->s);
  printf("Location: %.*s?SAMLResponse=%.*s" CRLF2, loc->len, loc->s, rse->len, rse->s);
  return ZXID_REDIR_OK;
}

int zxid_saml_ok(struct zxid_conf* cf, struct zxid_cgi* cgi, struct zx_sp_Status_s* st, char* what)
{
  struct zx_str* ss;
  struct zx_str* m = 0;
  struct zx_str* sc1 = 0;
  struct zx_str* sc2 = 0;
  struct zx_sp_StatusCode_s* sc = st->StatusCode;
  if (!memcmp(SAML2_SC_SUCCESS, sc->Value->s, sc->Value->len)) {
    D("SAML ok what(%s)", what);
    return 1;
  }
  if (st->StatusMessage && (m = st->StatusMessage->content))
    ERR("SAML Fail what(%s) msg(%.*s)", what, m->len, m->s);
  if (sc1 = sc->Value)
    ERR("SAML Fail what(%s) SC1(%.*s)", what, sc1->len, sc1->s);
  if (sc->StatusCode)
    sc2 = sc->StatusCode->Value;
  for (sc = sc->StatusCode; sc; sc = sc->StatusCode)
    ERR("SAML Fail what(%s) subcode(%.*s)", what, sc->Value->len, sc->Value->s);
  
  if (!cgi)
    return 0;
  
  ss = zx_strf(cf->ctx, "SAML Fail what(%s) msg(%.*s) SC1(%.*s) subcode(%.*s)", what,
	       m?m->len:0, m?m->s:"",
	       sc1?sc1->len:0, sc1?sc1->s:"",
	       sc2?sc2->len:0, sc2?sc2->s:"");
  cgi->err = ss->s;
  return 0;
}

/* EOF  --  zxidlib.c */
