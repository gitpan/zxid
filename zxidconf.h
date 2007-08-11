/* zxidconf.h  -  Configuration of ZXID SP CGI
 * Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidconf.h,v 1.17 2007/02/24 07:50:46 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 *
 * Most of the configuration options can be set via configuration
 * file /var/zxid/zxid.conf or using -O command line flag(s). In
 * config file or on command line you should omit the ZXID_ prefix
 * and use attribute=value syntax separated by newlines or & characters
 * (the parser implements CGI query string syntax with extension that
 * also \n is accepted as separator).
 *
 * N.B. The options marked as "(compile)" can not be set on command line
 * or configuration file. They require a recompile.
 */

#ifndef _zxidconf_h
#define _zxidconf_h

/* Whether configuration is entirely determined at compile time by this file
 * or whether it is possible to use a config file or provide options on
 * command line using -O flags (such as via shell script wrapper). When zxid
 * is used as a library, it depends on application to call zxid_parse_conf().
 * Generally we recommend you leave these turned on (1). */

#define ZXID_CONF_FILE 1     /* (compile) */
#define ZXID_CONF_FLAG 1     /* (compile) */
#define ZXID_MAX_CONF  1024  /* (compile) Maximum size of conf file. */

/* In following, if you renamed zxid binary, you need to change any URL ending
 * in /zxid to match the new name. */

/* Where metadata cache and session files are created. Note that the directory
 * is not hashed: you should use a file system that scales easily to oodles
 * of small files in one directory. Say `make dir' to create the directory
 * with proper layout. If you change it here, also edit Makefile. */
#define ZXID_PATH "/var/zxid/"

/* The nice name may be used by IdP user interface to refer to the SP. It is usually
 * be short human readable name or description. */
#define ZXID_NICE_NAME "ZXID Demo SP"

/* URL for most zxid operations. It must end in "zxid". The hostname
 * and port number should match the server under which zxid CGI is accessible.
 * N.B. There is no explicit way to configure Entity ID (Provider ID) for
 * the zxid SP. The Entity ID is always of form ZXID_URL?o=B, for example
 *   https://sp1.zxidsp.org:8443/zxid?o=B */
#define ZXID_URL "https://sp1.zxidsp.org:8443/zxid"
/*#define ZXID_URL "https://a-sp.liberty-iop.org:8443/zxid"*/

/* URL for reading Common Domain Cookie. It must end in "zxid". The hostname
 * and port number should match the server under which zxid CGI is accessible.
 * Specifying empty CDC_URL disables CDC check in zxid_simple() API. */
/*#define ZXID_CDC_URL "https://sp1.zxidcommon.org:8443/zxid"*/
/*#define ZXID_CDC_URL "https://a-sp.cot.projectliberty.org:8443/zxid"*/
#define ZXID_CDC_URL "" /* CDC disabled */

/* How to handle CDC designated IdP. See zxid.h for explanation of constants. */
#define ZXID_CDC_CHOICE ZXID_CDC_CHOICE_UI_PREF

/* Following four boolean configuration options control how (IdP) metadata
 * is obtained. The metadata can be in a cache (by default directory /var/zxid/cot)
 * or it can be fetched "on the fly" using the well known location (WKL) method.
 *
 * ZXID_MD_FETCH:: controls whether fetching is performed. This necessitates
 *     that ZXID was linked with libcurl. If you do not enable fetching, you
 *     will need to populate the cache manually, perhaps by using a web browser
 *     to fetch the meta data xml files from well known location URLs (or other
 *     URLs if you know better).
 *
 * ZXID_MD_POPULATE_CACHE:: controls whether ZXID will write
 *     the metadata to the cache. This requires ZXID_MD_FETCH to be enabled
 *     and the file system permissions of the cache directory (e.g. /var/zxid/cot)
 *     to allow writing.
 *
 * ZXID_MD_CACHE_FIRST:: controls whether cache will be checked before fetching
 *     is attempted. If cache misses, ZXID_MD_FETCH governs whether fetch is tried.
 *
 * ZXID_MD_CACHE_LAST:: If true, metadata is obtained from cache
 *     if fetch was disabled or failed.
 *
 * If you want to control manually your CoT (e.g. because human process is
 * needed to verify that all the paperwork is in place), set ZXID_MD_FETCH to 0.
 *
 * If you want as automatic operation as possible, set all four to 1.
 */

#define ZXID_MD_FETCH 1
#define ZXID_MD_POPULATE_CACHE 1
#define ZXID_MD_CACHE_FIRST 1
#define ZXID_MD_CACHE_LAST 1

/* Whether AuthnReq is signed (controls both metadata and actual behavior). */
#define ZXID_AUTHN_REQ_SIGN 1

/* Whether SP insists that SSO assertiosn are signed. Affects metadata. The
 * actual insistence on signing is controleld by ZX_NOSIG_FATAL, far below.
 * Boolean. Recommended value: 1. */
#define ZXID_WANT_SSO_A7N_SIGNED 1

/* How many random bits to use in an ID. It would be useful of this was
 * such that it produces nice unpadded base64 string, i.e. multiple of 24 bits.
 * Longer IDs reduce chances of random collision (most code does not
 * check uniqueness of ID) and may increase security. For security purposes
 * 144 bits is probably good enugh.
 * E.g:  24 bits ==  3 bytes ==  4 base64 chars,
 *       48 bits ==  6 bytes ==  8 base64 chars,
 *      120 bits == 15 bytes == 20 base64 chars,
 *      144 bits == 18 bytes == 24 base64 chars */
#define ZXID_ID_BITS 48       /* (compile) */
#define ZXID_ID_MAX_BITS 168  /* used for static buffer allocation (compile) */

/* Whether true randomness is obtained.
 * 0=use OpenSSL RAND_pseudo_bytes(), which usually uses /dev/urandom
 * 1=use OpenSSL RAND_bytes(), which usually uses /dev/random
 *
 * Although true randomness may be more secure, it is operationally
 * problematic because if not enough randomness is available, the
 * system will block (stop) until enough randomness arrives. Generally
 * true randomness is not feasible in a server environment unless
 * you have hardware random number generator. */
#define ZXID_TRUE_RAND 0  /* (compile) */

/* If set to a string, indicates a file system directory to which
 * dead sessions are moved (sessions are files). This directory
 * must be on the same file system as active session directory,
 * usually /var/zxid/ses, for example /var/zxid/oldses.
 * You may want to archieve old sessions because they contain
 * the SSO assertions that allowed the users to log in. This
 * may have legal value for your application, you may even be required
 * by law to keep this audit trail.
 *
 * If set to 0, causes old sessions to be unlink(2)'d. */
#define ZXID_SES_ARCH_DIR 0  /* 0=Remove dead sessions. */

/* Maximum filesystem path used in /var/zxid tree. */
#define ZXID_MAX_BUF 1024  /* (compile) */

/* See README.zxid logging chapter for further explanation. Generally you
 * need error and activity logs to know yourself what is going on.
 * You need the issue logs to know whether other's claims towards you are justified.
 * You need the rely logs to hold others responsible. The bits of the
 * value are as follows
 * 0x01    Log enable
 * 0x06    Signing options    
 *         0:: no signing (Px)
 *         2:: sha1 MD only (Sx)
 *         4:: RSA-SHA1 (Rx)
 *         6:: DSA-SHA1 (Dx)
 * 0x08    reserved
 * 0x70    Encryption options
 *         0x00:: no encryption (xP)
 *         0x10:: zip-base64 (xZ)
 *         0x20:: RSA-AES (xA)
 *         0x30:: RSA-3DES (xT)
 *         0x40:: Symmetric AES (xB)
 *         0x50:: Symmetric 3DES (xU)
 *         0x60:: reserved
 *         0x70:: reserved
 * 0x80    reserved
 *
 * N.B. Every encryption and signature has computational cost so be sure to factor this
 * in when doing benchmarks - or disable log enc and sign when performance is at premium.
 *
 * Log signing may help you to argue that log evidence was (not) tampered with.
 * The private key for signing must be available in /var/zxid/pem/logsign-nopw-cert.pem
 *
 * Log encryption may help to keep the logs confidential.
 * For RSA modes the public key for encryption must be available
 * in /var/zxid/pem/logenc-nopw-cert.pem. For symmetric encryption the key
 * is the sha1 hash of file /var/zxid/pem/logenc.key
 * All modes, except for 0, also RFC1951 zip compress the log line and safe-base64 encode
 * the result of the encryption.
 */

/* Most common combinations of the above flags. */
#define ZXLOG_OP_NOLOG        0x00
#define ZXLOG_OP_LOG          0x01
#define ZXLOG_OP_LOG_SIGN     0x05
#define ZXLOG_OP_LOG_ENC      0x21
#define ZXLOG_OP_LOG_SIGN_ENC 0x25

#if 1
/* Production settings to ship. */
#define ZXLOG_ERR        0x01  /* Log errors to /var/zxid/log/err */
#define ZXLOG_ACT        0x01  /* Log activity to /var/zxid/log/act */
#define ZXLOG_ISSUE_A7N  0x01  /* Log each issued assertion to /var/zxid/log/issue/SHA1/a7n/asn */
#define ZXLOG_ISSUE_MSG  0x01  /* Log each issued PDU to /var/zxid/log/issue/SHA1/msg/asn */
#define ZXLOG_RELY_A7N   0x01  /* Log each received assertion to /var/zxid/log/rely/SHA1/a7n/asn */
#define ZXLOG_RELY_MSG   0x01  /* Log each received PDU to /var/zxid/log/rely/SHA1/a7n/asn */
#else
/* Test settings */
#define ZXLOG_ERR        0x05
#define ZXLOG_ACT        0x25
#define ZXLOG_ISSUE_A7N  0x23
#define ZXLOG_ISSUE_MSG  0x45
#define ZXLOG_RELY_A7N   0x41
#define ZXLOG_RELY_MSG   0x11
#endif

/* Each operation has its status code and generally those lines that indicate
 * successful status (or intermediate status like "continue" or "redirect")
 * are considered normal activity. However, you may want to consider
 * carefully whether signature failure in assertion or message disqualifies
 * an operation as "activity". One approach is to simply log everything (errors and all) to
 * activity log and rely on some log analysis software to flag the errors. */
#define ZXLOG_ERR_IN_ACT     1  /* Log errors to /var/zxid/log/act (in addition to err) */
#define ZXLOG_SIGFAIL_IS_ERR 1  /* Log line with signature validation error to /var/zxid/log/err */

/* Assertion validation options. These MUST all be turned on (and assertions signed)
 * if you want to rely on assertions to hold the other party liable. */

#define ZXID_SIG_FATAL      0 /* Signature validation error is fatal (prevents SSO) */
#define ZXID_NOSIG_FATAL    1 /* Missing signature is fatal (prevents SSO) */
#define ZXID_AUDIENCE_FATAL 1 /* Whether AudienceRestriction is checked. */
#define ZXID_TIMEOUT_FATAL  1 /* Whether NotBefore and NotOnOrAfter are checked */
#define ZXID_DUP_A7N_FATAL  0 /* Whether duplication of AssertionID is considered fatal. */
#define ZXID_DUP_MSG_FATAL  0 /* Whether duplication of MessageID is considered fatal. */

/* Because clock sychronization amoung the servers in the CoT is unlikely
 * to be perfect, not to speak of timezone mis configurations and the
 * dreaded officially introduced time errors (e.g. daylight "savings" time),
 * you can configure some slop in how the timeout is evaluated. For production
 * use something like 60 seconds could be a good value. 3600 = 1 hour, 86400 = 1 day. */
#define ZXID_BEFORE_SLOP    86400  /* Number of seconds before that is acceptable. */
#define ZXID_AFTER_SLOP     86400  /* Number of seconds after that is acceptable. */

/* ID-WSF SOAP Call parameters */

#define ZXID_MAX_SOAP_RETRY 5  /* Maximum retries due, e.g., EndpointMoved */

/* ----------------------------------------------------------------------------- */
/* Simple API HTML customization. These allow simple branding and customization.
 * If these options are not enough for you, consider simply rendering your own forms. */

/* Body tag for the ZXID SP generated pages. Edit this to change the colors. */
#define ZXID_BODY_TAG "<body bgcolor=\"#330033\" text=\"#ffaaff\" link=\"#ffddff\" vlink=\"#aa44aa\" alink=\"#ffffff\"><font face=sans>"  /* (compile) */

#define ZXID_IDP_SEL_START "<title>ZXID SP SSO: Choose IdP</title>" ZXID_BODY_TAG "<h1>ZXID SP Federated SSO (user NOT logged in, no session)</h1>\n"

#define ZXID_IDP_SEL_NEW_IDP "<h3>Login Using New IdP</h3>\n<i>A new IdP is one whose metadata we do not have yet. We need to know the IdP URL (aka Entity ID) in order to fetch the metadata using the well known location method. You will need to ask the adminstrator of the IdP to tell you what the EntityID is.</i>\n<p>IdP URL <input name=e size=80><input type=submit name=l1 value=\" Login (A2) \">\n<input type=submit name=l2 value=\" Login (P2) \"><br>\n"

#define ZXID_IDP_SEL_OUR_EID "Entity ID of this SP (click on the link to fetch the SP metadata): "

#define ZXID_IDP_SEL_TECH_USER "<h3>Technical options</h3><input type=checkbox name=fc value=1 checked> Create federation, NID Format: <select name=fn><option value=prstnt>Persistent<option value=trnsnt>Transient<option value=\"\">(none)</select><br>\n"

#define ZXID_IDP_SEL_TECH_SITE "<input type=hidden name=fq value=\"\"><input type=hidden name=fy value=\"\"><input type=hidden name=fa value=\"\"><input type=hidden name=fm value=\"\"><input type=hidden name=fp value=0><input type=hidden name=ff value=0><!-- ZXID built-in defaults, see IDP_SEL_TECH_SITE in zxidconf.h -->"

#define ZXID_IDP_SEL_FOOTER  "<hr><a href=\"http://zxid.org/\">zxid.org</a>, "
#define ZXID_IDP_SEL_END     "<!-- EOF --->"


#define ZXID_MGMT_START "<title>ZXID SP Mgmt</title>" ZXID_BODY_TAG "<h1>ZXID SP Management (user logged in, session active)</h1>\n"

#define ZXID_MGMT_LOGOUT "<input type=submit name=gl value=\" Local Logout \">\n<input type=submit name=gr value=\" Single Logout (R) \">\n<input type=submit name=gs value=\" Single Logout (S) \">\n"

#define ZXID_MGMT_DEFED "<input type=submit name=gt value=\" Defederate (R) \">\n<input type=submit name=gu value=\" Defederate (S) \">\n"

#define ZXID_MGMT_FOOTER  "<hr><a href=\"http://zxid.org/\">zxid.org</a>, "
#define ZXID_MGMT_END     "<!-- EOF --->"

#endif
