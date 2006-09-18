/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_elems -N zx_elem2tok c/saml2-elems.gperf  */
/* Computed positions: -k'1,6,$' */

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

#line 1 "c/saml2-elems.gperf"

/* c/saml2-elems.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/saml2-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 272
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 33
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 647
/* maximum key range = 647, duplicates = 39 */

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
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648,  55,  50,  25, 120,  10,
        9,  85,   0, 250,   5, 200, 225, 235, 110,  25,
      175,  80,  20,  75, 144, 648, 648,  20, 190,   0,
        0, 648, 648, 648, 648, 648, 648,  45, 245,  25,
      110,  25, 190, 120, 125, 105, 648, 648, 220, 120,
       10,  75, 110, 648,   0,  25,   0,  95,  35, 648,
        5,  70,   0, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648, 648, 648, 648, 648,
      648, 648, 648, 648, 648, 648
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
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
     1,  4,  6,  1,  5,  6,  8,  9,  9, 13, 29,  7,  8,  8,
     9,  9, 21, 13, 14, 10, 10, 11,  8,  8, 19, 15, 21, 13,
    10, 17, 18,  9,  9,  9, 30, 13,  9, 10,  6,  6, 10, 30,
    12, 12, 23, 23, 14, 12, 12, 19, 30, 33,  8,  8,  4, 20,
    22, 28, 19, 10,  7,  7,  7,  8,  9, 20,  6,  6, 22, 13,
    14, 15, 16,  8, 19, 20, 21, 13,  4, 25, 11, 17, 19, 19,
    10,  6,  6, 22, 23, 24, 10, 10, 13, 13, 19, 15, 16, 23,
    14, 25, 21, 18, 10, 26, 18, 19,  5, 11, 23, 23,  5,  1,
    17, 18, 20, 11, 12, 12, 23, 23, 15,  1,  8, 19, 11, 13,
     4, 10, 12, 12, 13, 15, 15, 15,  9,  4, 16, 13, 20, 22,
    15, 26, 12,  9,  9, 20, 18, 10, 11,  7,  7, 28, 10, 16,
     8,  9, 16, 13, 11,  7, 20, 16,  7, 14,  5, 16, 13, 13,
    13, 29, 15, 11, 11, 12,  8, 10, 16, 22, 28,  9, 20, 11,
     3, 14, 15,  6, 12, 14, 15, 11, 22, 18, 14, 14,  8, 14,
    10, 29, 15, 21, 19, 19,  5,  7,  7,  9, 10,  8, 19, 20,
    20, 13, 24, 25,  6, 28, 15, 31, 13,  3, 20, 21, 27,  8,
     9, 10, 12, 12, 30, 16, 18, 18, 19,  5, 12, 15,  8,  8,
    12, 12,  8,  9,  9, 14, 14, 11, 25,  1,  7,  6,  7,  6,
     8, 10, 10,  8, 10, 14, 14, 14, 10, 12, 32,  7, 16,  8,
     9,  7,  6,  8,  6,  7
  };

const struct zx_tok zx_elems[] =
  {
#line 225 "c/saml2-elems.gperf"
    {"Y", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 280 "c/saml2-elems.gperf"
    {"root", "", 0},
#line 152 "c/saml2-elems.gperf"
    {"Header", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 207 "c/saml2-elems.gperf"
    {"J", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 151 "c/saml2-elems.gperf"
    {"Fault", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 65 "c/saml2-elems.gperf"
    {"Object", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 204 "c/saml2-elems.gperf"
    {"Exponent", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 247 "c/saml2-elems.gperf"
    {"Condition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 259 "c/saml2-elems.gperf"
    {"Condition", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 58 "c/saml2-elems.gperf"
    {"ZeroKnowledge", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 101 "c/saml2-elems.gperf"
    {"RegisterNameIdentifierRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 157 "c/saml2-elems.gperf"
    {"Request", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 119 "c/saml2-elems.gperf"
    {"Evidence", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 139 "c/saml2-elems.gperf"
    {"Evidence", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 24 "c/saml2-elems.gperf"
    {"Extension", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 90 "c/saml2-elems.gperf"
    {"Extension", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 39 "c/saml2-elems.gperf"
    {"OperationalProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 200 "c/saml2-elems.gperf"
    {"ReferenceList", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 57 "c/saml2-elems.gperf"
    {"WrittenConsent", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 117 "c/saml2-elems.gperf"
    {"Conditions", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 135 "c/saml2-elems.gperf"
    {"Conditions", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 276 "c/saml2-elems.gperf"
    {"CipherValue", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 158 "c/saml2-elems.gperf"
    {"Response", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 182 "c/saml2-elems.gperf"
    {"Response", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 103 "c/saml2-elems.gperf"
    {"RequestAuthnContext", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 190 "c/saml2-elems.gperf"
    {"CipherReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 181 "c/saml2-elems.gperf"
    {"RequestedAuthnContext", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 45 "c/saml2-elems.gperf"
    {"ResumeSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 170 "c/saml2-elems.gperf"
    {"Extensions", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 264 "c/saml2-elems.gperf"
    {"AssertionArtifact", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 165 "c/saml2-elems.gperf"
    {"AssertionIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 81 "c/saml2-elems.gperf"
    {"Assertion", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 127 "c/saml2-elems.gperf"
    {"Assertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 109 "c/saml2-elems.gperf"
    {"Assertion", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 102 "c/saml2-elems.gperf"
    {"RegisterNameIdentifierResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 20 "c/saml2-elems.gperf"
    {"Authenticator", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 68 "c/saml2-elems.gperf"
    {"Reference", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 189 "c/saml2-elems.gperf"
    {"CipherData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 107 "c/saml2-elems.gperf"
    {"Action", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 125 "c/saml2-elems.gperf"
    {"Action", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 232 "c/saml2-elems.gperf"
    {"ForceAuthn", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 116 "c/saml2-elems.gperf"
    {"AuthorizationDecisionStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 84 "c/saml2-elems.gperf"
    {"AuthnRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 168 "c/saml2-elems.gperf"
    {"AuthnRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 82 "c/saml2-elems.gperf"
    {"AuthenticationStatement", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 114 "c/saml2-elems.gperf"
    {"AuthenticationStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 275 "c/saml2-elems.gperf"
    {"CarriedKeyName", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 83 "c/saml2-elems.gperf"
    {"AuthnContext", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 131 "c/saml2-elems.gperf"
    {"AuthnContext", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 130 "c/saml2-elems.gperf"
    {"AudienceRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 18 "c/saml2-elems.gperf"
    {"AuthenticationContextStatement", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 91 "c/saml2-elems.gperf"
    {"FederationTerminationNotification", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 246 "c/saml2-elems.gperf"
    {"Audience", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 254 "c/saml2-elems.gperf"
    {"Audience", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 56 "c/saml2-elems.gperf"
    {"WTLS", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 244 "c/saml2-elems.gperf"
    {"AssertionIDReference", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 16 "c/saml2-elems.gperf"
    {"AsymmetricKeyAgreement", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 113 "c/saml2-elems.gperf"
    {"AudienceRestrictionCondition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 47 "c/saml2-elems.gperf"
    {"SecretKeyProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 279 "c/saml2-elems.gperf"
    {"OAEPparams", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 106 "c/saml2-elems.gperf"
    {"Subject", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 144 "c/saml2-elems.gperf"
    {"Subject", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 121 "c/saml2-elems.gperf"
    {"Subject", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 268 "c/saml2-elems.gperf"
    {"Artifact", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 71 "c/saml2-elems.gperf"
    {"Signature", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 15 "c/saml2-elems.gperf"
    {"AsymmetricDecryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 108 "c/saml2-elems.gperf"
    {"Advice", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 126 "c/saml2-elems.gperf"
    {"Advice", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 230 "c/saml2-elems.gperf"
    {"AuthnContextComparison", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 86 "c/saml2-elems.gperf"
    {"AuthnResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 75 "c/saml2-elems.gperf"
    {"SignatureValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 10 "c/saml2-elems.gperf"
    {"ActivationLimit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 124 "c/saml2-elems.gperf"
    {"SubjectStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 150 "c/saml2-elems.gperf"
    {"Envelope", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 73 "c/saml2-elems.gperf"
    {"SignatureProperties", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 85 "c/saml2-elems.gperf"
    {"AuthnRequestEnvelope", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 87 "c/saml2-elems.gperf"
    {"AuthnResponseEnvelope", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 13 "c/saml2-elems.gperf"
    {"ActivationPin", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 149 "c/saml2-elems.gperf"
    {"Body", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 100 "c/saml2-elems.gperf"
    {"OldProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 67 "c/saml2-elems.gperf"
    {"RSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 198 "c/saml2-elems.gperf"
    {"OriginatorKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 122 "c/saml2-elems.gperf"
    {"SubjectConfirmation", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 145 "c/saml2-elems.gperf"
    {"SubjectConfirmation", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 241 "c/saml2-elems.gperf"
    {"RelayState", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 159 "c/saml2-elems.gperf"
    {"Status", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 184 "c/saml2-elems.gperf"
    {"Status", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 202 "c/saml2-elems.gperf"
    {"ActivationLimitSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 11 "c/saml2-elems.gperf"
    {"ActivationLimitDuration", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 104 "c/saml2-elems.gperf"
    {"SPProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 160 "c/saml2-elems.gperf"
    {"StatusCode", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 185 "c/saml2-elems.gperf"
    {"StatusCode", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 267 "c/saml2-elems.gperf"
    {"StatusMessage", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 273 "c/saml2-elems.gperf"
    {"StatusMessage", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 27 "c/saml2-elems.gperf"
    {"GoverningAgreements", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 163 "c/saml2-elems.gperf"
    {"ArtifactResolve", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 164 "c/saml2-elems.gperf"
    {"ArtifactResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 89 "c/saml2-elems.gperf"
    {"EncryptedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 132 "c/saml2-elems.gperf"
    {"AuthnStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 88 "c/saml2-elems.gperf"
    {"EncryptableNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 12 "c/saml2-elems.gperf"
    {"ActivationLimitUsages", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 136 "c/saml2-elems.gperf"
    {"EncryptedAssertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 25 "c/saml2-elems.gperf"
    {"Generation", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 156 "c/saml2-elems.gperf"
    {"AuthorizationDecisionQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 248 "c/saml2-elems.gperf"
    {"ConfirmationMethod", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 155 "c/saml2-elems.gperf"
    {"AuthenticationQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 265 "c/saml2-elems.gperf"
    {"Query", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 203 "c/saml2-elems.gperf"
    {"DigestValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 17 "c/saml2-elems.gperf"
    {"AuthenticatingAuthority", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 255 "c/saml2-elems.gperf"
    {"AuthenticatingAuthority", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 55 "c/saml2-elems.gperf"
    {"Token", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 215 "c/saml2-elems.gperf"
    {"Q", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 74 "c/saml2-elems.gperf"
    {"SignatureProperty", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 137 "c/saml2-elems.gperf"
    {"EncryptedAttribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 195 "c/saml2-elems.gperf"
    {"EncryptionProperties", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 266 "c/saml2-elems.gperf"
    {"RespondWith", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 242 "c/saml2-elems.gperf"
    {"SessionIndex", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 272 "c/saml2-elems.gperf"
    {"SessionIndex", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 146 "c/saml2-elems.gperf"
    {"SubjectConfirmationData", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 250 "c/saml2-elems.gperf"
    {"SubjectConfirmationData", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 69 "c/saml2-elems.gperf"
    {"RetrievalMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 205 "c/saml2-elems.gperf"
    {"G", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 70 "c/saml2-elems.gperf"
    {"SPKIData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 118 "c/saml2-elems.gperf"
    {"DoNotCacheCondition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 271 "c/saml2-elems.gperf"
    {"RequesterID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 192 "c/saml2-elems.gperf"
    {"EncryptedData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 28 "c/saml2-elems.gperf"
    {"HTTP", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 142 "c/saml2-elems.gperf"
    {"OneTimeUse", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 162 "c/saml2-elems.gperf"
    {"SubjectQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 187 "c/saml2-elems.gperf"
    {"SubjectQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 191 "c/saml2-elems.gperf"
    {"DataReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 243 "c/saml2-elems.gperf"
    {"TargetNamespace", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 123 "c/saml2-elems.gperf"
    {"SubjectLocality", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 147 "c/saml2-elems.gperf"
    {"SubjectLocality", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 274 "c/saml2-elems.gperf"
    {"Terminate", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 217 "c/saml2-elems.gperf"
    {"Seed", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 115 "c/saml2-elems.gperf"
    {"AuthorityBinding", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 48 "c/saml2-elems.gperf"
    {"SecurityAudit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 19 "c/saml2-elems.gperf"
    {"AuthenticationMethod", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 133 "c/saml2-elems.gperf"
    {"AuthzDecisionStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 72 "c/saml2-elems.gperf"
    {"SignatureMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 227 "c/saml2-elems.gperf"
    {"AssertionConsumerServiceID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 193 "c/saml2-elems.gperf"
    {"EncryptedKey", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 249 "c/saml2-elems.gperf"
    {"Statement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 260 "c/saml2-elems.gperf"
    {"Statement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 44 "c/saml2-elems.gperf"
    {"PrivateKeyProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 196 "c/saml2-elems.gperf"
    {"EncryptionProperty", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 240 "c/saml2-elems.gperf"
    {"ProxyCount", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 52 "c/saml2-elems.gperf"
    {"SwitchAudit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 105 "c/saml2-elems.gperf"
    {"Scoping", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 183 "c/saml2-elems.gperf"
    {"Scoping", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 50 "c/saml2-elems.gperf"
    {"SharedSecretDynamicPlaintext", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 167 "c/saml2-elems.gperf"
    {"AuthnQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 199 "c/saml2-elems.gperf"
    {"RecipientKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 216 "c/saml2-elems.gperf"
    {"SPKISexp", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 51 "c/saml2-elems.gperf"
    {"Smartcard", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 143 "c/saml2-elems.gperf"
    {"ProxyRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 32 "c/saml2-elems.gperf"
    {"KeyActivation", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 60 "c/saml2-elems.gperf"
    {"DSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 66 "c/saml2-elems.gperf"
    {"PGPData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 41 "c/saml2-elems.gperf"
    {"PhysicalVerification", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 222 "c/saml2-elems.gperf"
    {"X509SerialNumber", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 278 "c/saml2-elems.gperf"
    {"KeySize", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 120 "c/saml2-elems.gperf"
    {"NameIdentifier", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 270 "c/saml2-elems.gperf"
    {"NewID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 206 "c/saml2-elems.gperf"
    {"HMACOutputLength", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 54 "c/saml2-elems.gperf"
    {"TimeSyncToken", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 96 "c/saml2-elems.gperf"
    {"LogoutRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 173 "c/saml2-elems.gperf"
    {"LogoutRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 49 "c/saml2-elems.gperf"
    {"SharedSecretChallengeResponse", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 237 "c/saml2-elems.gperf"
    {"ProtocolProfile", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 233 "c/saml2-elems.gperf"
    {"GetComplete", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 269 "c/saml2-elems.gperf"
    {"GetComplete", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 61 "c/saml2-elems.gperf"
    {"DigestMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 277 "c/saml2-elems.gperf"
    {"KA_Nonce", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 261 "c/saml2-elems.gperf"
    {"faultactor", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 194 "c/saml2-elems.gperf"
    {"EncryptionMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 22 "c/saml2-elems.gperf"
    {"DeactivationCallCenter", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 98 "c/saml2-elems.gperf"
    {"NameIdentifierMappingRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 262 "c/saml2-elems.gperf"
    {"faultcode", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 177 "c/saml2-elems.gperf"
    {"NameIDMappingRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 138 "c/saml2-elems.gperf"
    {"EncryptedID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 235 "c/saml2-elems.gperf"
    {"Loc", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 220 "c/saml2-elems.gperf"
    {"X509IssuerName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 219 "c/saml2-elems.gperf"
    {"X509Certificate", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 140 "c/saml2-elems.gperf"
    {"Issuer", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 213 "c/saml2-elems.gperf"
    {"PGPKeyPacket", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 251 "c/saml2-elems.gperf"
    {"AssertionIDRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 252 "c/saml2-elems.gperf"
    {"AssertionURIRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 214 "c/saml2-elems.gperf"
    {"PgenCounter", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 59 "c/saml2-elems.gperf"
    {"CanonicalizationMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 169 "c/saml2-elems.gperf"
    {"AuthzDecisionQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 97 "c/saml2-elems.gperf"
    {"LogoutResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 174 "c/saml2-elems.gperf"
    {"LogoutResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 64 "c/saml2-elems.gperf"
    {"Manifest", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 180 "c/saml2-elems.gperf"
    {"NewEncryptedID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 76 "c/saml2-elems.gperf"
    {"SignedInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 99 "c/saml2-elems.gperf"
    {"NameIdentifierMappingResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 42 "c/saml2-elems.gperf"
    {"PreviousSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 178 "c/saml2-elems.gperf"
    {"NameIDMappingResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 53 "c/saml2-elems.gperf"
    {"TechnicalProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 175 "c/saml2-elems.gperf"
    {"ManageNameIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 30 "c/saml2-elems.gperf"
    {"IPSec", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 94 "c/saml2-elems.gperf"
    {"IDPList", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 172 "c/saml2-elems.gperf"
    {"IDPList", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 29 "c/saml2-elems.gperf"
    {"IPAddress", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 92 "c/saml2-elems.gperf"
    {"IDPEntries", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 79 "c/saml2-elems.gperf"
    {"X509Data", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 258 "c/saml2-elems.gperf"
    {"AuthnContextDeclRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 229 "c/saml2-elems.gperf"
    {"AuthnContextClassRef", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 256 "c/saml2-elems.gperf"
    {"AuthnContextClassRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 226 "c/saml2-elems.gperf"
    {"AffiliationID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 231 "c/saml2-elems.gperf"
    {"AuthnContextStatementRef", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 37 "c/saml2-elems.gperf"
    {"MobileNetworkNoEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 134 "c/saml2-elems.gperf"
    {"BaseID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 38 "c/saml2-elems.gperf"
    {"MobileNetworkRadioEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 188 "c/saml2-elems.gperf"
    {"AgreementMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 36 "c/saml2-elems.gperf"
    {"MobileNetworkEndToEndEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 281 "c/saml2-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 46 "c/saml2-elems.gperf"
    {"SSL", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 176 "c/saml2-elems.gperf"
    {"ManageNameIDResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 26 "c/saml2-elems.gperf"
    {"GoverningAgreementRef", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 228 "c/saml2-elems.gperf"
    {"AssertionConsumerServiceURL", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 14 "c/saml2-elems.gperf"
    {"Alphabet", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 234 "c/saml2-elems.gperf"
    {"IsPassive", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 34 "c/saml2-elems.gperf"
    {"KeyStorage", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 179 "c/saml2-elems.gperf"
    {"NameIDPolicy", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 236 "c/saml2-elems.gperf"
    {"NameIDPolicy", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 21 "c/saml2-elems.gperf"
    {"AuthenticatorTransportProtocol", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 257 "c/saml2-elems.gperf"
    {"AuthnContextDecl", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 112 "c/saml2-elems.gperf"
    {"AttributeStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 129 "c/saml2-elems.gperf"
    {"AttributeStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 111 "c/saml2-elems.gperf"
    {"AttributeDesignator", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 224 "c/saml2-elems.gperf"
    {"XPath", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 239 "c/saml2-elems.gperf"
    {"ProviderName", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 223 "c/saml2-elems.gperf"
    {"X509SubjectName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 93 "c/saml2-elems.gperf"
    {"IDPEntry", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 171 "c/saml2-elems.gperf"
    {"IDPEntry", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 161 "c/saml2-elems.gperf"
    {"StatusDetail", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 186 "c/saml2-elems.gperf"
    {"StatusDetail", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 209 "c/saml2-elems.gperf"
    {"MgmtData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 110 "c/saml2-elems.gperf"
    {"Attribute", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 128 "c/saml2-elems.gperf"
    {"Attribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 245 "c/saml2-elems.gperf"
    {"AttributeValue", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 253 "c/saml2-elems.gperf"
    {"AttributeValue", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 263 "c/saml2-elems.gperf"
    {"faultstring", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 95 "c/saml2-elems.gperf"
    {"IDPProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 211 "c/saml2-elems.gperf"
    {"P", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 208 "c/saml2-elems.gperf"
    {"KeyName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 141 "c/saml2-elems.gperf"
    {"NameID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 210 "c/saml2-elems.gperf"
    {"Modulus", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 23 "c/saml2-elems.gperf"
    {"DigSig", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 40 "c/saml2-elems.gperf"
    {"Password", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 78 "c/saml2-elems.gperf"
    {"Transforms", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 201 "c/saml2-elems.gperf"
    {"Transforms", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 212 "c/saml2-elems.gperf"
    {"PGPKeyID", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 33 "c/saml2-elems.gperf"
    {"KeySharing", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 31 "c/saml2-elems.gperf"
    {"Identification", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 154 "c/saml2-elems.gperf"
    {"AttributeQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 166 "c/saml2-elems.gperf"
    {"AttributeQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 238 "c/saml2-elems.gperf"
    {"ProviderID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 197 "c/saml2-elems.gperf"
    {"KeyReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 43 "c/saml2-elems.gperf"
    {"PrincipalAuthenticationMechanism", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 218 "c/saml2-elems.gperf"
    {"X509CRL", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 80 "c/saml2-elems.gperf"
    {"X509IssuerSerial", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 63 "c/saml2-elems.gperf"
    {"KeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 77 "c/saml2-elems.gperf"
    {"Transform", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 62 "c/saml2-elems.gperf"
    {"KeyInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 35 "c/saml2-elems.gperf"
    {"Length", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 148 "c/saml2-elems.gperf"
    {"TestElem", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 153 "c/saml2-elems.gperf"
    {"detail", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 221 "c/saml2-elems.gperf"
    {"X509SKI", "ds", zx_ns_tab + zx_xmlns_ix_ds}
  };

static const short lookup[] =
  {
      -1,    0,   -1,   -1,    1,   -1,    2,   -1,
      -1,   -1,   -1,    3,   -1,   -1,    4,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,    5,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,    6, -318, -265,   -2,   -1,
       9,   10,   -1,   -1,   11, -666, -664,   -1,
      16,   -1,   17,   18, -662,   21,   -1, -660,
      24,   25,   26,   -1,   27,   -1,   28,   -1,
      29,   30, -349,   34, -241,   -3,   35,   36,
      37, -355, -234,   -2,   40,   41,   -1, -655,
    -363,   46, -228,   -2, -653,   -1,   49,   50,
      -1,   51, -649,   54,   55,   -1,   56,   57,
      58,   59,   -1, -636,   63,   64,   65, -632,
      68,   69,   70,   71,   72,   -1,   73,   74,
      75,   76,   -1,   77,   78,   79,   80,   81,
      -1, -630,   84, -626,   87,   88,   89, -409,
    -182,   -2, -620,   94,   95,   96,   -1,   97,
      98,   99,  100,   -1,  101,   -1,  102,  103,
      -1,  104,  105,  106,  107,   -1, -617,  110,
      -1,  111,  112,  113,   -1,  114,  115, -615,
    -501,   -1,  120,  121,   -1,  122,  123,   -1,
     124,   -1,  125,  126,  127,   -1, -471,  130,
     131, -459, -140,   -2,  134,  135,   -1,  136,
      -1,  137,   -1,  138,   -1,  139, -144,   -2,
     140,  141,  142,   -1, -479,  145, -129,   -2,
     146,   -1,  147,  148, -497,  151,   -1,  152,
     153,   -1,  154,  155,   -1,  156,   -1,  157,
    -123,   -2,  158,  159, -154,   -2,  160,  161,
     162,   -1,  163,  164,  165,  166, -599,  169,
     170, -544,  173,  174,   -1,  175,  176,  177,
     178,  179,  180,  181,   -1,  182,  183,  184,
     185,  186,   -1,  187,  188,  189,  190,  191,
    -538,  -80,   -2,   -1,  194,  195,  196, -101,
      -2,   -1,  197,  198,  199,   -1,  200,  201,
     202,   -1, -559,   -1,  205,  206,  -69,   -2,
     207,  208, -564,  -63,   -2,  211,  212,  213,
     214,   -1,  215,   -1,  216,  217,  218,  219,
      -1,  220,  221,  222,  223,  224,  225,   -1,
    -586,  -46,   -2,  228,  229,   -1, -596,  232,
     233,   -1,  234,  -42,   -2,  235, -105,   -2,
    -602,  -36,   -2,   -1, -610,  240, -608,  -31,
      -2,  -34,   -2, -613,  -29,   -2, -156,   -2,
    -164,   -2,  245, -180,   -2,   -1,  246,  247,
     248, -187,   -2,   -1,  249, -190,   -2, -206,
      -2,   -1,  250, -212,   -3,   -1,  251,   -1,
     252, -643,  -19,   -2,   -1,  255,   -1,  256,
    -220,   -2,   -1,  257, -225,   -2, -230,   -2,
    -658,  -14,   -2, -250,   -2, -253,   -2, -258,
      -2, -260,   -2,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  261,   -1,   -1,   -1,   -1,
     262,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  263,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  264,   -1,  265,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  266,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  269,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  270,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  271
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
#line 282 "c/saml2-elems.gperf"

/* EOF - gperf -t -D -C -Nzx_elem2tok c/saml2-elems.gperf */
