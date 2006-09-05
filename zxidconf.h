/* zxidconf.h  -  Configuration of ZXID SP CGI
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing. See file COPYING.
 * $Id: zxidconf.h,v 1.7 2006/08/31 15:44:42 sampo Exp $
 *
 * 12.8.2006, created --Sampo
 */

#ifndef _zxidconf_h
#define _zxidconf_h

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

/* URL for reading Common Domain Cookie. It must end in "zxid". The hostname
 * and port number should match the server under which zxid CGI is accessible. */
#define ZXID_CDC_URL "https://sp1.zxidcommon.org:8443/zxid"

/* How to handle CDC designated IdP. See zxid.h for explanation of constants. */
#define ZXID_CDC_CHOICE ZXID_CDC_CHOICE_UI_PREF

/* Following four boolean configuration options control how (IdP) metadata
 * is obtained. The metadata can be in a cache (by default directory /var/zxid/cot)
 * or it can be fetched "on the fly" using the well known location method.
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

/* Whether AuthnReq is signed (controls both metadata and actual behavior).
 * Must be string "0" or "1". */
#define ZXID_AUTHN_REQ_SIGN "0"

/* Whether SP insists that SSO assertiosn are signed. Affects metadata.
 * Must be string "0" or "1". Recommended value "1". */
#define ZXID_WANT_SSO_A7N_SIGNED "1"

/* How many random bits to use in an ID. It would be useful of this was
 * such that it produces nice unpadded base64 string, i.e. multiple of 24 bits.
 * Longer IDs reduce chances of random collision (most code does not
 * check uniqueness of ID) and may increase security. For security purposes
 * 144 bits is probably good enugh.
 * E.g:  24 bits ==  3 bytes ==  4 base64 chars,
 *       48 bits ==  6 bytes ==  8 base64 chars,
 *      120 bits == 15 bytes == 20 base64 chars,
 *      144 bits == 18 bytes == 24 base64 chars */
#define ZXID_ID_BITS 48
#define ZXID_ID_MAX_BITS 168  /* used for static buffer allocation */

/* Whether true randomness is obtained.
 * 0=use OpenSSL RAND_pseudo_bytes(), which usually uses /dev/urandom
 * 1=use OpenSSL RAND_bytes(), which usually uses /dev/random
 *
 * Although true randomness may be more secure, it is operationally
 * problematic because if not enough randomness is available, the
 * system will block (stop) until enough randomness arrives. Generally
 * true randomness is not feasible in a server environment unless
 * you have hardware random number generator. */
#define ZXID_TRUE_RAND 0

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
#define ZXID_MAX_BUF 1024

/* Body tag for the ZXID SP generated pages. Edit this to change the colors. */
#define ZXID_BODY_TAG "<body bgcolor=\"#330033\" text=\"#ffaaff\" link=\"#ffddff\" vlink=\"#aa44aa\" alink=\"#ffffff\"><font face=sans>"

#endif
