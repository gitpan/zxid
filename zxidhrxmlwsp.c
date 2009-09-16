/* zxidhrxmlwsp.c  -  ID-SIS HR-XML WSP
 * Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidhrxmlwsp.c,v 1.11 2009-08-22 20:35:55 sampo Exp $
 *
 * 19.6.2007, created --Sampo
 *
 * See also: http://hoohoo.ncsa.uiuc.edu/cgi/interface.html (CGI specification)
 *           README-zxid, section 10 "zxid_simple() API"
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <zx/errmac.h>
#include <zx/zxid.h>      /* ZXID main API, including zxid_simple(). */
#include <zx/zxidconf.h>  /* Default and compile-time configuration options. */
#include <zx/wsf.h>
#include <zx/c/zxidvers.h>
#include <zx/c/zx-ns.h>

char* help =
"zxidhrxmlwsp  -  SAML 2.0 WSP CGI - R" ZXID_REL "\n\
SAML 2.0 is a standard for federated identity and Single Sign-On.\n\
Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.\n\
Author: Sampo Kellomaki (sampo@iki.fi)\n\
NO WARRANTY, not even implied warranties. Licensed under Apache License v2.0\n\
See http://www.apache.org/licenses/LICENSE-2.0\n\
Send well-researched bug reports to the author. Home: zxid.org\n\
\n\
Usage: zxidhrxmlwsp [options]   (when used as CGI, no options can be supplied)\n\
  -h               This help message\n\
  --               End of options\n";

int open_fd_from_path(int flags, int mode, char* logkey, char* name_fmt, ...);
int read_all_fd(int fd, char* p, int want, int* got_all);
int write_all_fd(int fd, char* p, int pending);

/* ============== M A I N ============== */

#if 1
#define ZXIDHLO "zxidhrxmlwsp"
#define CONF "PATH=/var/zxid/&URL=https://sp1.zxidsp.org:8444/" ZXIDHLO
#else
#define ZXIDHLO "zxidhrxmlwsp"
#define CONF "PATH=/var/zxid/&URL=https://sampo:8444/" ZXIDHLO
#endif

/* Called by: */
int main(int argc, char** argv)
{
  struct zx_ctx ctx;
  struct zxid_conf cfs;
  struct zxid_conf* cf;
  //struct zxid_ses sess;
  //struct zxid_ses* ses;
  struct zx_root_s* r;
  struct zx_e_Envelope_s* env;
  //struct zx_a_EndpointReference_s* epr;
  struct zx_str* ss;
  //char* p;
  //char* sid;
  //char* nid;
  char* res;
  char buf[64*1024];
  int got, fd, cl=0;
  char* qs;
  char* qs2;
  
#if 1
  /* Helps debugging CGI scripts if you see stderr. */
  close(2);
  if (open("tmp/zxid2.stderr", O_WRONLY | O_CREAT | O_APPEND, 0666) != 2)
    exit(2);
  fprintf(stderr, "=================== Running ===================\n");
  zx_debug = 1;
#endif

  qs = getenv("CONTENT_LENGTH");
  if (qs)
    sscanf(qs, "%d", &cl);

  if (cl) {
    read_all_fd(0, buf, MIN(cl, sizeof(buf)-1), &got);
    buf[got] = 0;
    qs2 = buf;
  } else {
    qs2 = getenv("QUERY_STRING");
    if (!qs2)
      qs2 = "";
    cl = strlen(qs2);
  }
  qs = strdup(qs2);
  D("qs(%s)", qs);

  if (argc > 1) {
    fprintf(stderr, "This is a CGI script (written in C). No arguments are accepted.\n%s", help);
    exit(1);
  }

#if 1
  zx_reset_ctx(&ctx);
  memset(&cfs, 0, sizeof(struct zxid_conf));
  cfs.ctx = &ctx;
  cf = &cfs;
  zxid_conf_to_cf_len(cf, -1, CONF);
#else
  cf = zxid_new_conf_to_cf(CONF);
#endif

  //if (!memcmp(qs+cl-4, "?o=B", 4)) {
  if (!memcmp(qs, "o=B", 3)) {
    D("Metadata qs(%s)", qs);
    //cf = zxid_new_conf_to_cf(CONF);
    
    res = zxid_simple_cf(cf, cl, qs, 0, 0x1fff);
    switch (res[0]) {
    default:
      ERR("Unknown zxid_simple() response(%s)", res);
    case 'd': break; /* Logged in case */
    }
    ERR("Not a metadata qs(%s)",qs);
    exit(1);
  }
    
  zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, qs2, qs2+cl);
  r = zx_DEC_root(cf->ctx, 0, 1);
  
  if (!r->Envelope) {
    ERR("No SOAP Envelope found buf(%.*s)", got, buf);
    exit(1);
  }
  if (!r->Envelope->Body) {
    ERR("No SOAP Body found buf(%.*s)", got, buf);
    exit(1);
  }

  if (r->Envelope->Body->idhrxml_Create) {
    D("Create %d",0);
    if (!r->Envelope->Body->idhrxml_Create->CreateItem) {
      ERR("No CreateItem found buf(%.*s)", got, buf);
      exit(1);
    }

    if (!r->Envelope->Body->idhrxml_Create->CreateItem->NewData) {
      ERR("No NewData found buf(%.*s)", got, buf);
      exit(1);
    }
    
    if (!r->Envelope->Body->idhrxml_Create->CreateItem->NewData->Candidate) {
      ERR("No Candidate found buf(%.*s)", got, buf);
      env = ZXID_RESP_ENV(cf, "idhrxml:CreateResponse", "Fail", "NewData does not contain Candidate element.");
      ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
      printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
      return 0;
    }
    
    ss = zx_EASY_ENC_WO_hrxml_Candidate(cf->ctx,
	       r->Envelope->Body->idhrxml_Create->CreateItem->NewData->Candidate);

    fd = open_fd_from_path(O_CREAT|O_WRONLY|O_TRUNC, 0666, "create", "%shrxml/cv.xml", cf->path);
    write_all_fd(fd, ss->s, ss->len);
    close_file(fd, __FUNCTION__);
    
    env = ZXID_RESP_ENV(cf, "idhrxml:CreateResponse", "OK", "Fine");
    D("HERE(%p)", env);
    ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
    D("HERE(%p)", ss);
    printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
    D("ss(%.*s)", ss->len, ss->s);
    return 0;
  }
  
  if (r->Envelope->Body->idhrxml_Query) {
    D("Query %d",0);
    if (!r->Envelope->Body->idhrxml_Query->QueryItem) {
      ERR("No QueryItem found buf(%.*s)", got, buf);
      exit(1);
    }

    if (!r->Envelope->Body->idhrxml_Query->QueryItem->Select) {
      ERR("No Select found buf(%.*s)", got, buf);
      exit(1);
    }

    /* *** This mock implementation does not actually interpret the Select string. */
    
    /* Parse the XML from the CV file into data structure and include it as Candidate. */

    got = read_all(sizeof(buf), buf, "query", "%shrxml/cv.xml", cf->path);
    if (got < 1) {
      ERR("Reading hrxml/cv.xml resulted in error or the file was empty. ret=%d", got);
      env = ZXID_RESP_ENV(cf, "idhrxml:QueryResponse", "Fail", "Empty or no data");
      ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
      printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
      return 0;
    }
    
    zx_prepare_dec_ctx(cf->ctx, zx_ns_tab, buf, buf + got);
    r = zx_DEC_root(cf->ctx, 0, 1);
    if (!r->Candidate) {
      ERR("No hrxml:Candidate tag found in cv.xml(%s)", buf);
      env = ZXID_RESP_ENV(cf, "idhrxml:QueryResponse", "Fail", "No Candidate in data");
      ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
      printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
      return 0;
    }

    env = ZXID_RESP_ENV(cf, "idhrxml:QueryResponse", "OK", "Fine");
    env->Body->idhrxml_QueryResponse->Data = zx_NEW_idhrxml_Data(cf->ctx);
    env->Body->idhrxml_QueryResponse->Data->Candidate = r->Candidate;
    ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
    printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
    return 0;
  }  

  if (r->Envelope->Body->idhrxml_Modify) {
    D("Modify %d",0);
    if (!r->Envelope->Body->idhrxml_Modify->ModifyItem) {
      ERR("No ModifyItem found buf(%.*s)", got, buf);
      exit(1);
    }

    if (!r->Envelope->Body->idhrxml_Modify->ModifyItem->Select) {
      ERR("No Select found buf(%.*s)", got, buf);
      //exit(1);
    }

    /* *** This mock implementation does not actually interpret the Select string. */
    
    if (!r->Envelope->Body->idhrxml_Modify->ModifyItem->NewData) {
      ERR("No NewData found buf(%.*s)", got, buf);
      exit(1);
    }
    
    if (!r->Envelope->Body->idhrxml_Modify->ModifyItem->NewData->Candidate) {
      ERR("No Candidate found buf(%.*s)", got, buf);
      env = ZXID_RESP_ENV(cf, "idhrxml:ModifyResponse", "Fail", "NewData does not contain Candidate element.");
      ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
      printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
      return 0;
    }
    
    ss = zx_EASY_ENC_WO_hrxml_Candidate(cf->ctx,
	       r->Envelope->Body->idhrxml_Modify->ModifyItem->NewData->Candidate);

    fd = open_fd_from_path(O_CREAT|O_WRONLY|O_TRUNC, 0666, "modify", "%shrxml/cv.xml", cf->path);
    write_all_fd(fd, ss->s, ss->len);
    close_file(fd, __FUNCTION__);

    env = ZXID_RESP_ENV(cf, "idhrxml:ModifyResponse", "OK", "Fine");
    ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
    D("ss(%.*s)", ss->len, ss->s);
    printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
    return 0;
  }  

  if (r->Envelope->Body->idhrxml_Delete) {
    D("Delete %d",0);
    if (!r->Envelope->Body->idhrxml_Delete->DeleteItem) {
      ERR("No DeleteItem found buf(%.*s)", got, buf);
      exit(1);
    }

    if (!r->Envelope->Body->idhrxml_Delete->DeleteItem->Select) {
      ERR("No Select found buf(%.*s)", got, buf);
      //exit(1);
    }

    /* *** This mock implementation does not actually interpret the Select string. */
    
    got = name_from_path(buf, sizeof(buf), "%shrxml/cv.xml", cf->path);
    unlink(buf);

    env = ZXID_RESP_ENV(cf, "idhrxml:DeleteResponse", "OK", "Fine");
    ss = zx_EASY_ENC_SO_e_Envelope(cf->ctx, env);
    D("ss(%.*s)", ss->len, ss->s);
    printf("CONTENT-TYPE: text/xml\r\nCONTENT-LENGTH: %d\r\n\r\n%.*s", ss->len, ss->len, ss->s);
    return 0;
  }  

  return 0;
}

/* EOF  --  zxidhrxmlwsp.c */
