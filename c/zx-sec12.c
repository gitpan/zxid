/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-sec12.gperf  */
/* Computed positions: -k'8' */

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

#line 1 "c/zx-sec12.gperf"

/* c/zx-sec12-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-sec12-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 12
#define MIN_WORD_LENGTH 6
#define MAX_WORD_LENGTH 28
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 38
/* maximum key range = 33, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_sec12_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39,  0, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39,  5, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 15, 10, 39,
      39, 10,  0, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39,  0,  5, 39, 39, 39, 39,
      39,  0, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39, 39, 39, 39, 39,
      39, 39, 39, 39, 39, 39
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
        break;
    }
  return hval;
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  6,  0,  0,  0, 10,  0, 12,  0,
    14,  0,  0, 12,  0, 14,  0,  0, 12, 23,  0, 25,  0,  0,
    28,  0,  0,  0,  0, 23,  0,  0,  0,  0, 23
  };

struct zx_el_tok zx_sec12_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "c/zx-sec12.gperf"
    {"Issuer", sizeof(struct zx_elem_s)},
    {""}, {""}, {""},
#line 21 "c/zx-sec12.gperf"
    {"ProviderID", sizeof(struct zx_elem_s)},
    {""},
#line 20 "c/zx-sec12.gperf"
    {"NumberOfUses", sizeof(struct zx_elem_s)},
    {""},
#line 26 "c/zx-sec12.gperf"
    {"SessionContext", sizeof(struct zx_sec12_SessionContext_s)},
    {""}, {""},
#line 18 "c/zx-sec12.gperf"
    {"IssueInstant", sizeof(struct zx_elem_s)},
    {""},
#line 28 "c/zx-sec12.gperf"
    {"SessionSubject", sizeof(struct zx_sec12_SessionSubject_s)},
    {""}, {""},
#line 23 "c/zx-sec12.gperf"
    {"ProxySubject", sizeof(struct zx_sec12_ProxySubject_s)},
#line 27 "c/zx-sec12.gperf"
    {"SessionContextStatement", sizeof(struct zx_sec12_SessionContextStatement_s)},
    {""},
#line 22 "c/zx-sec12.gperf"
    {"ProxyInfoConfirmationData", sizeof(struct zx_sec12_ProxyInfoConfirmationData_s)},
    {""}, {""},
#line 29 "c/zx-sec12.gperf"
    {"ValidityRestrictionCondition", sizeof(struct zx_sec12_ValidityRestrictionCondition_s)},
    {""}, {""}, {""}, {""},
#line 25 "c/zx-sec12.gperf"
    {"ResourceAccessStatement", sizeof(struct zx_sec12_ResourceAccessStatement_s)},
    {""}, {""}, {""}, {""},
#line 24 "c/zx-sec12.gperf"
    {"ProxyTransitedStatement", sizeof(struct zx_sec12_ProxyTransitedStatement_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_sec12_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_sec12_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_sec12_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_sec12_el_tab[key];
          }
    }
  return 0;
}
#line 30 "c/zx-sec12.gperf"

/* EOF */