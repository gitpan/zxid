/* wsfraw.i  -  SWIG interface file for WSF low level functions
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: wsfraw.i,v 1.1 2006/09/14 23:18:48 sampo Exp $
 * 14.9.2006, created --Sampo
 */
%module "Net::WSF::Raw"
%{

#define USE_OPENSSL
#define USE_CURL

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "saml2.h"

#include "c/wsf-const.h"
#include "c/wsf-data.h"
#include "c/wsf-ns.h"

char* instance = "zxwsfraw module";
char* assert_msg = "An assert happened in zxwsfraw module.";
int assert_nonfatal = 0;
int debug = 0;
int trace = 0;

%}

%rename(use_is_perl_keyword) use;

%include "c/wsf-const.h"
%include "c/wsf-data.h"
%include "c/wsf-ns.h"

/* EOF */
