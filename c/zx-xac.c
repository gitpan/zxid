/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-xac.gperf  */
/* Computed positions: -k'4' */

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

#line 1 "c/zx-xac.gperf"

/* c/zx-xac-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-xac-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 16
#define MIN_WORD_LENGTH 6
#define MAX_WORD_LENGTH 22
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 27
/* maximum key range = 22, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_xac_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 10,  0, 28, 28, 28,
      28,  0, 15, 28,  0,  0,  0, 20, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
      28, 28, 28, 28, 28, 28
    };
  return len + asso_values[(unsigned char)str[3]];
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  6,  7,  8,  9, 10,  0, 12, 13,
    14, 15,  6,  0,  8,  0,  0, 11, 22,  8,  0,  0,  6,  7
  };

struct zx_el_tok zx_xac_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
#line 29 "c/zx-xac.gperf"
    {"Status", sizeof(struct zx_xac_Status_s)},
#line 33 "c/zx-xac.gperf"
    {"Subject", sizeof(struct zx_xac_Subject_s)},
#line 25 "c/zx-xac.gperf"
    {"Resource", sizeof(struct zx_xac_Resource_s)},
#line 19 "c/zx-xac.gperf"
    {"Attribute", sizeof(struct zx_xac_Attribute_s)},
#line 30 "c/zx-xac.gperf"
    {"StatusCode", sizeof(struct zx_xac_StatusCode_s)},
    {""},
#line 31 "c/zx-xac.gperf"
    {"StatusDetail", sizeof(struct zx_xac_StatusDetail_s)},
#line 32 "c/zx-xac.gperf"
    {"StatusMessage", sizeof(struct zx_elem_s)},
#line 20 "c/zx-xac.gperf"
    {"AttributeValue", sizeof(struct zx_elem_s)},
#line 26 "c/zx-xac.gperf"
    {"ResourceContent", sizeof(struct zx_xac_ResourceContent_s)},
#line 18 "c/zx-xac.gperf"
    {"Action", sizeof(struct zx_xac_Action_s)},
    {""},
#line 21 "c/zx-xac.gperf"
    {"Decision", sizeof(struct zx_elem_s)},
    {""}, {""},
#line 22 "c/zx-xac.gperf"
    {"Environment", sizeof(struct zx_xac_Environment_s)},
#line 23 "c/zx-xac.gperf"
    {"MissingAttributeDetail", sizeof(struct zx_xac_MissingAttributeDetail_s)},
#line 27 "c/zx-xac.gperf"
    {"Response", sizeof(struct zx_xac_Response_s)},
    {""}, {""},
#line 28 "c/zx-xac.gperf"
    {"Result", sizeof(struct zx_xac_Result_s)},
#line 24 "c/zx-xac.gperf"
    {"Request", sizeof(struct zx_xac_Request_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_xac_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_xac_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_xac_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_xac_el_tab[key];
          }
    }
  return 0;
}
#line 34 "c/zx-xac.gperf"

/* EOF */