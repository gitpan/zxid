/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_attrs -N zx_attr2tok c/saml2-attrs.gperf  */
/* Computed positions: -k'1-2,4' */

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

#line 1 "c/saml2-attrs.gperf"

/* c/saml2-attrs.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/saml2-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 83
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 165
/* maximum key range = 162, duplicates = 0 */

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
  static const unsigned char asso_values[] =
    {
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166,   5,  30,  35,  30,  10,
       25, 166, 166,  15, 166, 166,  60,  25,   0,  60,
       60, 166,  45,   0,  20,  55,   0, 166, 166, 166,
      166, 166, 166, 166, 166,   5, 166,   0,   0,  10,
       55,   0, 166,  10,   0,  15, 166, 166,   5,  40,
       65,  25,  50, 166,  15,   0,   0,   0,  15, 166,
       55,  15, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166, 166, 166, 166, 166,
      166, 166, 166, 166, 166, 166
    };
  register int hval = len;

  switch (hval)
    {
      default:
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
     4,  5,  7,  9, 10, 12, 13,  4, 11, 12, 13, 19,  6,  7,
     9, 20, 21, 12, 13,  6, 27, 13, 29,  6,  7, 18,  4,  5,
    11,  7,  3,  9, 10, 11,  2,  8,  9, 30,  6, 12,  8,  9,
    10, 21, 12,  3,  6, 12,  8,  9, 10,  7, 23,  9, 10,  6,
     2, 13, 15, 12,  8,  7,  3, 12,  3, 15, 12,  8, 15,  6,
    12, 13, 10, 12,  3, 10,  7,  8, 10,  5,  9, 10,  5
  };

const struct zx_tok zx_attrs[] =
  {
#line 51 "c/saml2-attrs.gperf"
    {"Name", "", 0},
#line 76 "c/saml2-attrs.gperf"
    {"Value", "", 0},
#line 77 "c/saml2-attrs.gperf"
    {"Version", "", 0},
#line 54 "c/saml2-attrs.gperf"
    {"Namespace", "", 0},
#line 52 "c/saml2-attrs.gperf"
    {"NameFormat", "", 0},
#line 71 "c/saml2-attrs.gperf"
    {"SessionIndex", "", 0},
#line 53 "c/saml2-attrs.gperf"
    {"NameQualifier", "", 0},
#line 78 "c/saml2-attrs.gperf"
    {"case", "", 0},
#line 16 "c/saml2-attrs.gperf"
    {"AssertionID", "", 0},
#line 22 "c/saml2-attrs.gperf"
    {"AuthnInstant", "", 0},
#line 23 "c/saml2-attrs.gperf"
    {"AuthorityKind", "", 0},
#line 72 "c/saml2-attrs.gperf"
    {"SessionNotOnOrAfter", "", 0},
#line 44 "c/saml2-attrs.gperf"
    {"Issuer", "", 0},
#line 91 "c/saml2-attrs.gperf"
    {"sharing", "", 0},
#line 42 "c/saml2-attrs.gperf"
    {"IsPassive", "", 0},
#line 21 "c/saml2-attrs.gperf"
    {"AuthenticationMethod", "", 0},
#line 20 "c/saml2-attrs.gperf"
    {"AuthenticationInstant", "", 0},
#line 43 "c/saml2-attrs.gperf"
    {"IssueInstant", "", 0},
#line 90 "c/saml2-attrs.gperf"
    {"requiredChars", "", 0},
#line 48 "c/saml2-attrs.gperf"
    {"Method", "", 0},
#line 15 "c/saml2-attrs.gperf"
    {"AssertionConsumerServiceURL", "", 0},
#line 18 "c/saml2-attrs.gperf"
    {"AttributeName", "", 0},
#line 14 "c/saml2-attrs.gperf"
    {"AssertionConsumerServiceIndex", "", 0},
#line 73 "c/saml2-attrs.gperf"
    {"Target", "", 0},
#line 29 "c/saml2-attrs.gperf"
    {"DNSName", "", 0},
#line 19 "c/saml2-attrs.gperf"
    {"AttributeNamespace", "", 0},
#line 74 "c/saml2-attrs.gperf"
    {"Type", "", 0},
#line 55 "c/saml2-attrs.gperf"
    {"Nonce", "", 0},
#line 31 "c/saml2-attrs.gperf"
    {"Destination", "", 0},
#line 79 "c/saml2-attrs.gperf"
    {"consent", "", 0},
#line 84 "c/saml2-attrs.gperf"
    {"max", "", 0},
#line 12 "c/saml2-attrs.gperf"
    {"Algorithm", "", 0},
#line 28 "c/saml2-attrs.gperf"
    {"DNSAddress", "", 0},
#line 13 "c/saml2-attrs.gperf"
    {"AllowCreate", "", 0},
#line 38 "c/saml2-attrs.gperf"
    {"ID", "", 0},
#line 49 "c/saml2-attrs.gperf"
    {"MimeType", "", 0},
#line 85 "c/saml2-attrs.gperf"
    {"mechanism", "", 0},
#line 17 "c/saml2-attrs.gperf"
    {"AttributeConsumingServiceIndex", "", 0},
#line 62 "c/saml2-attrs.gperf"
    {"Reason", "", 0},
#line 37 "c/saml2-attrs.gperf"
    {"FriendlyName", "", 0},
#line 30 "c/saml2-attrs.gperf"
    {"Decision", "", 0},
#line 65 "c/saml2-attrs.gperf"
    {"RequestID", "", 0},
#line 33 "c/saml2-attrs.gperf"
    {"DeviceType", "", 0},
#line 83 "c/saml2-attrs.gperf"
    {"governingAgreementRef", "", 0},
#line 32 "c/saml2-attrs.gperf"
    {"DeviceInHand", "", 0},
#line 87 "c/saml2-attrs.gperf"
    {"min", "", 0},
#line 86 "c/saml2-attrs.gperf"
    {"medium", "", 0},
#line 47 "c/saml2-attrs.gperf"
    {"MajorVersion", "", 0},
#line 81 "c/saml2-attrs.gperf"
    {"duration", "", 0},
#line 56 "c/saml2-attrs.gperf"
    {"NotBefore", "", 0},
#line 70 "c/saml2-attrs.gperf"
    {"SeedLength", "", 0},
#line 26 "c/saml2-attrs.gperf"
    {"Consent", "", 0},
#line 63 "c/saml2-attrs.gperf"
    {"ReauthenticateOnOrAfter", "", 0},
#line 64 "c/saml2-attrs.gperf"
    {"Recipient", "", 0},
#line 35 "c/saml2-attrs.gperf"
    {"ForceAuthn", "", 0},
#line 88 "c/saml2-attrs.gperf"
    {"number", "", 0},
#line 40 "c/saml2-attrs.gperf"
    {"Id", "", 0},
#line 82 "c/saml2-attrs.gperf"
    {"excludedChars", "", 0},
#line 68 "c/saml2-attrs.gperf"
    {"SPNameQualifier", "", 0},
#line 50 "c/saml2-attrs.gperf"
    {"MinorVersion", "", 0},
#line 66 "c/saml2-attrs.gperf"
    {"Resource", "", 0},
#line 11 "c/saml2-attrs.gperf"
    {"Address", "", 0},
#line 89 "c/saml2-attrs.gperf"
    {"nym", "", 0},
#line 69 "c/saml2-attrs.gperf"
    {"SPProvidedID", "", 0},
#line 45 "c/saml2-attrs.gperf"
    {"Loc", "", 0},
#line 58 "c/saml2-attrs.gperf"
    {"ProtocolBinding", "", 0},
#line 41 "c/saml2-attrs.gperf"
    {"InResponseTo", "", 0},
#line 46 "c/saml2-attrs.gperf"
    {"Location", "", 0},
#line 80 "c/saml2-attrs.gperf"
    {"credentialLevel", "", 0},
#line 36 "c/saml2-attrs.gperf"
    {"Format", "", 0},
#line 57 "c/saml2-attrs.gperf"
    {"NotOnOrAfter", "", 0},
#line 92 "c/saml2-attrs.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 59 "c/saml2-attrs.gperf"
    {"ProviderID", "", 0},
#line 60 "c/saml2-attrs.gperf"
    {"ProviderName", "", 0},
#line 75 "c/saml2-attrs.gperf"
    {"URI", "", 0},
#line 67 "c/saml2-attrs.gperf"
    {"ResponseID", "", 0},
#line 24 "c/saml2-attrs.gperf"
    {"Binding", "", 0},
#line 34 "c/saml2-attrs.gperf"
    {"Encoding", "", 0},
#line 25 "c/saml2-attrs.gperf"
    {"Comparison", "", 0},
#line 27 "c/saml2-attrs.gperf"
    {"Count", "", 0},
#line 39 "c/saml2-attrs.gperf"
    {"IPAddress", "", 0},
#line 61 "c/saml2-attrs.gperf"
    {"ProxyCount", "", 0},
#line 10 "c/saml2-attrs.gperf"
    {"xmlns", ""}
  };

static const short lookup[] =
  {
    -1, -1, -1, -1,  0,  1, -1,  2, -1,  3,  4, -1,  5,  6,
     7, -1,  8,  9, 10, 11, -1, 12, 13, -1, 14, 15, 16, 17,
    18, -1, -1, 19, 20, 21, 22, -1, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, -1, -1, 46, 47, 48, 49, 50, -1, 51, 52, 53,
    54, 55, 56, 57, -1, 58, -1, 59, 60, -1, -1, -1, 61, 62,
    -1, -1, -1, 63, 64, -1, 65, -1, 66, 67, -1, 68, 69, 70,
    71, -1, 72, -1, 73, 74, -1, 75, -1, 76, 77, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 78, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 79, -1, -1, -1, -1, -1, -1, -1, -1, 80,
    81, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 82
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
        }
    }
  return 0;
}
#line 93 "c/saml2-attrs.gperf"

/* EOF - gperf -t -D -C -Nzx_attr2tok c/saml2-attrs.gperf */
