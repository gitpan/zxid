/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_attrs -N zx_attr2tok c/zx-attrs.gperf  */
/* Computed positions: -k'1-2,4-5,7' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "c/zx-attrs.gperf"

/* c/zx-attrs.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 353
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 8
#define MAX_HASH_VALUE 979
/* maximum key range = 972, duplicates = 20 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 165,  10, 265, 180, 240,
      390,   5,   5, 225, 215,   0, 110, 395, 210, 180,
      130,  50,  95, 245,  15, 275, 360,  95, 980, 980,
      980, 980, 980, 980, 980,   0, 980,  50, 195,  15,
        0,   0,  35, 365,  55,  15,  90,   0, 135, 145,
      110,   5,  55, 320,  15,   0,  10,   5,  60, 340,
      420,  25, 295,  10, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980, 980, 980, 980,
      980, 980, 980, 980, 980, 980, 980
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[6]+1];
      /*FALLTHROUGH*/
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const unsigned char zx_attrs_lens[] =
  {
     3,  4,  8,  2,  2,  2,  3,  3,  4,  6,  7,  8, 21,  7,
     4,  4,  6,  7,  8,  4,  6, 12, 13,  9, 15,  8, 15, 11,
    17, 20,  2,  8,  4,  5,  8,  9, 15,  7, 13, 14, 10,  7,
    13,  4,  5,  6,  6,  6, 11,  7,  3,  6,  7, 13, 19,  6,
     4, 15, 11,  8,  9, 10,  6,  7,  3,  9,  5, 18, 14,  6,
     8,  6, 13,  9,  3, 10,  6, 12, 13,  5, 11,  7,  8, 16,
    12,  8,  4, 10, 10,  7,  3,  4,  5, 26, 23, 14, 10, 10,
     6, 12, 10, 11,  7,  9, 16,  2,  5,  7,  3, 10, 11, 12,
    13, 14, 15, 11,  7,  3,  6, 16, 17,  9, 10,  6, 12, 16,
    16, 15,  6, 13,  9, 16,  2,  2,  9, 15, 11,  5,  6, 12,
     8,  9, 15,  6,  6,  7,  8,  8, 16, 12, 20, 21, 22, 15,
     8,  3,  4, 10,  6, 12, 13,  9,  8, 11, 12, 13,  9, 11,
     7, 18, 19, 15,  8,  9, 21,  7, 30,  6, 27, 29, 10,  6,
    13, 10, 11,  6,  7, 23,  5,  8,  9, 20,  6, 13,  9, 15,
    14,  6,  7,  8, 10, 12, 23,  9, 20, 12, 15, 17,  8, 15,
    11,  9, 20, 17,  8, 10, 12,  3,  9,  5, 16, 12,  9, 16,
     3,  9,  7,  8, 19, 11, 13,  5,  7,  9,  6,  6, 12,  8,
     4, 10, 16,  2,  5, 11, 12,  5, 16,  5,  3,  3,  3, 14,
    10,  6, 12,  8,  6, 13, 14,  5, 11, 18, 14, 11, 15, 16,
    14,  6,  9, 15,  6,  7, 14, 11,  7,  9, 10, 12,  9, 10,
    13, 10, 26, 12,  8, 18, 10, 21, 12, 10, 10, 16,  7,  7,
     8, 11, 12,  8, 12, 13, 10,  7,  8, 13, 15, 18,  5, 16,
     5,  4,  4, 12,  8, 12, 12, 12, 10,  7, 16,  9, 15, 11,
     6,  9, 10, 13,  8,  8, 10,  8,  5,  9,  9,  9,  5,  7,
    10, 11, 10, 11, 12,  8, 10, 15,  7, 13, 10,  9,  8, 12,
     9,  7,  9
  };

const struct zx_tok zx_attrs[] =
  {
#line 348 "c/zx-attrs.gperf"
    {"use", "", 0},
#line 349 "c/zx-attrs.gperf"
    {"used", "", 0},
#line 316 "c/zx-attrs.gperf"
    {"sequence", "", 0},
#line 155 "c/zx-attrs.gperf"
    {"id", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 225 "c/zx-attrs.gperf"
    {"id", "", 0},
#line 190 "c/zx-attrs.gperf"
    {"id", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 298 "c/zx-attrs.gperf"
    {"ref", "", 0},
#line 346 "c/zx-attrs.gperf"
    {"uri", "", 0},
#line 162 "c/zx-attrs.gperf"
    {"code", "", 0},
#line 237 "c/zx-attrs.gperf"
    {"issuer", "", 0},
#line 166 "c/zx-attrs.gperf"
    {"consent", "", 0},
#line 227 "c/zx-attrs.gperf"
    {"idSource", "", 0},
#line 329 "c/zx-attrs.gperf"
    {"studentInGoodStanding", "", 0},
#line 331 "c/zx-attrs.gperf"
    {"success", "", 0},
#line 339 "c/zx-attrs.gperf"
    {"type", "", 0},
#line 361 "c/zx-attrs.gperf"
    {"type", "xsi", zx_ns_tab + zx_xmlns_ix_xsi},
#line 327 "c/zx-attrs.gperf"
    {"starts", "", 0},
#line 168 "c/zx-attrs.gperf"
    {"context", "", 0},
#line 174 "c/zx-attrs.gperf"
    {"currency", "", 0},
#line 121 "c/zx-attrs.gperf"
    {"Type", "", 0},
#line 281 "c/zx-attrs.gperf"
    {"offset", "", 0},
#line 175 "c/zx-attrs.gperf"
    {"currencyCode", "", 0},
#line 283 "c/zx-attrs.gperf"
    {"otherInterval", "", 0},
#line 343 "c/zx-attrs.gperf"
    {"typesonly", "", 0},
#line 173 "c/zx-attrs.gperf"
    {"credentialLevel", "", 0},
#line 296 "c/zx-attrs.gperf"
    {"redirect", "", 0},
#line 176 "c/zx-attrs.gperf"
    {"currentEmployer", "", 0},
#line 297 "c/zx-attrs.gperf"
    {"redirectURL", "", 0},
#line 177 "c/zx-attrs.gperf"
    {"currentlyEnrolled", "", 0},
#line 302 "c/zx-attrs.gperf"
    {"relocationConsidered", "", 0},
#line 142 "c/zx-attrs.gperf"
    {"at", "", 0},
#line 328 "c/zx-attrs.gperf"
    {"storeRef", "", 0},
#line 149 "c/zx-attrs.gperf"
    {"case", "", 0},
#line 314 "c/zx-attrs.gperf"
    {"scope", "", 0},
#line 308 "c/zx-attrs.gperf"
    {"required", "", 0},
#line 214 "c/zx-attrs.gperf"
    {"firstUsed", "", 0},
#line 136 "c/zx-attrs.gperf"
    {"advisoryAuthnID", "", 0},
#line 236 "c/zx-attrs.gperf"
    {"issueTo", "", 0},
#line 309 "c/zx-attrs.gperf"
    {"requiredChars", "", 0},
#line 299 "c/zx-attrs.gperf"
    {"refToMessageID", "", 0},
#line 287 "c/zx-attrs.gperf"
    {"percentage", "", 0},
#line 354 "c/zx-attrs.gperf"
    {"version", "", 0},
#line 134 "c/zx-attrs.gperf"
    {"addressCoding", "", 0},
#line 141 "c/zx-attrs.gperf"
    {"asof", "", 0},
#line 200 "c/zx-attrs.gperf"
    {"actor", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 197 "c/zx-attrs.gperf"
    {"script", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 315 "c/zx-attrs.gperf"
    {"script", "", 0},
#line 219 "c/zx-attrs.gperf"
    {"script", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 167 "c/zx-attrs.gperf"
    {"contactType", "", 0},
#line 172 "c/zx-attrs.gperf"
    {"created", "", 0},
#line 99 "c/zx-attrs.gperf"
    {"Ref", "", 0},
#line 320 "c/zx-attrs.gperf"
    {"setReq", "", 0},
#line 27 "c/zx-attrs.gperf"
    {"Binding", "", 0},
#line 238 "c/zx-attrs.gperf"
    {"issuingRegion", "", 0},
#line 310 "c/zx-attrs.gperf"
    {"responseConsumerURL", "", 0},
#line 96 "c/zx-attrs.gperf"
    {"Reason", "", 0},
#line 224 "c/zx-attrs.gperf"
    {"href", "", 0},
#line 285 "c/zx-attrs.gperf"
    {"overrideAllowed", "", 0},
#line 169 "c/zx-attrs.gperf"
    {"contingency", "", 0},
#line 103 "c/zx-attrs.gperf"
    {"Resource", "", 0},
#line 102 "c/zx-attrs.gperf"
    {"RequestID", "", 0},
#line 104 "c/zx-attrs.gperf"
    {"ResourceId", "", 0},
#line 307 "c/zx-attrs.gperf"
    {"reqRef", "", 0},
#line 318 "c/zx-attrs.gperf"
    {"service", "", 0},
#line 64 "c/zx-attrs.gperf"
    {"Loc", "", 0},
#line 234 "c/zx-attrs.gperf"
    {"isDefault", "", 0},
#line 353 "c/zx-attrs.gperf"
    {"value", "", 0},
#line 101 "c/zx-attrs.gperf"
    {"RequestContextPath", "", 0},
#line 330 "c/zx-attrs.gperf"
    {"subscriptionID", "", 0},
#line 290 "c/zx-attrs.gperf"
    {"prefix", "", 0},
#line 199 "c/zx-attrs.gperf"
    {"duration", "", 0},
#line 323 "c/zx-attrs.gperf"
    {"signed", "", 0},
#line 201 "c/zx-attrs.gperf"
    {"encodingStyle", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 350 "c/zx-attrs.gperf"
    {"validFrom", "", 0},
#line 278 "c/zx-attrs.gperf"
    {"nym", "", 0},
#line 352 "c/zx-attrs.gperf"
    {"validUntil", "", 0},
#line 246 "c/zx-attrs.gperf"
    {"leader", "", 0},
#line 301 "c/zx-attrs.gperf"
    {"relationship", "", 0},
#line 223 "c/zx-attrs.gperf"
    {"honorsProgram", "", 0},
#line 170 "c/zx-attrs.gperf"
    {"count", "", 0},
#line 322 "c/zx-attrs.gperf"
    {"shiftPeriod", "", 0},
#line 321 "c/zx-attrs.gperf"
    {"sharing", "", 0},
#line 231 "c/zx-attrs.gperf"
    {"interact", "", 0},
#line 222 "c/zx-attrs.gperf"
    {"hierarchicalRole", "", 0},
#line 288 "c/zx-attrs.gperf"
    {"positionType", "", 0},
#line 132 "c/zx-attrs.gperf"
    {"activate", "", 0},
#line 248 "c/zx-attrs.gperf"
    {"link", "", 0},
#line 133 "c/zx-attrs.gperf"
    {"activateAt", "", 0},
#line 144 "c/zx-attrs.gperf"
    {"attributes", "", 0},
#line 295 "c/zx-attrs.gperf"
    {"purpose", "", 0},
#line 261 "c/zx-attrs.gperf"
    {"min", "", 0},
#line 266 "c/zx-attrs.gperf"
    {"name", "", 0},
#line 338 "c/zx-attrs.gperf"
    {"title", "", 0},
#line 293 "c/zx-attrs.gperf"
    {"protocolSupportEnumeration", "", 0},
#line 97 "c/zx-attrs.gperf"
    {"ReauthenticateOnOrAfter", "", 0},
#line 131 "c/zx-attrs.gperf"
    {"academicHonors", "", 0},
#line 196 "c/zx-attrs.gperf"
    {"predefined", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 289 "c/zx-attrs.gperf"
    {"predefined", "", 0},
#line 257 "c/zx-attrs.gperf"
    {"medium", "", 0},
#line 186 "c/zx-attrs.gperf"
    {"documentType", "", 0},
#line 105 "c/zx-attrs.gperf"
    {"ResponseID", "", 0},
#line 311 "c/zx-attrs.gperf"
    {"resultsType", "", 0},
#line 163 "c/zx-attrs.gperf"
    {"comment", "", 0},
#line 303 "c/zx-attrs.gperf"
    {"remaining", "", 0},
#line 106 "c/zx-attrs.gperf"
    {"ResponseLocation", "", 0},
#line 82 "c/zx-attrs.gperf"
    {"OK", "", 0},
#line 209 "c/zx-attrs.gperf"
    {"event", "", 0},
#line 351 "c/zx-attrs.gperf"
    {"validTo", "", 0},
#line 139 "c/zx-attrs.gperf"
    {"all", "", 0},
#line 294 "c/zx-attrs.gperf"
    {"providerID", "", 0},
#line 89 "c/zx-attrs.gperf"
    {"PolicySetId", "", 0},
#line 182 "c/zx-attrs.gperf"
    {"derefaliases", "", 0},
#line 148 "c/zx-attrs.gperf"
    {"cacheDuration", "", 0},
#line 90 "c/zx-attrs.gperf"
    {"PolicySetIdRef", "", 0},
#line 165 "c/zx-attrs.gperf"
    {"confirmationURI", "", 0},
#line 255 "c/zx-attrs.gperf"
    {"measureType", "", 0},
#line 10 "c/zx-attrs.gperf"
    {"Address", "", 0},
#line 250 "c/zx-attrs.gperf"
    {"max", "", 0},
#line 42 "c/zx-attrs.gperf"
    {"Digest", "", 0},
#line 282 "c/zx-attrs.gperf"
    {"organizationType", "", 0},
#line 304 "c/zx-attrs.gperf"
    {"replyChargingSize", "", 0},
#line 98 "c/zx-attrs.gperf"
    {"Recipient", "", 0},
#line 159 "c/zx-attrs.gperf"
    {"sortWeight", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 259 "c/zx-attrs.gperf"
    {"method", "", 0},
#line 241 "c/zx-attrs.gperf"
    {"jurisdiction", "", 0},
#line 156 "c/zx-attrs.gperf"
    {"modificationTime", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 193 "c/zx-attrs.gperf"
    {"modificationTime", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 43 "c/zx-attrs.gperf"
    {"DigestAlgorithm", "", 0},
#line 84 "c/zx-attrs.gperf"
    {"Offset", "", 0},
#line 305 "c/zx-attrs.gperf"
    {"replyDeadline", "", 0},
#line 204 "c/zx-attrs.gperf"
    {"endReason", "", 0},
#line 100 "c/zx-attrs.gperf"
    {"RelationshipType", "", 0},
#line 55 "c/zx-attrs.gperf"
    {"Id", "", 0},
#line 358 "c/zx-attrs.gperf"
    {"Id", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 337 "c/zx-attrs.gperf"
    {"timestamp", "", 0},
#line 92 "c/zx-attrs.gperf"
    {"ProtocolBinding", "", 0},
#line 342 "c/zx-attrs.gperf"
    {"typeOfGroup", "", 0},
#line 79 "c/zx-attrs.gperf"
    {"Nonce", "", 0},
#line 61 "c/zx-attrs.gperf"
    {"Issuer", "", 0},
#line 284 "c/zx-attrs.gperf"
    {"otherPayType", "", 0},
#line 66 "c/zx-attrs.gperf"
    {"Location", "", 0},
#line 258 "c/zx-attrs.gperf"
    {"messageID", "", 0},
#line 340 "c/zx-attrs.gperf"
    {"typeDescription", "", 0},
#line 153 "c/zx-attrs.gperf"
    {"format", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 215 "c/zx-attrs.gperf"
    {"format", "", 0},
#line 158 "c/zx-attrs.gperf"
    {"sortAlg", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 157 "c/zx-attrs.gperf"
    {"modifier", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 194 "c/zx-attrs.gperf"
    {"modifier", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 135 "c/zx-attrs.gperf"
    {"adminNotifyToRef", "", 0},
#line 60 "c/zx-attrs.gperf"
    {"IssueInstant", "", 0},
#line 23 "c/zx-attrs.gperf"
    {"AuthenticationMethod", "", 0},
#line 22 "c/zx-attrs.gperf"
    {"AuthenticationInstant", "", 0},
#line 332 "c/zx-attrs.gperf"
    {"suppliedByOrganization", "", 0},
#line 178 "c/zx-attrs.gperf"
    {"dateDescription", "", 0},
#line 37 "c/zx-attrs.gperf"
    {"Decision", "", 0},
#line 116 "c/zx-attrs.gperf"
    {"Sig", "", 0},
#line 74 "c/zx-attrs.gperf"
    {"Name", "", 0},
#line 93 "c/zx-attrs.gperf"
    {"ProviderID", "", 0},
#line 341 "c/zx-attrs.gperf"
    {"typeId", "", 0},
#line 94 "c/zx-attrs.gperf"
    {"ProviderName", "", 0},
#line 63 "c/zx-attrs.gperf"
    {"LatestVersion", "", 0},
#line 324 "c/zx-attrs.gperf"
    {"sizelimit", "", 0},
#line 264 "c/zx-attrs.gperf"
    {"moreLink", "", 0},
#line 19 "c/zx-attrs.gperf"
    {"AttributeId", "", 0},
#line 114 "c/zx-attrs.gperf"
    {"SessionIndex", "", 0},
#line 20 "c/zx-attrs.gperf"
    {"AttributeName", "", 0},
#line 336 "c/zx-attrs.gperf"
    {"timelimit", "", 0},
#line 16 "c/zx-attrs.gperf"
    {"AssertionID", "", 0},
#line 30 "c/zx-attrs.gperf"
    {"Consent", "", 0},
#line 21 "c/zx-attrs.gperf"
    {"AttributeNamespace", "", 0},
#line 115 "c/zx-attrs.gperf"
    {"SessionNotOnOrAfter", "", 0},
#line 317 "c/zx-attrs.gperf"
    {"serverMechanism", "", 0},
#line 208 "c/zx-attrs.gperf"
    {"errorURL", "", 0},
#line 80 "c/zx-attrs.gperf"
    {"NotBefore", "", 0},
#line 17 "c/zx-attrs.gperf"
    {"AssertionIssueInstant", "", 0},
#line 31 "c/zx-attrs.gperf"
    {"Context", "", 0},
#line 18 "c/zx-attrs.gperf"
    {"AttributeConsumingServiceIndex", "", 0},
#line 45 "c/zx-attrs.gperf"
    {"Effect", "", 0},
#line 15 "c/zx-attrs.gperf"
    {"AssertionConsumerServiceURL", "", 0},
#line 14 "c/zx-attrs.gperf"
    {"AssertionConsumerServiceIndex", "", 0},
#line 181 "c/zx-attrs.gperf"
    {"degreeType", "", 0},
#line 65 "c/zx-attrs.gperf"
    {"Locale", "", 0},
#line 107 "c/zx-attrs.gperf"
    {"ReturnContext", "", 0},
#line 313 "c/zx-attrs.gperf"
    {"schoolType", "", 0},
#line 229 "c/zx-attrs.gperf"
    {"includeData", "", 0},
#line 276 "c/zx-attrs.gperf"
    {"number", "", 0},
#line 326 "c/zx-attrs.gperf"
    {"srsName", "", 0},
#line 228 "c/zx-attrs.gperf"
    {"includeCommonAttributes", "", 0},
#line 242 "c/zx-attrs.gperf"
    {"label", "", 0},
#line 265 "c/zx-attrs.gperf"
    {"multiple", "", 0},
#line 58 "c/zx-attrs.gperf"
    {"IsDefault", "", 0},
#line 268 "c/zx-attrs.gperf"
    {"natureOfRelationship", "", 0},
#line 109 "c/zx-attrs.gperf"
    {"RuleId", "", 0},
#line 26 "c/zx-attrs.gperf"
    {"AuthorityKind", "", 0},
#line 11 "c/zx-attrs.gperf"
    {"Algorithm", "", 0},
#line 203 "c/zx-attrs.gperf"
    {"employerOrgType", "", 0},
#line 198 "c/zx-attrs.gperf"
    {"dunsNumberType", "", 0},
#line 147 "c/zx-attrs.gperf"
    {"branch", "", 0},
#line 41 "c/zx-attrs.gperf"
    {"Dialect", "", 0},
#line 232 "c/zx-attrs.gperf"
    {"interval", "", 0},
#line 117 "c/zx-attrs.gperf"
    {"Structured", "", 0},
#line 233 "c/zx-attrs.gperf"
    {"intervalType", "", 0},
#line 130 "c/zx-attrs.gperf"
    {"WantAuthnRequestsSigned", "", 0},
#line 256 "c/zx-attrs.gperf"
    {"mechanism", "", 0},
#line 129 "c/zx-attrs.gperf"
    {"WantAssertionsSigned", "", 0},
#line 24 "c/zx-attrs.gperf"
    {"AuthnInstant", "", 0},
#line 33 "c/zx-attrs.gperf"
    {"CreatedDateTime", "", 0},
#line 253 "c/zx-attrs.gperf"
    {"maxProcessingTime", "", 0},
#line 206 "c/zx-attrs.gperf"
    {"entityID", "", 0},
#line 118 "c/zx-attrs.gperf"
    {"SubjectCategory", "", 0},
#line 183 "c/zx-attrs.gperf"
    {"description", "", 0},
#line 267 "c/zx-attrs.gperf"
    {"namespace", "", 0},
#line 86 "c/zx-attrs.gperf"
    {"PolicyCombiningAlgId", "", 0},
#line 184 "c/zx-attrs.gperf"
    {"descriptionIDRefs", "", 0},
#line 46 "c/zx-attrs.gperf"
    {"Encoding", "", 0},
#line 113 "c/zx-attrs.gperf"
    {"SeedLength", "", 0},
#line 47 "c/zx-attrs.gperf"
    {"EncodingType", "", 0},
#line 123 "c/zx-attrs.gperf"
    {"URI", "", 0},
#line 59 "c/zx-attrs.gperf"
    {"IsPassive", "", 0},
#line 347 "c/zx-attrs.gperf"
    {"usage", "", 0},
#line 205 "c/zx-attrs.gperf"
    {"enrollmentStatus", "", 0},
#line 180 "c/zx-attrs.gperf"
    {"deactivateAt", "", 0},
#line 274 "c/zx-attrs.gperf"
    {"notSorted", "", 0},
#line 143 "c/zx-attrs.gperf"
    {"attendanceStatus", "", 0},
#line 216 "c/zx-attrs.gperf"
    {"gid", "", 0},
#line 286 "c/zx-attrs.gperf"
    {"ownership", "", 0},
#line 128 "c/zx-attrs.gperf"
    {"Version", "", 0},
#line 87 "c/zx-attrs.gperf"
    {"PolicyId", "", 0},
#line 25 "c/zx-attrs.gperf"
    {"AuthnRequestsSigned", "", 0},
#line 88 "c/zx-attrs.gperf"
    {"PolicyIdRef", "", 0},
#line 85 "c/zx-attrs.gperf"
    {"ParameterName", "", 0},
#line 32 "c/zx-attrs.gperf"
    {"Count", "", 0},
#line 207 "c/zx-attrs.gperf"
    {"entryID", "", 0},
#line 54 "c/zx-attrs.gperf"
    {"IPAddress", "", 0},
#line 191 "c/zx-attrs.gperf"
    {"itemID", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 239 "c/zx-attrs.gperf"
    {"itemID", "", 0},
#line 56 "c/zx-attrs.gperf"
    {"InResponseTo", "", 0},
#line 271 "c/zx-attrs.gperf"
    {"nextPoll", "", 0},
#line 355 "c/zx-attrs.gperf"
    {"wait", "", 0},
#line 345 "c/zx-attrs.gperf"
    {"updateType", "", 0},
#line 221 "c/zx-attrs.gperf"
    {"graduatingDegree", "", 0},
#line 53 "c/zx-attrs.gperf"
    {"ID", "", 0},
#line 319 "c/zx-attrs.gperf"
    {"setID", "", 0},
#line 38 "c/zx-attrs.gperf"
    {"Destination", "", 0},
#line 273 "c/zx-attrs.gperf"
    {"notOnOrAfter", "", 0},
#line 124 "c/zx-attrs.gperf"
    {"Value", "", 0},
#line 57 "c/zx-attrs.gperf"
    {"InputContextOnly", "", 0},
#line 306 "c/zx-attrs.gperf"
    {"reqID", "", 0},
#line 150 "c/zx-attrs.gperf"
    {"ACC", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 217 "c/zx-attrs.gperf"
    {"ACC", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 187 "c/zx-attrs.gperf"
    {"ACC", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 164 "c/zx-attrs.gperf"
    {"companyOffered", "", 0},
#line 235 "c/zx-attrs.gperf"
    {"isRequired", "", 0},
#line 119 "c/zx-attrs.gperf"
    {"Target", "", 0},
#line 39 "c/zx-attrs.gperf"
    {"DeviceInHand", "", 0},
#line 279 "c/zx-attrs.gperf"
    {"objectID", "", 0},
#line 300 "c/zx-attrs.gperf"
    {"regexp", "", 0},
#line 137 "c/zx-attrs.gperf"
    {"affiliationID", "", 0},
#line 312 "c/zx-attrs.gperf"
    {"returnLocation", "", 0},
#line 154 "c/zx-attrs.gperf"
    {"group", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 171 "c/zx-attrs.gperf"
    {"countryCode", "", 0},
#line 138 "c/zx-attrs.gperf"
    {"affiliationOwnerID", "", 0},
#line 202 "c/zx-attrs.gperf"
    {"mustUnderstand", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 275 "c/zx-attrs.gperf"
    {"notifyToRef", "", 0},
#line 272 "c/zx-attrs.gperf"
    {"notChangedSince", "", 0},
#line 277 "c/zx-attrs.gperf"
    {"numberOfStudents", "", 0},
#line 179 "c/zx-attrs.gperf"
    {"dateOfIncident", "", 0},
#line 69 "c/zx-attrs.gperf"
    {"Method", "", 0},
#line 77 "c/zx-attrs.gperf"
    {"Namespace", "", 0},
#line 44 "c/zx-attrs.gperf"
    {"EarliestVersion", "", 0},
#line 122 "c/zx-attrs.gperf"
    {"UAProf", "", 0},
#line 213 "c/zx-attrs.gperf"
    {"expires", "", 0},
#line 212 "c/zx-attrs.gperf"
    {"expirationDate", "", 0},
#line 269 "c/zx-attrs.gperf"
    {"newEntryIDs", "", 0},
#line 226 "c/zx-attrs.gperf"
    {"idOwner", "", 0},
#line 335 "c/zx-attrs.gperf"
    {"timeStamp", "", 0},
#line 29 "c/zx-attrs.gperf"
    {"Comparison", "", 0},
#line 71 "c/zx-attrs.gperf"
    {"MinorVersion", "", 0},
#line 120 "c/zx-attrs.gperf"
    {"TimeStamp", "", 0},
#line 48 "c/zx-attrs.gperf"
    {"ForceAuthn", "", 0},
#line 73 "c/zx-attrs.gperf"
    {"MustBePresent", "", 0},
#line 52 "c/zx-attrs.gperf"
    {"FunctionId", "", 0},
#line 247 "c/zx-attrs.gperf"
    {"libertyPrincipalIdentifier", "", 0},
#line 146 "c/zx-attrs.gperf"
    {"baseInterval", "", 0},
#line 262 "c/zx-attrs.gperf"
    {"minChars", "", 0},
#line 108 "c/zx-attrs.gperf"
    {"RuleCombiningAlgId", "", 0},
#line 40 "c/zx-attrs.gperf"
    {"DeviceType", "", 0},
#line 220 "c/zx-attrs.gperf"
    {"governingAgreementRef", "", 0},
#line 112 "c/zx-attrs.gperf"
    {"SPProvidedID", "", 0},
#line 195 "c/zx-attrs.gperf"
    {"objectType", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 280 "c/zx-attrs.gperf"
    {"objectType", "", 0},
#line 72 "c/zx-attrs.gperf"
    {"ModifiedDateTime", "", 0},
#line 151 "c/zx-attrs.gperf"
    {"ACCTime", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 188 "c/zx-attrs.gperf"
    {"ACCTime", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 260 "c/zx-attrs.gperf"
    {"mimeType", "", 0},
#line 185 "c/zx-attrs.gperf"
    {"displayOnly", "", 0},
#line 67 "c/zx-attrs.gperf"
    {"MajorVersion", "", 0},
#line 245 "c/zx-attrs.gperf"
    {"lastUsed", "", 0},
#line 81 "c/zx-attrs.gperf"
    {"NotOnOrAfter", "", 0},
#line 76 "c/zx-attrs.gperf"
    {"NameQualifier", "", 0},
#line 325 "c/zx-attrs.gperf"
    {"smsEnabled", "", 0},
#line 68 "c/zx-attrs.gperf"
    {"MatchId", "", 0},
#line 251 "c/zx-attrs.gperf"
    {"maxChars", "", 0},
#line 344 "c/zx-attrs.gperf"
    {"unitOfMeasure", "", 0},
#line 28 "c/zx-attrs.gperf"
    {"CombinePolicies", "", 0},
#line 161 "c/zx-attrs.gperf"
    {"classificationName", "", 0},
#line 360 "c/zx-attrs.gperf"
    {"xpath", "", 0},
#line 140 "c/zx-attrs.gperf"
    {"allowAdaptations", "", 0},
#line 230 "c/zx-attrs.gperf"
    {"index", "", 0},
#line 243 "c/zx-attrs.gperf"
    {"lang", "", 0},
#line 359 "c/zx-attrs.gperf"
    {"lang", "xml", zx_ns_tab + zx_xmlns_ix_xml},
#line 160 "c/zx-attrs.gperf"
    {"changedSince", "", 0},
#line 78 "c/zx-attrs.gperf"
    {"NodeType", "", 0},
#line 152 "c/zx-attrs.gperf"
    {"changeFormat", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 218 "c/zx-attrs.gperf"
    {"changeFormat", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 189 "c/zx-attrs.gperf"
    {"changeFormat", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 34 "c/zx-attrs.gperf"
    {"DNSAddress", "", 0},
#line 291 "c/zx-attrs.gperf"
    {"primary", "", 0},
#line 292 "c/zx-attrs.gperf"
    {"primaryIndicator", "", 0},
#line 110 "c/zx-attrs.gperf"
    {"RuleIdRef", "", 0},
#line 252 "c/zx-attrs.gperf"
    {"maxInteractTime", "", 0},
#line 334 "c/zx-attrs.gperf"
    {"timeOffType", "", 0},
#line 49 "c/zx-attrs.gperf"
    {"Format", "", 0},
#line 51 "c/zx-attrs.gperf"
    {"FulfillOn", "", 0},
#line 91 "c/zx-attrs.gperf"
    {"PrefixList", "", 0},
#line 211 "c/zx-attrs.gperf"
    {"excludedChars", "", 0},
#line 244 "c/zx-attrs.gperf"
    {"language", "", 0},
#line 36 "c/zx-attrs.gperf"
    {"DataType", "", 0},
#line 126 "c/zx-attrs.gperf"
    {"VariableId", "", 0},
#line 263 "c/zx-attrs.gperf"
    {"minValue", "", 0},
#line 357 "c/zx-attrs.gperf"
    {"Usage", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 192 "c/zx-attrs.gperf"
    {"itemIDRef", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 249 "c/zx-attrs.gperf"
    {"itemIDRef", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 240 "c/zx-attrs.gperf"
    {"itemIDRef", "", 0},
#line 12 "c/zx-attrs.gperf"
    {"Allow", "", 0},
#line 145 "c/zx-attrs.gperf"
    {"authzID", "", 0},
#line 95 "c/zx-attrs.gperf"
    {"ProxyCount", "", 0},
#line 13 "c/zx-attrs.gperf"
    {"AllowCreate", "", 0},
#line 75 "c/zx-attrs.gperf"
    {"NameFormat", "", 0},
#line 127 "c/zx-attrs.gperf"
    {"VerifyDepth", "", 0},
#line 50 "c/zx-attrs.gperf"
    {"FriendlyName", "", 0},
#line 254 "c/zx-attrs.gperf"
    {"maxValue", "", 0},
#line 270 "c/zx-attrs.gperf"
    {"nextOffset", "", 0},
#line 111 "c/zx-attrs.gperf"
    {"SPNameQualifier", "", 0},
#line 35 "c/zx-attrs.gperf"
    {"DNSName", "", 0},
#line 362 "c/zx-attrs.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 210 "c/zx-attrs.gperf"
    {"examPassed", "", 0},
#line 125 "c/zx-attrs.gperf"
    {"ValueType", "", 0},
#line 70 "c/zx-attrs.gperf"
    {"MimeType", "", 0},
#line 83 "c/zx-attrs.gperf"
    {"ObligationId", "", 0},
#line 62 "c/zx-attrs.gperf"
    {"ItemIDRef", "", 0},
#line 333 "c/zx-attrs.gperf"
    {"svcMDID", "", 0},
#line 356 "c/zx-attrs.gperf"
    {"wantDSEPR", "", 0}
  };

static const short lookup[] =
  {
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,     0,     1,    -1,    -1,    -1,     2,
       -1,    -1,    -1,  -373,     6,  -350,    -3,
       -1,    -1,     7,     8,    -1,     9,    -1,
       -1,    -1,    -1,    -1,    10,    11,    -1,
       -1,    12,    13,    -1,  -405,    -1,    16,
       17,    18,    19,    -1,    20,    21,    22,
       23,    24,  -339,    -2,    25,    -1,    26,
       27,    28,    -1,    -1,    29,    -1,    30,
       -1,    -1,    -1,    -1,    -1,    31,    32,
       -1,    -1,    -1,    -1,    -1,    33,    -1,
       -1,    34,    35,    36,    -1,    37,    38,
       39,    40,    -1,    41,    42,    43,    44,
     -446,  -308,    -3,    -1,    -1,    48,    49,
       50,    -1,    -1,    51,    52,    53,    54,
       -1,    55,    -1,    -1,    56,    57,    58,
       -1,    59,    60,    61,    62,    63,    64,
       65,    66,    -1,    -1,    67,    68,    -1,
       69,    -1,    70,    -1,    -1,    71,    -1,
       72,    73,    -1,    -1,    -1,    74,    -1,
       75,    76,    77,    78,    -1,    79,    80,
       81,    82,    -1,    -1,    83,    84,    85,
       86,    87,    -1,    -1,    -1,    -1,    88,
       -1,    89,    90,    91,    92,    93,    -1,
       94,    95,  -527,    98,    99,  -257,    -2,
      100,   101,   102,    -1,   103,    -1,   104,
      105,    -1,    -1,   106,    -1,   107,   108,
       -1,   109,   110,   111,   112,   113,   114,
      115,   116,   117,    -1,    -1,   118,    -1,
       -1,    -1,    -1,   119,   120,    -1,   121,
      122,   123,   124,    -1,    -1,    -1,  -571,
     -228,    -2,    -1,   127,   128,    -1,   129,
      130,    -1,   131,  -586,    -1,   134,   135,
      136,  -221,    -2,    -1,   137,   138,   139,
      140,   141,   142,  -602,   145,  -598,  -207,
       -2,   148,   149,  -210,    -2,   150,   151,
      152,    -1,    -1,   153,    -1,    -1,   154,
       -1,    -1,    -1,    -1,   155,   156,   157,
      158,   159,   160,   161,    -1,    -1,    -1,
      162,    -1,    -1,   163,   164,   165,   166,
       -1,   167,   168,   169,   170,   171,    -1,
       -1,   172,   173,    -1,   174,   175,    -1,
       -1,   176,   177,   178,    -1,   179,   180,
       -1,    -1,    -1,    -1,    -1,   181,    -1,
      182,    -1,   183,   184,    -1,    -1,    -1,
       -1,   185,   186,    -1,    -1,    -1,    -1,
       -1,   187,    -1,   188,    -1,    -1,   189,
      190,   191,   192,    -1,   193,   194,   195,
       -1,    -1,    -1,   196,    -1,   197,   198,
      199,    -1,   200,    -1,   201,   202,   203,
      204,    -1,   205,    -1,    -1,   206,    -1,
      207,   208,    -1,   209,   210,    -1,    -1,
      211,   212,    -1,   213,   214,    -1,   215,
       -1,   216,   217,   218,   219,   220,   221,
       -1,   222,    -1,   223,    -1,   224,   225,
       -1,    -1,   226,   227,   228,    -1,   229,
       -1,   230,    -1,   231,    -1,   232,    -1,
      233,    -1,  -762,   236,   237,   238,   239,
      240,   241,  -119,    -2,   242,   243,    -1,
       -1,    -1,    -1,    -1,   244,    -1,    -1,
      245,   246,    -1,    -1,    -1,   247,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  -793,
      251,   252,   253,   254,   255,  -105,    -3,
      256,    -1,   257,   258,   259,   260,    -1,
      261,   262,    -1,   263,    -1,    -1,    -1,
      264,   265,    -1,    -1,   266,    -1,   267,
       -1,    -1,   268,   269,   270,   271,    -1,
      272,    -1,   273,   274,    -1,   275,   276,
       -1,   277,    -1,   278,   279,    -1,    -1,
      280,    -1,   281,   282,   283,   284,    -1,
       -1,    -1,    -1,   285,    -1,   286,   287,
      288,    -1,    -1,  -860,   291,  -858,   294,
      -61,    -2,   -64,    -2,    -1,    -1,    -1,
      295,   296,   297,    -1,    -1,    -1,   298,
      299,    -1,   300,    -1,   301,   302,    -1,
       -1,    -1,    -1,   303,    -1,   304,    -1,
       -1,   305,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   306,
      307,    -1,    -1,    -1,   308,    -1,    -1,
       -1,  -909,   -44,    -2,   311,   312,    -1,
       -1,    -1,  -917,   -40,    -3,   316,    -1,
      317,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   318,    -1,    -1,   319,   320,
      321,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   322,    -1,    -1,   323,   324,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   325,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   326,    -1,    -1,    -1,    -1,
      327,    -1,    -1,    -1,    -1,    -1,    -1,
      328,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   329,    -1,    -1,    -1,    -1,    -1,
       -1,   330,    -1,    -1,    -1, -1007,   334,
       -1,   335,   -22,    -3,   336,   337,    -1,
       -1,    -1,   338,   339,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      340,   341,    -1,   342,    -1,    -1,    -1,
       -1,   343,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   344,
      345,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   346,    -1,    -1,    -1,   347,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   348,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   349,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   350,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      351,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   352
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zx_attr2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              if (len == zx_attrs_lens[index])
                {
                  register const char *s = zx_attrs[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zx_attrs[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &zx_attrs_lens[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordptr = &zx_attrs[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordendptr = wordptr + -lookup[offset + 1];

              while (wordptr < wordendptr)
                {
                  if (len == *lengthptr)
                    {
                      register const char *s = wordptr->name;

                      if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                        return wordptr;
                    }
                  lengthptr++;
                  wordptr++;
                }
            }
        }
    }
  return 0;
}
#line 363 "c/zx-attrs.gperf"

/* EOF - gperf -t -D -C -Nzx_attr2tok c/zx-attrs.gperf */
