/* wsc.i  -  SWIG interface file for WSF Web Services Client functions
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: wsc.i,v 1.1 2006/09/14 23:18:48 sampo Exp $
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

%include "zxwsc.h"

/* EOF */
