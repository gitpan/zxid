/* zxcot.c  -  CoT (Circle-of-Trust) management tool: list CoT, add metadata to CoT
 * Copyright (c) 2009 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxcot.c,v 1.1 2009-08-30 15:09:26 sampo Exp $
 *
 * 27.8.2009, created --Sampo
 */

#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "zxidconf.h"
#include "c/zxidvers.h"

CU8* help =
"zxcot  -  Circle-of-Trust management tool R" ZXID_REL "\n\
Copyright (c) 2009 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.\n\
NO WARRANTY, not even implied warranties. Licensed under Apache License v2.0\n\
See http://www.apache.org/licenses/LICENSE-2.0\n\
Send well researched bug reports to the author. Home: zxid.org\n\
\n\
Usage: zxcot [options] [dir]\n\
       zxcot -a [options] [dir] <meta.xml\n\
       curl https://site.com/metadata.xml | zxcot -a [options] [dir]\n\
       zxcot -g https://site.com/metadata.xml [options] [dir]\n\
       zxcot -p https://site.com/metadata.xml\n\
  [dir]            CoT directory. Default /var/zxid/cot\n\
  -a               Add metadata from stdin\n\
  -g URL           Do HTTP(S) GET to URL and add as metadata (if compiled w/libcurl)\n\
  -n               Dryrun. Do not actually add the metadata. Instead print it to stdout.\n\
  -s               Swap columns, for easier sorting by URL\n\
  -p ENTID         Print sha1 name corresponding to an entity ID.\n\
  -v               Verbose messages.\n\
  -q               Be extra quiet.\n\
  -d               Turn on debugging.\n\
  -h               This help message\n\
  --               End of options\n";

int swap = 0;
int addmd = 0;
int dryrun = 0;
int inflate_flag = 2;  /* Auto */
int verbose = 1;
char buf[ZXID_MAX_MD+1];
char* mdurl = 0;
char* entid = 0;
char* cotdir = ZXID_PATH ZXID_COT_DIR;

/* N.B. This options processing is a skeleton. In reality CGI scripts do not have
 * an opportunity to process any options. */

/* Called by:  main x7 */
static void opt(int* argc, char*** argv, char*** env)
{
  int len;
  if (*argc <= 1) return;
  
  while (1) {
    ++(*argv); --(*argc);
    
    if (!(*argc) || ((*argv)[0][0] != '-')) break;  /* normal exit from options loop */
    
    switch ((*argv)[0][1]) {
    case '-': if ((*argv)[0][2]) break;
      ++(*argv); --(*argc);
      DD("End of options by --");
      return;  /* -- ends the options */

    case 'a':
      switch ((*argv)[0][2]) {
      case '\0':
	++addmd;
	continue;
      }
      break;

    case 'g':
      switch ((*argv)[0][2]) {
      case '\0':
	++(*argv); --(*argc);
	if ((*argc) < 1) break;
	mdurl = (*argv)[0];
	++addmd;
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

    case 's':
      switch ((*argv)[0][2]) {
      case '\0':
	++swap;
	continue;
      }
      break;

    case 'p':
      switch ((*argv)[0][2]) {
      case '\0':
	++(*argv); --(*argc);
	if ((*argc) < 1) break;
	entid = (*argv)[0];
	continue;
      }
      break;

    case 'n':
      switch ((*argv)[0][2]) {
      case '\0':
	++dryrun;
	continue;
      }
      break;

#if 0
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
#endif

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
    fprintf(stderr, help);
    /*fprintf(stderr, "version=0x%06x rel(%s)\n", zxid_version(), zxid_version_str());*/
    exit(3);
  }
  if (*argc) {
    cotdir = (*argv)[0];
    len = strlen(cotdir);
    if (cotdir[len-1] != '/') {
      cotdir = malloc(len+1);
      strcpy(cotdir, (*argv)[0]);
      cotdir[len] = '/';
      cotdir[len+1] = 0;
    }
  }
}

/* Called by: */
int main(int argc, char** argv, char** env)
{
  char sha1_name[28];
  struct zxid_conf cf;
  struct zxid_entity* ent;
  struct zx_str* ss;
  int got;
  char* p;
  fdtype fd;
  DIR* dir;
  struct dirent* de;

  zx_instance = "\tzxdec";
 
  opt(&argc, &argv, &env);

  if (entid) {
    sha1_safe_base64(sha1_name, strlen(entid), entid);
    sha1_name[27] = 0;
    printf("%s\n", sha1_name);
    return 0;
  }

  zxid_init_conf_ctx(&cf, ZXID_PATH);

  if (addmd) {
    if (mdurl) {
      ent = zxid_get_meta(&cf, mdurl);
    } else {
      read_all_fd(0, buf, sizeof(buf)-1, &got);
      buf[got] = 0;
      p = buf;
      ent = zxid_parse_meta(&cf, &p, buf+got);
    }

    if (!ent) {
      ERR("***** Parsing metadata failed %d", 0);
      return 1;
    }

    ss = zx_EASY_ENC_SO_md_EntityDescriptor(cf.ctx, ent->ed);
    if (!ss)
      return 2;

    if (verbose)
      fprintf(stderr, "Writing ent(%.*s) to %s%s\n", ent->eid_len, ent->eid, cotdir, ent->sha1_name);
    if (dryrun) {
      write_all_fd(1, ss->s, ss->len);
      return 0;
    }

    fd = open_fd_from_path(O_CREAT | O_WRONLY | O_TRUNC, 0666, "zxcot -a", "%s%s", cotdir, ent->sha1_name);
    if (fd == BADFD) {
      perror("open metadata for writing metadata to cache");
      ERR("Failed to open file for writing: sha1_name(%s) to metadata cache", ent->sha1_name);
      return 0;
    }
    
    write_all_fd(fd, ss->s, ss->len);
    zx_str_free(cf.ctx, ss);
    close_file(fd, __FUNCTION__);
    exit(0);
  }
  
  /* --- Directory listing --- */

  dir = opendir(cotdir);
  if (!dir) {
    perror("opendir for /var/zxid/cot (or other if configured) for loading cot cache");
    D("failed path(%s)", cotdir);
    
    got = strlen(cotdir);
    cotdir[got-1] = 0;  /* chop off / */
    got = read_all(ZXID_MAX_MD, buf, "zxcot file", "%s", cotdir);
    if (!got) {
      ERR("Zero data in file(%s)", cotdir);
      return 1;
    }
    p = buf;
    ent = zxid_parse_meta(&cf, &p, buf+got);
    if (!ent) {
      ERR("***** Parsing metadata failed for(%s)", cotdir);
      return 1;
    }
    switch (swap) {
    case 1:  printf("%.*s\t%s\n", ent->eid_len, ent->eid, cotdir); break;
    case 2:  printf("%.*s\n", ent->eid_len, ent->eid); break;
    default: printf("%s %.*s\n", cotdir, ent->eid_len, ent->eid);
    }
    if (strcmp(cotdir, ent->sha1_name))
      fprintf(stderr, "Filename(%s) does not match sha1_name(%s)\n", cotdir, ent->sha1_name);
    return 0;
  }
  
  while (de = readdir(dir))
    if (de->d_name[0] != '.' && de->d_name[strlen(de->d_name)-1] != '~') {
      got = read_all(ZXID_MAX_MD, buf, "zxcot", "%s%s", cotdir, de->d_name);
      if (!got) {
	ERR("Zero data in file(%s%s)", cotdir, de->d_name);
	continue;
      }
      p = buf;
      ent = zxid_parse_meta(&cf, &p, buf+got);
      if (!ent) {
	ERR("***** Parsing metadata failed for sha1_name(%s)", de->d_name);
      }
      switch (swap) {
      case 1:  printf("%.*s\t%s%s\n", ent->eid_len, ent->eid, cotdir, de->d_name); break;
      case 2:  printf("%.*s\n", ent->eid_len, ent->eid); break;
      default: printf("%s%s %.*s\n", cotdir, de->d_name, ent->eid_len, ent->eid);
      }
      if (strcmp(de->d_name, ent->sha1_name))
	fprintf(stderr, "Filename(%s) does not match sha1_name(%s)\n", de->d_name, ent->sha1_name);
    }
  return 0;
}

/* EOF  --  zxcot.c */
