/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zxwsf_attrs -N zxwsf_attr2tok c/wsf-attrs.gperf  */
/* Computed positions: -k'1,3,5' */

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

#line 1 "c/wsf-attrs.gperf"

/* c/wsf-attrs.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/wsf-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 56
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 80
/* maximum key range = 79, duplicates = 0 */

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
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 10, 81, 81, 30, 15,
      81, 81, 81, 30, 81,  0, 30, 81,  0, 81,
      81, 81, 10, 30, 30, 20, 25, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 15, 55, 25,
       0, 15, 25, 15, 20,  0, 81, 81, 10,  0,
       5, 30, 30, 40,  0,  0,  5,  0, 20,  5,
      45, 10, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
      81, 81, 81, 81, 81, 81
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const unsigned char zxwsf_attrs_lens[] =
  {
     2,  3,  8,  4, 11,  8,  9, 10, 17,  8,  4, 11,  7,  8,
     9,  5, 11,  7,  3,  4,  5, 21,  2,  8, 14,  5,  6,  7,
     8,  4, 10, 16, 12, 13,  9, 15,  6,  7,  9,  5, 21, 12,
     3,  9,  5,  9,  5,  7, 13,  4, 15, 14, 10,  8,  5,  5
  };

const struct zx_tok zxwsf_attrs[] =
  {
#line 28 "c/wsf-attrs.gperf"
    {"id", "", 0},
#line 57 "c/wsf-attrs.gperf"
    {"uri", "", 0},
#line 44 "c/wsf-attrs.gperf"
    {"redirect", "", 0},
#line 41 "c/wsf-attrs.gperf"
    {"name", "", 0},
#line 45 "c/wsf-attrs.gperf"
    {"redirectURL", "", 0},
#line 29 "c/wsf-attrs.gperf"
    {"interact", "", 0},
#line 53 "c/wsf-attrs.gperf"
    {"timestamp", "", 0},
#line 56 "c/wsf-attrs.gperf"
    {"updateType", "", 0},
#line 23 "c/wsf-attrs.gperf"
    {"descriptionIDRefs", "", 0},
#line 40 "c/wsf-attrs.gperf"
    {"multiple", "", 0},
#line 34 "c/wsf-attrs.gperf"
    {"link", "", 0},
#line 49 "c/wsf-attrs.gperf"
    {"resultsType", "", 0},
#line 30 "c/wsf-attrs.gperf"
    {"issueTo", "", 0},
#line 33 "c/wsf-attrs.gperf"
    {"language", "", 0},
#line 37 "c/wsf-attrs.gperf"
    {"messageID", "", 0},
#line 24 "c/wsf-attrs.gperf"
    {"actor", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 42 "c/wsf-attrs.gperf"
    {"newEntryIDs", "", 0},
#line 61 "c/wsf-attrs.gperf"
    {"version", "", 0},
#line 46 "c/wsf-attrs.gperf"
    {"ref", "", 0},
#line 20 "c/wsf-attrs.gperf"
    {"code", "", 0},
#line 54 "c/wsf-attrs.gperf"
    {"title", "", 0},
#line 11 "c/wsf-attrs.gperf"
    {"AssertionIssueInstant", "", 0},
#line 64 "c/wsf-attrs.gperf"
    {"Id", "wsu", zxwsf_ns_tab + zxwsf_xmlns_ix_wsu},
#line 38 "c/wsf-attrs.gperf"
    {"minChars", "", 0},
#line 25 "c/wsf-attrs.gperf"
    {"mustUnderstand", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 58 "c/wsf-attrs.gperf"
    {"usage", "", 0},
#line 50 "c/wsf-attrs.gperf"
    {"signed", "", 0},
#line 26 "c/wsf-attrs.gperf"
    {"entryID", "", 0},
#line 39 "c/wsf-attrs.gperf"
    {"moreLink", "", 0},
#line 55 "c/wsf-attrs.gperf"
    {"type", "", 0},
#line 59 "c/wsf-attrs.gperf"
    {"validUntil", "", 0},
#line 14 "c/wsf-attrs.gperf"
    {"RelationshipType", "", 0},
#line 15 "c/wsf-attrs.gperf"
    {"SessionIndex", "", 0},
#line 65 "c/wsf-attrs.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 52 "c/wsf-attrs.gperf"
    {"timeStamp", "", 0},
#line 22 "c/wsf-attrs.gperf"
    {"confirmationURI", "", 0},
#line 27 "c/wsf-attrs.gperf"
    {"format", "", 0},
#line 21 "c/wsf-attrs.gperf"
    {"comment", "", 0},
#line 62 "c/wsf-attrs.gperf"
    {"wantDSEPR", "", 0},
#line 60 "c/wsf-attrs.gperf"
    {"value", "", 0},
#line 12 "c/wsf-attrs.gperf"
    {"AuthenticationInstant", "", 0},
#line 13 "c/wsf-attrs.gperf"
    {"EncodingType", "", 0},
#line 17 "c/wsf-attrs.gperf"
    {"URI", "", 0},
#line 31 "c/wsf-attrs.gperf"
    {"itemIDRef", "", 0},
#line 63 "c/wsf-attrs.gperf"
    {"Usage", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 18 "c/wsf-attrs.gperf"
    {"ValueType", "", 0},
#line 10 "c/wsf-attrs.gperf"
    {"xmlns", ""},
#line 51 "c/wsf-attrs.gperf"
    {"svcMDID", "", 0},
#line 19 "c/wsf-attrs.gperf"
    {"affiliationID", "", 0},
#line 16 "c/wsf-attrs.gperf"
    {"Type", "", 0},
#line 36 "c/wsf-attrs.gperf"
    {"maxInteractTime", "", 0},
#line 47 "c/wsf-attrs.gperf"
    {"refToMessageID", "", 0},
#line 43 "c/wsf-attrs.gperf"
    {"providerID", "", 0},
#line 35 "c/wsf-attrs.gperf"
    {"maxChars", "", 0},
#line 48 "c/wsf-attrs.gperf"
    {"reqID", "", 0},
#line 32 "c/wsf-attrs.gperf"
    {"label", "", 0}
  };

static const short lookup[] =
  {
    -1, -1,  0,  1, -1, -1, -1, -1,  2,  3, -1,  4, -1,  5,
     6,  7, -1,  8,  9, 10, -1, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, -1, 38, 39, 40, 41, 42, 43, 44,
    -1, -1, -1, 45, 46, -1, 47, 48, 49, 50, -1, -1, -1, 51,
    52, -1, -1, 53, -1, 54, -1, -1, -1, -1, 55
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zxwsf_attr2tok (str, len)
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
              if (len == zxwsf_attrs_lens[index])
                {
                  register const char *s = zxwsf_attrs[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zxwsf_attrs[index];
                }
            }
        }
    }
  return 0;
}
#line 66 "c/wsf-attrs.gperf"

/* EOF - gperf -t -D -C -Nzxwsf_attr2tok c/wsf-attrs.gperf */
