/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_elems -N zx_elem2tok c/zx-elems.gperf  */
/* Computed positions: -k'1,4,8,10,$' */

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

#line 1 "c/zx-elems.gperf"

/* c/zx-elems.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 531
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 48
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 1179
/* maximum key range = 1179, duplicates = 125 */

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
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180,  375, 1180, 1180,
      1180, 1180, 1180, 1180, 1180,   15,   35,  215,   95,  120,
       290,  395,  100,   95,    5,  280,  498,  200,  390,  410,
       305,   65,   45,   20,  255,  310,   85,  155,    0,    0,
        15, 1180, 1180, 1180, 1180,    0, 1180,   45,  115,  240,
       190,    0,  200,  170,    0,   20,  100,   10,   30,  245,
         5,    0,  190,   25,   20,  130,    5,   65,  310,   20,
       140,   95,  110, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180, 1180,
      1180, 1180, 1180, 1180, 1180, 1180
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const unsigned char zx_elems_lens[] =
  {
     1,  5,  1,  9,  9,  9,  6,  6,  8,  4, 10, 10, 12, 12,
     8,  8, 10,  6,  6,  8,  8,  9,  9,  6,  6,  6,  6, 22,
    13,  9,  9, 17,  8,  9, 15, 16, 12, 12, 19, 20, 24, 25,
    16, 12, 28, 16, 12, 13, 14, 15, 21, 21,  7, 18, 18, 22,
    23, 29, 15, 15, 28, 22, 26, 28, 23, 23, 14, 26, 12, 12,
    13,  4,  4, 30, 18, 18, 19, 19, 10, 21,  7, 18, 18, 20,
    20, 11, 17,  8,  8,  8, 20,  1,  7,  7,  7, 18,  9,  9,
     9,  9,  9,  9, 25,  6,  8, 14, 14, 30, 18, 14, 10, 16,
    13, 20, 21, 13, 19,  5,  5, 13, 30,  6,  6,  6,  6,  6,
    29, 30, 21, 37, 13, 13, 19,  7,  7, 18, 19, 11, 18, 14,
     5,  5,  5,  6,  6, 19, 23, 23,  4, 15, 22, 16, 18, 19,
    21,  8, 14, 14, 10, 11, 27, 15, 11, 13, 13,  4,  4,  4,
    15, 28, 19,  6,  8, 19, 20, 20, 16, 27,  8,  8, 24, 10,
    10, 19, 10, 10, 26, 24, 11,  2, 13,  9, 25,  7,  7, 13,
     5,  5, 11,  7,  4,  4, 25,  6,  6,  6, 28, 19, 15, 15,
    31,  7, 18, 25,  8, 10, 10, 10,  7, 14, 14, 14, 20,  6,
    12, 12, 13,  9,  9, 12, 19, 19,  8, 14,  7,  7, 18, 18,
    19, 20, 11, 23, 19, 20,  6,  6,  6,  8,  8,  5,  6,  7,
    14,  7,  8,  5,  5,  5, 17, 18, 15, 11,  8, 14,  5, 11,
     8, 10, 11, 13, 26, 12, 33,  9, 10, 11,  7,  7, 19, 10,
    16, 12, 48, 19, 19, 16, 19, 16, 16, 16,  8, 15,  9,  9,
     7,  7,  7, 14, 10, 10, 16, 15, 15, 23, 14,  7,  4, 11,
    23, 23, 22,  8,  8, 16, 16,  7,  7,  9,  9, 10,  6, 14,
    15, 17,  9,  9,  9, 16, 13, 10, 11, 11, 11, 12,  6,  6,
    22, 29, 11, 28, 14, 15, 36,  7, 38,  7, 13,  9, 16, 17,
    24, 25, 12, 12, 12,  8, 14, 20,  7, 18, 24,  4,  4, 15,
    20,  6, 22, 11, 18, 19, 21,  8, 10, 16,  7,  7,  8, 13,
     9, 15, 12, 12, 14,  3, 16, 12,  9, 10,  5,  5,  9, 16,
    16, 12, 12, 15, 21, 23, 23,  4, 20, 22, 10, 10, 13,  9,
    10, 13, 13, 19,  7,  7, 15, 14, 15, 23,  9,  9,  9, 12,
    18, 13, 13, 18,  5, 21, 12, 12,  4,  4, 15, 11, 13, 17,
     7,  7,  1, 22, 13, 16, 27, 13, 13, 29, 30, 17, 14, 13,
    19, 11,  5, 21, 13, 20, 21, 32, 23,  9,  9, 20, 12, 11,
    11, 12, 32,  8, 38,  7,  7, 13, 10,  6, 10, 10,  7,  8,
    15, 15, 18, 12,  9, 14, 14, 21, 22,  4, 10, 28, 14, 14,
    15, 22, 19,  3, 14, 14, 27, 27, 17, 17,  8, 15, 13, 25,
     8,  4, 11, 11,  1, 19, 13,  8,  8, 10, 10, 10, 10, 31,
    37,  7, 25, 15, 15, 11, 12, 10, 20, 10, 15, 15, 14
  };

const struct zx_tok zx_elems[] =
  {
#line 441 "c/zx-elems.gperf"
    {"Y", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 440 "c/zx-elems.gperf"
    {"XPath", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 423 "c/zx-elems.gperf"
    {"J", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 168 "c/zx-elems.gperf"
    {"Assertion", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 297 "c/zx-elems.gperf"
    {"Assertion", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 272 "c/zx-elems.gperf"
    {"Assertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 202 "c/zx-elems.gperf"
    {"Select", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 217 "c/zx-elems.gperf"
    {"Select", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 30 "c/zx-elems.gperf"
    {"Alphabet", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 539 "c/zx-elems.gperf"
    {"root", "", 0},
#line 354 "c/zx-elems.gperf"
    {"StatusCode", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 363 "c/zx-elems.gperf"
    {"StatusCode", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 170 "c/zx-elems.gperf"
    {"AuthnContext", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 277 "c/zx-elems.gperf"
    {"AuthnContext", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 398 "c/zx-elems.gperf"
    {"Abstract", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 408 "c/zx-elems.gperf"
    {"Abstract", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 158 "c/zx-elems.gperf"
    {"SignedInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 271 "c/zx-elems.gperf"
    {"Advice", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 296 "c/zx-elems.gperf"
    {"Advice", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 502 "c/zx-elems.gperf"
    {"Audience", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 509 "c/zx-elems.gperf"
    {"Audience", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 505 "c/zx-elems.gperf"
    {"Statement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 515 "c/zx-elems.gperf"
    {"Statement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 10 "c/zx-elems.gperf"
    {"Action", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 409 "c/zx-elems.gperf"
    {"Action", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 295 "c/zx-elems.gperf"
    {"Action", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 270 "c/zx-elems.gperf"
    {"Action", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 449 "c/zx-elems.gperf"
    {"AuthnContextComparison", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 74 "c/zx-elems.gperf"
    {"ZeroKnowledge", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 273 "c/zx-elems.gperf"
    {"Attribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 298 "c/zx-elems.gperf"
    {"Attribute", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 523 "c/zx-elems.gperf"
    {"AssertionArtifact", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 527 "c/zx-elems.gperf"
    {"Artifact", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 153 "c/zx-elems.gperf"
    {"Signature", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 332 "c/zx-elems.gperf"
    {"ArtifactResolve", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 333 "c/zx-elems.gperf"
    {"ArtifactResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 171 "c/zx-elems.gperf"
    {"AuthnRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 337 "c/zx-elems.gperf"
    {"AuthnRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 276 "c/zx-elems.gperf"
    {"AudienceRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 172 "c/zx-elems.gperf"
    {"AuthnRequestEnvelope", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 246 "c/zx-elems.gperf"
    {"AuthnAuthorityDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 240 "c/zx-elems.gperf"
    {"ArtifactResolutionService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 512 "c/zx-elems.gperf"
    {"AuthnContextDecl", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 248 "c/zx-elems.gperf"
    {"AuthzService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 302 "c/zx-elems.gperf"
    {"AudienceRestrictionCondition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 245 "c/zx-elems.gperf"
    {"AttributeService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 237 "c/zx-elems.gperf"
    {"SPDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 29 "c/zx-elems.gperf"
    {"ActivationPin", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 278 "c/zx-elems.gperf"
    {"AuthnStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 26 "c/zx-elems.gperf"
    {"ActivationLimit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 225 "c/zx-elems.gperf"
    {"AffiliationDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 239 "c/zx-elems.gperf"
    {"AffiliationDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 23 "c/zx-elems.gperf"
    {"ReplyTo", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 274 "c/zx-elems.gperf"
    {"AttributeStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 300 "c/zx-elems.gperf"
    {"AttributeStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 395 "c/zx-elems.gperf"
    {"ActivationLimitSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 27 "c/zx-elems.gperf"
    {"ActivationLimitDuration", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 65 "c/zx-elems.gperf"
    {"SharedSecretChallengeResponse", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 82 "c/zx-elems.gperf"
    {"RedirectRequest", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 215 "c/zx-elems.gperf"
    {"RedirectRequest", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 66 "c/zx-elems.gperf"
    {"SharedSecretDynamicPlaintext", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 224 "c/zx-elems.gperf"
    {"AdditionalMetaLocation", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 238 "c/zx-elems.gperf"
    {"AdditionalMetadataLocation", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 243 "c/zx-elems.gperf"
    {"AttributeAuthorityDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 169 "c/zx-elems.gperf"
    {"AuthenticationStatement", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 303 "c/zx-elems.gperf"
    {"AuthenticationStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 75 "c/zx-elems.gperf"
    {"ApplicationEPR", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 117 "c/zx-elems.gperf"
    {"AuthenticateSessionContext", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 355 "c/zx-elems.gperf"
    {"StatusDetail", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 364 "c/zx-elems.gperf"
    {"StatusDetail", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 36 "c/zx-elems.gperf"
    {"Authenticator", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 463 "c/zx-elems.gperf"
    {"Hint", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 466 "c/zx-elems.gperf"
    {"Hint", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 34 "c/zx-elems.gperf"
    {"AuthenticationContextStatement", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 80 "c/zx-elems.gperf"
    {"InteractionService", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 211 "c/zx-elems.gperf"
    {"InteractionService", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 198 "c/zx-elems.gperf"
    {"InteractionResponse", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 210 "c/zx-elems.gperf"
    {"InteractionResponse", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 24 "c/zx-elems.gperf"
    {"RetryAfter", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 116 "c/zx-elems.gperf"
    {"AuthenticateRequester", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 360 "c/zx-elems.gperf"
    {"Request", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 197 "c/zx-elems.gperf"
    {"InteractionRequest", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 209 "c/zx-elems.gperf"
    {"InteractionRequest", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 199 "c/zx-elems.gperf"
    {"InteractionStatement", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 212 "c/zx-elems.gperf"
    {"InteractionStatement", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 68 "c/zx-elems.gperf"
    {"SwitchAudit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 247 "c/zx-elems.gperf"
    {"AuthnQueryService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 137 "c/zx-elems.gperf"
    {"Envelope", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 316 "c/zx-elems.gperf"
    {"Envelope", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 164 "c/zx-elems.gperf"
    {"Envelope", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 501 "c/zx-elems.gperf"
    {"AssertionIDReference", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 431 "c/zx-elems.gperf"
    {"Q", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 193 "c/zx-elems.gperf"
    {"Subject", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 310 "c/zx-elems.gperf"
    {"Subject", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 290 "c/zx-elems.gperf"
    {"Subject", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 334 "c/zx-elems.gperf"
    {"AssertionIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 40 "c/zx-elems.gperf"
    {"Extension", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 230 "c/zx-elems.gperf"
    {"Extension", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 221 "c/zx-elems.gperf"
    {"Extension", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 206 "c/zx-elems.gperf"
    {"Extension", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 177 "c/zx-elems.gperf"
    {"Extension", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 123 "c/zx-elems.gperf"
    {"Extension", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 242 "c/zx-elems.gperf"
    {"AssertionIDRequestService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 280 "c/zx-elems.gperf"
    {"BaseID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 420 "c/zx-elems.gperf"
    {"Exponent", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 275 "c/zx-elems.gperf"
    {"AttributeValue", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 301 "c/zx-elems.gperf"
    {"AttributeValue", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 37 "c/zx-elems.gperf"
    {"AuthenticatorTransportProtocol", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 263 "c/zx-elems.gperf"
    {"RequestedAttribute", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 157 "c/zx-elems.gperf"
    {"SignatureValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 460 "c/zx-elems.gperf"
    {"RelayState", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 98 "c/zx-elems.gperf"
    {"RequestedService", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 445 "c/zx-elems.gperf"
    {"AffiliationID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 131 "c/zx-elems.gperf"
    {"RequestedServiceType", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 350 "c/zx-elems.gperf"
    {"RequestedAuthnContext", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 383 "c/zx-elems.gperf"
    {"DataReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 190 "c/zx-elems.gperf"
    {"RequestAuthnContext", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 465 "c/zx-elems.gperf"
    {"Value", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 468 "c/zx-elems.gperf"
    {"Value", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 173 "c/zx-elems.gperf"
    {"AuthnResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 189 "c/zx-elems.gperf"
    {"RegisterNameIdentifierResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 135 "c/zx-elems.gperf"
    {"Status", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 362 "c/zx-elems.gperf"
    {"Status", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 353 "c/zx-elems.gperf"
    {"Status", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 222 "c/zx-elems.gperf"
    {"Status", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 218 "c/zx-elems.gperf"
    {"Status", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 188 "c/zx-elems.gperf"
    {"RegisterNameIdentifierRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 305 "c/zx-elems.gperf"
    {"AuthorizationDecisionStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 174 "c/zx-elems.gperf"
    {"AuthnResponseEnvelope", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 482 "c/zx-elems.gperf"
    {"RegisterNameIdentifierProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 526 "c/zx-elems.gperf"
    {"StatusMessage", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 532 "c/zx-elems.gperf"
    {"StatusMessage", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 366 "c/zx-elems.gperf"
    {"BinarySecurityToken", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 11 "c/zx-elems.gperf"
    {"Address", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 410 "c/zx-elems.gperf"
    {"Address", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 283 "c/zx-elems.gperf"
    {"EncryptedAttribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 299 "c/zx-elems.gperf"
    {"AttributeDesignator", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 130 "c/zx-elems.gperf"
    {"RemoveEntry", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 282 "c/zx-elems.gperf"
    {"EncryptedAssertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 47 "c/zx-elems.gperf"
    {"Identification", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 96 "c/zx-elems.gperf"
    {"Query", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 524 "c/zx-elems.gperf"
    {"Query", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 128 "c/zx-elems.gperf"
    {"Query", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 286 "c/zx-elems.gperf"
    {"Issuer", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 520 "c/zx-elems.gperf"
    {"Issuer", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 358 "c/zx-elems.gperf"
    {"AuthenticationQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 33 "c/zx-elems.gperf"
    {"AuthenticatingAuthority", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 510 "c/zx-elems.gperf"
    {"AuthenticatingAuthority", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 72 "c/zx-elems.gperf"
    {"WTLS", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 99 "c/zx-elems.gperf"
    {"SecurityContext", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 373 "c/zx-elems.gperf"
    {"SecurityTokenReference", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 313 "c/zx-elems.gperf"
    {"SubjectStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 118 "c/zx-elems.gperf"
    {"AuthorizeRequester", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 268 "c/zx-elems.gperf"
    {"SingleLogoutService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 28 "c/zx-elems.gperf"
    {"ActivationLimitUsages", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 152 "c/zx-elems.gperf"
    {"SPKIData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 335 "c/zx-elems.gperf"
    {"AttributeQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 357 "c/zx-elems.gperf"
    {"AttributeQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 336 "c/zx-elems.gperf"
    {"AuthnQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 419 "c/zx-elems.gperf"
    {"DigestValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 485 "c/zx-elems.gperf"
    {"SingleLogoutProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 265 "c/zx-elems.gperf"
    {"SPSSODescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 124 "c/zx-elems.gperf"
    {"InsertEntry", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 97 "c/zx-elems.gperf"
    {"QueryResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 129 "c/zx-elems.gperf"
    {"QueryResponse", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 136 "c/zx-elems.gperf"
    {"Body", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 315 "c/zx-elems.gperf"
    {"Body", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 163 "c/zx-elems.gperf"
    {"Body", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 382 "c/zx-elems.gperf"
    {"CipherReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 331 "c/zx-elems.gperf"
    {"ValidityRestrictionCondition", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 269 "c/zx-elems.gperf"
    {"SingleSignOnService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 83 "c/zx-elems.gperf"
    {"Sender", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 146 "c/zx-elems.gperf"
    {"Manifest", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 513 "c/zx-elems.gperf"
    {"AuthnContextDeclRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 448 "c/zx-elems.gperf"
    {"AuthnContextClassRef", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 511 "c/zx-elems.gperf"
    {"AuthnContextClassRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 304 "c/zx-elems.gperf"
    {"AuthorityBinding", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 488 "c/zx-elems.gperf"
    {"SingleSignOnProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 351 "c/zx-elems.gperf"
    {"Response", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 361 "c/zx-elems.gperf"
    {"Response", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 450 "c/zx-elems.gperf"
    {"AuthnContextStatementRef", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 132 "c/zx-elems.gperf"
    {"ResourceID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 216 "c/zx-elems.gperf"
    {"ResourceID", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 470 "c/zx-elems.gperf"
    {"AuthnRequestsSigned", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 394 "c/zx-elems.gperf"
    {"SoapAction", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 406 "c/zx-elems.gperf"
    {"SoapAction", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 359 "c/zx-elems.gperf"
    {"AuthorizationDecisionQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 241 "c/zx-elems.gperf"
    {"AssertionConsumerService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 88 "c/zx-elems.gperf"
    {"Correlation", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 25 "c/zx-elems.gperf"
    {"To", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 61 "c/zx-elems.gperf"
    {"ResumeSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 67 "c/zx-elems.gperf"
    {"Smartcard", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 175 "c/zx-elems.gperf"
    {"EncryptableNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 196 "c/zx-elems.gperf"
    {"Inquiry", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 208 "c/zx-elems.gperf"
    {"Inquiry", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 64 "c/zx-elems.gperf"
    {"SecurityAudit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 71 "c/zx-elems.gperf"
    {"Token", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 320 "c/zx-elems.gperf"
    {"Token", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 108 "c/zx-elems.gperf"
    {"SvcMDDelete", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 397 "c/zx-elems.gperf"
    {"Timeout", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 203 "c/zx-elems.gperf"
    {"Text", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 219 "c/zx-elems.gperf"
    {"Text", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 53 "c/zx-elems.gperf"
    {"MobileNetworkNoEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 140 "c/zx-elems.gperf"
    {"detail", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 319 "c/zx-elems.gperf"
    {"detail", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 167 "c/zx-elems.gperf"
    {"detail", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 54 "c/zx-elems.gperf"
    {"MobileNetworkRadioEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 109 "c/zx-elems.gperf"
    {"SvcMDDeleteResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 469 "c/zx-elems.gperf"
    {"AffiliateMember", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 493 "c/zx-elems.gperf"
    {"AffiliateMember", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 52 "c/zx-elems.gperf"
    {"MobileNetworkEndToEndEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 378 "c/zx-elems.gperf"
    {"Expires", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 388 "c/zx-elems.gperf"
    {"EncryptionProperty", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 244 "c/zx-elems.gperf"
    {"AttributeConsumingService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 372 "c/zx-elems.gperf"
    {"Security", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 416 "c/zx-elems.gperf"
    {"faultactor", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 516 "c/zx-elems.gperf"
    {"faultactor", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 442 "c/zx-elems.gperf"
    {"faultactor", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 407 "c/zx-elems.gperf"
    {"WsdlURI", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 396 "c/zx-elems.gperf"
    {"SecurityMechID", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 413 "c/zx-elems.gperf"
    {"SecurityMechID", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 403 "c/zx-elems.gperf"
    {"SecurityMechID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 35 "c/zx-elems.gperf"
    {"AuthenticationMethod", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 39 "c/zx-elems.gperf"
    {"DigSig", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 356 "c/zx-elems.gperf"
    {"SubjectQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 365 "c/zx-elems.gperf"
    {"SubjectQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 384 "c/zx-elems.gperf"
    {"EncryptedData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 150 "c/zx-elems.gperf"
    {"Reference", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 371 "c/zx-elems.gperf"
    {"Reference", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 143 "c/zx-elems.gperf"
    {"DigestMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 122 "c/zx-elems.gperf"
    {"EncryptedResourceID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 205 "c/zx-elems.gperf"
    {"EncryptedResourceID", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 425 "c/zx-elems.gperf"
    {"MgmtData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 330 "c/zx-elems.gperf"
    {"SessionSubject", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 479 "c/zx-elems.gperf"
    {"KeySize", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 537 "c/zx-elems.gperf"
    {"KeySize", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 228 "c/zx-elems.gperf"
    {"EntitiesDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 251 "c/zx-elems.gperf"
    {"EntitiesDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 256 "c/zx-elems.gperf"
    {"ManageNameIDService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 345 "c/zx-elems.gperf"
    {"ManageNameIDResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 530 "c/zx-elems.gperf"
    {"RequesterID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 327 "c/zx-elems.gperf"
    {"ResourceAccessStatement", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 344 "c/zx-elems.gperf"
    {"ManageNameIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 387 "c/zx-elems.gperf"
    {"EncryptionProperties", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 139 "c/zx-elems.gperf"
    {"Header", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 318 "c/zx-elems.gperf"
    {"Header", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 166 "c/zx-elems.gperf"
    {"Header", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 285 "c/zx-elems.gperf"
    {"Evidence", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 308 "c/zx-elems.gperf"
    {"Evidence", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 101 "c/zx-elems.gperf"
    {"SvcMD", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 125 "c/zx-elems.gperf"
    {"Modify", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 415 "c/zx-elems.gperf"
    {"SvcMDID", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 507 "c/zx-elems.gperf"
    {"AssertionIDRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 13 "c/zx-elems.gperf"
    {"FaultTo", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 400 "c/zx-elems.gperf"
    {"Endpoint", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 138 "c/zx-elems.gperf"
    {"Fault", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 317 "c/zx-elems.gperf"
    {"Fault", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 165 "c/zx-elems.gperf"
    {"Fault", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 12 "c/zx-elems.gperf"
    {"EndpointReference", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 111 "c/zx-elems.gperf"
    {"SvcMDQueryResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 92 "c/zx-elems.gperf"
    {"EndpointContext", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 535 "c/zx-elems.gperf"
    {"CipherValue", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 375 "c/zx-elems.gperf"
    {"Username", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 264 "c/zx-elems.gperf"
    {"RoleDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 46 "c/zx-elems.gperf"
    {"IPSec", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 284 "c/zx-elems.gperf"
    {"EncryptedID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 16 "c/zx-elems.gperf"
    {"Metadata", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 223 "c/zx-elems.gperf"
    {"TestResult", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 430 "c/zx-elems.gperf"
    {"PgenCounter", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 376 "c/zx-elems.gperf"
    {"UsernameToken", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 446 "c/zx-elems.gperf"
    {"AssertionConsumerServiceID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 519 "c/zx-elems.gperf"
    {"IssueInstant", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 178 "c/zx-elems.gperf"
    {"FederationTerminationNotification", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 22 "c/zx-elems.gperf"
    {"RelatesTo", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 50 "c/zx-elems.gperf"
    {"KeyStorage", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 120 "c/zx-elems.gperf"
    {"Description", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 76 "c/zx-elems.gperf"
    {"Consent", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 87 "c/zx-elems.gperf"
    {"Consent", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 307 "c/zx-elems.gperf"
    {"DoNotCacheCondition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 381 "c/zx-elems.gperf"
    {"CipherData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 494 "c/zx-elems.gperf"
    {"AttributeProfile", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 389 "c/zx-elems.gperf"
    {"KeyReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 475 "c/zx-elems.gperf"
    {"FederationTerminationNotificationProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 291 "c/zx-elems.gperf"
    {"SubjectConfirmation", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 311 "c/zx-elems.gperf"
    {"SubjectConfirmation", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 391 "c/zx-elems.gperf"
    {"RecipientKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 63 "c/zx-elems.gperf"
    {"SecretKeyProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 250 "c/zx-elems.gperf"
    {"EncryptionMethod", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 474 "c/zx-elems.gperf"
    {"EncryptionMethod", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 386 "c/zx-elems.gperf"
    {"EncryptionMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 145 "c/zx-elems.gperf"
    {"KeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 456 "c/zx-elems.gperf"
    {"ProtocolProfile", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 201 "c/zx-elems.gperf"
    {"Parameter", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 214 "c/zx-elems.gperf"
    {"Parameter", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 144 "c/zx-elems.gperf"
    {"KeyInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 192 "c/zx-elems.gperf"
    {"Scoping", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 352 "c/zx-elems.gperf"
    {"Scoping", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 328 "c/zx-elems.gperf"
    {"SessionContext", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 253 "c/zx-elems.gperf"
    {"Extensions", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 339 "c/zx-elems.gperf"
    {"Extensions", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 254 "c/zx-elems.gperf"
    {"IDPSSODescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 86 "c/zx-elems.gperf"
    {"UserInteraction", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 220 "c/zx-elems.gperf"
    {"UserInteraction", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 329 "c/zx-elems.gperf"
    {"SessionContextStatement", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 73 "c/zx-elems.gperf"
    {"WrittenConsent", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 426 "c/zx-elems.gperf"
    {"Modulus", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 433 "c/zx-elems.gperf"
    {"Seed", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 525 "c/zx-elems.gperf"
    {"RespondWith", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 292 "c/zx-elems.gperf"
    {"SubjectConfirmationData", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 506 "c/zx-elems.gperf"
    {"SubjectConfirmationData", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 279 "c/zx-elems.gperf"
    {"AuthzDecisionStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 180 "c/zx-elems.gperf"
    {"IDPEntry", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 340 "c/zx-elems.gperf"
    {"IDPEntry", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 229 "c/zx-elems.gperf"
    {"EntityDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 252 "c/zx-elems.gperf"
    {"EntityDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 491 "c/zx-elems.gperf"
    {"SurName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 499 "c/zx-elems.gperf"
    {"SurName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 503 "c/zx-elems.gperf"
    {"Condition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 514 "c/zx-elems.gperf"
    {"Condition", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 110 "c/zx-elems.gperf"
    {"SvcMDQuery", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 147 "c/zx-elems.gperf"
    {"Object", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 126 "c/zx-elems.gperf"
    {"ModifyResponse", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 380 "c/zx-elems.gperf"
    {"AgreementMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 121 "c/zx-elems.gperf"
    {"EncryptResourceID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 417 "c/zx-elems.gperf"
    {"faultcode", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 517 "c/zx-elems.gperf"
    {"faultcode", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 443 "c/zx-elems.gperf"
    {"faultcode", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 133 "c/zx-elems.gperf"
    {"ResourceOffering", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 231 "c/zx-elems.gperf"
    {"IDPDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 41 "c/zx-elems.gperf"
    {"Generation", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 418 "c/zx-elems.gperf"
    {"faultstring", "dise", zx_ns_tab + zx_xmlns_ix_dise},
#line 518 "c/zx-elems.gperf"
    {"faultstring", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 444 "c/zx-elems.gperf"
    {"faultstring", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 490 "c/zx-elems.gperf"
    {"SoapEndpoint", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 401 "c/zx-elems.gperf"
    {"Option", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 411 "c/zx-elems.gperf"
    {"Option", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 38 "c/zx-elems.gperf"
    {"DeactivationCallCenter", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 186 "c/zx-elems.gperf"
    {"NameIdentifierMappingResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 149 "c/zx-elems.gperf"
    {"RSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 185 "c/zx-elems.gperf"
    {"NameIdentifierMappingRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 309 "c/zx-elems.gperf"
    {"NameIdentifier", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 154 "c/zx-elems.gperf"
    {"SignatureMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 481 "c/zx-elems.gperf"
    {"NameIdentifierMappingProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 148 "c/zx-elems.gperf"
    {"PGPData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 480 "c/zx-elems.gperf"
    {"NameIdentifierMappingEncryptionProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 377 "c/zx-elems.gperf"
    {"Created", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 17 "c/zx-elems.gperf"
    {"ProblemAction", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 453 "c/zx-elems.gperf"
    {"IsPassive", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 438 "c/zx-elems.gperf"
    {"X509SerialNumber", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 156 "c/zx-elems.gperf"
    {"SignatureProperty", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 191 "c/zx-elems.gperf"
    {"SPProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 182 "c/zx-elems.gperf"
    {"IDPProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 114 "c/zx-elems.gperf"
    {"SvcMDReplace", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 473 "c/zx-elems.gperf"
    {"EmailAddress", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 496 "c/zx-elems.gperf"
    {"EmailAddress", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 161 "c/zx-elems.gperf"
    {"X509Data", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 436 "c/zx-elems.gperf"
    {"X509IssuerName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 115 "c/zx-elems.gperf"
    {"SvcMDReplaceResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 437 "c/zx-elems.gperf"
    {"X509SKI", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 77 "c/zx-elems.gperf"
    {"CredentialsContext", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 374 "c/zx-elems.gperf"
    {"TransformationParameters", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 195 "c/zx-elems.gperf"
    {"Help", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 207 "c/zx-elems.gperf"
    {"Help", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 462 "c/zx-elems.gperf"
    {"TargetNamespace", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 57 "c/zx-elems.gperf"
    {"PhysicalVerification", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 287 "c/zx-elems.gperf"
    {"NameID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 141 "c/zx-elems.gperf"
    {"CanonicalizationMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 142 "c/zx-elems.gperf"
    {"DSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 338 "c/zx-elems.gperf"
    {"AuthzDecisionQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 155 "c/zx-elems.gperf"
    {"SignatureProperties", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 55 "c/zx-elems.gperf"
    {"OperationalProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 432 "c/zx-elems.gperf"
    {"SPKISexp", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 179 "c/zx-elems.gperf"
    {"IDPEntries", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 162 "c/zx-elems.gperf"
    {"X509IssuerSerial", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 472 "c/zx-elems.gperf"
    {"Company", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 495 "c/zx-elems.gperf"
    {"Company", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 367 "c/zx-elems.gperf"
    {"Embedded", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 70 "c/zx-elems.gperf"
    {"TimeSyncToken", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 533 "c/zx-elems.gperf"
    {"Terminate", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 151 "c/zx-elems.gperf"
    {"RetrievalMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 348 "c/zx-elems.gperf"
    {"NameIDPolicy", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 455 "c/zx-elems.gperf"
    {"NameIDPolicy", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 78 "c/zx-elems.gperf"
    {"EndpointUpdate", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 62 "c/zx-elems.gperf"
    {"SSL", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 422 "c/zx-elems.gperf"
    {"HMACOutputLength", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 385 "c/zx-elems.gperf"
    {"EncryptedKey", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 15 "c/zx-elems.gperf"
    {"MessageID", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 459 "c/zx-elems.gperf"
    {"ProxyCount", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 464 "c/zx-elems.gperf"
    {"Label", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 467 "c/zx-elems.gperf"
    {"Label", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 159 "c/zx-elems.gperf"
    {"Transform", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 235 "c/zx-elems.gperf"
    {"OrganizationName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 260 "c/zx-elems.gperf"
    {"OrganizationName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 233 "c/zx-elems.gperf"
    {"Organization", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 258 "c/zx-elems.gperf"
    {"Organization", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 508 "c/zx-elems.gperf"
    {"AssertionURIRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 113 "c/zx-elems.gperf"
    {"SvcMDRegisterResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 234 "c/zx-elems.gperf"
    {"OrganizationDisplayName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 259 "c/zx-elems.gperf"
    {"OrganizationDisplayName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 94 "c/zx-elems.gperf"
    {"Keys", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 31 "c/zx-elems.gperf"
    {"AsymmetricDecryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 32 "c/zx-elems.gperf"
    {"AsymmetricKeyAgreement", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 160 "c/zx-elems.gperf"
    {"Transforms", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 393 "c/zx-elems.gperf"
    {"Transforms", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 112 "c/zx-elems.gperf"
    {"SvcMDRegister", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 45 "c/zx-elems.gperf"
    {"IPAddress", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 451 "c/zx-elems.gperf"
    {"ForceAuthn", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 227 "c/zx-elems.gperf"
    {"ContactPerson", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 249 "c/zx-elems.gperf"
    {"ContactPerson", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 43 "c/zx-elems.gperf"
    {"GoverningAgreements", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 95 "c/zx-elems.gperf"
    {"Options", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 127 "c/zx-elems.gperf"
    {"Options", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 471 "c/zx-elems.gperf"
    {"AuthnServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 100 "c/zx-elems.gperf"
    {"ServiceContext", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 134 "c/zx-elems.gperf"
    {"ServiceInstance", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 176 "c/zx-elems.gperf"
    {"EncryptedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 79 "c/zx-elems.gperf"
    {"Framework", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 314 "c/zx-elems.gperf"
    {"Framework", "sbf", zx_ns_tab + zx_xmlns_ix_sbf},
#line 93 "c/zx-elems.gperf"
    {"Framework", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 325 "c/zx-elems.gperf"
    {"ProxySubject", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 266 "c/zx-elems.gperf"
    {"ServiceDescription", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 183 "c/zx-elems.gperf"
    {"LogoutRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 342 "c/zx-elems.gperf"
    {"LogoutRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 19 "c/zx-elems.gperf"
    {"ProblemHeaderQName", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 529 "c/zx-elems.gperf"
    {"NewID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 323 "c/zx-elems.gperf"
    {"TransitedProviderPath", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 461 "c/zx-elems.gperf"
    {"SessionIndex", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 531 "c/zx-elems.gperf"
    {"SessionIndex", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 200 "c/zx-elems.gperf"
    {"Item", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 213 "c/zx-elems.gperf"
    {"Item", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 435 "c/zx-elems.gperf"
    {"X509Certificate", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 119 "c/zx-elems.gperf"
    {"Credentials", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 18 "c/zx-elems.gperf"
    {"ProblemHeader", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 322 "c/zx-elems.gperf"
    {"TransitedProvider", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 181 "c/zx-elems.gperf"
    {"IDPList", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 341 "c/zx-elems.gperf"
    {"IDPList", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 427 "c/zx-elems.gperf"
    {"P", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 104 "c/zx-elems.gperf"
    {"SvcMDAssociationDelete", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 368 "c/zx-elems.gperf"
    {"KeyIdentifier", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 289 "c/zx-elems.gperf"
    {"ProxyRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 103 "c/zx-elems.gperf"
    {"SvcMDAssociationAddResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 232 "c/zx-elems.gperf"
    {"KeyDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 255 "c/zx-elems.gperf"
    {"KeyDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 107 "c/zx-elems.gperf"
    {"SvcMDAssociationQueryResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 105 "c/zx-elems.gperf"
    {"SvcMDAssociationDeleteResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 390 "c/zx-elems.gperf"
    {"OriginatorKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 534 "c/zx-elems.gperf"
    {"CarriedKeyName", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 48 "c/zx-elems.gperf"
    {"KeyActivation", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 69 "c/zx-elems.gperf"
    {"TechnicalProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 321 "c/zx-elems.gperf"
    {"TokenPolicy", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 369 "c/zx-elems.gperf"
    {"Nonce", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 42 "c/zx-elems.gperf"
    {"GoverningAgreementRef", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 262 "c/zx-elems.gperf"
    {"PDPDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 257 "c/zx-elems.gperf"
    {"NameIDMappingService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 347 "c/zx-elems.gperf"
    {"NameIDMappingResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 59 "c/zx-elems.gperf"
    {"PrincipalAuthenticationMechanism", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 326 "c/zx-elems.gperf"
    {"ProxyTransitedStatement", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 478 "c/zx-elems.gperf"
    {"GivenName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 497 "c/zx-elems.gperf"
    {"GivenName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 346 "c/zx-elems.gperf"
    {"NameIDMappingRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 498 "c/zx-elems.gperf"
    {"NameIDFormat", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 452 "c/zx-elems.gperf"
    {"GetComplete", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 528 "c/zx-elems.gperf"
    {"GetComplete", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 429 "c/zx-elems.gperf"
    {"PGPKeyPacket", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 484 "c/zx-elems.gperf"
    {"RegisterNameIdentifierServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 90 "c/zx-elems.gperf"
    {"Provider", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 483 "c/zx-elems.gperf"
    {"RegisterNameIdentifierServiceReturnURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 194 "c/zx-elems.gperf"
    {"Confirm", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 204 "c/zx-elems.gperf"
    {"Confirm", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 399 "c/zx-elems.gperf"
    {"CredentialRef", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 49 "c/zx-elems.gperf"
    {"KeySharing", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 51 "c/zx-elems.gperf"
    {"Length", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 281 "c/zx-elems.gperf"
    {"Conditions", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 306 "c/zx-elems.gperf"
    {"Conditions", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 424 "c/zx-elems.gperf"
    {"KeyName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 536 "c/zx-elems.gperf"
    {"KA_Nonce", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 492 "c/zx-elems.gperf"
    {"TelephoneNumber", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 500 "c/zx-elems.gperf"
    {"TelephoneNumber", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 504 "c/zx-elems.gperf"
    {"ConfirmationMethod", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 458 "c/zx-elems.gperf"
    {"ProviderName", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 379 "c/zx-elems.gperf"
    {"Timestamp", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 184 "c/zx-elems.gperf"
    {"LogoutResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 343 "c/zx-elems.gperf"
    {"LogoutResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 106 "c/zx-elems.gperf"
    {"SvcMDAssociationQuery", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 487 "c/zx-elems.gperf"
    {"SingleLogoutServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 44 "c/zx-elems.gperf"
    {"HTTP", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 20 "c/zx-elems.gperf"
    {"ProblemIRI", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 486 "c/zx-elems.gperf"
    {"SingleLogoutServiceReturnURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 349 "c/zx-elems.gperf"
    {"NewEncryptedID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 84 "c/zx-elems.gperf"
    {"TargetIdentity", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 439 "c/zx-elems.gperf"
    {"X509SubjectName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 489 "c/zx-elems.gperf"
    {"SingleSignOnServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 21 "c/zx-elems.gperf"
    {"ReferenceParameters", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 454 "c/zx-elems.gperf"
    {"Loc", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 85 "c/zx-elems.gperf"
    {"UsageDirective", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 91 "c/zx-elems.gperf"
    {"UsageDirective", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 226 "c/zx-elems.gperf"
    {"AssertionConsumerServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 447 "c/zx-elems.gperf"
    {"AssertionConsumerServiceURL", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 81 "c/zx-elems.gperf"
    {"ProcessingContext", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 89 "c/zx-elems.gperf"
    {"ProcessingContext", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 294 "c/zx-elems.gperf"
    {"TestElem", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 58 "c/zx-elems.gperf"
    {"PreviousSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 540 "c/zx-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 187 "c/zx-elems.gperf"
    {"OldProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 428 "c/zx-elems.gperf"
    {"PGPKeyID", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 14 "c/zx-elems.gperf"
    {"From", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 405 "c/zx-elems.gperf"
    {"ServiceType", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 414 "c/zx-elems.gperf"
    {"ServiceType", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 421 "c/zx-elems.gperf"
    {"G", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 102 "c/zx-elems.gperf"
    {"SvcMDAssociationAdd", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 392 "c/zx-elems.gperf"
    {"ReferenceList", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 56 "c/zx-elems.gperf"
    {"Password", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 370 "c/zx-elems.gperf"
    {"Password", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 402 "c/zx-elems.gperf"
    {"ProviderID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 522 "c/zx-elems.gperf"
    {"ProviderID", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 457 "c/zx-elems.gperf"
    {"ProviderID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 412 "c/zx-elems.gperf"
    {"ProviderID", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 477 "c/zx-elems.gperf"
    {"FederationTerminationServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 476 "c/zx-elems.gperf"
    {"FederationTerminationServiceReturnURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 434 "c/zx-elems.gperf"
    {"X509CRL", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 324 "c/zx-elems.gperf"
    {"ProxyInfoConfirmationData", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 293 "c/zx-elems.gperf"
    {"SubjectLocality", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 312 "c/zx-elems.gperf"
    {"SubjectLocality", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 267 "c/zx-elems.gperf"
    {"ServiceName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 521 "c/zx-elems.gperf"
    {"NumberOfUses", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 288 "c/zx-elems.gperf"
    {"OneTimeUse", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 60 "c/zx-elems.gperf"
    {"PrivateKeyProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 538 "c/zx-elems.gperf"
    {"OAEPparams", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 236 "c/zx-elems.gperf"
    {"OrganizationURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 261 "c/zx-elems.gperf"
    {"OrganizationURL", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 404 "c/zx-elems.gperf"
    {"ServiceNameRef", "di12", zx_ns_tab + zx_xmlns_ix_di12}
  };

static const short lookup[] =
  {
       -1,     0,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,     1,     2,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1, -1215,    -1, -1213,    -1,     8,     9,
    -1196,    -1,  -638,  -636,    -1,    16,  -630,
       -1,  -605,  -603,    -1,  -601,    27,    28,
     -582,  -502,    -2,    31,    32,    33,    34,
       35,  -593,    -1,    38,    39,  -495,    -2,
       -1,    40,    41,    42,    43,    44,  -508,
       -4,  -510,    -2,  -512,    -2,    -1,    45,
       46,    47,    48,    49,  -626,    52,  -616,
     -478,    -2,    -1,    55,    56,    57,  -623,
     -473,    -2,    60,  -481,    -2,    -1,    61,
     -514,    -2,    -1,    62,    -1,    63,  -517,
       -2,  -519,    -2, -1193,    66,    -1,    67,
    -1173,    70,  -648,    73,  -460,    -2, -1171,
    -1169,    78,    79,    80,  -754,    -1,  -752,
       85,    86,  -727,    -1,    90,    91,  -723,
       95,  -713,   102,   103,    -1,   104,  -673,
      107,  -426,    -2,   108,   109,   110,   111,
       -1,   112,    -1,   113,   114,    -1,   115,
      116,  -688,  -414,    -2,   119,    -1,   120,
     -694,  -410,    -5,   126,   127,   128,   129,
     -702,   132,  -401,    -2,  -711,   135,   136,
       -1,   137,    -1,   138,  -398,    -2,  -435,
       -6,    -1,   139,  -721,  -719,  -388,    -2,
     -391,    -3,  -439,    -3,    -1,   145,  -444,
       -3,    -1,  -735,   148,   149,    -1,   150,
     -385,    -2,    -1,   151,    -1,   152,   153,
       -1,   154,    -1,   155,  -750,   158,   159,
      160,  -375,    -2,  -448,    -2,  -450,    -2,
       -1,   161,   162,    -1, -1164,  -763,   168,
     -366,    -3,   169,   170,    -1,   171,    -1,
      172,   173, -1146,   176,   177, -1140,   180,
     -778,  -350,    -2,    -1,   183,  -784,   186,
     -347,    -2,   187,    -1,   188,   189,   190,
      191,   192,    -1, -1135,   195,    -1, -1111,
      198,   199,    -1, -1092,   202, -1063,    -1,
      206,   207,  -813,   210,   211,   212,    -1,
      213,  -323,    -2,   214,    -1, -1056,    -1,
      218,    -1, -1043,   222,   223,  -837,   226,
     -827,  -304,    -2,   229,    -1,  -832,  -301,
       -2,    -1,   232,   233,  -307,    -2, -1025,
    -1020,   238,   239,   240,    -1,   241,   242,
      243,  -917,    -1,  -857,    -1,   249,   250,
      251,    -1,   252,  -284,    -2,   253,   254,
       -1,  -881,    -1,   258,   259,    -1,   260,
      261,    -1,   262,   263,   264,   265,    -1,
      266,    -1,   267,   268,    -1,   269,  -276,
       -3,   270,   271,   272,   273,   274,   275,
     -915,    -1,   278,   279,   280,   281,   282,
     -899,    -1,   285,  -248,    -2,   286,    -1,
     -908,    -1,   290,    -1,   291,  -244,    -3,
       -1,  -912,  -239,    -2,   294,  -255,    -2,
     -287,    -3,  -932,    -1,   297,  -924,   300,
     -233,    -2,    -1,  -928,  -230,    -2,   303,
      304,  -236,    -2,   305,    -1,   306,    -1,
      307,    -1,  -941,  -223,    -2,    -1,   310,
     -946,  -220,    -2, -1014, -1002,    -1,  -954,
      319,   320,  -214,    -2,   321,   322,    -1,
      323,    -1, -1000,    -1,   327,    -1,   328,
       -1,   329,  -970,   333,  -201,    -3,    -1,
     -986,   336,    -1,   337,    -1,   338,    -1,
      339,   340,   341,   342,   343,   344,  -197,
       -2,    -1,   345,   346,   347,    -1,   348,
      349,    -1,   350,   351,    -1,   352,  -207,
       -3,  -216,    -2, -1012,   355,   356,   357,
       -1,   358,   359,   360,  -178,    -2,  -218,
       -2, -1018,   363,  -170,    -2,  -295,    -2,
      364,   365,   366,  -297,    -2,    -1,   367,
       -1,   368,   369,    -1,   370,    -1,   371,
       -1,   372,   373, -1041,   376,  -157,    -2,
     -312,    -3,   377,   378,   379,    -1, -1054,
       -1,   382,    -1,   383,  -151,    -2,  -316,
       -3,   384,   385,    -1,   386,   387,  -328,
       -3, -1090,   390,    -1, -1088, -1070,  -138,
       -2,   395,   396,    -1, -1080,   399,   400,
       -1,   401,  -134,    -2, -1083,  -129,    -2,
      404,   405,   406,  -140,    -2,  -143,    -2,
     -331,    -2,    -1, -1097,   409,  -124,    -2,
    -1103,   412,   413,   414,  -121,    -2,   415,
    -1107,  -115,    -3,   419,   420,  -335,    -2,
    -1131,    -1,   423,    -1,   424,   425, -1124,
       -1, -1122,  -103,    -2,  -105,    -2,    -1,
      430,   431,    -1,   432,  -110,    -2,    -1,
      433,  -338,    -2, -1138,   -97,    -2,  -353,
       -2,    -1,   436,   437,   438,  -357,    -2,
      439,   440, -1157,   443,   444,    -1,   445,
       -1,   446,   -90,    -2,    -1,   447,   448,
       -1,   449,  -368,    -2,    -1,   450,   451,
     -455,    -2,  -457,    -2,  -463,    -2,   452,
       -1,   453,   454,   455,   456, -1185,   459,
       -1,   460,   -74,    -2,    -1, -1190,   463,
      -70,    -2,   464,  -467,    -2,   465,  -521,
       -2,   466, -1203,   469,    -1,   470,   -64,
       -2,    -1,   471, -1211,    -1,   474,   475,
      -59,    -2,  -525,    -2,  -528,    -3, -1218,
      -55,    -2,   478,    -1,    -1,    -1,   479,
       -1,    -1,    -1,    -1,    -1,    -1,   480,
       -1,    -1, -1235,   -50,    -2,    -1,   483,
       -1,    -1,    -1,   484,    -1,    -1,    -1,
      485,   486,   487,    -1,    -1,   488,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   489,   490,    -1,    -1,    -1,    -1,
      491,    -1,    -1,    -1,   492,    -1,   493,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1, -1295, -1293,
       -1, -1291,   500,   -33,    -2,   -35,    -2,
      -37,    -2,   501,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   502,    -1,    -1,    -1,
       -1,    -1,    -1,   503,    -1,    -1,   504,
      505,    -1, -1319,   -25,    -2,    -1,    -1,
      508,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   509,    -1,   510,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1, -1356,   -20,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -1368,   -18,    -4,    -1,    -1,
       -1,    -1,    -1,    -1,   517,    -1,    -1,
       -1,    -1,    -1,   518,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   519,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   520,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -1501,   -10,    -2,    -1,    -1,
       -1,    -1,    -1,   523,   524,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   525,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      526,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   527,    -1,    -1, -1566,    -3,    -2,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   530
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zx_elem2tok (str, len)
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
              if (len == zx_elems_lens[index])
                {
                  register const char *s = zx_elems[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zx_elems[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &zx_elems_lens[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordptr = &zx_elems[TOTAL_KEYWORDS + lookup[offset]];
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
#line 541 "c/zx-elems.gperf"

/* EOF - gperf -t -D -C -Nzx_elem2tok c/zx-elems.gperf */
