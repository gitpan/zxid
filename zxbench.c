/* zxbench.c  -  Benchmark zxid libraries
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxbench.c,v 1.13 2006/10/15 00:27:26 sampo Exp $
 *
 * 1.7.2006, started --Sampo
 *
 * Test encoding and decoding SAML 2.0 assertions and other related stuff.
 */

#include <signal.h>
#include <fcntl.h>
#include <netdb.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <openssl/x509.h>

#include "errmac.h"

#include "zx.h"
#include "zxid.h"
#include "c/zx-data.h"
#include "c/zx-const.h"
#include "c/zx-ns.h"

int read_all_fd(int fd, char* p, int want, int* got_all);
int write_all_fd(int fd, char* p, int pending);
int write_or_append_lock_c_path(char* c_path, char* data, int len, CU8* lk, int seeky, int flag);

CU8* help =
"zxbench  -  SAML 2.0 encoding and decoding benchmark - R" REL "\n\
SAML 2.0 is a standard for federated idenity and Single Sign-On.\n\
Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.\n\
NO WARRANTY, not even implied warranties. Licensed under Apache License v2.0\n\
See http://www.apache.org/licenses/LICENSE-2.0\n\
Send well researched bug reports to the author. Home: zxid.org\n\
\n\
Usage: zxbench [options] <saml-assertion.xml >reencoded-a7n.xml\n\
  -n  N            Number of iterations to benchmark.\n\
  -t  SECONDS      Timeout. Default: 0=no timeout.\n\
  -c  CIPHER       Enable crypto on DTS interface using specified cipher. Use '?' for list.\n\
  -k  FDNUMBER     File descriptor for reading symmetric key. Use 0 for stdin.\n\
  -egd PATH        Specify path of Entropy Gathering Daemon socket, default on\n\
                   Solaris: /tmp/entropy. On Linux /dev/urandom is used instead\n\
                   See http://www.lothar.com/tech/crypto/ or\n\
                   http://www.aet.tu-cottbus.de/personen/jaenicke/postfix_tls/prngd.html\n\
  -rand PATH       Location of random number seed file. On Solaris EGD is used.\n\
                   On Linux the default is /dev/urandom. See RFC1750.\n\
  -uid UID:GID     If run as root, drop privileges and assume specified uid and gid.\n\
  -v               Verbose messages.\n\
  -q               Be extra quiet.\n\
  -d               Turn on debugging.\n\
  -license         Show licensing and NO WARRANTY details.\n\
  -h               This help message\n\
  --               End of options\n";

#define DIE(reason) MB fprintf(stderr, "%s\n", reason); exit(2); ME

char* instance = "zxid";  /* how this server is identified in logs */
int afr_buf_size = 0;
int verbose = 1;
int debug = 0;
int debugpoll = 0;
int timeout = 0;
int gcthreshold = 0;
int leak_free = 0;
int assert_nonfatal = 0;
int drop_uid = 0;
int drop_gid = 0;
char* rand_path;
char* egd_path;
char  symmetric_key[1024];
int symmetric_key_len;
int n_iter = 1;

void opt(int* argc, char*** argv, char*** env)
{
  if (*argc <= 1) goto argerr;
  
  while (1) {
    ++(*argv); --(*argc);
    
    if (!(*argc) || ((*argv)[0][0] != '-')) break;  /* probably the remote host and port */
    
    switch ((*argv)[0][1]) {
    case '-': if ((*argv)[0][2]) break;
      ++(*argv); --(*argc);
      DD("End of options by --");
      return;  /* -- ends the options */

    case 'n': if ((*argv)[0][2]) break;
      ++(*argv); --(*argc);
      if (!(*argc)) break;
      n_iter = atoi((*argv)[0]);
      continue;

    case 't': if ((*argv)[0][2]) break;
      ++(*argv); --(*argc);
      if (!(*argc)) break;
      timeout = atoi((*argv)[0]);
      continue;

    case 'd':
      switch ((*argv)[0][2]) {
      case '\0':
	++debug;
	continue;
      case 'p':  if ((*argv)[0][3]) break;
	++debugpoll;
	continue;
      case 'i':  if ((*argv)[0][3]) break;
	++(*argv); --(*argc);
	if (!(*argc)) break;
	instance = (*argv)[0];
	continue;
      }
      break;

    case 'v':
      switch ((*argv)[0][2]) {
      case '\0':
	++verbose;
	continue;
      }
      break;

    case 'q':
      switch ((*argv)[0][2]) {
      case '\0':
	verbose = 0;
	continue;
      }
      break;

    case 'e':
      switch ((*argv)[0][2]) {
      case 'g': if ((*argv)[0][3] != 'd' || (*argv)[0][4]) break;
	++(*argv); --(*argc);
	if (!(*argc)) break;
	egd_path = (*argv)[0];
	continue;
      }
      break;
      
    case 'r':
      switch ((*argv)[0][2]) {
      case 'f':
	/*AFR_TS(LEAK, 0, "memory leaks enabled");*/
#if 1
	ERR("*** WARNING: You have turned memory frees to memory leaks. We will (eventually) run out of memory. Using -rf is not recommended. %d\n", 0);
#endif
	++leak_free;
	continue;
#if 0
      case 'e':
	if ((*argv)[0][3]) break;
	++(*argv); --(*argc);
	if ((*argc) < 4) break;
	sscanf((*argv)[0], "%i", &abort_funcno);
	++(*argv); --(*argc);
	sscanf((*argv)[0], "%i", &abort_line);
	++(*argv); --(*argc);
	sscanf((*argv)[0], "%i", &abort_error_code);
	++(*argv); --(*argc);
	sscanf((*argv)[0], "%i", &abort_iter);
	fprintf(stderr, "Will force core upon %x:%x err=%d iter=%d\n",
		abort_funcno, abort_line, abort_error_code, abort_iter);
	continue;
#endif
      case 'g':
	if ((*argv)[0][3]) break;
	++(*argv); --(*argc);
	if (!(*argc)) break;
	gcthreshold = atoi((*argv)[0]);
	if (!gcthreshold)
	  ERR("*** WARNING: You have disabled garbage collection. This may lead to increased memory consumption for scripts that handle a lot of PDUs or run for long time. Using `-rg 0' is not recommended. %d\n", 0);
	continue;
      case 'a':
	if ((*argv)[0][3] == 0) {
	  /*AFR_TS(ASSERT_NONFATAL, 0, "assert nonfatal enabled");*/
#if 1
	  ERR("*** WARNING: YOU HAVE TURNED ASSERTS OFF USING -ra FLAG. THIS MEANS THAT YOU WILL NOT BE ABLE TO OBTAIN ANY SUPPORT. IF PROGRAM NOW TRIES TO ASSERT IT MAY MYSTERIOUSLY AND UNPREDICTABLY CRASH INSTEAD, AND NOBODY WILL BE ABLE TO FIGURE OUT WHAT WENT WRONG OR HOW MUCH DAMAGE MAY BE DONE. USING -ra IS NOT RECOMMENDED. %d\n", assert_nonfatal);
#endif
	  ++assert_nonfatal;
	  continue;
	}
	if (!strcmp((*argv)[0],"-rand")) {
	  ++(*argv); --(*argc);
	  if (!(*argc)) break;
	  rand_path = (*argv)[0];
	  continue;
	}
	break;
      }
      break;

    case 'k':
      switch ((*argv)[0][2]) {
      case '\0':
	++(*argv); --(*argc);
	if (!(*argc)) break;
	read_all_fd(atoi((*argv)[0]), symmetric_key, sizeof(symmetric_key), &symmetric_key_len);
	D("Got %d characters of symmetric key", symmetric_key_len);
	continue;
      }
      break;

    case 'c': if ((*argv)[0][2]) break;
      ++(*argv); --(*argc);
      if (!(*argc)) break;
#ifndef ENCRYPTION
      ERR("Encryption not compiled in. %d",0);
#endif
      continue;

    case 'u':
      switch ((*argv)[0][2]) {
      case 'i': if ((*argv)[0][3] != 'd' || (*argv)[0][4]) break;
	++(*argv); --(*argc);
	if (!(*argc)) break;
	sscanf((*argv)[0], "%i:%i", &drop_uid, &drop_gid);
	continue;
      }
      break;

    case 'l':
      switch ((*argv)[0][2]) {
      case 'i':
	if (!strcmp((*argv)[0],"-license")) {
	  extern char* license;
	  fprintf(stderr, license);
	  exit(0);
	}
	break;
      }
      break;

    } 
    /* fall thru means unrecognized flag */
    if (*argc)
      fprintf(stderr, "Unrecognized flag `%s'\n", (*argv)[0]);
  argerr:
    fprintf(stderr, help);
    exit(3);
  }
}

/* ============== M A I N ============== */

int main(int argc, char** argv, char** env)
{
  struct zx_ctx ctx;
  struct zx_root_s* r;
  struct zxsig_ref refs;
  struct zxid_entity* ent;
  struct zxid_conf* cf;
  int got_all, len_so, len_wo, res;
  char buf[32*1024];
  char out[32*1024];
  char* p;
  char wo_out[32*1024];
  char* wo_p;
  opt(&argc, &argv, &env);

  /*if (stats_prefix) init_cmdline(argc, argv, env, stats_prefix);*/
  CMDLINE("init");
  
#ifndef MINGW  
  if (signal(SIGPIPE, SIG_IGN) == SIG_ERR) {   /* Ignore SIGPIPE */
    perror("signal ignore pipe");
    exit(2);
  }

  /* Cause exit(3) to be called with the intent that any gcov profiling will get
   * written to disk before we die. If dsproxy is not stopped `kill -USR1' but you
   * use plain kill instead, the profile will indicate many unexecuted (#####) lines. */
  if (signal(SIGUSR1, exit) == SIG_ERR) {
    perror("signal USR1 exit");
    exit(2);
  }
#endif
  
  /* Drop privileges, if requested. */
  
  if (drop_gid) if (setgid(drop_gid)) { perror("setgid"); exit(1); }
  if (drop_uid) if (setuid(drop_uid)) { perror("setuid"); exit(1); }
  
  len_so = read_all_fd(0, buf, sizeof(buf)-1, &got_all);
  if (got_all <= 0) DIE("Missing data");
  buf[got_all] = 0;
  
  D("Decoding %d chars, n_iter(%d)\n", got_all, n_iter);
  
  for (;n_iter; --n_iter) {
    memset(&ctx, 0, sizeof(ctx));
    zx_prepare_dec_ctx(&ctx, zx_ns_tab, buf, buf + got_all);
    r = zx_DEC_root(&ctx, 0, 1000);
    if (!r) DIE("Decode failure");
    
    cf = zxid_new_conf("/var/zxid/");
    ent = zxid_get_ent_from_file(cf, "YV7HPtu3bfqW3I4W_DZr-_DKMP4." /* cxp06 */);
    
    refs.ref = r->Envelope->Body->ArtifactResolve->Signature->SignedInfo->Reference;
    refs.blob = (struct zx_elem_s*)r->Envelope->Body->ArtifactResolve;
    res = zxsig_validate(&ctx, ent->sign_cert,
			 r->Envelope->Body->ArtifactResolve->Signature,
			 1, &refs);
    if (res == ZXSIG_OK) {
      D("sig vfy ok %d", res);
    } else {
      ERR("sig vfy failed due to(%d)", res);
    }

    len_so = zx_LEN_SO_root(&ctx, r);
    D("Enc so len %d chars", len_so);

    p = zx_ENC_SO_root(&ctx, r, out);
    if (!p)
      DIE("encoding error");

    len_wo = zx_LEN_WO_root(&ctx, r);
    D("Enc wo len %d chars", len_wo);

    wo_p = zx_ENC_WO_root(&ctx, r, wo_out);
    if (!wo_p)
      DIE("encoding error");

    zx_FREE_root(&ctx, r, 0);
  }
  printf("Re-encoded result SO:\n%.*s\n", len_so, out);
  if (p - out != len_so)
    D("encode length mismatch %d vs. %d (len)", p - out, len_so);

  printf("Re-encoded result WO:\n%.*s\n", len_wo, wo_out);
  if (wo_p - wo_out != len_wo)
    D("encode length mismatch %d vs %d (len)", wo_p - wo_out, len_wo);

  if (memcmp(out, wo_out, MIN(len_so, len_wo)))
    printf("SO and WO differ.\n");
  
  return 0;
}

char* assert_msg = "%s: Internal error caused an ASSERT to fire. Deliberately provoking a core dump.\nSorry for the inconvenience.\n";

/* EOF  --  zxbench.c */
