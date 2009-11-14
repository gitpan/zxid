/* zxpasswd.c  -  Password creation and user management tool
 * Copyright (c) 2009 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxpasswd.c,v 1.1 2009-10-18 12:39:10 sampo Exp $
 *
 * 18.10.2009, created --Sampo
 *
 * See also: http://www.users.zetnet.co.uk/hopwood/crypto/scan/ph.html
 * http://www.usenix.org/events/usenix99/provos/provos_html/index.html
 * http://www.koders.com/c/fid18C2933FE8729E3DBC6E9B1DEB65D282560D4B14.aspx?s=md5
 * zxid_pw_authn() in zxiduser.c
 * phd/sampo-idp-disco-encfs-kbdtok-2009.pd
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
#include <signal.h>
#include <fcntl.h>

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "zxidconf.h"
#include "c/zxidvers.h"
#include "c/zx-ns.h"
//#include "yubikey.h"

#define UDIR "/var/zxid/idpuid"

CU8* help =
"zxpasswd  -  Password creation and user management tool R" ZXID_REL "\n\
Copyright (c) 2009 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.\n\
NO WARRANTY, not even implied warranties. Licensed under Apache License v2.0\n\
See http://www.apache.org/licenses/LICENSE-2.0\n\
Send well researched bug reports to the author. Home: zxid.org\n\
\n\
Usage: zxpasswd [options] user [udir] <passwd    # Set user's password\n\
       zxpasswd [options] -c user [udir] <passwd # Create user and set password\n\
       zxpasswd [options] -a user [udir] <passwd # Authenticate as user using pw\n\
       zxpasswd [options] -l [user] [udir]         # List information about user\n\
  [udir]           Specify zxididp user directory. Default " UDIR "\n\
  -c               Create user\n\
  -a               Authenticate as user. exit(2) value 0 means success\n\
  -l               List user info. If no user is specified, lists all users.\n\
  -h N             Choose password hash type: 0=plain, 1=MD5 (default)\n\
  -v               Verbose messages.\n\
  -q               Be extra quiet.\n\
  -d               Turn on debugging.\n\
  -h               This help message\n\
  --               End of options\n";

char* zx_instance = "\tzxpw";
int zx_debug = 0;
int verbose = 1;
int assert_nonfatal = 0;
char* assert_msg = "assert fired.";
int create = 0;
int an = 0;
int list = 0;
char* hash_type = "1";
char* udir;
char* user;
char pw[1024];
char userdir[4096];
char buf[4096];

/* Called by:  main x7 */
static void opt(int* argc, char*** argv, char*** env)
{
  if (*argc <= 1) {
    fprintf(stderr, "Too few arguments (%d). Must specify at least user name.\n", *argc);
    goto help;
  }
  
  while (1) {
    ++(*argv); --(*argc);
    
    if (!(*argc) || ((*argv)[0][0] != '-')) break;  /* normal exit from options loop */
    
    switch ((*argv)[0][1]) {
    case '-': if ((*argv)[0][2]) break;
      ++(*argv); --(*argc);
      DD("End of options by --");
      goto last;  /* -- ends the options */

    case 'c':
      switch ((*argv)[0][2]) {
      case '\0':
	++create;
	continue;
      }
      break;

    case 'a':
      switch ((*argv)[0][2]) {
      case '\0':
	++an;
	continue;
      }
      break;

    case 'l':
      switch ((*argv)[0][2]) {
      case '\0':
	++list;
	continue;
#if 0
      case 'i':
	if (!strcmp((*argv)[0],"-license")) {
	  extern char* license;
	  fprintf(stderr, license);
	  exit(0);
	}
	break;
#endif
      }
      break;

    case 'h':
      switch ((*argv)[0][2]) {
      case '\0':
	++(*argv); --(*argc);
	if ((*argc) < 1) break;
	hash_type = (*argv)[0];
	continue;
      }
      break;

    case 'd':
      switch ((*argv)[0][2]) {
      case '\0':
	++zx_debug;
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

    case 'v':
      switch ((*argv)[0][2]) {
      case '\0':
	++verbose;
	continue;
      }
      break;

    } 
    /* fall thru means unrecognized flag */
    if (*argc)
      fprintf(stderr, "Unrecognized flag `%s'\n", (*argv)[0]);
  help:
    fprintf(stderr, help);
    /*fprintf(stderr, "version=0x%06x rel(%s)\n", zxid_version(), zxid_version_str());*/
    exit(3);
  }
 last:
  if (!*argc) {
    fprintf(stderr, "Too few arguments (%d). Must specify at least user name.\n", *argc);
    goto help;
  }
}

static int list_user(char* userdir, char* udir)
{
  int got;
  struct dirent* de;
  DIR* dir;

  printf("User dir:              %s\n", userdir);
  got = read_all(sizeof(buf), buf, "pw", "%s/%s/.pw", udir, user);
  printf("Password hash:         %s\n", buf);
  got = read_all(sizeof(buf), buf, "at", "%s/%s/.bs/.at", udir, user);
  printf("User attributes:       %s\n", buf);
  got = read_all(sizeof(buf), buf, "all at", "%s/.all/.bs/.at", udir, 0);
  printf("All user's attributes: %s\n", buf);

  printf("User's Federated SPs\n");

  dir = opendir(userdir);
  if (!dir) {
    perror("opendir for /var/zxid/idpuid/USER userdir (or other if configured)");
    D("failed path(%s)", userdir);
    return 0;
  }
  while (de = readdir(dir))
    if (de->d_name[0] != '.' && de->d_name[strlen(de->d_name)-1] != '~') {
      got = read_all(sizeof(buf), buf, "sp at", "%s/%s/.mni", userdir, de->d_name);
      printf("SP specific NameID:  %s (%s)\n", buf, de->d_name);
      got = read_all(sizeof(buf), buf, "sp at", "%s/%s/.at", userdir, de->d_name);
      printf("SP specific attrib:  %s (%s)\n", buf, de->d_name);
    }

  /* *** TODO: .all SPs, bootstraps, discovery regs */
  
  DD("HERE %p", cf);
  closedir(dir);

  return 0;
}

static int list_users(char* udir)
{
  int got;
  struct dirent* de;
  DIR* dir;

  dir = opendir(udir);
  if (!dir) {
    perror("opendir for /var/zxid/idpuid (or other if configured)");
    D("failed path(%s)", udir);
    return 0;
  }
  while (de = readdir(dir))
    if (de->d_name[0] != '.' && de->d_name[strlen(de->d_name)-1] != '~') {
      got = read_all(sizeof(buf), buf, "sp at", "%s/%s/.mni", userdir, de->d_name);
      printf("SP specific NameID:  %s (%s)\n", buf, de->d_name);
      got = read_all(sizeof(buf), buf, "sp at", "%s/%s/.at", userdir, de->d_name);
      printf("SP specific attrib:  %s (%s)\n", buf, de->d_name);
    }
  
  closedir(dir);
  return 0;
}

extern char pw_basis_64[64];

/* Called by: */
int main(int argc, char** argv, char** env)
{
  int got, pwgot;
  unsigned char salt[16];
  unsigned char pw_hash[120];
  unsigned char ch;

  opt(&argc, &argv, &env);
  if (argc)
    user = argv[0];
  else if (!list) {
    fprintf(stderr, "Too few arguments (%d). Specify at least user name.\n", argc);
    fprintf(stderr, help);
    /*fprintf(stderr, "version=0x%06x rel(%s)\n", zxid_version(), zxid_version_str());*/
    exit(3);
  }

  if (user) {
    udir = argc>1?argv[1]:UDIR;
    snprintf(userdir, sizeof(userdir)-1, "%s/%s", udir, user);
    userdir[sizeof(userdir)-1] = 0;
  }
  if (list) {
    if (user)
      return list_user(userdir, udir);
    else
      return list_users(udir);
  }
  
  read_all_fd(0, pw, sizeof(pw)-1, &pwgot);  /* Password from stdin */
  if (pwgot) {
    if (pw[pwgot-1] == '\015') --pwgot;
    if (pw[pwgot-1] == '\012') --pwgot;
  }
  pw[pwgot] = 0;
  D("pw(%s) len=%d", pw, pwgot);

  if (an) {
    /* See also: zxid_pw_authn() in zxiduser.c */
    got = read_all(sizeof(buf), buf, "pw", "%s/%s/.pw", udir, user);
    D("buf    (%s)", buf);
    if (!memcmp(buf, "$1$", sizeof("$1$")-1)) {
      zx_md5_crypt(pw, buf, pw_hash);
      D("pw_hash(%s)", pw_hash);
      return strcmp(buf, pw_hash)?1:0;
    }
    if (ONE_OF_2(buf[0], '$', '_')) {
      fprintf(stderr, "Unsupported password hash algorithm (%s).\n", buf);
      return 1;
    }
    D("Assume plain text password %d", 0);
    return strcmp(buf, pw)?1:0;
  }
  
  if (create) {
    MKDIR(userdir, 0770);
  }
  
  /* $1$$6C2jXXYmjnyAkfWXmnCSf0 */

  if (!strcmp(hash_type, "0")) {
    strcpy(pw_hash, pw);
  } else if (!strcmp(hash_type, "1")) {
    for (got = 0; got < 8; ++got) {
      zx_rand(&ch, 1);
      salt[got] = pw_basis_64[ch & 0x3f];
    }
    salt[8] = 0;
    D("salt(%s)", salt);
    zx_md5_crypt(pw, salt, pw_hash);
    D("pw_hash(%s)", pw_hash);
  } else {
    fprintf(stderr, "Unsupported password hash algorithm (%s).\n", hash_type);
  }
  
  if (!write_all_path_fmt("set pw", sizeof(buf), buf, "%s/%s/.pw", udir, user, "%s", pw_hash))
    return 1;
  return 0;
}

/* EOF  --  zxdecode.c */
