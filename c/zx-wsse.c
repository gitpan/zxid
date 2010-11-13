/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-wsse.gperf  */
/* Computed positions: -k'1' */

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

#line 1 "c/zx-wsse.gperf"

/* c/zx-wsse-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-wsse-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 11
#define MIN_WORD_LENGTH 5
#define MAX_WORD_LENGTH 24
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 28
/* maximum key range = 24, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_wsse_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29,  0, 29, 29,  4,
      29, 29, 29, 29, 29, 15, 29, 29,  0, 29,
      15, 29,  0,  0,  0,  5, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
      29, 29, 29, 29, 29, 29
    };
  return len + asso_values[(unsigned char)str[0]];
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  5,  0,  0,  8,  9,  0,  0,  8,  8,
     0,  0,  0,  0, 13, 19,  0,  0, 22,  8, 24,  0,  0,  0,
    13
  };

struct zx_el_tok zx_wsse_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""},
#line 21 "c/zx-wsse.gperf"
    {"Nonce", sizeof(struct zx_wsse_Nonce_s)},
    {""}, {""},
#line 24 "c/zx-wsse.gperf"
    {"Security", sizeof(struct zx_wsse_Security_s)},
#line 23 "c/zx-wsse.gperf"
    {"Reference", sizeof(struct zx_wsse_Reference_s)},
    {""}, {""},
#line 19 "c/zx-wsse.gperf"
    {"Embedded", sizeof(struct zx_wsse_Embedded_s)},
#line 27 "c/zx-wsse.gperf"
    {"Username", sizeof(struct zx_wsse_Username_s)},
    {""}, {""}, {""}, {""},
#line 28 "c/zx-wsse.gperf"
    {"UsernameToken", sizeof(struct zx_wsse_UsernameToken_s)},
#line 18 "c/zx-wsse.gperf"
    {"BinarySecurityToken", sizeof(struct zx_wsse_BinarySecurityToken_s)},
    {""}, {""},
#line 25 "c/zx-wsse.gperf"
    {"SecurityTokenReference", sizeof(struct zx_wsse_SecurityTokenReference_s)},
#line 22 "c/zx-wsse.gperf"
    {"Password", sizeof(struct zx_wsse_Password_s)},
#line 26 "c/zx-wsse.gperf"
    {"TransformationParameters", sizeof(struct zx_wsse_TransformationParameters_s)},
    {""}, {""}, {""},
#line 20 "c/zx-wsse.gperf"
    {"KeyIdentifier", sizeof(struct zx_wsse_KeyIdentifier_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_wsse_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_wsse_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_wsse_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_wsse_el_tab[key];
          }
    }
  return 0;
}
#line 29 "c/zx-wsse.gperf"

/* EOF */