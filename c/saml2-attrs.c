/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_attrs -N zx_attr2tok c/saml2-attrs.gperf  */
/* Computed positions: -k'2,4' */

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
 * $Id: saml2-attrs.c,v 1.27 2006/09/05 05:09:37 sampo Exp $ */
#include "zx.h"
#include "c/saml2-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 49
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 85
/* maximum key range = 84, duplicates = 0 */

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
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86,  5,  0, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 55, 10,
      40, 86,  5, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86,  5,  0, 30, 86,
      35,  5,  0, 86,  0, 10, 25, 86, 10, 15,
      30,  0, 10,  5, 15,  5,  0,  0, 50, 35,
      86, 15, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
      86, 86, 86, 86, 86, 86, 86
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]+1];
      /*FALLTHROUGH*/
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval;
}

static const unsigned char zx_attrs_lens[] =
  {
     2,  3,  4,  5,  6,  7,  3,  9, 10,  6,  7, 13,  9, 10,
    11, 12,  8,  4,  5,  6, 12,  8, 19, 12, 13,  9, 15, 11,
    27, 29, 30,  6,  2,  8,  9, 10, 12,  9, 10,  7,  8, 12,
     5, 12, 10, 12, 12,  7, 15
  };

const struct zx_tok zx_attrs[] =
  {
#line 28 "c/saml2-attrs.gperf"
    {"ID", "", 0},
#line 33 "c/saml2-attrs.gperf"
    {"Loc", "", 0},
#line 36 "c/saml2-attrs.gperf"
    {"Name", "", 0},
#line 20 "c/saml2-attrs.gperf"
    {"Count", "", 0},
#line 53 "c/saml2-attrs.gperf"
    {"Target", "", 0},
#line 19 "c/saml2-attrs.gperf"
    {"Consent", "", 0},
#line 55 "c/saml2-attrs.gperf"
    {"URI", "", 0},
#line 39 "c/saml2-attrs.gperf"
    {"Namespace", "", 0},
#line 37 "c/saml2-attrs.gperf"
    {"NameFormat", "", 0},
#line 46 "c/saml2-attrs.gperf"
    {"Reason", "", 0},
#line 57 "c/saml2-attrs.gperf"
    {"Version", "", 0},
#line 38 "c/saml2-attrs.gperf"
    {"NameQualifier", "", 0},
#line 40 "c/saml2-attrs.gperf"
    {"NotBefore", "", 0},
#line 18 "c/saml2-attrs.gperf"
    {"Comparison", "", 0},
#line 23 "c/saml2-attrs.gperf"
    {"Destination", "", 0},
#line 51 "c/saml2-attrs.gperf"
    {"SessionIndex", "", 0},
#line 35 "c/saml2-attrs.gperf"
    {"MimeType", "", 0},
#line 54 "c/saml2-attrs.gperf"
    {"Type", "", 0},
#line 10 "c/saml2-attrs.gperf"
    {"xmlns", ""},
#line 34 "c/saml2-attrs.gperf"
    {"Method", "", 0},
#line 17 "c/saml2-attrs.gperf"
    {"AuthnInstant", "", 0},
#line 48 "c/saml2-attrs.gperf"
    {"Resource", "", 0},
#line 52 "c/saml2-attrs.gperf"
    {"SessionNotOnOrAfter", "", 0},
#line 27 "c/saml2-attrs.gperf"
    {"FriendlyName", "", 0},
#line 58 "c/saml2-attrs.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 12 "c/saml2-attrs.gperf"
    {"Algorithm", "", 0},
#line 42 "c/saml2-attrs.gperf"
    {"ProtocolBinding", "", 0},
#line 13 "c/saml2-attrs.gperf"
    {"AllowCreate", "", 0},
#line 15 "c/saml2-attrs.gperf"
    {"AssertionConsumerServiceURL", "", 0},
#line 14 "c/saml2-attrs.gperf"
    {"AssertionConsumerServiceIndex", "", 0},
#line 16 "c/saml2-attrs.gperf"
    {"AttributeConsumingServiceIndex", "", 0},
#line 26 "c/saml2-attrs.gperf"
    {"Format", "", 0},
#line 29 "c/saml2-attrs.gperf"
    {"Id", "", 0},
#line 22 "c/saml2-attrs.gperf"
    {"Decision", "", 0},
#line 47 "c/saml2-attrs.gperf"
    {"Recipient", "", 0},
#line 45 "c/saml2-attrs.gperf"
    {"ProxyCount", "", 0},
#line 30 "c/saml2-attrs.gperf"
    {"InResponseTo", "", 0},
#line 31 "c/saml2-attrs.gperf"
    {"IsPassive", "", 0},
#line 25 "c/saml2-attrs.gperf"
    {"ForceAuthn", "", 0},
#line 11 "c/saml2-attrs.gperf"
    {"Address", "", 0},
#line 24 "c/saml2-attrs.gperf"
    {"Encoding", "", 0},
#line 41 "c/saml2-attrs.gperf"
    {"NotOnOrAfter", "", 0},
#line 56 "c/saml2-attrs.gperf"
    {"Value", "", 0},
#line 50 "c/saml2-attrs.gperf"
    {"SPProvidedID", "", 0},
#line 43 "c/saml2-attrs.gperf"
    {"ProviderID", "", 0},
#line 44 "c/saml2-attrs.gperf"
    {"ProviderName", "", 0},
#line 32 "c/saml2-attrs.gperf"
    {"IssueInstant", "", 0},
#line 21 "c/saml2-attrs.gperf"
    {"DNSName", "", 0},
#line 49 "c/saml2-attrs.gperf"
    {"SPNameQualifier", "", 0}
  };

static const short lookup[] =
  {
    -1, -1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, -1, -1, 23,
    24, 25, 26, 27, 28, -1, 29, 30, 31, 32, 33, 34, 35, -1,
    36, -1, 37, 38, -1, 39, 40, -1, -1, -1, 41, -1, -1, 42,
    -1, 43, -1, -1, 44, -1, 45, -1, -1, -1, -1, 46, -1, -1,
    -1, -1, 47, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 48
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
#line 59 "c/saml2-attrs.gperf"

/* EOF - gperf -t -D -C -Nzx_attr2tok c/saml2-attrs.gperf */
