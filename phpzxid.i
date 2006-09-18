/* phpzxid.i  -  SWIG interface file for PHP
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: phpzxid.i,v 1.1 2006/09/16 05:59:56 sampo Exp $
 * 31.8.2006, created --Sampo
 */
%module "zxid"
%{

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

char* instance = "zxid php module";
char* assert_msg = "An assert happened in zxid php module.";
int assert_nonfatal = 0;
int debug = 0;
int trace = 0;

%}

%typemap (in) (int len, char* s) {
  $1 = Z_STRLEN_PP($input);
  $2 = Z_STRVAL_PP($input);
}

//%typemap (in) struct zx_str_s* {
//  $1 = zx_str_dup_len_str(c/* *** where from ctx? */, Z_STRLEN_PP($input), Z_STRVAL_PP($input));
//}

%typemap (out) struct zx_str_s* {
  ZVAL_STRINGL($result, $1->s, $1->len, 1);
  /* Do not free underlying zx_str because they are usually returned by reference. */
}

%include "zx.h"
%include "zxid.h"
%include "saml2.h"

/* EOF */
