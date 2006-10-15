/* wsc.i  -  SWIG interface file for WSF Web Services Client functions
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: wsc.i,v 1.2 2006/09/30 06:24:49 sampo Exp $
 * 14.9.2006, created --Sampo
 */
%module zxwsc
%{

#define USE_OPENSSL
#define USE_CURL

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "zxwsc.h"
#include "saml2.h"

#include "c/wsf-const.h"
#include "c/wsf-data.h"
#include "c/wsf-ns.h"

char* instance = "zxwsc module";
char* assert_msg = "An assert happened in zxwsc module.";
int assert_nonfatal = 0;
int debug = 0;
int trace = 0;

%}

%rename(use_is_perl_keyword) use;

%typemap (in) (int len, char* s) {
  $2 = SvPV($input, $1);
}

//%typemap (in) struct zx_str* {
//  int len;
//  char* s;
//  s = SvPV($input, len);
//  $1 = zx_str_dup_len_str(c/* *** where from ctx? */, len, s);
//}

%typemap (out) struct zx_str* {
  if (argvi >= items) {
    EXTEND(sp,1);
  }
  $result = newSVpv($1->s, $1->len);
  /* Do not free underlying zx_str because they are usually returned by reference. */
  ++argvi;
}

%include "zxwsc.h"

/* EOF */
