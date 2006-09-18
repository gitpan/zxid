/* zxidraw.i  -  SWIG interface file for SAML low level functions
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxidraw.i,v 1.1 2006/09/06 02:33:06 sampo Exp $
 * 31.8.2006, created --Sampo
 */
%module zxidraw
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

%rename(use_is_perl_keyword) use;

%include "c/saml2-const.h"
%include "c/saml2-data.h"
%include "c/saml2-ns.h"
%include "c/saml2md-const.h"
%include "c/saml2md-data.h"
%include "c/saml2md-ns.h"

/* EOF */
