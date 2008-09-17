/* javazxid.i  -  SWIG interface file for Java JNI extension for libzxid
 * Copyright (c) 2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: javazxid.i,v 1.9 2008-05-26 15:28:44 sampo Exp $
 * 7.1.2007, created --Sampo
 *
 * See: http://java.sun.com/docs/books/jni/html/objtypes.html
 *      http://www.swig.org/Doc1.3/Java.html
 */
%module "zxidjni"
%{

#include "errmac.h"
#include "zx.h"
#include "zxid.h"
#include "saml2.h"

#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-ns.h"
#include "c/zxidvers.h"

%}

/*
%typemap (jni) struct zx_str* "jstring"
%typemap (jtype) jstring "String"
%typemap (jstype) struct zx_str* "String"
//%typemap (jtype) struct zx_str* "String"
//%typemap (jstype) struct zx_str* "String"

%typemap (in) struct zx_str* (const jbyte* str) %{
  str = (*jenv)->GetStringUTFChars(jenv, $input, 0);
  $1 = zx_str_dup_len_str(0,  // *** where to get ctx?
	(*jenv)->GetStringUTFLength(jenv, $input), str);
%}
%typemap (freearg) struct zx_str* (const jbyte* str) "(*jenv)->ReleaseStringUTFChars(jenv, $input, str);"

%typemap (javain) String "String"

%typemap (out) struct zx_str* {
  // Unfortunately Java does not provide NewStringUTF() that would explicitly
  // take length field - they insist on nul termination instead. Sigh.
  char* tmp = malloc($1->len + 1);
  if (!tmp) { ERR("Out of memory len=%d", $1->len); exit(1); }
  memcpy(tmp, $1->s, $1->len);
  tmp[$1->len] = 0;
  $result = (*jenv)->NewStringUTF(jenv, tmp);
  free(tmp);
  // Do not free underlying zx_str because they are usually returned by reference.
}
*/


%typemap (in) (int len, char* s) %{
  // The following jstring casts could probably be avoided with proper use of typemaps
  $1 = (*jenv)->GetStringUTFLength(jenv, (jstring)$input);
  $2 = (char*)(*jenv)->GetStringUTFChars(jenv, (jstring)$input, 0);
  // *** Whether we can free, or not, the obtained string depends
  //     on whether the zxid API will take reference to the string.
%}
%typemap (freearg) (int len, char* s) "(*jenv)->ReleaseStringUTFChars(jenv, (jstring)$input, $2);"

%include "zx.h"
%include "zxid.h"
%include "saml2.h"
%include "wsf.h"
%include "c/zxidvers.h"
%include "c/zx-ns.h"

/*

Trying to process all of the below hits a Java class file format limitation,
manifesting as error message like

/apps/java/j2sdk1.4.2/bin/javac -J-Xmx128m -g zxid.java zxidjava/*.java
zxidjava/zxidjni.java:11: too many constants
public class zxidjni implements zxidjniConstants {
       ^
Note: zxid.java uses or overrides a deprecated API.
Note: Recompile with -deprecation for details.
1 error
make: *** [zxid.class] Error 1

If you know how to get around that, please let me know.

%include "c/zx-a-data.h"
%include "c/zx-ac-data.h"
%include "c/zx-b-data.h"
%include "c/zx-b12-data.h"
%include "c/zx-const.h"
%include "c/zx-data.h"
%include "c/zx-di-data.h"
%include "c/zx-di12-data.h"
%include "c/zx-ds-data.h"
%include "c/zx-e-data.h"
%include "c/zx-ff12-data.h"
%include "c/zx-is-data.h"
%include "c/zx-is12-data.h"
%include "c/zx-lu-data.h"
%include "c/zx-m20-data.h"
%include "c/zx-md-data.h"
%include "c/zx-sa-data.h"
%include "c/zx-sa11-data.h"
%include "c/zx-sbf-data.h"
%include "c/zx-sec-data.h"
%include "c/zx-sec12-data.h"
%include "c/zx-sp-data.h"
%include "c/zx-sp11-data.h"
%include "c/zx-wsse-data.h"
%include "c/zx-wsu-data.h"
%include "c/zx-xenc-data.h"
%include "c/zx-xml-data.h"
%include "c/zx-xs-data.h"
%include "c/zx-paos-data.h"
%include "c/zx-ecp-data.h"
%include "c/zx-dap-data.h"
%include "c/zx-ps-data.h"
%include "c/zx-im-data.h"
%include "c/zx-as-data.h"
%include "c/zx-dst-data.h"
%include "c/zx-subs-data.h"
*/

/* EOF */
