/* zxid.i  -  SWIG interface file
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxid.i,v 1.2 2006/09/16 05:59:56 sampo Exp $
 * 31.8.2006, created --Sampo
 */
%module "Net::SAML"
%{

#define USE_OPENSSL
#define USE_CURL

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "saml2.h"

#include "c/saml2-const.h"
#include "c/saml2-data.h"
#include "c/saml2-ns.h"
#include "c/saml2md-const.h"
#include "c/saml2md-data.h"
#include "c/saml2md-ns.h"
#include "c/zxidvers.h"

char* instance = "zxid module";
char* assert_msg = "An assert happened in zxid module.";
int assert_nonfatal = 0;
int debug = 0;
int trace = 0;

%}

%typemap (in) (int len, char* s) {
  $2 = SvPV($input, $1);
}

//%typemap (in) struct zx_str_s* {
//  int len;
//  char* s;
//  s = SvPV($input, len);
//  $1 = zx_str_dup_len_str(c/* *** where from ctx? */, len, s);
//}

%typemap (out) struct zx_str_s* {
  if (argvi >= items) {
    EXTEND(sp,1);
  }
  $result = newSVpv($1->s, $1->len);
  /* Do not free underlying zx_str because they are usually returned by reference. */
  ++argvi;
}

%include "zx.h"
%include "zxid.h"
%include "saml2.h"

/* EOF */
