/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-ff12.gperf  */
/* Computed positions: -k'1,6' */

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

#line 1 "c/zx-ff12.gperf"

/* c/zx-ff12-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-ff12-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 44
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 33
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 70
/* maximum key range = 62, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_ff12_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71,  0, 71,  5, 45,  0,
      30,  0, 71, 15, 71, 71, 20, 71,  0, 20,
       0, 71,  0,  0, 40, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71,  0, 71, 40,
      40, 71, 71, 71, 71,  5, 71, 71, 71,  0,
      35, 25, 20, 71, 71,  0,  5, 71, 20, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
      71, 71, 71, 71, 71, 71
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
  return hval;
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  9, 10, 11, 12, 13,
     9, 10,  0, 12, 13, 19, 20, 21,  7,  3,  9, 20,  0, 22,
     8, 24, 10, 26, 27,  0, 29, 30,  0, 12, 13, 14, 10,  0,
     7, 23, 24, 25,  0,  7,  0,  0, 10,  0, 12,  0,  0, 15,
     0, 12, 23,  0, 15,  0,  0, 33,  0, 25,  0,  0, 28, 29,
    25
  };

struct zx_el_tok zx_ff12_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 33 "c/zx-ff12.gperf"
    {"Extension", sizeof(struct zx_ff12_Extension_s)},
#line 55 "c/zx-ff12.gperf"
    {"RelayState", sizeof(struct zx_elem_s)},
#line 36 "c/zx-ff12.gperf"
    {"GetComplete", sizeof(struct zx_elem_s)},
#line 27 "c/zx-ff12.gperf"
    {"AuthnRequest", sizeof(struct zx_ff12_AuthnRequest_s)},
#line 29 "c/zx-ff12.gperf"
    {"AuthnResponse", sizeof(struct zx_ff12_AuthnResponse_s)},
#line 19 "c/zx-ff12.gperf"
    {"Assertion", sizeof(struct zx_ff12_Assertion_s)},
#line 52 "c/zx-ff12.gperf"
    {"ProxyCount", sizeof(struct zx_elem_s)},
    {""},
#line 23 "c/zx-ff12.gperf"
    {"AuthnContext", sizeof(struct zx_ff12_AuthnContext_s)},
#line 18 "c/zx-ff12.gperf"
    {"AffiliationID", sizeof(struct zx_elem_s)},
#line 56 "c/zx-ff12.gperf"
    {"RequestAuthnContext", sizeof(struct zx_ff12_RequestAuthnContext_s)},
#line 28 "c/zx-ff12.gperf"
    {"AuthnRequestEnvelope", sizeof(struct zx_ff12_AuthnRequestEnvelope_s)},
#line 30 "c/zx-ff12.gperf"
    {"AuthnResponseEnvelope", sizeof(struct zx_ff12_AuthnResponseEnvelope_s)},
#line 39 "c/zx-ff12.gperf"
    {"IDPList", sizeof(struct zx_ff12_IDPList_s)},
#line 42 "c/zx-ff12.gperf"
    {"Loc", sizeof(struct zx_elem_s)},
#line 41 "c/zx-ff12.gperf"
    {"IsPassive", sizeof(struct zx_elem_s)},
#line 24 "c/zx-ff12.gperf"
    {"AuthnContextClassRef", sizeof(struct zx_elem_s)},
    {""},
#line 25 "c/zx-ff12.gperf"
    {"AuthnContextComparison", sizeof(struct zx_elem_s)},
#line 38 "c/zx-ff12.gperf"
    {"IDPEntry", sizeof(struct zx_ff12_IDPEntry_s)},
#line 26 "c/zx-ff12.gperf"
    {"AuthnContextStatementRef", sizeof(struct zx_elem_s)},
#line 37 "c/zx-ff12.gperf"
    {"IDPEntries", sizeof(struct zx_ff12_IDPEntries_s)},
#line 20 "c/zx-ff12.gperf"
    {"AssertionConsumerServiceID", sizeof(struct zx_elem_s)},
#line 21 "c/zx-ff12.gperf"
    {"AssertionConsumerServiceURL", sizeof(struct zx_elem_s)},
    {""},
#line 53 "c/zx-ff12.gperf"
    {"RegisterNameIdentifierRequest", sizeof(struct zx_ff12_RegisterNameIdentifierRequest_s)},
#line 54 "c/zx-ff12.gperf"
    {"RegisterNameIdentifierResponse", sizeof(struct zx_ff12_RegisterNameIdentifierResponse_s)},
    {""},
#line 59 "c/zx-ff12.gperf"
    {"SessionIndex", sizeof(struct zx_elem_s)},
#line 43 "c/zx-ff12.gperf"
    {"LogoutRequest", sizeof(struct zx_ff12_LogoutRequest_s)},
#line 44 "c/zx-ff12.gperf"
    {"LogoutResponse", sizeof(struct zx_ff12_LogoutResponse_s)},
#line 35 "c/zx-ff12.gperf"
    {"ForceAuthn", sizeof(struct zx_elem_s)},
    {""},
#line 58 "c/zx-ff12.gperf"
    {"Scoping", sizeof(struct zx_ff12_Scoping_s)},
#line 32 "c/zx-ff12.gperf"
    {"EncryptedNameIdentifier", sizeof(struct zx_ff12_EncryptedNameIdentifier_s)},
#line 57 "c/zx-ff12.gperf"
    {"SPProvidedNameIdentifier", sizeof(struct zx_ff12_SPProvidedNameIdentifier_s)},
#line 31 "c/zx-ff12.gperf"
    {"EncryptableNameIdentifier", sizeof(struct zx_ff12_EncryptableNameIdentifier_s)},
    {""},
#line 60 "c/zx-ff12.gperf"
    {"Subject", sizeof(struct zx_ff12_Subject_s)},
    {""}, {""},
#line 50 "c/zx-ff12.gperf"
    {"ProviderID", sizeof(struct zx_elem_s)},
    {""},
#line 51 "c/zx-ff12.gperf"
    {"ProviderName", sizeof(struct zx_elem_s)},
    {""}, {""},
#line 49 "c/zx-ff12.gperf"
    {"ProtocolProfile", sizeof(struct zx_elem_s)},
    {""},
#line 45 "c/zx-ff12.gperf"
    {"NameIDPolicy", sizeof(struct zx_elem_s)},
#line 22 "c/zx-ff12.gperf"
    {"AuthenticationStatement", sizeof(struct zx_ff12_AuthenticationStatement_s)},
    {""},
#line 61 "c/zx-ff12.gperf"
    {"TargetNamespace", sizeof(struct zx_elem_s)},
    {""}, {""},
#line 34 "c/zx-ff12.gperf"
    {"FederationTerminationNotification", sizeof(struct zx_ff12_FederationTerminationNotification_s)},
    {""},
#line 40 "c/zx-ff12.gperf"
    {"IDPProvidedNameIdentifier", sizeof(struct zx_ff12_IDPProvidedNameIdentifier_s)},
    {""}, {""},
#line 46 "c/zx-ff12.gperf"
    {"NameIdentifierMappingRequest", sizeof(struct zx_ff12_NameIdentifierMappingRequest_s)},
#line 47 "c/zx-ff12.gperf"
    {"NameIdentifierMappingResponse", sizeof(struct zx_ff12_NameIdentifierMappingResponse_s)},
#line 48 "c/zx-ff12.gperf"
    {"OldProvidedNameIdentifier", sizeof(struct zx_ff12_OldProvidedNameIdentifier_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_ff12_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_ff12_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_ff12_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_ff12_el_tab[key];
          }
    }
  return 0;
}
#line 62 "c/zx-ff12.gperf"

/* EOF */
