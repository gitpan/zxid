/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_elems -N zx_elem2tok c/zx-elems.gperf  */
/* Computed positions: -k'1-5,7-8,10,$' */

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

#define TOTAL_KEYWORDS 1631
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 48
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 10799
/* maximum key range = 10799, duplicates = 303 */

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
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,    15, 10800,
          5, 10800,     5,    15, 10800,     0,     0,    15, 10800, 10800,
      10800, 10800, 10800, 10800, 10800,   120,  1105,    85,   500,   740,
       1169,  1635,   890,   930,   100,  1750,   775,   375,   880,  1879,
        275,     5,   290,    45,  1824,  1980,   395,   670,    70,     0,
         25, 10800, 10800, 10800, 10800,   125, 10800,    10,  1324,    45,
          0,     0,  2040,   275,  1575,    15,   195,  1865,    65,   875,
         20,     5,   660,  1935,     0,     0,    15,   150,   540,   335,
       1302,  1040,   450, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800, 10800,
      10800, 10800, 10800, 10800, 10800, 10800
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
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const unsigned char zx_elems_lens[] =
  {
     1,  1,  4,  1,  4,  2,  4,  4,  1,  4,  5,  6,  6,  2,
     4,  4,  5,  7,  4,  4,  5,  3,  9,  6, 13,  6,  6,  6,
     6,  7,  7,  9,  4,  7,  7,  9,  9, 12,  1,  4,  7,  7,
    11, 14, 10, 10,  9,  7,  9,  9,  9,  9,  1,  9,  9,  9,
     6,  6,  6,  6,  6,  6,  2, 13,  6, 21, 11, 13,  1,  7,
     7, 12, 18, 14, 16, 17, 23, 14, 15,  6,  6,  6,  6,  6,
     6, 11, 22, 18, 15,  8,  6,  6,  6,  6,  6,  6,  6,  6,
     6,  6,  6, 12, 24, 18, 10, 10, 16, 25, 27, 28, 14, 21,
    22, 26, 17,  9,  5, 15,  4, 21, 20,  3,  7, 20, 12, 15,
     6,  7, 14, 10, 10, 10, 10,  8,  8,  9,  9,  9, 15,  6,
    10,  4,  5, 10, 25,  6, 13,  4, 19,  5, 16, 28, 15, 12,
    16, 17, 15, 15, 16,  3, 10, 10, 18, 18, 20,  5, 19, 20,
    13, 13, 25, 22,  8, 16,  3, 13, 13, 12, 19,  9, 20, 28,
     4,  4, 19, 10, 16, 12,  8,  8,  8,  9, 10,  7,  4, 16,
    17,  9,  3, 19,  9, 15,  6,  6, 27, 13,  4,  4, 27, 18,
    21, 14,  7, 14,  7,  7, 13,  4,  4,  4,  4,  4,  1, 13,
    14, 27,  5, 12, 17, 23, 16, 10,  6,  6,  6,  6,  6,  8,
     5, 17, 16,  7,  6,  8, 10, 30, 16, 13, 13, 13,  5,  5,
     5, 37,  8,  8, 15, 29, 16, 18, 24,  5,  9, 17, 17,  8,
    11,  2,  5, 13, 13, 19,  2, 14, 23, 10, 11, 14,  4, 11,
     8, 18,  5, 15, 15,  6,  6, 11, 11, 11, 11, 14, 14, 14,
    14, 14, 26, 14,  9, 11,  5,  6, 15, 21, 19, 15, 13, 12,
    12, 12, 18, 18,  4, 22, 23,  7, 11,  8, 17,  8, 19,  3,
    12, 12, 20, 14, 12,  3, 10,  8,  9, 15, 18, 12, 28, 11,
    11, 25, 22,  8, 19, 19, 15,  6, 12,  4, 10, 10,  8, 14,
    11, 14,  2, 14, 11, 19,  5,  5,  4,  4, 10,  8,  8,  8,
     8,  8,  8,  9, 20, 17, 15,  7,  8, 10,  9, 30, 15, 18,
    12, 18, 15, 16, 18, 12, 15, 12, 25, 27, 27, 13, 15, 11,
    10, 18, 18, 19, 19,  5,  9,  9, 20,  6, 17, 18, 18, 20,
    20, 14, 14, 14, 14, 13,  9,  5,  6,  6,  6,  9, 20,  7,
     7, 25, 18,  9, 25,  8,  8, 19,  9,  5, 20,  6,  7, 12,
    18,  9,  9, 16, 22, 17, 13, 16, 15,  9, 11, 10, 11, 22,
    12, 13,  9,  9,  9, 17,  3, 14, 10, 12, 12, 13, 13, 13,
    13, 13, 13, 13, 15, 17,  8, 20, 20, 12,  8, 19, 16, 27,
    19,  8,  8, 19,  3, 16, 16,  9, 20, 23, 11, 11, 11, 28,
    15, 48, 14,  6, 33, 16,  7, 11, 10,  6, 22,  9, 10, 19,
    25,  6, 22,  9, 10,  7,  7, 24, 15,  9, 20, 21,  5,  8,
     8, 10, 17, 10, 11, 16, 16, 13,  9, 18, 19, 20, 26, 19,
    14, 14, 10, 10, 12, 12, 13, 32, 18, 18, 20, 38, 15,  7,
    11, 19,  9,  7,  3,  5, 10,  3, 10, 10, 10, 12,  6,  6,
     8,  7,  4, 19, 13, 21,  7, 13,  9, 20, 17, 14, 17,  8,
     8,  8, 15, 23, 15,  6, 19, 10, 10, 10, 10,  8,  9, 11,
    12, 13,  9, 18, 12,  8,  8,  8, 14, 14, 14, 14, 14, 15,
     1, 14, 19, 22, 20, 27, 29, 30, 18, 28, 10, 11, 19, 20,
    16, 19, 11, 10, 19, 17,  3, 19,  9, 18, 15, 10, 13, 13,
    12, 10, 14, 14,  7, 16, 29, 10, 11,  7, 11, 11, 17, 19,
    12, 12, 28,  4, 10, 10,  8, 15,  6,  7,  7,  7,  7,  7,
     7,  7,  7,  7,  7, 10,  7,  1,  4,  4,  9, 14, 14,  6,
     7, 13, 14, 12, 21, 12, 20, 14, 14, 14, 14, 14,  7, 16,
     7, 12,  3,  9,  9,  2,  2, 24, 19, 10, 10, 10, 10, 10,
    17, 14,  8, 21, 23, 23, 10, 10, 19, 19, 15, 20,  2,  7,
    19, 20,  8,  9, 24, 26, 24, 13, 23, 21, 11, 16, 16, 16,
    13, 13,  9, 20, 11, 18, 20, 21,  5, 10, 12, 12, 14, 23,
    23, 26, 30, 22, 23, 13, 25,  8, 12, 12, 13, 13,  3, 16,
     9, 12, 12, 30,  7, 18, 11, 22,  9, 28, 19,  5, 12, 18,
    12, 18,  9, 12, 17, 31,  7, 37,  8, 21, 22, 23, 14, 25,
     4, 32, 23, 22, 18,  7, 23,  9, 11, 22,  7, 24, 15, 27,
     8, 13, 16, 16,  9,  9,  9,  9,  8, 10, 13,  9, 10, 10,
    10, 10,  4, 17,  8, 16,  9,  9,  9,  9,  9,  9,  9,  9,
     9,  8, 24,  6, 12, 12, 13, 14, 32,  6,  9, 19, 10, 12,
    17, 12, 14, 14, 15, 19, 17, 14, 15, 12, 14, 20, 17,  4,
    18,  9, 17, 11,  9,  7, 17, 13, 13, 11, 12,  5,  5,  5,
     5,  5,  5,  5,  5, 12, 13,  5,  5,  5, 15, 19,  5,  8,
    11, 11, 30, 15, 16, 13, 14, 14, 15,  6,  8, 19, 25, 12,
     4,  4, 12, 13, 19, 12, 12, 12, 12, 12, 22,  6, 13,  9,
    12, 21,  3, 15, 12, 17, 15, 10, 10, 23, 12, 12,  2, 17,
    18, 12, 14, 14, 12,  8, 20, 10,  7, 19, 16,  7, 15, 22,
     8,  8,  8,  8,  8,  9, 11, 13,  9, 19, 24, 13, 30,  3,
    30, 22,  9,  7,  7,  7,  7,  8,  9, 31,  9,  9,  9, 10,
     7,  7,  7,  7,  7, 17, 12,  6, 13, 13,  6, 16, 20,  9,
     8, 15, 22, 20, 11, 11, 10, 11, 11,  3, 19, 19,  5,  8,
    15, 23, 20, 28,  7, 18, 19, 20, 18, 30,  7,  7, 26, 12,
    12, 38, 11, 12, 16, 21,  6, 12,  6, 19, 25, 16, 19, 25,
    10,  7,  7,  7,  9,  4, 16, 15, 16,  6,  6,  6, 11,  7,
     8, 10, 21,  8, 15, 21, 12, 14, 17, 11, 18, 15, 10, 16,
    12, 19, 16, 12, 19,  6,  6, 17, 19, 19, 19, 19, 23,  6,
    14, 16, 16, 16, 11, 20, 22, 23, 23, 24, 15, 19, 16, 12,
    12, 12, 18, 10, 12,  4,  4,  4, 18, 19, 13, 18, 16, 17,
     7,  7, 14, 10, 12,  9,  9, 14,  9, 12,  7, 29, 11, 23,
    36, 10, 38, 18, 11, 28,  6, 25, 20,  4,  8, 12, 12, 21,
    19, 19,  4, 10, 25, 16, 10, 10, 10, 10,  7, 10, 16, 22,
    11, 17, 11,  7,  7,  7, 22, 13, 10,  7, 10, 10, 13, 11,
     8, 11, 11, 16, 16, 13, 14,  6, 18, 12, 13,  4,  2,  8,
     8, 18, 19, 23, 23, 13, 15, 15, 15, 19, 11, 14, 22, 20,
    15, 20, 16,  9, 15, 10, 10, 25, 28, 31,  7,  8, 12, 12,
    12, 12, 12, 23, 21, 14, 20, 24, 19,  8, 16, 18, 17, 11,
    11, 23,  9,  9,  9, 17, 13, 13, 12, 10,  7, 14,  3, 11,
     5,  4,  4,  4, 14,  2,  8,  4, 13,  6, 11, 11, 19,  8,
     6,  6, 10,  4, 10, 18,  7,  4,  1, 12,  9, 10, 10, 10,
    10, 18, 16, 17, 11, 14,  8,  8,  8, 14, 16, 16,  8,  5,
     9,  6,  4,  6,  9,  6, 13, 11, 19, 11, 19, 14, 14, 14,
    14, 14, 12, 10, 26, 18, 18, 13,  9, 15, 15, 13,  8, 18,
     6,  6,  6, 15, 15, 15, 15,  7,  6,  6,  6,  6,  6,  6,
    16,  7, 11,  8, 11, 15,  5,  4,  4,  8, 14,  9, 10,  6,
    12, 13,  4,  5, 10, 18, 15, 15, 12, 19, 11, 14, 10,  4,
    10,  9, 20, 16,  6,  7,  3, 10,  9, 12,  5,  3,  5,  7,
     7,  7,  8,  4, 10, 17,  5,  5, 21, 10, 14, 11,  7, 10,
    20, 21, 20,  7, 28,  3, 27, 15, 20,  5, 19, 16,  3,  6,
    11, 19, 19, 20, 12, 12,  4,  5, 17, 16, 15, 16, 12,  4,
    13,  3, 13, 14, 14, 14, 14, 14,  7,  7,  6,  9,  9,  9,
     3,  8, 19, 20, 20, 18, 24,  9,  9, 10, 17, 10, 18,  6,
     6,  6,  6,  6,  9, 13, 13, 11, 11, 12, 12, 12, 11,  9,
    15,  4,  5, 16,  8, 11, 15, 17, 14,  3, 10, 12, 11,  3,
    14, 16,  7, 15,  6,  8, 13, 12, 12,  6, 17, 14,  5,  5,
    21,  9, 20, 17,  5, 13, 11,  9, 14, 21, 21,  8, 22, 17,
    16,  6,  6,  6, 17, 21, 28, 14, 10,  3, 14,  4, 15, 22,
    12, 21,  5, 14, 21, 15,  6,  8,  8,  4,  3,  4,  8,  8,
    19,  7,  8,  4,  9, 14, 12,  8, 15, 15, 16, 12,  5,  6,
    14,  8,  8,  8, 25,  9, 31, 13, 15,  4, 11,  8, 11,  6,
    12, 17, 10, 16,  7,  7,  7, 10, 11, 19, 10,  4, 12, 17,
     8, 11,  7,  7, 10, 10,  6,  4, 10, 18, 17, 16, 12,  5,
    10,  6, 10,  6,  8,  8,  9, 17,  3,  7,  5,  8,  6, 12,
    13, 13, 13, 13,  8, 16,  7,  8, 21,  7, 20, 10, 10, 12,
     8,  9,  5, 13, 14, 21, 20,  8, 13, 15, 23,  7,  6, 10,
    15,  7, 10,  4,  5, 12,  3,  7,  5,  4,  6,  8, 10,  6,
    15, 15, 17, 16,  5, 16,  5,  5, 12,  8, 13,  4, 12,  5,
    16, 11,  8, 16,  7, 10, 13
  };

const struct zx_tok zx_elems[] =
  {
#line 1230 "c/zx-elems.gperf"
    {"Y", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1267 "c/zx-elems.gperf"
    {"Y", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 387 "c/zx-elems.gperf"
    {"esrd", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1220 "c/zx-elems.gperf"
    {"Q", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1467 "c/zx-elems.gperf"
    {"Year", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1179 "c/zx-elems.gperf"
    {"dn", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1639 "c/zx-elems.gperf"
    {"root", "", 0},
#line 1222 "c/zx-elems.gperf"
    {"Seed", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1268 "c/zx-elems.gperf"
    {"Z", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1273 "c/zx-elems.gperf"
    {"code", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 385 "c/zx-elems.gperf"
    {"coord", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 89 "c/zx-elems.gperf"
    {"Sender", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 767 "c/zx-elems.gperf"
    {"Sender", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1265 "c/zx-elems.gperf"
    {"St", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1177 "c/zx-elems.gperf"
    {"Sort", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1471 "c/zx-elems.gperf"
    {"Sort", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 852 "c/zx-elems.gperf"
    {"State", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1277 "c/zx-elems.gperf"
    {"edition", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1616 "c/zx-elems.gperf"
    {"Code", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1145 "c/zx-elems.gperf"
    {"Card", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 576 "c/zx-elems.gperf"
    {"Score", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1269 "c/zx-elems.gperf"
    {"alt", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1275 "c/zx-elems.gperf"
    {"direction", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 304 "c/zx-elems.gperf"
    {"detail", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 1442 "c/zx-elems.gperf"
    {"StandardValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 100 "c/zx-elems.gperf"
    {"Create", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 622 "c/zx-elems.gperf"
    {"Create", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 343 "c/zx-elems.gperf"
    {"Create", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 194 "c/zx-elems.gperf"
    {"Create", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1066 "c/zx-elems.gperf"
    {"Created", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 1183 "c/zx-elems.gperf"
    {"Created", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 593 "c/zx-elems.gperf"
    {"StartDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1175 "c/zx-elems.gperf"
    {"X400", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 11 "c/zx-elems.gperf"
    {"Address", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1201 "c/zx-elems.gperf"
    {"Address", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1574 "c/zx-elems.gperf"
    {"Statement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1584 "c/zx-elems.gperf"
    {"Statement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1276 "c/zx-elems.gperf"
    {"distanceUnit", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1266 "c/zx-elems.gperf"
    {"X", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 404 "c/zx-elems.gperf"
    {"Area", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 82 "c/zx-elems.gperf"
    {"Consent", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 94 "c/zx-elems.gperf"
    {"Consent", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 95 "c/zx-elems.gperf"
    {"Correlation", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 433 "c/zx-elems.gperf"
    {"Considerations", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 904 "c/zx-elems.gperf"
    {"Conditions", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 929 "c/zx-elems.gperf"
    {"Conditions", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1274 "c/zx-elems.gperf"
    {"codeSpace", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 741 "c/zx-elems.gperf"
    {"Content", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 417 "c/zx-elems.gperf"
    {"Candidate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 309 "c/zx-elems.gperf"
    {"Assertion", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 920 "c/zx-elems.gperf"
    {"Assertion", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 895 "c/zx-elems.gperf"
    {"Assertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1254 "c/zx-elems.gperf"
    {"C", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1079 "c/zx-elems.gperf"
    {"Condition", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1583 "c/zx-elems.gperf"
    {"Condition", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1572 "c/zx-elems.gperf"
    {"Condition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 214 "c/zx-elems.gperf"
    {"Select", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1470 "c/zx-elems.gperf"
    {"Select", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 1264 "c/zx-elems.gperf"
    {"Select", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1148 "c/zx-elems.gperf"
    {"Select", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 683 "c/zx-elems.gperf"
    {"Select", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 668 "c/zx-elems.gperf"
    {"Select", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 740 "c/zx-elems.gperf"
    {"Cc", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 645 "c/zx-elems.gperf"
    {"CreatedStatus", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 1284 "c/zx-elems.gperf"
    {"radius", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 647 "c/zx-elems.gperf"
    {"CreatedStatusResponse", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 258 "c/zx-elems.gperf"
    {"Credentials", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 768 "c/zx-elems.gperf"
    {"SenderAddress", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1212 "c/zx-elems.gperf"
    {"J", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 405 "c/zx-elems.gperf"
    {"Article", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1072 "c/zx-elems.gperf"
    {"Actions", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 407 "c/zx-elems.gperf"
    {"Associations", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 83 "c/zx-elems.gperf"
    {"CredentialsContext", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 946 "c/zx-elems.gperf"
    {"SessionContext", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 578 "c/zx-elems.gperf"
    {"SearchCriteriaId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 420 "c/zx-elems.gperf"
    {"CandidateSupplier", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 947 "c/zx-elems.gperf"
    {"SessionContextStatement", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 577 "c/zx-elems.gperf"
    {"SearchCriteria", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 390 "c/zx-elems.gperf"
    {"innerBoundaryIs", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 10 "c/zx-elems.gperf"
    {"Action", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1200 "c/zx-elems.gperf"
    {"Action", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1108 "c/zx-elems.gperf"
    {"Action", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1069 "c/zx-elems.gperf"
    {"Action", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 918 "c/zx-elems.gperf"
    {"Action", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 893 "c/zx-elems.gperf"
    {"Action", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 406 "c/zx-elems.gperf"
    {"Association", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 277 "c/zx-elems.gperf"
    {"CanonicalizationMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1420 "c/zx-elems.gperf"
    {"QuestionAnswerPair", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 579 "c/zx-elems.gperf"
    {"SearchCriterion", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1301 "c/zx-elems.gperf"
    {"Altitude", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 128 "c/zx-elems.gperf"
    {"Status", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1118 "c/zx-elems.gperf"
    {"Status", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1063 "c/zx-elems.gperf"
    {"Status", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1009 "c/zx-elems.gperf"
    {"Status", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 1000 "c/zx-elems.gperf"
    {"Status", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 772 "c/zx-elems.gperf"
    {"Status", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 688 "c/zx-elems.gperf"
    {"Status", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 684 "c/zx-elems.gperf"
    {"Status", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 595 "c/zx-elems.gperf"
    {"Status", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 382 "c/zx-elems.gperf"
    {"Status", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 274 "c/zx-elems.gperf"
    {"Status", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1518 "c/zx-elems.gperf"
    {"ContentClass", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 707 "c/zx-elems.gperf"
    {"AssertionConsumerService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1292 "c/zx-elems.gperf"
    {"AcademicCreditCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 103 "c/zx-elems.gperf"
    {"Credential", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 346 "c/zx-elems.gperf"
    {"Credential", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1227 "c/zx-elems.gperf"
    {"X509SerialNumber", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1294 "c/zx-elems.gperf"
    {"AcademicCreditHoursEarned", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1295 "c/zx-elems.gperf"
    {"AcademicCreditHoursIncluded", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1293 "c/zx-elems.gperf"
    {"AcademicCreditHoursAttempted", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1297 "c/zx-elems.gperf"
    {"AdditionalText", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 736 "c/zx-elems.gperf"
    {"AdditionalInformation", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 690 "c/zx-elems.gperf"
    {"AdditionalMetaLocation", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 704 "c/zx-elems.gperf"
    {"AdditionalMetadataLocation", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1596 "c/zx-elems.gperf"
    {"AssertionArtifact", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 973 "c/zx-elems.gperf"
    {"SetStatus", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1182 "c/zx-elems.gperf"
    {"Count", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 403 "c/zx-elems.gperf"
    {"AlternateScript", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1422 "c/zx-elems.gperf"
    {"Read", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 857 "c/zx-elems.gperf"
    {"AddCollectionResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1302 "c/zx-elems.gperf"
    {"AltitudeMeanSeaLevel", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1017 "c/zx-elems.gperf"
    {"All", "wsp", zx_ns_tab + zx_xmlns_ix_wsp},
#line 1270 "c/zx-elems.gperf"
    {"alt_acc", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 856 "c/zx-elems.gperf"
    {"AddCollectionRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 339 "c/zx-elems.gperf"
    {"CircularArea", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 338 "c/zx-elems.gperf"
    {"CircularArcArea", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1624 "c/zx-elems.gperf"
    {"Reason", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 389 "c/zx-elems.gperf"
    {"geoinfo", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 554 "c/zx-elems.gperf"
    {"Qualifications", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1001 "c/zx-elems.gperf"
    {"StatusCode", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1543 "c/zx-elems.gperf"
    {"StatusCode", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1119 "c/zx-elems.gperf"
    {"StatusCode", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1010 "c/zx-elems.gperf"
    {"StatusCode", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 1571 "c/zx-elems.gperf"
    {"Audience", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1578 "c/zx-elems.gperf"
    {"Audience", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 896 "c/zx-elems.gperf"
    {"Attribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1109 "c/zx-elems.gperf"
    {"Attribute", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 921 "c/zx-elems.gperf"
    {"Attribute", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 393 "c/zx-elems.gperf"
    {"outerBoundaryIs", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 526 "c/zx-elems.gperf"
    {"Patent", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1288 "c/zx-elems.gperf"
    {"startAngle", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1421 "c/zx-elems.gperf"
    {"Race", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 375 "c/zx-elems.gperf"
    {"Point", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1407 "c/zx-elems.gperf"
    {"Percentage", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1070 "c/zx-elems.gperf"
    {"ActionAttributeDesignator", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1281 "c/zx-elems.gperf"
    {"ll_acc", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1411 "c/zx-elems.gperf"
    {"PositionTitle", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1432 "c/zx-elems.gperf"
    {"Role", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 899 "c/zx-elems.gperf"
    {"AudienceRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1271 "c/zx-elems.gperf"
    {"angle", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 539 "c/zx-elems.gperf"
    {"PositionLocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 925 "c/zx-elems.gperf"
    {"AudienceRestrictionCondition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1246 "c/zx-elems.gperf"
    {"ProtocolProfile", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 536 "c/zx-elems.gperf"
    {"PersonalData", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 711 "c/zx-elems.gperf"
    {"AttributeService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1075 "c/zx-elems.gperf"
    {"AttributeSelector", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 88 "c/zx-elems.gperf"
    {"RedirectRequest", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 681 "c/zx-elems.gperf"
    {"RedirectRequest", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 542 "c/zx-elems.gperf"
    {"PositionSchedule", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1300 "c/zx-elems.gperf"
    {"Age", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1262 "c/zx-elems.gperf"
    {"PostalCode", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1413 "c/zx-elems.gperf"
    {"PostalCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 897 "c/zx-elems.gperf"
    {"AttributeStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 923 "c/zx-elems.gperf"
    {"AttributeStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 580 "c/zx-elems.gperf"
    {"SearchRelevanceScore", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1384 "c/zx-elems.gperf"
    {"Minor", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 598 "c/zx-elems.gperf"
    {"StructuredXMLResume", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 594 "c/zx-elems.gperf"
    {"StartingCompensation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 543 "c/zx-elems.gperf"
    {"PostalAddress", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1261 "c/zx-elems.gperf"
    {"PostalAddress", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 710 "c/zx-elems.gperf"
    {"AttributeConsumingService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1410 "c/zx-elems.gperf"
    {"PositionClassification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 16 "c/zx-elems.gperf"
    {"Metadata", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 418 "c/zx-elems.gperf"
    {"CandidateProfile", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1166 "c/zx-elems.gperf"
    {"PCS", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 693 "c/zx-elems.gperf"
    {"ContactPerson", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 715 "c/zx-elems.gperf"
    {"ContactPerson", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1437 "c/zx-elems.gperf"
    {"SearchString", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 419 "c/zx-elems.gperf"
    {"CandidateRecordInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1091 "c/zx-elems.gperf"
    {"PolicySet", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 565 "c/zx-elems.gperf"
    {"RelocationAssistance", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 709 "c/zx-elems.gperf"
    {"AttributeAuthorityDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 848 "c/zx-elems.gperf"
    {"Poll", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 960 "c/zx-elems.gperf"
    {"Poll", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1074 "c/zx-elems.gperf"
    {"AttributeAssignment", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 564 "c/zx-elems.gperf"
    {"Relocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1306 "c/zx-elems.gperf"
    {"AttendanceRating", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1533 "c/zx-elems.gperf"
    {"MessageClass", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1279 "c/zx-elems.gperf"
    {"inRadius", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1095 "c/zx-elems.gperf"
    {"Resource", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1114 "c/zx-elems.gperf"
    {"Resource", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1098 "c/zx-elems.gperf"
    {"Resources", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 617 "c/zx-elems.gperf"
    {"VisaStatus", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 614 "c/zx-elems.gperf"
    {"ValidTo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1099 "c/zx-elems.gperf"
    {"Rule", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1385 "c/zx-elems.gperf"
    {"MissionStatement", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1107 "c/zx-elems.gperf"
    {"VariableReference", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 457 "c/zx-elems.gperf"
    {"DressCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1184 "c/zx-elems.gperf"
    {"Dir", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 735 "c/zx-elems.gperf"
    {"SingleSignOnService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 289 "c/zx-elems.gperf"
    {"Signature", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1115 "c/zx-elems.gperf"
    {"ResourceContent", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1117 "c/zx-elems.gperf"
    {"Result", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1567 "c/zx-elems.gperf"
    {"Result", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1500 "c/zx-elems.gperf"
    {"SingleSignOnProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1061 "c/zx-elems.gperf"
    {"SignChallenge", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1328 "c/zx-elems.gperf"
    {"Date", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1522 "c/zx-elems.gperf"
    {"Date", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1096 "c/zx-elems.gperf"
    {"ResourceAttributeDesignator", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1106 "c/zx-elems.gperf"
    {"VariableDefinition", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1062 "c/zx-elems.gperf"
    {"SignChallengeResponse", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1065 "c/zx-elems.gperf"
    {"ValidateTarget", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 502 "c/zx-elems.gperf"
    {"Measure", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1325 "c/zx-elems.gperf"
    {"CriterionValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 452 "c/zx-elems.gperf"
    {"Details", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 748 "c/zx-elems.gperf"
    {"Details", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1380 "c/zx-elems.gperf"
    {"MaritalStatus", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 104 "c/zx-elems.gperf"
    {"Data", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1142 "c/zx-elems.gperf"
    {"Data", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 625 "c/zx-elems.gperf"
    {"Data", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 347 "c/zx-elems.gperf"
    {"Data", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 197 "c/zx-elems.gperf"
    {"Data", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1216 "c/zx-elems.gperf"
    {"P", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 436 "c/zx-elems.gperf"
    {"ContactMethod", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 582 "c/zx-elems.gperf"
    {"SearchResultId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1092 "c/zx-elems.gperf"
    {"PolicySetCombinerParameters", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 524 "c/zx-elems.gperf"
    {"Pager", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 581 "c/zx-elems.gperf"
    {"SearchResult", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1436 "c/zx-elems.gperf"
    {"SearchResultCount", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 945 "c/zx-elems.gperf"
    {"ResourceAccessStatement", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 1021 "c/zx-elems.gperf"
    {"PolicyAttachment", "wsp", zx_ns_tab + zx_xmlns_ix_wsp},
#line 535 "c/zx-elems.gperf"
    {"PersonRole", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 105 "c/zx-elems.gperf"
    {"Delete", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 951 "c/zx-elems.gperf"
    {"Delete", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 626 "c/zx-elems.gperf"
    {"Delete", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 348 "c/zx-elems.gperf"
    {"Delete", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 198 "c/zx-elems.gperf"
    {"Delete", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 970 "c/zx-elems.gperf"
    {"Register", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1379 "c/zx-elems.gperf"
    {"Major", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 975 "c/zx-elems.gperf"
    {"SetStatusResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 971 "c/zx-elems.gperf"
    {"RegisterResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1215 "c/zx-elems.gperf"
    {"Modulus", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1425 "c/zx-elems.gperf"
    {"Region", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1632 "c/zx-elems.gperf"
    {"Decision", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1446 "c/zx-elems.gperf"
    {"StringDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 330 "c/zx-elems.gperf"
    {"RegisterNameIdentifierResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1506 "c/zx-elems.gperf"
    {"AttributeProfile", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1599 "c/zx-elems.gperf"
    {"StatusMessage", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 1633 "c/zx-elems.gperf"
    {"StatusMessage", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1605 "c/zx-elems.gperf"
    {"StatusMessage", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1457 "c/zx-elems.gperf"
    {"Value", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1480 "c/zx-elems.gperf"
    {"Value", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 1477 "c/zx-elems.gperf"
    {"Value", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 1494 "c/zx-elems.gperf"
    {"RegisterNameIdentifierProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 56 "c/zx-elems.gperf"
    {"Password", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1027 "c/zx-elems.gperf"
    {"Password", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 541 "c/zx-elems.gperf"
    {"PositionPosting", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 329 "c/zx-elems.gperf"
    {"RegisterNameIdentifierRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 540 "c/zx-elems.gperf"
    {"PositionMatching", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 77 "c/zx-elems.gperf"
    {"PasswordTransforms", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 332 "c/zx-elems.gperf"
    {"SPProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 193 "c/zx-elems.gperf"
    {"vCard", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1283 "c/zx-elems.gperf"
    {"outRadius", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 87 "c/zx-elems.gperf"
    {"ProcessingContext", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 96 "c/zx-elems.gperf"
    {"ProcessingContext", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 297 "c/zx-elems.gperf"
    {"X509Data", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 597 "c/zx-elems.gperf"
    {"StringValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 394 "c/zx-elems.gperf"
    {"pd", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1287 "c/zx-elems.gperf"
    {"speed", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1440 "c/zx-elems.gperf"
    {"ServiceStatus", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1595 "c/zx-elems.gperf"
    {"ServiceStatus", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1424 "c/zx-elems.gperf"
    {"RecognitionAchieved", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1520 "c/zx-elems.gperf"
    {"DC", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1458 "c/zx-elems.gperf"
    {"ValueStatement", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 563 "c/zx-elems.gperf"
    {"RelatedPositionPostings", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 367 "c/zx-elems.gperf"
    {"MultiPoint", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1051 "c/zx-elems.gperf"
    {"RenewTarget", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 398 "c/zx-elems.gperf"
    {"AccountingCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 395 "c/zx-elems.gperf"
    {"prio", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 770 "c/zx-elems.gperf"
    {"ServiceCode", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1426 "c/zx-elems.gperf"
    {"Religion", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1332 "c/zx-elems.gperf"
    {"DisciplinaryAction", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1466 "c/zx-elems.gperf"
    {"Write", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1022 "c/zx-elems.gperf"
    {"PolicyReference", "wsp", zx_ns_tab + zx_xmlns_ix_wsp},
#line 529 "c/zx-elems.gperf"
    {"PatentMilestone", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 894 "c/zx-elems.gperf"
    {"Advice", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 919 "c/zx-elems.gperf"
    {"Advice", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1144 "c/zx-elems.gperf"
    {"Aggregation", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1469 "c/zx-elems.gperf"
    {"Aggregation", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 1253 "c/zx-elems.gperf"
    {"Aggregation", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1176 "c/zx-elems.gperf"
    {"Aggregation", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 239 "c/zx-elems.gperf"
    {"ServiceContext", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 898 "c/zx-elems.gperf"
    {"AttributeValue", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1110 "c/zx-elems.gperf"
    {"AttributeValue", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1076 "c/zx-elems.gperf"
    {"AttributeValue", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 924 "c/zx-elems.gperf"
    {"AttributeValue", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1236 "c/zx-elems.gperf"
    {"AssertionConsumerServiceID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 506 "c/zx-elems.gperf"
    {"MostRecentDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 340 "c/zx-elems.gperf"
    {"CivilData", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 68 "c/zx-elems.gperf"
    {"SwitchAudit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1550 "c/zx-elems.gperf"
    {"value", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 442 "c/zx-elems.gperf"
    {"Degree", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1126 "c/zx-elems.gperf"
    {"AgreementMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 28 "c/zx-elems.gperf"
    {"ActivationLimitUsages", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 291 "c/zx-elems.gperf"
    {"SignatureProperties", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 26 "c/zx-elems.gperf"
    {"ActivationLimit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 29 "c/zx-elems.gperf"
    {"ActivationPin", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1002 "c/zx-elems.gperf"
    {"StatusDetail", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1120 "c/zx-elems.gperf"
    {"StatusDetail", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1011 "c/zx-elems.gperf"
    {"StatusDetail", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 694 "c/zx-elems.gperf"
    {"EntitiesDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 717 "c/zx-elems.gperf"
    {"EntitiesDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 496 "c/zx-elems.gperf"
    {"List", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1141 "c/zx-elems.gperf"
    {"ActivationLimitSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 27 "c/zx-elems.gperf"
    {"ActivationLimitDuration", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1334 "c/zx-elems.gperf"
    {"Edition", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1219 "c/zx-elems.gperf"
    {"PgenCounter", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 490 "c/zx-elems.gperf"
    {"Latitude", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 530 "c/zx-elems.gperf"
    {"PersonDescriptors", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 97 "c/zx-elems.gperf"
    {"Provider", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 922 "c/zx-elems.gperf"
    {"AttributeDesignator", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 360 "c/zx-elems.gperf"
    {"LSt", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1248 "c/zx-elems.gperf"
    {"ProviderName", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 703 "c/zx-elems.gperf"
    {"SPDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1526 "c/zx-elems.gperf"
    {"EarliestDeliveryTime", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 73 "c/zx-elems.gperf"
    {"WrittenConsent", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 654 "c/zx-elems.gperf"
    {"ProviderInfo", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 1244 "c/zx-elems.gperf"
    {"Loc", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1039 "c/zx-elems.gperf"
    {"DelegateTo", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 844 "c/zx-elems.gperf"
    {"PMStatus", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 804 "c/zx-elems.gperf"
    {"Provision", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 1612 "c/zx-elems.gperf"
    {"AllowPostdating", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 850 "c/zx-elems.gperf"
    {"ProvisioningHandle", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1431 "c/zx-elems.gperf"
    {"RevisionDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 592 "c/zx-elems.gperf"
    {"SpecifiedCompetencyReference", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 799 "c/zx-elems.gperf"
    {"PMSetStatus", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 842 "c/zx-elems.gperf"
    {"PMSetStatus", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 495 "c/zx-elems.gperf"
    {"LicensesAndCertifications", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1112 "c/zx-elems.gperf"
    {"MissingAttributeDetail", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1378 "c/zx-elems.gperf"
    {"Location", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 800 "c/zx-elems.gperf"
    {"PMSetStatusResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 843 "c/zx-elems.gperf"
    {"PMSetStatusResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 290 "c/zx-elems.gperf"
    {"SignatureMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 303 "c/zx-elems.gperf"
    {"Header", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 527 "c/zx-elems.gperf"
    {"PatentDetail", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1290 "c/zx-elems.gperf"
    {"time", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1140 "c/zx-elems.gperf"
    {"SoapAction", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1197 "c/zx-elems.gperf"
    {"SoapAction", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 391 "c/zx-elems.gperf"
    {"loc_type", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 293 "c/zx-elems.gperf"
    {"SignatureValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1298 "c/zx-elems.gperf"
    {"AddressLine", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1089 "c/zx-elems.gperf"
    {"PolicyDefaults", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 478 "c/zx-elems.gperf"
    {"Id", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 730 "c/zx-elems.gperf"
    {"RoleDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1618 "c/zx-elems.gperf"
    {"Delegatable", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1330 "c/zx-elems.gperf"
    {"DegreeConcentration", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1026 "c/zx-elems.gperf"
    {"Nonce", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 1610 "c/zx-elems.gperf"
    {"Nonce", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 1475 "c/zx-elems.gperf"
    {"Hint", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 1478 "c/zx-elems.gperf"
    {"Hint", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 1445 "c/zx-elems.gperf"
    {"StreetName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 276 "c/zx-elems.gperf"
    {"Response", "dp", zx_ns_tab + zx_xmlns_ix_dp},
#line 1116 "c/zx-elems.gperf"
    {"Response", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1008 "c/zx-elems.gperf"
    {"Response", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 998 "c/zx-elems.gperf"
    {"Response", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 787 "c/zx-elems.gperf"
    {"Response", "paos", zx_ns_tab + zx_xmlns_ix_paos},
#line 307 "c/zx-elems.gperf"
    {"Response", "ecp", zx_ns_tab + zx_xmlns_ix_ecp},
#line 67 "c/zx-elems.gperf"
    {"Smartcard", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 443 "c/zx-elems.gperf"
    {"DegreeClassification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1093 "c/zx-elems.gperf"
    {"PolicySetDefaults", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1593 "c/zx-elems.gperf"
    {"ResponseHeaders", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 781 "c/zx-elems.gperf"
    {"element", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1531 "c/zx-elems.gperf"
    {"MMStatus", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1015 "c/zx-elems.gperf"
    {"Properties", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 1444 "c/zx-elems.gperf"
    {"StartTime", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 497 "c/zx-elems.gperf"
    {"LocalInstitutionClassification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 366 "c/zx-elems.gperf"
    {"MultiLineString", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 461 "c/zx-elems.gperf"
    {"EducationalMeasure", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 368 "c/zx-elems.gperf"
    {"MultiPolygon", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1364 "c/zx-elems.gperf"
    {"InternetWebAddress", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 456 "c/zx-elems.gperf"
    {"DoingBusinessAs", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1391 "c/zx-elems.gperf"
    {"NonStandardValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 482 "c/zx-elems.gperf"
    {"InternetDomainName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1382 "c/zx-elems.gperf"
    {"MeasureValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 58 "c/zx-elems.gperf"
    {"PreviousSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1048 "c/zx-elems.gperf"
    {"Participants", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 342 "c/zx-elems.gperf"
    {"CoordinateReferenceSystem", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 692 "c/zx-elems.gperf"
    {"AssertionConsumerServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1237 "c/zx-elems.gperf"
    {"AssertionConsumerServiceURL", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1324 "c/zx-elems.gperf"
    {"CriterionName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1323 "c/zx-elems.gperf"
    {"CourseLevelCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1047 "c/zx-elems.gperf"
    {"Participant", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 763 "c/zx-elems.gperf"
    {"Recipients", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 86 "c/zx-elems.gperf"
    {"InteractionService", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 677 "c/zx-elems.gperf"
    {"InteractionService", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 664 "c/zx-elems.gperf"
    {"InteractionResponse", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 676 "c/zx-elems.gperf"
    {"InteractionResponse", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 1357 "c/zx-elems.gperf"
    {"Hours", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 558 "c/zx-elems.gperf"
    {"Recipient", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 762 "c/zx-elems.gperf"
    {"Recipient", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 769 "c/zx-elems.gperf"
    {"SenderIdentification", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1038 "c/zx-elems.gperf"
    {"Claims", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 646 "c/zx-elems.gperf"
    {"CreatedStatusItem", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 663 "c/zx-elems.gperf"
    {"InteractionRequest", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 675 "c/zx-elems.gperf"
    {"InteractionRequest", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 665 "c/zx-elems.gperf"
    {"InteractionStatement", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 678 "c/zx-elems.gperf"
    {"InteractionStatement", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 102 "c/zx-elems.gperf"
    {"CreateResponse", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 624 "c/zx-elems.gperf"
    {"CreateResponse", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 345 "c/zx-elems.gperf"
    {"CreateResponse", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 196 "c/zx-elems.gperf"
    {"CreateResponse", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 532 "c/zx-elems.gperf"
    {"PersonLegalId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1355 "c/zx-elems.gperf"
    {"HairColor", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1368 "c/zx-elems.gperf"
    {"Issue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 909 "c/zx-elems.gperf"
    {"Issuer", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1586 "c/zx-elems.gperf"
    {"Issuer", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 1043 "c/zx-elems.gperf"
    {"Issuer", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 434 "c/zx-elems.gperf"
    {"ContactId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1570 "c/zx-elems.gperf"
    {"AssertionIDReference", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1503 "c/zx-elems.gperf"
    {"SurName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1511 "c/zx-elems.gperf"
    {"SurName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 708 "c/zx-elems.gperf"
    {"AssertionIDRequestService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 981 "c/zx-elems.gperf"
    {"AssertionIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 392 "c/zx-elems.gperf"
    {"ms_action", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1614 "c/zx-elems.gperf"
    {"CanonicalizationAlgorithm", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1258 "c/zx-elems.gperf"
    {"Interval", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1365 "c/zx-elems.gperf"
    {"Interval", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 408 "c/zx-elems.gperf"
    {"AttachmentReference", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 739 "c/zx-elems.gperf"
    {"CancelRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 139 "c/zx-elems.gperf"
    {"CLASS", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1296 "c/zx-elems.gperf"
    {"AccommodationsNeeded", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 39 "c/zx-elems.gperf"
    {"DigSig", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 492 "c/zx-elems.gperf"
    {"LegalId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1585 "c/zx-elems.gperf"
    {"IssueInstant", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 732 "c/zx-elems.gperf"
    {"ServiceDescription", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1356 "c/zx-elems.gperf"
    {"Headcount", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1289 "c/zx-elems.gperf"
    {"stopAngle", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 493 "c/zx-elems.gperf"
    {"LegalIdentifiers", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 38 "c/zx-elems.gperf"
    {"DeactivationCallCenter", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 805 "c/zx-elems.gperf"
    {"ProvisionResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 446 "c/zx-elems.gperf"
    {"DegreeMeasure", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 751 "c/zx-elems.gperf"
    {"MessageExtraData", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1460 "c/zx-elems.gperf"
    {"VisaSponsorship", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 481 "c/zx-elems.gperf"
    {"Insurance", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 445 "c/zx-elems.gperf"
    {"DegreeMajor", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 534 "c/zx-elems.gperf"
    {"PersonName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 447 "c/zx-elems.gperf"
    {"DegreeMinor", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 851 "c/zx-elems.gperf"
    {"ProvisioningServiceEPR", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 816 "c/zx-elems.gperf"
    {"PMDescriptor", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 585 "c/zx-elems.gperf"
    {"ServiceDetail", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 76 "c/zx-elems.gperf"
    {"Parameter", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 680 "c/zx-elems.gperf"
    {"Parameter", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 667 "c/zx-elems.gperf"
    {"Parameter", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 1335 "c/zx-elems.gperf"
    {"EligibleForRehire", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 131 "c/zx-elems.gperf"
    {"ADR", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1225 "c/zx-elems.gperf"
    {"X509IssuerName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1529 "c/zx-elems.gperf"
    {"MM7Version", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 791 "c/zx-elems.gperf"
    {"PMDeactivate", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 810 "c/zx-elems.gperf"
    {"PMDeactivate", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 123 "c/zx-elems.gperf"
    {"QueryResponse", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 969 "c/zx-elems.gperf"
    {"QueryResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 639 "c/zx-elems.gperf"
    {"QueryResponse", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 379 "c/zx-elems.gperf"
    {"QueryResponse", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 268 "c/zx-elems.gperf"
    {"QueryResponse", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 236 "c/zx-elems.gperf"
    {"QueryResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 212 "c/zx-elems.gperf"
    {"QueryResponse", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 473 "c/zx-elems.gperf"
    {"FirstIssuedDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 859 "c/zx-elems.gperf"
    {"AddEntityResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 531 "c/zx-elems.gperf"
    {"PersonId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 793 "c/zx-elems.gperf"
    {"PMDeactivateResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 812 "c/zx-elems.gperf"
    {"PMDeactivateResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1036 "c/zx-elems.gperf"
    {"BinarySecret", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1052 "c/zx-elems.gperf"
    {"Renewing", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 734 "c/zx-elems.gperf"
    {"SingleLogoutService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 858 "c/zx-elems.gperf"
    {"AddEntityRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1497 "c/zx-elems.gperf"
    {"SingleLogoutProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1408 "c/zx-elems.gperf"
    {"PermissionToContact", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 794 "c/zx-elems.gperf"
    {"PMDelete", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 813 "c/zx-elems.gperf"
    {"PMDelete", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 491 "c/zx-elems.gperf"
    {"LegalClassification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 737 "c/zx-elems.gperf"
    {"Bcc", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 796 "c/zx-elems.gperf"
    {"PMDeleteResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 815 "c/zx-elems.gperf"
    {"PMDeleteResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 499 "c/zx-elems.gperf"
    {"Longitude", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 838 "c/zx-elems.gperf"
    {"PMRegisterDescriptor", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1430 "c/zx-elems.gperf"
    {"RetirementOrSavingsPlan", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 259 "c/zx-elems.gperf"
    {"Description", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1629 "c/zx-elems.gperf"
    {"Description", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 451 "c/zx-elems.gperf"
    {"Description", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 840 "c/zx-elems.gperf"
    {"PMRegisterDescriptorResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 287 "c/zx-elems.gperf"
    {"RetrievalMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1487 "c/zx-elems.gperf"
    {"FederationTerminationNotificationProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 359 "c/zx-elems.gperf"
    {"LPostalAddress", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1562 "c/zx-elems.gperf"
    {"Filter", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 319 "c/zx-elems.gperf"
    {"FederationTerminationNotification", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 298 "c/zx-elems.gperf"
    {"X509IssuerSerial", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 466 "c/zx-elems.gperf"
    {"EndDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1316 "c/zx-elems.gperf"
    {"Citizenship", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 444 "c/zx-elems.gperf"
    {"DegreeDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 570 "c/zx-elems.gperf"
    {"RoleId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1501 "c/zx-elems.gperf"
    {"SingleSignOnServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1286 "c/zx-elems.gperf"
    {"semiMinor", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1521 "c/zx-elems.gperf"
    {"DRMContent", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 584 "c/zx-elems.gperf"
    {"SecurityCredentials", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 884 "c/zx-elems.gperf"
    {"ResolveIdentifierResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 567 "c/zx-elems.gperf"
    {"Resume", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1030 "c/zx-elems.gperf"
    {"SecurityTokenReference", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 1542 "c/zx-elems.gperf"
    {"SenderSPI", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 294 "c/zx-elems.gperf"
    {"SignedInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 333 "c/zx-elems.gperf"
    {"Scoping", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 999 "c/zx-elems.gperf"
    {"Scoping", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 883 "c/zx-elems.gperf"
    {"ResolveIdentifierRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 238 "c/zx-elems.gperf"
    {"SecurityContext", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 45 "c/zx-elems.gperf"
    {"IPAddress", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1016 "c/zx-elems.gperf"
    {"SecurityContextToken", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 415 "c/zx-elems.gperf"
    {"BiologicalDescriptors", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 46 "c/zx-elems.gperf"
    {"IPSec", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 908 "c/zx-elems.gperf"
    {"Evidence", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 931 "c/zx-elems.gperf"
    {"Evidence", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 469 "c/zx-elems.gperf"
    {"EvidenceId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1090 "c/zx-elems.gperf"
    {"PolicyIdReference", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1383 "c/zx-elems.gperf"
    {"MiddleName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1208 "c/zx-elems.gperf"
    {"DigestValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 695 "c/zx-elems.gperf"
    {"EntityDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 718 "c/zx-elems.gperf"
    {"EntityDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1322 "c/zx-elems.gperf"
    {"CountryServed", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 613 "c/zx-elems.gperf"
    {"ValidFrom", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 583 "c/zx-elems.gperf"
    {"SecurityCredential", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 566 "c/zx-elems.gperf"
    {"RemunerationPackage", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1419 "c/zx-elems.gperf"
    {"QualificationSummary", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1326 "c/zx-elems.gperf"
    {"CumulativeSummaryIndicator", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1023 "c/zx-elems.gperf"
    {"BinarySecurityToken", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 982 "c/zx-elems.gperf"
    {"AttributeQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1004 "c/zx-elems.gperf"
    {"AttributeQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 788 "c/zx-elems.gperf"
    {"PMActivate", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 807 "c/zx-elems.gperf"
    {"PMActivate", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 849 "c/zx-elems.gperf"
    {"PollResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 961 "c/zx-elems.gperf"
    {"PollResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 61 "c/zx-elems.gperf"
    {"ResumeSession", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1496 "c/zx-elems.gperf"
    {"RegisterNameIdentifierServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 790 "c/zx-elems.gperf"
    {"PMActivateResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 809 "c/zx-elems.gperf"
    {"PMActivateResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1094 "c/zx-elems.gperf"
    {"PolicySetIdReference", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1495 "c/zx-elems.gperf"
    {"RegisterNameIdentifierServiceReturnURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 538 "c/zx-elems.gperf"
    {"PositionHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 479 "c/zx-elems.gperf"
    {"IdValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1321 "c/zx-elems.gperf"
    {"CountryCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 500 "c/zx-elems.gperf"
    {"LowestPossibleValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1428 "c/zx-elems.gperf"
    {"Residency", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 13 "c/zx-elems.gperf"
    {"FaultTo", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1260 "c/zx-elems.gperf"
    {"MNC", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 302 "c/zx-elems.gperf"
    {"Fault", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 361 "c/zx-elems.gperf"
    {"LineString", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1157 "c/zx-elems.gperf"
    {"FAX", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1241 "c/zx-elems.gperf"
    {"ForceAuthn", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 305 "c/zx-elems.gperf"
    {"RelayState", "ecp", zx_ns_tab + zx_xmlns_ix_ecp},
#line 1250 "c/zx-elems.gperf"
    {"RelayState", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1313 "c/zx-elems.gperf"
    {"CategoryCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1020 "c/zx-elems.gperf"
    {"Policy", "wsp", zx_ns_tab + zx_xmlns_ix_wsp},
#line 1087 "c/zx-elems.gperf"
    {"Policy", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1084 "c/zx-elems.gperf"
    {"Function", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1555 "c/zx-elems.gperf"
    {"PMESize", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 142 "c/zx-elems.gperf"
    {"DESC", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1314 "c/zx-elems.gperf"
    {"CategoryDescription", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1381 "c/zx-elems.gperf"
    {"MeasureSystem", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 569 "c/zx-elems.gperf"
    {"ResumeAdditionalItems", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1257 "c/zx-elems.gperf"
    {"Heading", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 64 "c/zx-elems.gperf"
    {"SecurityAudit", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1285 "c/zx-elems.gperf"
    {"semiMajor", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 972 "c/zx-elems.gperf"
    {"RegisterResponseItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 12 "c/zx-elems.gperf"
    {"EndpointReference", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 948 "c/zx-elems.gperf"
    {"SessionSubject", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 1565 "c/zx-elems.gperf"
    {"PStoSPRedirectURL", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1146 "c/zx-elems.gperf"
    {"Endpoint", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1255 "c/zx-elems.gperf"
    {"Endpoint", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1191 "c/zx-elems.gperf"
    {"Endpoint", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 967 "c/zx-elems.gperf"
    {"QueryRegistered", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 968 "c/zx-elems.gperf"
    {"QueryRegisteredResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 231 "c/zx-elems.gperf"
    {"EndpointContext", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1461 "c/zx-elems.gperf"
    {"Volume", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 930 "c/zx-elems.gperf"
    {"DoNotCacheCondition", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 127 "c/zx-elems.gperf"
    {"ResourceID", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 682 "c/zx-elems.gperf"
    {"ResourceID", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 381 "c/zx-elems.gperf"
    {"ResourceID", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 271 "c/zx-elems.gperf"
    {"ResourceID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 487 "c/zx-elems.gperf"
    {"Language", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 489 "c/zx-elems.gperf"
    {"Languages", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1566 "c/zx-elems.gperf"
    {"QueryString", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 488 "c/zx-elems.gperf"
    {"LanguageCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1594 "c/zx-elems.gperf"
    {"ServiceHandle", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 483 "c/zx-elems.gperf"
    {"Inventors", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1627 "c/zx-elems.gperf"
    {"SignatureAlgorithm", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1366 "c/zx-elems.gperf"
    {"InventorName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1189 "c/zx-elems.gperf"
    {"Abstract", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1291 "c/zx-elems.gperf"
    {"Abstract", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1199 "c/zx-elems.gperf"
    {"Abstract", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 107 "c/zx-elems.gperf"
    {"DeleteResponse", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 952 "c/zx-elems.gperf"
    {"DeleteResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 628 "c/zx-elems.gperf"
    {"DeleteResponse", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 350 "c/zx-elems.gperf"
    {"DeleteResponse", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 200 "c/zx-elems.gperf"
    {"DeleteResponse", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 273 "c/zx-elems.gperf"
    {"ServiceInstance", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1259 "c/zx-elems.gperf"
    {"L", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 504 "c/zx-elems.gperf"
    {"MilitaryStatus", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 241 "c/zx-elems.gperf"
    {"SvcMDAssociationAdd", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 243 "c/zx-elems.gperf"
    {"SvcMDAssociationDelete", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1123 "c/zx-elems.gperf"
    {"XACMLPolicyStatement", "xasa", zx_ns_tab + zx_xmlns_ix_xasa},
#line 242 "c/zx-elems.gperf"
    {"SvcMDAssociationAddResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 246 "c/zx-elems.gperf"
    {"SvcMDAssociationQueryResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 244 "c/zx-elems.gperf"
    {"SvcMDAssociationDeleteResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 467 "c/zx-elems.gperf"
    {"EndingCompensation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 949 "c/zx-elems.gperf"
    {"ValidityRestrictionCondition", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 599 "c/zx-elems.gperf"
    {"SupplierId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 247 "c/zx-elems.gperf"
    {"SvcMDDelete", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 722 "c/zx-elems.gperf"
    {"ManageNameIDService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 992 "c/zx-elems.gperf"
    {"ManageNameIDResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 616 "c/zx-elems.gperf"
    {"VerticalAccuracy", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 248 "c/zx-elems.gperf"
    {"SvcMDDeleteResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1621 "c/zx-elems.gperf"
    {"Forwardable", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1551 "c/zx-elems.gperf"
    {"EngineData", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 991 "c/zx-elems.gperf"
    {"ManageNameIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 956 "c/zx-elems.gperf"
    {"InvocationContext", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 62 "c/zx-elems.gperf"
    {"SSL", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 230 "c/zx-elems.gperf"
    {"StoreObjectResponse", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 771 "c/zx-elems.gperf"
    {"ShortCode", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 229 "c/zx-elems.gperf"
    {"StoreObjectRequest", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 589 "c/zx-elems.gperf"
    {"SpatialLocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 448 "c/zx-elems.gperf"
    {"DegreeName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 324 "c/zx-elems.gperf"
    {"LogoutRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 989 "c/zx-elems.gperf"
    {"LogoutRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 426 "c/zx-elems.gperf"
    {"Compensation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 362 "c/zx-elems.gperf"
    {"LinearRing", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 758 "c/zx-elems.gperf"
    {"RFC2822Address", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 351 "c/zx-elems.gperf"
    {"EllipticalArea", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1303 "c/zx-elems.gperf"
    {"AnyDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 341 "c/zx-elems.gperf"
    {"ComparisonResult", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 65 "c/zx-elems.gperf"
    {"SharedSecretChallengeResponse", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1338 "c/zx-elems.gperf"
    {"EntityName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 829 "c/zx-elems.gperf"
    {"PMERegister", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 376 "c/zx-elems.gperf"
    {"Polygon", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 213 "c/zx-elems.gperf"
    {"ResultQuery", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 640 "c/zx-elems.gperf"
    {"ResultQuery", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 1568 "c/zx-elems.gperf"
    {"SPtoPSRedirectURL", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 830 "c/zx-elems.gperf"
    {"PMERegisterResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1485 "c/zx-elems.gperf"
    {"EmailAddress", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1508 "c/zx-elems.gperf"
    {"EmailAddress", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 66 "c/zx-elems.gperf"
    {"SharedSecretDynamicPlaintext", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 133 "c/zx-elems.gperf"
    {"BDAY", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 41 "c/zx-elems.gperf"
    {"Generation", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1607 "c/zx-elems.gperf"
    {"Generation", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 1104 "c/zx-elems.gperf"
    {"Subjects", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1228 "c/zx-elems.gperf"
    {"X509SubjectName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 573 "c/zx-elems.gperf"
    {"School", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 334 "c/zx-elems.gperf"
    {"Subject", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1545 "c/zx-elems.gperf"
    {"Subject", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1121 "c/zx-elems.gperf"
    {"Subject", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1101 "c/zx-elems.gperf"
    {"Subject", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 933 "c/zx-elems.gperf"
    {"Subject", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 913 "c/zx-elems.gperf"
    {"Subject", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 115 "c/zx-elems.gperf"
    {"NewData", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 633 "c/zx-elems.gperf"
    {"NewData", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 369 "c/zx-elems.gperf"
    {"NewData", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 206 "c/zx-elems.gperf"
    {"NewData", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1351 "c/zx-elems.gperf"
    {"GenderCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1223 "c/zx-elems.gperf"
    {"X509CRL", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 163 "c/zx-elems.gperf"
    {"N", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1185 "c/zx-elems.gperf"
    {"Name", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 1389 "c/zx-elems.gperf"
    {"Name", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1243 "c/zx-elems.gperf"
    {"IsPassive", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 864 "c/zx-elems.gperf"
    {"CreatePSObject", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 335 "c/zx-elems.gperf"
    {"AreaComparison", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 505 "c/zx-elems.gperf"
    {"Mobile", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1352 "c/zx-elems.gperf"
    {"General", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 251 "c/zx-elems.gperf"
    {"SvcMDRegister", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1311 "c/zx-elems.gperf"
    {"BuildingNumber", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 421 "c/zx-elems.gperf"
    {"ChildrenInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 252 "c/zx-elems.gperf"
    {"SvcMDRegisterResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 507 "c/zx-elems.gperf"
    {"NonXMLResume", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 649 "c/zx-elems.gperf"
    {"GetAssertionResponse", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 1143 "c/zx-elems.gperf"
    {"SecurityMechID", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 1263 "c/zx-elems.gperf"
    {"SecurityMechID", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1204 "c/zx-elems.gperf"
    {"SecurityMechID", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1194 "c/zx-elems.gperf"
    {"SecurityMechID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1147 "c/zx-elems.gperf"
    {"SecurityMechID", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1278 "c/zx-elems.gperf"
    {"hor_acc", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 936 "c/zx-elems.gperf"
    {"SubjectStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1371 "c/zx-elems.gperf"
    {"JobPlan", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 648 "c/zx-elems.gperf"
    {"GetAssertion", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 178 "c/zx-elems.gperf"
    {"REV", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 15 "c/zx-elems.gperf"
    {"MessageID", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1534 "c/zx-elems.gperf"
    {"MessageID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 25 "c/zx-elems.gperf"
    {"To", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 776 "c/zx-elems.gperf"
    {"To", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1088 "c/zx-elems.gperf"
    {"PolicyCombinerParameters", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 600 "c/zx-elems.gperf"
    {"SupportingMaterials", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1193 "c/zx-elems.gperf"
    {"ProviderID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1588 "c/zx-elems.gperf"
    {"ProviderID", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 1474 "c/zx-elems.gperf"
    {"ProviderID", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 1247 "c/zx-elems.gperf"
    {"ProviderID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1203 "c/zx-elems.gperf"
    {"ProviderID", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 292 "c/zx-elems.gperf"
    {"SignatureProperty", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 81 "c/zx-elems.gperf"
    {"ApplicationEPR", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 1317 "c/zx-elems.gperf"
    {"Comments", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1447 "c/zx-elems.gperf"
    {"SupportingInformation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 915 "c/zx-elems.gperf"
    {"SubjectConfirmationData", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1575 "c/zx-elems.gperf"
    {"SubjectConfirmationData", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 296 "c/zx-elems.gperf"
    {"Transforms", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1139 "c/zx-elems.gperf"
    {"Transforms", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 914 "c/zx-elems.gperf"
    {"SubjectConfirmation", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 934 "c/zx-elems.gperf"
    {"SubjectConfirmation", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 551 "c/zx-elems.gperf"
    {"PublicationDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1363 "c/zx-elems.gperf"
    {"InternetEmailAddress", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 187 "c/zx-elems.gperf"
    {"TZ", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1181 "c/zx-elems.gperf"
    {"Comment", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 553 "c/zx-elems.gperf"
    {"PublicationLanguage", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1354 "c/zx-elems.gperf"
    {"GoodStudentIndicator", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1348 "c/zx-elems.gperf"
    {"EyeColor", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 953 "c/zx-elems.gperf"
    {"GetStatus", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 878 "c/zx-elems.gperf"
    {"RemoveCollectionResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1102 "c/zx-elems.gperf"
    {"SubjectAttributeDesignator", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1031 "c/zx-elems.gperf"
    {"TransformationParameters", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 314 "c/zx-elems.gperf"
    {"AuthnResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 877 "c/zx-elems.gperf"
    {"RemoveCollectionRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 315 "c/zx-elems.gperf"
    {"AuthnResponseEnvelope", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 454 "c/zx-elems.gperf"
    {"DistanceMax", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 716 "c/zx-elems.gperf"
    {"EncryptionMethod", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1486 "c/zx-elems.gperf"
    {"EncryptionMethod", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1132 "c/zx-elems.gperf"
    {"EncryptionMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 36 "c/zx-elems.gperf"
    {"Authenticator", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1034 "c/zx-elems.gperf"
    {"Authenticator", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 817 "c/zx-elems.gperf"
    {"PMEDelete", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1133 "c/zx-elems.gperf"
    {"EncryptionProperties", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 437 "c/zx-elems.gperf"
    {"ContactName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1613 "c/zx-elems.gperf"
    {"AuthenticationType", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 35 "c/zx-elems.gperf"
    {"AuthenticationMethod", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 255 "c/zx-elems.gperf"
    {"AuthenticateRequester", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1450 "c/zx-elems.gperf"
    {"Title", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1040 "c/zx-elems.gperf"
    {"Encryption", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 311 "c/zx-elems.gperf"
    {"AuthnContext", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 900 "c/zx-elems.gperf"
    {"AuthnContext", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 901 "c/zx-elems.gperf"
    {"AuthnStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 310 "c/zx-elems.gperf"
    {"AuthenticationStatement", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 926 "c/zx-elems.gperf"
    {"AuthenticationStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 256 "c/zx-elems.gperf"
    {"AuthenticateSessionContext", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 34 "c/zx-elems.gperf"
    {"AuthenticationContextStatement", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1239 "c/zx-elems.gperf"
    {"AuthnContextComparison", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 644 "c/zx-elems.gperf"
    {"AuthnContextRestriction", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 643 "c/zx-elems.gperf"
    {"AssertionItem", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 316 "c/zx-elems.gperf"
    {"EncryptableNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1312 "c/zx-elems.gperf"
    {"Campaign", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 79 "c/zx-elems.gperf"
    {"SASLResponse", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 885 "c/zx-elems.gperf"
    {"ResolveInput", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 111 "c/zx-elems.gperf"
    {"ItemSelection", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 357 "c/zx-elems.gperf"
    {"ItemSelection", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1456 "c/zx-elems.gperf"
    {"Use", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1581 "c/zx-elems.gperf"
    {"AuthnContextDecl", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1443 "c/zx-elems.gperf"
    {"StartRank", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 533 "c/zx-elems.gperf"
    {"PersonMember", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1631 "c/zx-elems.gperf"
    {"XPathVersion", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 37 "c/zx-elems.gperf"
    {"AuthenticatorTransportProtocol", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 423 "c/zx-elems.gperf"
    {"Commute", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 906 "c/zx-elems.gperf"
    {"EncryptedAttribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 821 "c/zx-elems.gperf"
    {"PMEDownload", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1499 "c/zx-elems.gperf"
    {"SingleLogoutServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1468 "c/zx-elems.gperf"
    {"YearMonth", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1498 "c/zx-elems.gperf"
    {"SingleLogoutServiceReturnURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 822 "c/zx-elems.gperf"
    {"PMEDownloadResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 240 "c/zx-elems.gperf"
    {"SvcMD", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1553 "c/zx-elems.gperf"
    {"PMECreatorID", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 785 "c/zx-elems.gperf"
    {"extendedReplaceRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1538 "c/zx-elems.gperf"
    {"RecipientSPI", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 905 "c/zx-elems.gperf"
    {"EncryptedAssertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1374 "c/zx-elems.gperf"
    {"LegalName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 455 "c/zx-elems.gperf"
    {"DistributeTo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 783 "c/zx-elems.gperf"
    {"extendedCancelRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1489 "c/zx-elems.gperf"
    {"FederationTerminationServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1226 "c/zx-elems.gperf"
    {"X509SKI", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1488 "c/zx-elems.gperf"
    {"FederationTerminationServiceReturnURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 301 "c/zx-elems.gperf"
    {"Envelope", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 1525 "c/zx-elems.gperf"
    {"DistributionIndicator", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1333 "c/zx-elems.gperf"
    {"DistributionGuidelines", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 863 "c/zx-elems.gperf"
    {"AddToCollectionResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 757 "c/zx-elems.gperf"
    {"QueryStatusRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 755 "c/zx-elems.gperf"
    {"Previouslysentdateandtime", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1454 "c/zx-elems.gperf"
    {"Unit", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 59 "c/zx-elems.gperf"
    {"PrincipalAuthenticationMechanism", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 657 "c/zx-elems.gperf"
    {"IdentityMappingResponse", "im", zx_ns_tab + zx_xmlns_ix_im},
#line 862 "c/zx-elems.gperf"
    {"AddToCollectionRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 655 "c/zx-elems.gperf"
    {"SubjectRestriction", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 1462 "c/zx-elems.gperf"
    {"WebSite", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 750 "c/zx-elems.gperf"
    {"IdentityAddressingToken", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 422 "c/zx-elems.gperf"
    {"ClassRank", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1390 "c/zx-elems.gperf"
    {"Nationality", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 656 "c/zx-elems.gperf"
    {"IdentityMappingRequest", "im", zx_ns_tab + zx_xmlns_ix_im},
#line 23 "c/zx-elems.gperf"
    {"ReplyTo", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 712 "c/zx-elems.gperf"
    {"AuthnAuthorityDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 498 "c/zx-elems.gperf"
    {"LocationSummary", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1122 "c/zx-elems.gperf"
    {"XACMLAuthzDecisionStatement", "xasa", zx_ns_tab + zx_xmlns_ix_xasa},
#line 1214 "c/zx-elems.gperf"
    {"MgmtData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1097 "c/zx-elems.gperf"
    {"ResourceMatch", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 792 "c/zx-elems.gperf"
    {"PMDeactivateItem", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 811 "c/zx-elems.gperf"
    {"PMDeactivateItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 122 "c/zx-elems.gperf"
    {"QueryItem", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 638 "c/zx-elems.gperf"
    {"QueryItem", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 378 "c/zx-elems.gperf"
    {"QueryItem", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 211 "c/zx-elems.gperf"
    {"QueryItem", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1515 "c/zx-elems.gperf"
    {"CancelID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1544 "c/zx-elems.gperf"
    {"StatusText", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 974 "c/zx-elems.gperf"
    {"SetStatusItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1615 "c/zx-elems.gperf"
    {"Challenge", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 75 "c/zx-elems.gperf"
    {"Extensions", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 986 "c/zx-elems.gperf"
    {"Extensions", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 719 "c/zx-elems.gperf"
    {"Extensions", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 337 "c/zx-elems.gperf"
    {"ChangeArea", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 140 "c/zx-elems.gperf"
    {"CRED", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 409 "c/zx-elems.gperf"
    {"AvailabilityDates", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1433 "c/zx-elems.gperf"
    {"RoleName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 410 "c/zx-elems.gperf"
    {"AvailabilityInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 40 "c/zx-elems.gperf"
    {"Extension", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 749 "c/zx-elems.gperf"
    {"Extension", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 696 "c/zx-elems.gperf"
    {"Extension", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 687 "c/zx-elems.gperf"
    {"Extension", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 672 "c/zx-elems.gperf"
    {"Extension", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 353 "c/zx-elems.gperf"
    {"Extension", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 318 "c/zx-elems.gperf"
    {"Extension", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 262 "c/zx-elems.gperf"
    {"Extension", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 109 "c/zx-elems.gperf"
    {"Extension", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 611 "c/zx-elems.gperf"
    {"UserArea", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 839 "c/zx-elems.gperf"
    {"PMRegisterDescriptorItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1105 "c/zx-elems.gperf"
    {"Target", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 795 "c/zx-elems.gperf"
    {"PMDeleteItem", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 814 "c/zx-elems.gperf"
    {"PMDeleteItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 74 "c/zx-elems.gperf"
    {"ZeroKnowledge", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 84 "c/zx-elems.gperf"
    {"EndpointUpdate", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 841 "c/zx-elems.gperf"
    {"PMRegisterDescriptorResponseItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1180 "c/zx-elems.gperf"
    {"filter", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 779 "c/zx-elems.gperf"
    {"UserAgent", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 63 "c/zx-elems.gperf"
    {"SecretKeyProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1560 "c/zx-elems.gperf"
    {"PMInitData", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 480 "c/zx-elems.gperf"
    {"IndustryCode", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 940 "c/zx-elems.gperf"
    {"TransitedProvider", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 1502 "c/zx-elems.gperf"
    {"SoapEndpoint", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 325 "c/zx-elems.gperf"
    {"LogoutResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 990 "c/zx-elems.gperf"
    {"LogoutResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 449 "c/zx-elems.gperf"
    {"DeliveryAddress", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1362 "c/zx-elems.gperf"
    {"IndustryDescription", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 954 "c/zx-elems.gperf"
    {"GetStatusResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 431 "c/zx-elems.gperf"
    {"ConferenceDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 432 "c/zx-elems.gperf"
    {"ConferencePaper", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 253 "c/zx-elems.gperf"
    {"SvcMDReplace", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1524 "c/zx-elems.gperf"
    {"DeliveryReport", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 254 "c/zx-elems.gperf"
    {"SvcMDReplaceResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 745 "c/zx-elems.gperf"
    {"DeliveryCondition", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 141 "c/zx-elems.gperf"
    {"CTRY", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1319 "c/zx-elems.gperf"
    {"ConferenceLocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1341 "c/zx-elems.gperf"
    {"EventName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 818 "c/zx-elems.gperf"
    {"PMEDeleteResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1071 "c/zx-elems.gperf"
    {"ActionMatch", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 22 "c/zx-elems.gperf"
    {"RelatesTo", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1397 "c/zx-elems.gperf"
    {"OrgSize", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1136 "c/zx-elems.gperf"
    {"OriginatorKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1190 "c/zx-elems.gperf"
    {"CredentialRef", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1519 "c/zx-elems.gperf"
    {"CredentialRef", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1405 "c/zx-elems.gperf"
    {"PatentTitle", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1438 "c/zx-elems.gperf"
    {"SearchTarget", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 121 "c/zx-elems.gperf"
    {"Query", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1597 "c/zx-elems.gperf"
    {"Query", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 966 "c/zx-elems.gperf"
    {"Query", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 637 "c/zx-elems.gperf"
    {"Query", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 377 "c/zx-elems.gperf"
    {"Query", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 267 "c/zx-elems.gperf"
    {"Query", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 235 "c/zx-elems.gperf"
    {"Query", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 210 "c/zx-elems.gperf"
    {"Query", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1083 "c/zx-elems.gperf"
    {"Environments", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 468 "c/zx-elems.gperf"
    {"EnvironmentId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1476 "c/zx-elems.gperf"
    {"Label", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 1608 "c/zx-elems.gperf"
    {"Label", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 1479 "c/zx-elems.gperf"
    {"Label", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 1339 "c/zx-elems.gperf"
    {"EnvironmentName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 557 "c/zx-elems.gperf"
    {"RankedSearchResults", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 397 "c/zx-elems.gperf"
    {"shape", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1429 "c/zx-elems.gperf"
    {"ResumeId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1080 "c/zx-elems.gperf"
    {"Environment", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1111 "c/zx-elems.gperf"
    {"Environment", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1081 "c/zx-elems.gperf"
    {"EnvironmentAttributeDesignator", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 979 "c/zx-elems.gperf"
    {"ArtifactResolve", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 980 "c/zx-elems.gperf"
    {"ArtifactResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 728 "c/zx-elems.gperf"
    {"PDPDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 789 "c/zx-elems.gperf"
    {"PMActivateItem", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 808 "c/zx-elems.gperf"
    {"PMActivateItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1224 "c/zx-elems.gperf"
    {"X509Certificate", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1548 "c/zx-elems.gperf"
    {"VASPID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1600 "c/zx-elems.gperf"
    {"Artifact", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1435 "c/zx-elems.gperf"
    {"SearchRelevanceRank", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 706 "c/zx-elems.gperf"
    {"ArtifactResolutionService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 761 "c/zx-elems.gperf"
    {"ReadReplyRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 661 "c/zx-elems.gperf"
    {"Help", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 673 "c/zx-elems.gperf"
    {"Help", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 517 "c/zx-elems.gperf"
    {"OriginalDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 886 "c/zx-elems.gperf"
    {"ResolveOutput", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1373 "c/zx-elems.gperf"
    {"JournalOrSerialName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 129 "c/zx-elems.gperf"
    {"Subscription", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 889 "c/zx-elems.gperf"
    {"Subscription", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 641 "c/zx-elems.gperf"
    {"Subscription", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 383 "c/zx-elems.gperf"
    {"Subscription", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 215 "c/zx-elems.gperf"
    {"Subscription", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 861 "c/zx-elems.gperf"
    {"AddKnownEntityResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1165 "c/zx-elems.gperf"
    {"PARCEL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 528 "c/zx-elems.gperf"
    {"PatentHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1233 "c/zx-elems.gperf"
    {"faultcode", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 1037 "c/zx-elems.gperf"
    {"CancelTarget", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 860 "c/zx-elems.gperf"
    {"AddKnownEntityRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1150 "c/zx-elems.gperf"
    {"BBS", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 731 "c/zx-elems.gperf"
    {"SPSSODescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 486 "c/zx-elems.gperf"
    {"JobLevelInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1532 "c/zx-elems.gperf"
    {"MMStatusExtension", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 833 "c/zx-elems.gperf"
    {"PMGetDescriptor", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 299 "c/zx-elems.gperf"
    {"TestResult", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 689 "c/zx-elems.gperf"
    {"TestResult", "lu", zx_ns_tab + zx_xmlns_ix_lu},
#line 834 "c/zx-elems.gperf"
    {"PMGetDescriptorResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1251 "c/zx-elems.gperf"
    {"SessionIndex", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1604 "c/zx-elems.gperf"
    {"SessionIndex", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 358 "c/zx-elems.gperf"
    {"LL", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1077 "c/zx-elems.gperf"
    {"CombinerParameter", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1078 "c/zx-elems.gperf"
    {"CombinerParameters", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 714 "c/zx-elems.gperf"
    {"AuthzService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 92 "c/zx-elems.gperf"
    {"UsageDirective", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 98 "c/zx-elems.gperf"
    {"UsageDirective", "b12", zx_ns_tab + zx_xmlns_ix_b12},
#line 1388 "c/zx-elems.gperf"
    {"Municipality", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1029 "c/zx-elems.gperf"
    {"Security", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 568 "c/zx-elems.gperf"
    {"ResumeAdditionalItem", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1232 "c/zx-elems.gperf"
    {"faultactor", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 1315 "c/zx-elems.gperf"
    {"Chapter", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 43 "c/zx-elems.gperf"
    {"GoverningAgreements", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 720 "c/zx-elems.gperf"
    {"IDPSSODescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 828 "c/zx-elems.gperf"
    {"PMEInfo", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1336 "c/zx-elems.gperf"
    {"EmployerOrgName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 450 "c/zx-elems.gperf"
    {"DemographicDescriptors", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 110 "c/zx-elems.gperf"
    {"ItemData", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 868 "c/zx-elems.gperf"
    {"ItemData", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 629 "c/zx-elems.gperf"
    {"ItemData", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 356 "c/zx-elems.gperf"
    {"ItemData", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 201 "c/zx-elems.gperf"
    {"ItemData", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1537 "c/zx-elems.gperf"
    {"ReadReply", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 733 "c/zx-elems.gperf"
    {"ServiceName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 586 "c/zx-elems.gperf"
    {"ServiceNumber", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 550 "c/zx-elems.gperf"
    {"ProgramId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 463 "c/zx-elems.gperf"
    {"EmployerContactInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 548 "c/zx-elems.gperf"
    {"ProfessionalAssociations", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1130 "c/zx-elems.gperf"
    {"EncryptedData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1359 "c/zx-elems.gperf"
    {"ISCEDInstitutionClassification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 890 "c/zx-elems.gperf"
    {"Tag", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 928 "c/zx-elems.gperf"
    {"AuthorizationDecisionStatement", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 902 "c/zx-elems.gperf"
    {"AuthzDecisionStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 738 "c/zx-elems.gperf"
    {"CancelReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 384 "c/zx-elems.gperf"
    {"Trigger", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1473 "c/zx-elems.gperf"
    {"Trigger", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 1178 "c/zx-elems.gperf"
    {"Trigger", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1149 "c/zx-elems.gperf"
    {"Trigger", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1536 "c/zx-elems.gperf"
    {"Priority", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1427 "c/zx-elems.gperf"
    {"Requested", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 474 "c/zx-elems.gperf"
    {"FormattedPublicationDescription", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 286 "c/zx-elems.gperf"
    {"Reference", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1028 "c/zx-elems.gperf"
    {"Reference", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 559 "c/zx-elems.gperf"
    {"Reference", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 560 "c/zx-elems.gperf"
    {"References", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 275 "c/zx-elems.gperf"
    {"Request", "dp", zx_ns_tab + zx_xmlns_ix_dp},
#line 1113 "c/zx-elems.gperf"
    {"Request", "xac", zx_ns_tab + zx_xmlns_ix_xac},
#line 1007 "c/zx-elems.gperf"
    {"Request", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 786 "c/zx-elems.gperf"
    {"Request", "paos", zx_ns_tab + zx_xmlns_ix_paos},
#line 306 "c/zx-elems.gperf"
    {"Request", "ecp", zx_ns_tab + zx_xmlns_ix_ecp},
#line 753 "c/zx-elems.gperf"
    {"PreferredChannels", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 508 "c/zx-elems.gperf"
    {"NumericValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1151 "c/zx-elems.gperf"
    {"CARDID", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 777 "c/zx-elems.gperf"
    {"TransactionID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1463 "c/zx-elems.gperf"
    {"WhenAvailable", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 609 "c/zx-elems.gperf"
    {"Travel", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 237 "c/zx-elems.gperf"
    {"RequestedService", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 270 "c/zx-elems.gperf"
    {"RequestedServiceType", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1539 "c/zx-elems.gperf"
    {"ReplaceID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 30 "c/zx-elems.gperf"
    {"Alphabet", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1331 "c/zx-elems.gperf"
    {"DischargeStatus", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1059 "c/zx-elems.gperf"
    {"RequestedSecurityToken", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1451 "c/zx-elems.gperf"
    {"TravelConsiderations", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 797 "c/zx-elems.gperf"
    {"PMGetStatus", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 835 "c/zx-elems.gperf"
    {"PMGetStatus", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 320 "c/zx-elems.gperf"
    {"IDPEntries", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1242 "c/zx-elems.gperf"
    {"GetComplete", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1601 "c/zx-elems.gperf"
    {"GetComplete", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 152 "c/zx-elems.gperf"
    {"KEY", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 798 "c/zx-elems.gperf"
    {"PMGetStatusResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 836 "c/zx-elems.gperf"
    {"PMGetStatusResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1547 "c/zx-elems.gperf"
    {"VASID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 282 "c/zx-elems.gperf"
    {"Manifest", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 651 "c/zx-elems.gperf"
    {"GetProviderInfo", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 652 "c/zx-elems.gperf"
    {"GetProviderInfoResponse", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 880 "c/zx-elems.gperf"
    {"RemoveEntityResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1055 "c/zx-elems.gperf"
    {"RequestSecurityTokenResponse", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1206 "c/zx-elems.gperf"
    {"SvcMDID", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 477 "c/zx-elems.gperf"
    {"HorizontalAccuracy", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 879 "c/zx-elems.gperf"
    {"RemoveEntityRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1053 "c/zx-elems.gperf"
    {"RequestSecurityToken", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 729 "c/zx-elems.gperf"
    {"RequestedAttribute", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1054 "c/zx-elems.gperf"
    {"RequestSecurityTokenCollection", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 322 "c/zx-elems.gperf"
    {"IDPList", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 988 "c/zx-elems.gperf"
    {"IDPList", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1057 "c/zx-elems.gperf"
    {"RequestedAttachedReference", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 112 "c/zx-elems.gperf"
    {"Modification", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 363 "c/zx-elems.gperf"
    {"Modification", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1056 "c/zx-elems.gperf"
    {"RequestSecurityTokenResponseCollection", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1272 "c/zx-elems.gperf"
    {"angularUnit", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 780 "c/zx-elems.gperf"
    {"VASPErrorRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1423 "c/zx-elems.gperf"
    {"ReasonForLeaving", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 997 "c/zx-elems.gperf"
    {"RequestedAuthnContext", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 903 "c/zx-elems.gperf"
    {"BaseID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 615 "c/zx-elems.gperf"
    {"Verification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 618 "c/zx-elems.gperf"
    {"Weight", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 331 "c/zx-elems.gperf"
    {"RequestAuthnContext", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 323 "c/zx-elems.gperf"
    {"IDPProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 484 "c/zx-elems.gperf"
    {"IssuingAuthority", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 561 "c/zx-elems.gperf"
    {"RelatedOrganization", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 562 "c/zx-elems.gperf"
    {"RelatedOrganizationalUnit", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1434 "c/zx-elems.gperf"
    {"SchoolName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 234 "c/zx-elems.gperf"
    {"Options", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 266 "c/zx-elems.gperf"
    {"Options", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 653 "c/zx-elems.gperf"
    {"MEDInfo", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 605 "c/zx-elems.gperf"
    {"Telephone", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 837 "c/zx-elems.gperf"
    {"PMID", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1309 "c/zx-elems.gperf"
    {"BasePayAmountMin", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 503 "c/zx-elems.gperf"
    {"MilitaryHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1125 "c/zx-elems.gperf"
    {"XACMLPolicyQuery", "xasp", zx_ns_tab + zx_xmlns_ix_xasp},
#line 1192 "c/zx-elems.gperf"
    {"Option", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1396 "c/zx-elems.gperf"
    {"Option", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1202 "c/zx-elems.gperf"
    {"Option", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1234 "c/zx-elems.gperf"
    {"faultstring", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 1337 "c/zx-elems.gperf"
    {"EndTime", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 619 "c/zx-elems.gperf"
    {"WorkSite", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 621 "c/zx-elems.gperf"
    {"WorkSiteId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 245 "c/zx-elems.gperf"
    {"SvcMDAssociationQuery", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 574 "c/zx-elems.gperf"
    {"SchoolId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1439 "c/zx-elems.gperf"
    {"SearchTimeStamp", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 55 "c/zx-elems.gperf"
    {"OperationalProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1464 "c/zx-elems.gperf"
    {"WorkSiteName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 441 "c/zx-elems.gperf"
    {"DatesOfService", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 545 "c/zx-elems.gperf"
    {"PreferredPosition", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 464 "c/zx-elems.gperf"
    {"EmployerOrg", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 257 "c/zx-elems.gperf"
    {"AuthorizeRequester", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1128 "c/zx-elems.gperf"
    {"CipherReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 765 "c/zx-elems.gperf"
    {"ReplaceRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1530 "c/zx-elems.gperf"
    {"MMSRelayServerID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 556 "c/zx-elems.gperf"
    {"RankedResult", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 620 "c/zx-elems.gperf"
    {"WorkSiteEnvironment", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 912 "c/zx-elems.gperf"
    {"ProxyRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 400 "c/zx-elems.gperf"
    {"Achievements", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 308 "c/zx-elems.gperf"
    {"InclusiveNamespaces", "exca", zx_ns_tab + zx_xmlns_ix_exca},
#line 51 "c/zx-elems.gperf"
    {"Length", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1609 "c/zx-elems.gperf"
    {"Length", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 260 "c/zx-elems.gperf"
    {"EncryptResourceID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 108 "c/zx-elems.gperf"
    {"EncryptedResourceID", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 671 "c/zx-elems.gperf"
    {"EncryptedResourceID", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 352 "c/zx-elems.gperf"
    {"EncryptedResourceID", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 261 "c/zx-elems.gperf"
    {"EncryptedResourceID", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 944 "c/zx-elems.gperf"
    {"ProxyTransitedStatement", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 976 "c/zx-elems.gperf"
    {"Update", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 513 "c/zx-elems.gperf"
    {"OrganizationId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 701 "c/zx-elems.gperf"
    {"OrganizationName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1398 "c/zx-elems.gperf"
    {"OrganizationName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 726 "c/zx-elems.gperf"
    {"OrganizationName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 399 "c/zx-elems.gperf"
    {"Achievement", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 516 "c/zx-elems.gperf"
    {"OrganizationalUnitId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1399 "c/zx-elems.gperf"
    {"OrganizationalUnitName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 700 "c/zx-elems.gperf"
    {"OrganizationDisplayName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 725 "c/zx-elems.gperf"
    {"OrganizationDisplayName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 650 "c/zx-elems.gperf"
    {"GetAssertionResponseItem", "idp", zx_ns_tab + zx_xmlns_ix_idp},
#line 1483 "c/zx-elems.gperf"
    {"AuthnServiceURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 21 "c/zx-elems.gperf"
    {"ReferenceParameters", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 514 "c/zx-elems.gperf"
    {"OrganizationUnit", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 512 "c/zx-elems.gperf"
    {"Organization", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 724 "c/zx-elems.gperf"
    {"Organization", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 699 "c/zx-elems.gperf"
    {"Organization", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 515 "c/zx-elems.gperf"
    {"OrganizationalUnit", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 759 "c/zx-elems.gperf"
    {"RSErrorRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 429 "c/zx-elems.gperf"
    {"CompetencyId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 666 "c/zx-elems.gperf"
    {"Item", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 1369 "c/zx-elems.gperf"
    {"Item", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 679 "c/zx-elems.gperf"
    {"Item", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 428 "c/zx-elems.gperf"
    {"CompetencyEvidence", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1058 "c/zx-elems.gperf"
    {"RequestedProofToken", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 17 "c/zx-elems.gperf"
    {"ProblemAction", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 250 "c/zx-elems.gperf"
    {"SvcMDQueryResponse", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 430 "c/zx-elems.gperf"
    {"CompetencyWeight", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 440 "c/zx-elems.gperf"
    {"DatesOfAttendance", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 284 "c/zx-elems.gperf"
    {"PGPData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1067 "c/zx-elems.gperf"
    {"Expires", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 1517 "c/zx-elems.gperf"
    {"ChargedPartyID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 744 "c/zx-elems.gperf"
    {"DeliverRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1318 "c/zx-elems.gperf"
    {"CompanyScale", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 80 "c/zx-elems.gperf"
    {"Transform", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 295 "c/zx-elems.gperf"
    {"Transform", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 932 "c/zx-elems.gperf"
    {"NameIdentifier", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 1606 "c/zx-elems.gperf"
    {"Terminate", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 279 "c/zx-elems.gperf"
    {"DigestMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 91 "c/zx-elems.gperf"
    {"Timeout", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 327 "c/zx-elems.gperf"
    {"NameIdentifierMappingResponse", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 263 "c/zx-elems.gperf"
    {"InsertEntry", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 317 "c/zx-elems.gperf"
    {"EncryptedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1493 "c/zx-elems.gperf"
    {"NameIdentifierMappingProtocolProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1630 "c/zx-elems.gperf"
    {"Expression", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1492 "c/zx-elems.gperf"
    {"NameIdentifierMappingEncryptionProfile", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 470 "c/zx-elems.gperf"
    {"ExpatriateBenefits", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 285 "c/zx-elems.gperf"
    {"RSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 326 "c/zx-elems.gperf"
    {"NameIdentifierMappingRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 475 "c/zx-elems.gperf"
    {"Height", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1347 "c/zx-elems.gperf"
    {"ExpatriateBenefitsOffered", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 876 "c/zx-elems.gperf"
    {"QueryObjectsResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1360 "c/zx-elems.gperf"
    {"ISSN", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1209 "c/zx-elems.gperf"
    {"Exponent", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1003 "c/zx-elems.gperf"
    {"SubjectQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1012 "c/zx-elems.gperf"
    {"SubjectQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 1346 "c/zx-elems.gperf"
    {"ExpatriateBenefitList", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1620 "c/zx-elems.gperf"
    {"EncryptionAlgorithm", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 875 "c/zx-elems.gperf"
    {"QueryObjectsRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 233 "c/zx-elems.gperf"
    {"Keys", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1310 "c/zx-elems.gperf"
    {"BirthPlace", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 328 "c/zx-elems.gperf"
    {"OldProvidedNameIdentifier", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1137 "c/zx-elems.gperf"
    {"RecipientKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 101 "c/zx-elems.gperf"
    {"CreateItem", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 623 "c/zx-elems.gperf"
    {"CreateItem", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 344 "c/zx-elems.gperf"
    {"CreateItem", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 195 "c/zx-elems.gperf"
    {"CreateItem", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1372 "c/zx-elems.gperf"
    {"JobStep", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1249 "c/zx-elems.gperf"
    {"ProxyCount", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 272 "c/zx-elems.gperf"
    {"ResourceOffering", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1100 "c/zx-elems.gperf"
    {"RuleCombinerParameters", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1282 "c/zx-elems.gperf"
    {"max_loc_age", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 747 "c/zx-elems.gperf"
    {"DeliveryReportRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 485 "c/zx-elems.gperf"
    {"JobCategory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1491 "c/zx-elems.gperf"
    {"KeySize", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1637 "c/zx-elems.gperf"
    {"KeySize", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1622 "c/zx-elems.gperf"
    {"KeySize", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 494 "c/zx-elems.gperf"
    {"LicenseOrCertification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 70 "c/zx-elems.gperf"
    {"TimeSyncToken", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1304 "c/zx-elems.gperf"
    {"Applicable", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1041 "c/zx-elems.gperf"
    {"Entropy", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 50 "c/zx-elems.gperf"
    {"KeyStorage", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1127 "c/zx-elems.gperf"
    {"CipherData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1129 "c/zx-elems.gperf"
    {"DataReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1535 "c/zx-elems.gperf"
    {"MessageType", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1032 "c/zx-elems.gperf"
    {"Username", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 1256 "c/zx-elems.gperf"
    {"Granularity", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1635 "c/zx-elems.gperf"
    {"CipherValue", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 610 "c/zx-elems.gperf"
    {"TravelDirections", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 460 "c/zx-elems.gperf"
    {"EducationHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1033 "c/zx-elems.gperf"
    {"UsernameToken", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 1634 "c/zx-elems.gperf"
    {"CarriedKeyName", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 612 "c/zx-elems.gperf"
    {"UserId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 552 "c/zx-elems.gperf"
    {"PublicationHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1042 "c/zx-elems.gperf"
    {"IssuedTokens", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 697 "c/zx-elems.gperf"
    {"IDPDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 14 "c/zx-elems.gperf"
    {"From", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 148 "c/zx-elems.gperf"
    {"FN", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1636 "c/zx-elems.gperf"
    {"KA_Nonce", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1024 "c/zx-elems.gperf"
    {"Embedded", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 1134 "c/zx-elems.gperf"
    {"EncryptionProperty", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1005 "c/zx-elems.gperf"
    {"AuthenticationQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 33 "c/zx-elems.gperf"
    {"AuthenticatingAuthority", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1579 "c/zx-elems.gperf"
    {"AuthenticatingAuthority", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1349 "c/zx-elems.gperf"
    {"FormattedName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1350 "c/zx-elems.gperf"
    {"FormattedNumber", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 93 "c/zx-elems.gperf"
    {"UserInteraction", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 686 "c/zx-elems.gperf"
    {"UserInteraction", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 571 "c/zx-elems.gperf"
    {"SEPPhysicalLocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 278 "c/zx-elems.gperf"
    {"DSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 453 "c/zx-elems.gperf"
    {"DisabilityInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 32 "c/zx-elems.gperf"
    {"AsymmetricKeyAgreement", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 31 "c/zx-elems.gperf"
    {"AsymmetricDecryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1252 "c/zx-elems.gperf"
    {"TargetNamespace", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 57 "c/zx-elems.gperf"
    {"PhysicalVerification", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 537 "c/zx-elems.gperf"
    {"PhysicalLocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1342 "c/zx-elems.gperf"
    {"EventType", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 547 "c/zx-elems.gperf"
    {"PrimaryLanguage", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 355 "c/zx-elems.gperf"
    {"Identifier", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 471 "c/zx-elems.gperf"
    {"FamilyName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 53 "c/zx-elems.gperf"
    {"MobileNetworkNoEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 54 "c/zx-elems.gperf"
    {"MobileNetworkRadioEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 52 "c/zx-elems.gperf"
    {"MobileNetworkEndToEndEncryption", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 511 "c/zx-elems.gperf"
    {"OrgName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1409 "c/zx-elems.gperf"
    {"Physical", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 116 "c/zx-elems.gperf"
    {"Notification", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 871 "c/zx-elems.gperf"
    {"Notification", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 634 "c/zx-elems.gperf"
    {"Notification", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 370 "c/zx-elems.gperf"
    {"Notification", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 207 "c/zx-elems.gperf"
    {"Notification", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1343 "c/zx-elems.gperf"
    {"ExcessiveValueIndicator", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 955 "c/zx-elems.gperf"
    {"GetStatusResponseItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 47 "c/zx-elems.gperf"
    {"Identification", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 476 "c/zx-elems.gperf"
    {"HighestPossibleValue", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1403 "c/zx-elems.gperf"
    {"OverallPerformanceRating", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 546 "c/zx-elems.gperf"
    {"PrehireRemuneration", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1370 "c/zx-elems.gperf"
    {"JobGrade", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 754 "c/zx-elems.gperf"
    {"Previouslysentby", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1573 "c/zx-elems.gperf"
    {"ConfirmationMethod", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 713 "c/zx-elems.gperf"
    {"AuthnQueryService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1196 "c/zx-elems.gperf"
    {"ServiceType", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1205 "c/zx-elems.gperf"
    {"ServiceType", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1124 "c/zx-elems.gperf"
    {"XACMLAuthzDecisionQuery", "xasp", zx_ns_tab + zx_xmlns_ix_xasp},
#line 1353 "c/zx-elems.gperf"
    {"GivenName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1509 "c/zx-elems.gperf"
    {"GivenName", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1490 "c/zx-elems.gperf"
    {"GivenName", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 544 "c/zx-elems.gperf"
    {"PreferredLanguage", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 118 "c/zx-elems.gperf"
    {"NotifyAdminTo", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 372 "c/zx-elems.gperf"
    {"NotifyAdminTo", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1135 "c/zx-elems.gperf"
    {"KeyReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 588 "c/zx-elems.gperf"
    {"SourceType", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 510 "c/zx-elems.gperf"
    {"OrgInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1576 "c/zx-elems.gperf"
    {"AssertionIDRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1155 "c/zx-elems.gperf"
    {"DOM", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 435 "c/zx-elems.gperf"
    {"ContactInfo", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1602 "c/zx-elems.gperf"
    {"NewID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1152 "c/zx-elems.gperf"
    {"CELL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 669 "c/zx-elems.gperf"
    {"Text", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 685 "c/zx-elems.gperf"
    {"Text", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 173 "c/zx-elems.gperf"
    {"PHYSICALACCESS", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 99 "c/zx-elems.gperf"
    {"By", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 414 "c/zx-elems.gperf"
    {"Benefits", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 300 "c/zx-elems.gperf"
    {"Body", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 1138 "c/zx-elems.gperf"
    {"ReferenceList", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 910 "c/zx-elems.gperf"
    {"NameID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 125 "c/zx-elems.gperf"
    {"ReportUsage", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1598 "c/zx-elems.gperf"
    {"RespondWith", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 126 "c/zx-elems.gperf"
    {"ReportUsageResponse", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 742 "c/zx-elems.gperf"
    {"DateTime", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 752 "c/zx-elems.gperf"
    {"Number", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 161 "c/zx-elems.gperf"
    {"MAILER", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1527 "c/zx-elems.gperf"
    {"ExpiryDate", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1161 "c/zx-elems.gperf"
    {"ISDN", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 819 "c/zx-elems.gperf"
    {"PMEDisable", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 820 "c/zx-elems.gperf"
    {"PMEDisableResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1049 "c/zx-elems.gperf"
    {"Primary", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 386 "c/zx-elems.gperf"
    {"eqop", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1210 "c/zx-elems.gperf"
    {"G", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1516 "c/zx-elems.gperf"
    {"ChargedParty", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 549 "c/zx-elems.gperf"
    {"ProfileId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 106 "c/zx-elems.gperf"
    {"DeleteItem", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 627 "c/zx-elems.gperf"
    {"DeleteItem", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 349 "c/zx-elems.gperf"
    {"DeleteItem", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 199 "c/zx-elems.gperf"
    {"DeleteItem", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 784 "c/zx-elems.gperf"
    {"extendedReplaceReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 927 "c/zx-elems.gperf"
    {"AuthorityBinding", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 782 "c/zx-elems.gperf"
    {"extendedCancelReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 907 "c/zx-elems.gperf"
    {"EncryptedID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1592 "c/zx-elems.gperf"
    {"RequestHeaders", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1561 "c/zx-elems.gperf"
    {"PMRTData", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 801 "c/zx-elems.gperf"
    {"PMUpdate", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 845 "c/zx-elems.gperf"
    {"PMUpdate", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 756 "c/zx-elems.gperf"
    {"QueryStatusReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 803 "c/zx-elems.gperf"
    {"PMUpdateResponse", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 847 "c/zx-elems.gperf"
    {"PMUpdateResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 281 "c/zx-elems.gperf"
    {"KeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1164 "c/zx-elems.gperf"
    {"PAGER", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1018 "c/zx-elems.gperf"
    {"AppliesTo", "wsp", zx_ns_tab + zx_xmlns_ix_wsp},
#line 1448 "c/zx-elems.gperf"
    {"Symbol", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 72 "c/zx-elems.gperf"
    {"WTLS", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1589 "c/zx-elems.gperf"
    {"Invoke", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 774 "c/zx-elems.gperf"
    {"SubmitRsp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 146 "c/zx-elems.gperf"
    {"FAMILY", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1514 "c/zx-elems.gperf"
    {"AuxApplicInfo", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 78 "c/zx-elems.gperf"
    {"SASLRequest", "as", zx_ns_tab + zx_xmlns_ix_as},
#line 525 "c/zx-elems.gperf"
    {"ParkingInstructions", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1552 "c/zx-elems.gperf"
    {"PMDArtifact", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 870 "c/zx-elems.gperf"
    {"ListMembersResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 114 "c/zx-elems.gperf"
    {"ModifyResponse", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 632 "c/zx-elems.gperf"
    {"ModifyResponse", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 365 "c/zx-elems.gperf"
    {"ModifyResponse", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 265 "c/zx-elems.gperf"
    {"ModifyResponse", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 205 "c/zx-elems.gperf"
    {"ModifyResponse", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1523 "c/zx-elems.gperf"
    {"DeliverUsing", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 24 "c/zx-elems.gperf"
    {"RetryAfter", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1006 "c/zx-elems.gperf"
    {"AuthorizationDecisionQuery", "sp11", zx_ns_tab + zx_xmlns_ix_sp11},
#line 869 "c/zx-elems.gperf"
    {"ListMembersRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 985 "c/zx-elems.gperf"
    {"AuthzDecisionQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 590 "c/zx-elems.gperf"
    {"SpeakingEvent", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1340 "c/zx-elems.gperf"
    {"Ethnicity", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 702 "c/zx-elems.gperf"
    {"OrganizationURL", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 727 "c/zx-elems.gperf"
    {"OrganizationURL", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 18 "c/zx-elems.gperf"
    {"ProblemHeader", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 1513 "c/zx-elems.gperf"
    {"ApplicID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 19 "c/zx-elems.gperf"
    {"ProblemHeaderQName", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 224 "c/zx-elems.gperf"
    {"Object", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 874 "c/zx-elems.gperf"
    {"Object", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 283 "c/zx-elems.gperf"
    {"Object", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1050 "c/zx-elems.gperf"
    {"ProofEncryption", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1504 "c/zx-elems.gperf"
    {"TelephoneNumber", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1512 "c/zx-elems.gperf"
    {"TelephoneNumber", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1415 "c/zx-elems.gperf"
    {"ProficencyLevel", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 413 "c/zx-elems.gperf"
    {"BasePay", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 175 "c/zx-elems.gperf"
    {"PREFIX", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 113 "c/zx-elems.gperf"
    {"Modify", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 630 "c/zx-elems.gperf"
    {"Modify", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 364 "c/zx-elems.gperf"
    {"Modify", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 264 "c/zx-elems.gperf"
    {"Modify", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 203 "c/zx-elems.gperf"
    {"Modify", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 520 "c/zx-elems.gperf"
    {"OtherDescriptors", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1169 "c/zx-elems.gperf"
    {"PRIVATE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 521 "c/zx-elems.gperf"
    {"OtherHonors", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1188 "c/zx-elems.gperf"
    {"objectID", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 269 "c/zx-elems.gperf"
    {"RemoveEntry", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 228 "c/zx-elems.gperf"
    {"ObjectStoreInfo", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 1229 "c/zx-elems.gperf"
    {"XPath", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1187 "c/zx-elems.gperf"
    {"Type", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 1453 "c/zx-elems.gperf"
    {"Type", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 288 "c/zx-elems.gperf"
    {"SPKIData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 996 "c/zx-elems.gperf"
    {"NewEncryptedID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 823 "c/zx-elems.gperf"
    {"PMEEnable", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1554 "c/zx-elems.gperf"
    {"PMEEnabled", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 144 "c/zx-elems.gperf"
    {"EXTADR", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 760 "c/zx-elems.gperf"
    {"ReadReplyReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 48 "c/zx-elems.gperf"
    {"KeyActivation", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 186 "c/zx-elems.gperf"
    {"TYPE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1073 "c/zx-elems.gperf"
    {"Apply", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1449 "c/zx-elems.gperf"
    {"TextResume", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 354 "c/zx-elems.gperf"
    {"GeometryCollection", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 916 "c/zx-elems.gperf"
    {"SubjectLocality", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 935 "c/zx-elems.gperf"
    {"SubjectLocality", "sa11", zx_ns_tab + zx_xmlns_ix_sa11},
#line 658 "c/zx-elems.gperf"
    {"MappingInput", "im", zx_ns_tab + zx_xmlns_ix_im},
#line 575 "c/zx-elems.gperf"
    {"SchoolOrInstitution", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1086 "c/zx-elems.gperf"
    {"Obligations", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 978 "c/zx-elems.gperf"
    {"UpdateResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1085 "c/zx-elems.gperf"
    {"Obligation", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 1168 "c/zx-elems.gperf"
    {"PREF", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1404 "c/zx-elems.gperf"
    {"PageNumber", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 438 "c/zx-elems.gperf"
    {"Copyright", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 60 "c/zx-elems.gperf"
    {"PrivateKeyProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1591 "c/zx-elems.gperf"
    {"InvokingProvider", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 137 "c/zx-elems.gperf"
    {"CAPURI", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1213 "c/zx-elems.gperf"
    {"KeyName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1163 "c/zx-elems.gperf"
    {"MSG", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1638 "c/zx-elems.gperf"
    {"OAEPparams", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 1465 "c/zx-elems.gperf"
    {"WorkStyle", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1103 "c/zx-elems.gperf"
    {"SubjectMatch", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 587 "c/zx-elems.gperf"
    {"Shift", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 336 "c/zx-elems.gperf"
    {"Box", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 143 "c/zx-elems.gperf"
    {"EMAIL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 424 "c/zx-elems.gperf"
    {"Company", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1507 "c/zx-elems.gperf"
    {"Company", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1484 "c/zx-elems.gperf"
    {"Company", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1045 "c/zx-elems.gperf"
    {"Lifetime", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 388 "c/zx-elems.gperf"
    {"esrk", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 427 "c/zx-elems.gperf"
    {"Competency", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1590 "c/zx-elems.gperf"
    {"InvokingPrincipal", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 71 "c/zx-elems.gperf"
    {"Token", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 938 "c/zx-elems.gperf"
    {"Token", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 941 "c/zx-elems.gperf"
    {"TransitedProviderPath", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 249 "c/zx-elems.gperf"
    {"SvcMDQuery", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1557 "c/zx-elems.gperf"
    {"PMEWhenCreated", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1559 "c/zx-elems.gperf"
    {"PMEngineRef", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 280 "c/zx-elems.gperf"
    {"KeyInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 458 "c/zx-elems.gperf"
    {"DunsNumber", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 723 "c/zx-elems.gperf"
    {"NameIDMappingService", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 994 "c/zx-elems.gperf"
    {"NameIDMappingResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 993 "c/zx-elems.gperf"
    {"NameIDMappingRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1307 "c/zx-elems.gperf"
    {"BKZName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 882 "c/zx-elems.gperf"
    {"RemoveFromCollectionResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 472 "c/zx-elems.gperf"
    {"Fax", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 881 "c/zx-elems.gperf"
    {"RemoveFromCollectionRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1367 "c/zx-elems.gperf"
    {"IsPublicCompany", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 219 "c/zx-elems.gperf"
    {"DeleteObjectResponse", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 412 "c/zx-elems.gperf"
    {"BKZId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 218 "c/zx-elems.gperf"
    {"DeleteObjectRequest", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 1082 "c/zx-elems.gperf"
    {"EnvironmentMatch", "xa", zx_ns_tab + zx_xmlns_ix_xa},
#line 190 "c/zx-elems.gperf"
    {"URL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 162 "c/zx-elems.gperf"
    {"MIDDLE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1603 "c/zx-elems.gperf"
    {"RequesterID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 69 "c/zx-elems.gperf"
    {"TechnicalProtection", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1482 "c/zx-elems.gperf"
    {"AuthnRequestsSigned", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 313 "c/zx-elems.gperf"
    {"AuthnRequestEnvelope", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 312 "c/zx-elems.gperf"
    {"AuthnRequest", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 984 "c/zx-elems.gperf"
    {"AuthnRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1358 "c/zx-elems.gperf"
    {"ISBN", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 596 "c/zx-elems.gperf"
    {"Stock", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 824 "c/zx-elems.gperf"
    {"PMEEnableResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1308 "c/zx-elems.gperf"
    {"BasePayAmountMax", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1014 "c/zx-elems.gperf"
    {"DerivedKeyToken", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 1345 "c/zx-elems.gperf"
    {"ExecutiveSummary", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1617 "c/zx-elems.gperf"
    {"CombinedHash", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1171 "c/zx-elems.gperf"
    {"SELF", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1540 "c/zx-elems.gperf"
    {"ReplyApplicID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 188 "c/zx-elems.gperf"
    {"UID", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 659 "c/zx-elems.gperf"
    {"MappingOutput", "im", zx_ns_tab + zx_xmlns_ix_im},
#line 119 "c/zx-elems.gperf"
    {"NotifyResponse", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 873 "c/zx-elems.gperf"
    {"NotifyResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 636 "c/zx-elems.gperf"
    {"NotifyResponse", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 373 "c/zx-elems.gperf"
    {"NotifyResponse", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 209 "c/zx-elems.gperf"
    {"NotifyResponse", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 660 "c/zx-elems.gperf"
    {"Confirm", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 670 "c/zx-elems.gperf"
    {"Confirm", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 145 "c/zx-elems.gperf"
    {"EXTVAL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 85 "c/zx-elems.gperf"
    {"Framework", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 937 "c/zx-elems.gperf"
    {"Framework", "sbf", zx_ns_tab + zx_xmlns_ix_sbf},
#line 232 "c/zx-elems.gperf"
    {"Framework", "di", zx_ns_tab + zx_xmlns_ix_di},
#line 1549 "c/zx-elems.gperf"
    {"key", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1344 "c/zx-elems.gperf"
    {"Exchange", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1582 "c/zx-elems.gperf"
    {"AuthnContextDeclRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1238 "c/zx-elems.gperf"
    {"AuthnContextClassRef", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 1580 "c/zx-elems.gperf"
    {"AuthnContextClassRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1414 "c/zx-elems.gperf"
    {"PreferredGivenName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1240 "c/zx-elems.gperf"
    {"AuthnContextStatementRef", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 130 "c/zx-elems.gperf"
    {"UsageType", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 853 "c/zx-elems.gperf"
    {"UpdateEPR", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 225 "c/zx-elems.gperf"
    {"ObjectData", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 855 "c/zx-elems.gperf"
    {"UpdateEPRResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 825 "c/zx-elems.gperf"
    {"PMEGetInfo", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 826 "c/zx-elems.gperf"
    {"PMEGetInfoResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 117 "c/zx-elems.gperf"
    {"Notify", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 872 "c/zx-elems.gperf"
    {"Notify", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 635 "c/zx-elems.gperf"
    {"Notify", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 371 "c/zx-elems.gperf"
    {"Notify", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 208 "c/zx-elems.gperf"
    {"Notify", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1394 "c/zx-elems.gperf"
    {"Objective", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 698 "c/zx-elems.gperf"
    {"KeyDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 721 "c/zx-elems.gperf"
    {"KeyDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 806 "c/zx-elems.gperf"
    {"CallbackEPR", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 950 "c/zx-elems.gperf"
    {"CallbackEPR", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1231 "c/zx-elems.gperf"
    {"ChangeFormat", "dst", zx_ns_tab + zx_xmlns_ix_dst},
#line 995 "c/zx-elems.gperf"
    {"NameIDPolicy", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1245 "c/zx-elems.gperf"
    {"NameIDPolicy", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 865 "c/zx-elems.gperf"
    {"DisplayName", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 831 "c/zx-elems.gperf"
    {"PMEUpload", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 1305 "c/zx-elems.gperf"
    {"AreaOfExpertise", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 156 "c/zx-elems.gperf"
    {"LINE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 602 "c/zx-elems.gperf"
    {"TaxId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1361 "c/zx-elems.gperf"
    {"IdentifyingMarks", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1386 "c/zx-elems.gperf"
    {"MonthDay", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1416 "c/zx-elems.gperf"
    {"ProfileName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 501 "c/zx-elems.gperf"
    {"MatchedObjectId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 746 "c/zx-elems.gperf"
    {"DeliveryReportReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 90 "c/zx-elems.gperf"
    {"TargetIdentity", "b", zx_ns_tab + zx_xmlns_ix_b},
#line 184 "c/zx-elems.gperf"
    {"TEL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 983 "c/zx-elems.gperf"
    {"AuthnQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 943 "c/zx-elems.gperf"
    {"ProxySubject", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 1619 "c/zx-elems.gperf"
    {"EncryptWith", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 189 "c/zx-elems.gperf"
    {"URI", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 439 "c/zx-elems.gperf"
    {"CopyrightDates", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1459 "c/zx-elems.gperf"
    {"VerifyEmployment", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 192 "c/zx-elems.gperf"
    {"VERSION", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1577 "c/zx-elems.gperf"
    {"AssertionURIRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 136 "c/zx-elems.gperf"
    {"CALURI", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1626 "c/zx-elems.gperf"
    {"SignWith", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 766 "c/zx-elems.gperf"
    {"ReplyCharging", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 802 "c/zx-elems.gperf"
    {"PMUpdateItem", "pmm", zx_ns_tab + zx_xmlns_ix_pmm},
#line 846 "c/zx-elems.gperf"
    {"PMUpdateItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 134 "c/zx-elems.gperf"
    {"BINVAL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1417 "c/zx-elems.gperf"
    {"PublisherLocation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 778 "c/zx-elems.gperf"
    {"UACapabilities", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 170 "c/zx-elems.gperf"
    {"PCODE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1162 "c/zx-elems.gperf"
    {"MODEM", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 888 "c/zx-elems.gperf"
    {"SetObjectInfoResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1068 "c/zx-elems.gperf"
    {"Timestamp", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 887 "c/zx-elems.gperf"
    {"SetObjectInfoRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 465 "c/zx-elems.gperf"
    {"EmploymentHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 154 "c/zx-elems.gperf"
    {"LABEL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1418 "c/zx-elems.gperf"
    {"PublisherName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 509 "c/zx-elems.gperf"
    {"OrgIndustry", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1546 "c/zx-elems.gperf"
    {"TimeStamp", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 958 "c/zx-elems.gperf"
    {"InvokeResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 691 "c/zx-elems.gperf"
    {"AffiliationDescriptor", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 705 "c/zx-elems.gperf"
    {"AffiliationDescriptor", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 917 "c/zx-elems.gperf"
    {"TestElem", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1299 "c/zx-elems.gperf"
    {"AffiliatedOrganization", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 832 "c/zx-elems.gperf"
    {"PMEUploadResponse", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 227 "c/zx-elems.gperf"
    {"ObjectSearchParm", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 176 "c/zx-elems.gperf"
    {"PRODID", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 217 "c/zx-elems.gperf"
    {"TestOp", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 1472 "c/zx-elems.gperf"
    {"TestOp", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 519 "c/zx-elems.gperf"
    {"OtherCompensation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 42 "c/zx-elems.gperf"
    {"GoverningAgreementRef", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 1060 "c/zx-elems.gperf"
    {"RequestedUnattachedReference", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1195 "c/zx-elems.gperf"
    {"ServiceNameRef", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 226 "c/zx-elems.gperf"
    {"ObjectInfo", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 160 "c/zx-elems.gperf"
    {"LON", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1558 "c/zx-elems.gperf"
    {"PMEWhenEnabled", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 179 "c/zx-elems.gperf"
    {"ROLE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1541 "c/zx-elems.gperf"
    {"ReplyChargingID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 892 "c/zx-elems.gperf"
    {"TestMembershipResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 555 "c/zx-elems.gperf"
    {"RankAchieved", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 891 "c/zx-elems.gperf"
    {"TestMembershipRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1441 "c/zx-elems.gperf"
    {"Speak", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1455 "c/zx-elems.gperf"
    {"UnitOrDivision", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 591 "c/zx-elems.gperf"
    {"SpeakingEventsHistory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 775 "c/zx-elems.gperf"
    {"ThirdPartyPayer", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 191 "c/zx-elems.gperf"
    {"USERID", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 216 "c/zx-elems.gperf"
    {"TestItem", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 642 "c/zx-elems.gperf"
    {"TestItem", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 1376 "c/zx-elems.gperf"
    {"Link", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 155 "c/zx-elems.gperf"
    {"LAT", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 202 "c/zx-elems.gperf"
    {"LDIF", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 321 "c/zx-elems.gperf"
    {"IDPEntry", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 987 "c/zx-elems.gperf"
    {"IDPEntry", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 1402 "c/zx-elems.gperf"
    {"OtherPayCalculation", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1198 "c/zx-elems.gperf"
    {"WsdlURI", "di12", zx_ns_tab + zx_xmlns_ix_di12},
#line 1528 "c/zx-elems.gperf"
    {"LinkedID", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 1158 "c/zx-elems.gperf"
    {"HOME", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 773 "c/zx-elems.gperf"
    {"SubmitReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 425 "c/zx-elems.gperf"
    {"CompanyVehicle", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1131 "c/zx-elems.gperf"
    {"EncryptedKey", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 396 "c/zx-elems.gperf"
    {"resp_req", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1481 "c/zx-elems.gperf"
    {"AffiliateMember", "m20", zx_ns_tab + zx_xmlns_ix_m20},
#line 1505 "c/zx-elems.gperf"
    {"AffiliateMember", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1327 "c/zx-elems.gperf"
    {"CurrentOrEndRank", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1510 "c/zx-elems.gperf"
    {"NameIDFormat", "md", zx_ns_tab + zx_xmlns_ix_md},
#line 1173 "c/zx-elems.gperf"
    {"VOICE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1064 "c/zx-elems.gperf"
    {"UseKey", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1035 "c/zx-elems.gperf"
    {"BinaryExchange", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 120 "c/zx-elems.gperf"
    {"NotifyTo", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1207 "c/zx-elems.gperf"
    {"NotifyTo", "dp", zx_ns_tab + zx_xmlns_ix_dp},
#line 374 "c/zx-elems.gperf"
    {"NotifyTo", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 942 "c/zx-elems.gperf"
    {"ProxyInfoConfirmationData", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 135 "c/zx-elems.gperf"
    {"CALADRURI", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 401 "c/zx-elems.gperf"
    {"AffirmativeActionPlanJobGroupId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1235 "c/zx-elems.gperf"
    {"AffiliationID", "ff12", zx_ns_tab + zx_xmlns_ix_ff12},
#line 572 "c/zx-elems.gperf"
    {"SafetyEquipment", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 416 "c/zx-elems.gperf"
    {"Book", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 939 "c/zx-elems.gperf"
    {"TokenPolicy", "sec", zx_ns_tab + zx_xmlns_ix_sec},
#line 1280 "c/zx-elems.gperf"
    {"lev_conf", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1625 "c/zx-elems.gperf"
    {"RequestType", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1167 "c/zx-elems.gperf"
    {"POSTAL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1377 "c/zx-elems.gperf"
    {"LinkToResume", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1375 "c/zx-elems.gperf"
    {"LevelOfDisability", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 49 "c/zx-elems.gperf"
    {"KeySharing", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 523 "c/zx-elems.gperf"
    {"OtherPublication", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 124 "c/zx-elems.gperf"
    {"RefItem", "cb", zx_ns_tab + zx_xmlns_ix_cb},
#line 1013 "c/zx-elems.gperf"
    {"RefItem", "subs", zx_ns_tab + zx_xmlns_ix_subs},
#line 380 "c/zx-elems.gperf"
    {"RefItem", "gl", zx_ns_tab + zx_xmlns_ix_gl},
#line 1019 "c/zx-elems.gperf"
    {"ExactlyOne", "wsp", zx_ns_tab + zx_xmlns_ix_wsp},
#line 962 "c/zx-elems.gperf"
    {"ProxyInvoke", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 964 "c/zx-elems.gperf"
    {"ProxyInvokeResponse", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 603 "c/zx-elems.gperf"
    {"TaxonomyId", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 44 "c/zx-elems.gperf"
    {"HTTP", "ac", zx_ns_tab + zx_xmlns_ix_ac},
#line 604 "c/zx-elems.gperf"
    {"TaxonomyName", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 411 "c/zx-elems.gperf"
    {"BKZClassification", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 151 "c/zx-elems.gperf"
    {"JABBERID", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1329 "c/zx-elems.gperf"
    {"DateOfBirth", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 662 "c/zx-elems.gperf"
    {"Inquiry", "is", zx_ns_tab + zx_xmlns_ix_is},
#line 674 "c/zx-elems.gperf"
    {"Inquiry", "is12", zx_ns_tab + zx_xmlns_ix_is12},
#line 204 "c/zx-elems.gperf"
    {"ModifyItem", "dap", zx_ns_tab + zx_xmlns_ix_dap},
#line 631 "c/zx-elems.gperf"
    {"ModifyItem", "idhrxml", zx_ns_tab + zx_xmlns_ix_idhrxml},
#line 1170 "c/zx-elems.gperf"
    {"PUBLIC", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1160 "c/zx-elems.gperf"
    {"INTL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 764 "c/zx-elems.gperf"
    {"ReplaceReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 959 "c/zx-elems.gperf"
    {"InvokeResponseItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 223 "c/zx-elems.gperf"
    {"GetObjectResponse", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 222 "c/zx-elems.gperf"
    {"GetObjectRequest", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 1406 "c/zx-elems.gperf"
    {"PayTypeHours", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 174 "c/zx-elems.gperf"
    {"POBOX", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 743 "c/zx-elems.gperf"
    {"DeliverReq", "mm7", zx_ns_tab + zx_xmlns_ix_mm7},
#line 183 "c/zx-elems.gperf"
    {"SUFFIX", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 977 "c/zx-elems.gperf"
    {"UpdateItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 166 "c/zx-elems.gperf"
    {"NUMBER", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1186 "c/zx-elems.gperf"
    {"ObjectID", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 1563 "c/zx-elems.gperf"
    {"ObjectID", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1628 "c/zx-elems.gperf"
    {"TokenType", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1401 "c/zx-elems.gperf"
    {"OtherPayAmountMin", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 167 "c/zx-elems.gperf"
    {"ORG", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 827 "c/zx-elems.gperf"
    {"PMEHash", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 150 "c/zx-elems.gperf"
    {"GIVEN", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 158 "c/zx-elems.gperf"
    {"LOCALITY", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 182 "c/zx-elems.gperf"
    {"STREET", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 606 "c/zx-elems.gperf"
    {"TermOfNotice", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1320 "c/zx-elems.gperf"
    {"CopyrightText", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 854 "c/zx-elems.gperf"
    {"UpdateEPRItem", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 518 "c/zx-elems.gperf"
    {"OtherBenefits", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1412 "c/zx-elems.gperf"
    {"PostOfficeBox", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 522 "c/zx-elems.gperf"
    {"OtherPay", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1211 "c/zx-elems.gperf"
    {"HMACOutputLength", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 1623 "c/zx-elems.gperf"
    {"KeyType", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1221 "c/zx-elems.gperf"
    {"SPKISexp", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 221 "c/zx-elems.gperf"
    {"GetObjectListResponse", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 607 "c/zx-elems.gperf"
    {"TimeMax", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 220 "c/zx-elems.gperf"
    {"GetObjectListRequest", "demomed", zx_ns_tab + zx_xmlns_ix_demomed},
#line 138 "c/zx-elems.gperf"
    {"CATEGORIES", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 911 "c/zx-elems.gperf"
    {"OneTimeUse", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 1556 "c/zx-elems.gperf"
    {"PMEUploadMax", "prov", zx_ns_tab + zx_xmlns_ix_prov},
#line 171 "c/zx-elems.gperf"
    {"PHONETIC", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1564 "c/zx-elems.gperf"
    {"ObjectRef", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 181 "c/zx-elems.gperf"
    {"SOUND", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1025 "c/zx-elems.gperf"
    {"KeyIdentifier", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 1569 "c/zx-elems.gperf"
    {"TargetObjectID", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 867 "c/zx-elems.gperf"
    {"GetObjectInfoResponse", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 866 "c/zx-elems.gperf"
    {"GetObjectInfoRequest", "ps", zx_ns_tab + zx_xmlns_ix_ps},
#line 1217 "c/zx-elems.gperf"
    {"PGPKeyID", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 462 "c/zx-elems.gperf"
    {"EffectiveDate", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 963 "c/zx-elems.gperf"
    {"ProxyInvokeItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 965 "c/zx-elems.gperf"
    {"ProxyInvokeResponseItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 1395 "c/zx-elems.gperf"
    {"Offered", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1611 "c/zx-elems.gperf"
    {"Offset", "wsc", zx_ns_tab + zx_xmlns_ix_wsc},
#line 157 "c/zx-elems.gperf"
    {"LISTMEMBER", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 459 "c/zx-elems.gperf"
    {"EEOCJobCategory", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 153 "c/zx-elems.gperf"
    {"KEYWORD", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 957 "c/zx-elems.gperf"
    {"InvokeItem", "shps", zx_ns_tab + zx_xmlns_ix_shps},
#line 165 "c/zx-elems.gperf"
    {"NOTE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 147 "c/zx-elems.gperf"
    {"FBURL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1218 "c/zx-elems.gperf"
    {"PGPKeyPacket", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 149 "c/zx-elems.gperf"
    {"GEO", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 168 "c/zx-elems.gperf"
    {"ORGNAME", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1172 "c/zx-elems.gperf"
    {"VIDEO", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1174 "c/zx-elems.gperf"
    {"WORK", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 177 "c/zx-elems.gperf"
    {"REGION", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 164 "c/zx-elems.gperf"
    {"NICKNAME", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 20 "c/zx-elems.gperf"
    {"ProblemURI", "a", zx_ns_tab + zx_xmlns_ix_a},
#line 601 "c/zx-elems.gperf"
    {"TTYTDD", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1452 "c/zx-elems.gperf"
    {"TravelFrequency", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1387 "c/zx-elems.gperf"
    {"MonthDayOfBirth", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1400 "c/zx-elems.gperf"
    {"OtherPayAmountMax", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 1044 "c/zx-elems.gperf"
    {"KeyExchangeToken", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 402 "c/zx-elems.gperf"
    {"Affix", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 608 "c/zx-elems.gperf"
    {"TimeOffAllowance", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 185 "c/zx-elems.gperf"
    {"TITLE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 132 "c/zx-elems.gperf"
    {"AGENT", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1587 "c/zx-elems.gperf"
    {"NumberOfUses", "sec12", zx_ns_tab + zx_xmlns_ix_sec12},
#line 1156 "c/zx-elems.gperf"
    {"FAVORITE", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1393 "c/zx-elems.gperf"
    {"NumberOfPages", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 159 "c/zx-elems.gperf"
    {"LOGO", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1153 "c/zx-elems.gperf"
    {"CONFIDENTIAL", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 172 "c/zx-elems.gperf"
    {"PHOTO", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1392 "c/zx-elems.gperf"
    {"NumberOfChildren", "hrxml", zx_ns_tab + zx_xmlns_ix_hrxml},
#line 180 "c/zx-elems.gperf"
    {"SORT_STRING", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1159 "c/zx-elems.gperf"
    {"INTERNET", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1154 "c/zx-elems.gperf"
    {"DISTRIBUTIONLIST", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 169 "c/zx-elems.gperf"
    {"ORGUNIT", "cdm", zx_ns_tab + zx_xmlns_ix_cdm},
#line 1046 "c/zx-elems.gperf"
    {"OnBehalfOf", "wst", zx_ns_tab + zx_xmlns_ix_wst},
#line 1640 "c/zx-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0}
  };

static const short lookup[] =
  {
       -1, -1634, -1631,    -2,     2,    -1,    -1,
       -1,    -1,    -1,    -1,     3,    -1,    -1,
        4,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
        5,    -1,     6,    -1,    -1,    -1,    -1,
        7,    -1,     8,    -1,    -1,     9,    -1,
       -1,    -1,    -1,    -1,    10,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1, -1704, -1620,    -2,    -1,    -1,    -1,
       13,    -1,    -1,    -1,    -1,    -1,    -1,
    -1717, -1617,    -2,    -1,    -1,    -1,    16,
       -1,    17,    -1,    18,    -1,    -1,    -1,
       -1,    19,    20,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    21,    22,    -1,    23,
       -1,    24,    -1,    -1, -1754, -1752,    -1,
       31, -1602,    -2, -1606,    -4,    32,    -1,
       -1, -1765,    -1, -1762, -1596,    -2,    37,
    -1598,    -2,    -1,    -1,    -1,    -1,    -1,
       -1,    38,    -1,    -1,    39,    -1,    -1,
    -1780, -1591,    -2,    -1,    42,    -1,    -1,
       43, -1788, -1587,    -2,    -1,    46,    -1,
       -1,    47,    -1,    48,    -1,    -1,    -1,
       -1, -1804,    -1,    52, -1582,    -3, -1814,
       -1, -1811,    62,    63, -1575,    -6,    64,
    -1578,    -3,    -1,    -1,    65,    -1,    -1,
       -1,    -1,    66,    -1,    -1,    -1,    -1,
       -1,    -1,    67,    -1,    -1,    68,    69,
       -1,    -1,    -1,    -1,    70,    -1,    -1,
       -1,    -1,    71,    72,    73,    -1,    74,
       75,    -1,    -1,    -1,    -1,    -1,    76,
       77,    78, -1859, -1552,    -6,    -1,    -1,
       85,    86,    87,    -1,    88,    -1,    -1,
       89,    -1,    -1, -1874, -1541,   -11,    -1,
       -1,    -1,   101,    -1,   102,    -1,    -1,
       -1,   103,    -1, -1889,   106, -1527,    -2,
       -1,   107,    -1,   108,   109,    -1,    -1,
       -1,    -1,    -1,   110,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   111,   112,    -1,    -1,    -1,   113,
       -1,    -1,    -1,    -1,    -1,   114,    -1,
      115,   116,    -1,    -1,    -1,    -1,   117,
       -1,    -1,    -1,   118,    -1,    -1,    -1,
       -1,    -1,    -1,   119,    -1,    -1,    -1,
      120,    -1,    -1,   121,    -1,    -1,    -1,
      122,    -1,    -1,   123,    -1,   124,    -1,
       -1,   125,   126,   127,    -1,   128, -1968,
    -1502,    -4, -1978, -1974,   138,   139, -1496,
       -3,    -1,   140, -1498,    -2,    -1,   141,
      142,    -1,    -1,    -1,    -1,   143,    -1,
       -1,    -1,    -1,   144,   145,    -1,   146,
      147,    -1,    -1,    -1,    -1,   148,    -1,
       -1,    -1,    -1,    -1,   149,   150,    -1,
      151,    -1,    -1,    -1,    -1,    -1,    -1,
      152,    -1,   153,    -1,    -1,    -1,   154,
      155,    -1,    -1, -2031,   158,    -1,   159,
    -1475,    -2,    -1,    -1,    -1,    -1, -2038,
    -1471,    -2, -2043,    -1,   164, -1469,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      165,    -1,    -1,    -1,   166,   167,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1, -2076,    -1,   170,
       -1,   171,   172, -1463,    -2,   173,    -1,
       -1,    -1,    -1,    -1,    -1,   174,    -1,
       -1,    -1,    -1, -2091, -1456,    -2,    -1,
      177,    -1,    -1,    -1,    -1,    -1,    -1,
      178,    -1,    -1,    -1,    -1,   179,   180,
       -1,    -1,   181, -2112, -1449,    -2,    -1,
       -1,   184,   185,    -1,    -1,    -1,    -1,
       -1,   186,   187,   188,    -1,    -1,    -1,
       -1, -2135,   191,   192,    -1,   193, -1442,
       -2,    -1,    -1,    -1,    -1,   194,    -1,
      195,   196,    -1,   197,    -1,    -1,    -1,
      198,   199,    -1,    -1,    -1,    -1,   200,
      201, -2166,   204,   205, -2162, -1425,    -2,
      208,   209, -1429,    -2,   210,    -1,    -1,
      211,    -1,    -1,   212,    -1,   213,    -1,
       -1, -2189,   216, -2187,    -1,   222,    -1,
      223,   224, -1414,    -5, -1417,    -2,    -1,
       -1,    -1,   225,    -1,    -1,   226,    -1,
      227,    -1,    -1,    -1,    -1,   228,   229,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      230,    -1,    -1,    -1,   231, -2225,    -1,
      237,    -1,   238,    -1,   239, -1399,    -5,
       -1,   240,    -1,    -1,    -1,    -1,    -1,
      241,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   242,    -1,   243,    -1,   244,
       -1,    -1,    -1,    -1,   245,   246,    -1,
    -2277,    -1, -2273,    -1,   253, -2263,    -1,
      256, -1377,    -2,    -1,   257,    -1,   258,
       -1,   259,   260,   261, -1381,    -3,    -1,
      262, -1384,    -3, -2280, -1368,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      265,    -1,    -1,   266,   267,    -1,    -1,
      268,    -1,    -1, -2302,   271, -1362,    -2,
      272,    -1,   273,    -1,    -1,    -1,   274,
       -1,   275,   276,    -1,    -1,   277,    -1,
       -1,    -1,    -1,   278,    -1,    -1,    -1,
       -1,    -1,    -1,   279,    -1,   280,    -1,
       -1,    -1,    -1,   281,    -1,   282,    -1,
       -1,    -1,    -1,   283,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   284, -2359, -1346,
       -2,    -1,    -1, -2364, -1344,    -4,   291,
       -1,    -1,    -1,    -1, -2372, -1339,    -4,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   296,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   297,    -1,    -1,    -1,
       -1,   298,    -1,   299,    -1,    -1,    -1,
      300,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   301,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      302,   303,    -1,    -1,   304,    -1,    -1,
       -1,    -1,    -1,   305,    -1,    -1,   306,
       -1,    -1,    -1, -2461, -2457,   312, -1321,
       -2,   313,   314, -1324,    -3,    -1,   315,
       -1,    -1,    -1,   316,    -1,   317,    -1,
       -1,    -1,   318,   319,    -1,    -1,    -1,
       -1,    -1,   320,    -1,    -1,    -1,   321,
       -1,    -1,    -1,   322,    -1,    -1,    -1,
       -1,   323,    -1,    -1,   324,    -1,    -1,
       -1,   325,    -1,    -1,   326,   327,    -1,
      328,    -1,    -1,   329,    -1,    -1,    -1,
       -1,    -1,   330,   331,    -1,    -1,   332,
       -1,    -1,    -1,   333,   334,    -1,    -1,
    -2529, -1296,    -2,    -1,   337,    -1,   338,
      339, -2542,   342,   343,   344,    -1,   345,
    -1291,    -2,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1, -2553, -1285,    -2,   348,
      349,    -1,   350,    -1,    -1,   351,    -1,
       -1,   352,    -1,   353,    -1,    -1,    -1,
       -1,    -1,    -1,   354,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   355,    -1,    -1,
       -1,    -1,    -1, -2588, -1275,    -2,    -1,
    -2593,   360, -1273,    -2, -2600,   367,   368,
       -1,   369, -1270,    -6,   370,    -1,    -1,
       -1,    -1,    -1,    -1,   371,   372,    -1,
      373,    -1,    -1,    -1,   374,   375,    -1,
       -1,    -1,    -1,   376,    -1,    -1,   377,
       -1,    -1,    -1,   378,   379,    -1,   380,
      381,    -1,   382,    -1,    -1,    -1,   383,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      384,    -1,    -1,    -1,    -1,    -1,    -1,
      385,    -1,    -1,   386,    -1, -2663,   389,
       -1,   390, -1244,    -2,    -1,    -1,    -1,
      391,    -1,    -1,    -1,   392,    -1,    -1,
       -1,    -1,    -1,    -1,    -1, -2692, -2683,
      397, -1236,    -2,    -1, -2690,   400,   401,
      402, -1233,    -2, -1238,    -2,    -1, -2700,
       -1, -2698, -1226,    -2, -1228,    -2,    -1,
       -1,    -1,    -1, -2707, -1224,    -4,    -1,
      411,   412,    -1,    -1,    -1,    -1,    -1,
      413, -2719, -1217,    -3,   417,   418,    -1,
    -2725, -1212,    -2,   421,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   422,   423,    -1,
       -1,    -1,    -1,    -1,   424,    -1,    -1,
    -2747,   427, -1206,    -2,    -1,    -1,   428,
      429,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   430,   431,   432,    -1,
       -1,    -1,    -1,   433,   434,   435,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   436,    -1,    -1,    -1,    -1,    -1,
       -1,   437,   438,    -1,    -1,    -1,    -1,
      439,   440,    -1,    -1,   441,    -1,    -1,
       -1,   442,    -1,    -1,    -1,   443,    -1,
      444,    -1,    -1,    -1,   445,   446,   447,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   448,   449, -2827, -1181,    -3,
      453,    -1,    -1,    -1,    -1,    -1,   454,
       -1,    -1,    -1,    -1,    -1,   455,   456,
       -1, -2859, -2847,   466, -1172,    -7,   467,
      468,    -1, -2857,    -1,   471,   472,   473,
    -1162,    -2, -1174,    -2,    -1,    -1,   474,
      475,    -1,   476,    -1,    -1,    -1, -2872,
      479, -1154,    -2,    -1,   480,    -1,    -1,
    -2879, -1150,    -2,   483,   484,    -1,    -1,
      485,    -1,    -1, -2893,    -1,   489,    -1,
      490, -1145,    -3,    -1,    -1,    -1,    -1,
      491,    -1,   492,   493,    -1,   494,    -1,
       -1,    -1,   495,   496,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   497,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      498,   499,   500,    -1,   501,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   502,    -1,    -1,    -1,   503,   504,
       -1,    -1,    -1,    -1,    -1,   505,   506,
       -1,   507,   508,    -1, -2963,    -1,   511,
      512, -1122,    -2,    -1,   513,    -1,    -1,
       -1,    -1,    -1,   514,   515,    -1,    -1,
       -1,   516,    -1,    -1, -2985,    -1,   519,
       -1,   520, -1114,    -2,   521,   522,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1, -2999, -1108,    -2,    -1,    -1,    -1,
       -1,   525,   526,    -1,    -1,    -1,   527,
      528,   529,   530,    -1,    -1,   531,    -1,
       -1,    -1,    -1, -3044, -3040,    -1, -3026,
      538, -1095,    -2,    -1,   539, -3033,    -1,
      542, -1091,    -2,   543,    -1,   544,    -1,
      545, -1097,    -2,    -1,   546, -1099,    -2,
      547,    -1,    -1,    -1,    -1,   548,    -1,
       -1,    -1,    -1,    -1,    -1,   549,    -1,
      550,   551,   552,    -1,   553,    -1,   554,
       -1,    -1,    -1,    -1,    -1, -3075,    -1,
      557, -1076,    -2,    -1,    -1,    -1,    -1,
       -1,    -1, -3085,   560, -1073,    -2,    -1,
       -1,   561,    -1,   562,    -1,    -1,    -1,
       -1,   563,    -1,    -1,    -1,   564,    -1,
       -1,   565,   566,   567,   568,   569,    -1,
      570,   571,    -1,    -1,    -1,   572, -3118,
       -1,   576, -1058,    -3,    -1,    -1,    -1,
       -1,    -1,   577,    -1,   578,   579,    -1,
       -1,   580, -3133, -1050,    -4,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   585,   586,    -1,   587,    -1,    -1,
       -1,    -1,    -1,   588,   589,   590,    -1,
       -1,    -1,   591,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   592,    -1,    -1,
       -1,    -1, -3180,    -1, -3178,   601, -1035,
       -5, -1038,    -3,    -1,   602,    -1,    -1,
      603,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   604,    -1,    -1,   605,    -1,    -1,
      606,    -1,   607,    -1,   608,   609,    -1,
       -1,   610,    -1,    -1,    -1,    -1,   611,
       -1,   612,    -1,    -1,    -1,    -1,    -1,
      613,    -1,    -1,   614,   615,   616,    -1,
       -1,   617,   618,    -1,    -1,    -1,    -1,
      619,    -1,    -1,    -1,   620,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   621,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   622,    -1,
       -1,    -1,    -1,   623,    -1,    -1,    -1,
       -1,    -1,   624,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   625,    -1,    -1,   626,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   627,    -1,    -1, -3311, -1003,
       -2,    -1,   630,    -1,    -1,   631,    -1,
       -1,   632,    -1,    -1,    -1,    -1,    -1,
      633,    -1,    -1,   634,    -1,    -1,    -1,
      635,    -1,    -1,   636,   637,   638,   639,
       -1,    -1,    -1, -3347,   642,    -1,   643,
     -991,    -2, -3351,   646,  -987,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      647,    -1,    -1,    -1,    -1,    -1, -3372,
       -1,   650,    -1,   651,  -983,    -2,    -1,
       -1,    -1,    -1,   652,    -1,    -1,    -1,
       -1, -3390, -3385,  -972,    -4,   663,    -1,
      664,  -978,    -6,    -1,   665,    -1,    -1,
       -1,    -1,    -1,    -1,    -1, -3402,  -965,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   668,    -1,    -1,    -1,   669,   670,
       -1,    -1,    -1,    -1,    -1,   671,    -1,
      672,   673,   674,    -1,    -1,   675,    -1,
       -1,    -1,   676,   677,    -1,    -1,   678,
       -1,    -1,    -1, -3442,  -952,    -5,   684,
       -1,    -1,   685,   686,   687,    -1,    -1,
       -1,    -1,    -1,   688, -3457,  -942,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -3469,  -940,    -2,    -1,    -1,
       -1,    -1,   693,   694, -3480,    -1,   700,
     -936,    -5,    -1,    -1,    -1,    -1,   701,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   702,    -1,    -1,   703, -3517,    -1,
    -3502,  -925,    -2,    -1, -3513,   710,   711,
      712,   713,   714,    -1,   715,  -923,    -2,
      716,   717,  -927,    -2,    -1,    -1,   718,
      719,    -1,    -1,   720,    -1,    -1,    -1,
       -1,   721,    -1,    -1,    -1,    -1,   722,
       -1,    -1,   723,    -1,   724,    -1,    -1,
    -3558,    -1, -3554,   730,   731,   732,    -1,
      733,    -1,   734,   735,  -903,    -2,   736,
      737,  -906,    -3,    -1,    -1,    -1,    -1,
    -3567,    -1,   740,  -893,    -2,    -1, -3571,
     -890,    -2,   743,    -1,    -1,    -1,   744,
       -1,   745,   746,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   747,    -1,
      748,    -1,    -1,   749,    -1,    -1,    -1,
      750,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   751, -3611,  -879,    -2,
       -1,    -1,   754,    -1,    -1,   755,    -1,
       -1,   756,    -1,   757,   758,    -1,    -1,
      759,    -1,   760,   761,    -1,    -1,   762,
      763,    -1,   764,    -1,    -1,    -1,   765,
      766,   767,    -1,   768,    -1,    -1,   769,
       -1,   770,   771,   772,    -1,   773,    -1,
       -1,   774,   775,    -1,   776,    -1,    -1,
       -1,   777,    -1,   778,    -1,    -1,    -1,
       -1,    -1,    -1,   779,   780,   781,    -1,
      782,   783,    -1,    -1,    -1,   784,    -1,
       -1,   785,   786,    -1,    -1,   787,   788,
       -1,    -1,    -1,   789,    -1,   790,   791,
       -1,   792,   793,    -1,    -1,    -1,    -1,
      794,    -1,   795,    -1,    -1,    -1,    -1,
       -1,   796,    -1,   797,   798,    -1,    -1,
       -1,    -1,   799,    -1,    -1, -3724,  -831,
       -2, -3727,  -829,    -4,    -1,   806,   807,
       -1,    -1,    -1,   808,   809,    -1,    -1,
    -3740,  -821,    -3,    -1,    -1,    -1,    -1,
       -1,   813,    -1,    -1,    -1,   814,    -1,
      815,    -1,   816,    -1,   817, -3770,    -1,
      827,   828,   829,    -1, -3767,   832,   833,
     -801,    -2,   834,  -813,    -9,    -1,   835,
       -1,    -1,   836,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   837,   838,
       -1,   839,    -1,    -1,    -1,   840,   841,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1, -3808,   844,  -789,
       -2,    -1,   845,    -1,    -1,   846,    -1,
      847,   848,    -1,   849,    -1,   850,    -1,
       -1,    -1,    -1,    -1,   851,    -1,    -1,
       -1,    -1,    -1,    -1,   852,   853,    -1,
       -1,    -1,    -1,   854,   855,    -1,    -1,
      856,    -1,    -1,    -1,   857,    -1,   858,
       -1,    -1,   859,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   860,    -1,
    -3869,    -1,   863,   864,  -770,    -2,    -1,
    -3883,    -1,   873,   874, -3878,   878,  -756,
       -3,    -1,   879,   880,  -766,    -8,   881,
       -1,    -1, -3889,  -749,    -2,    -1,   884,
       -1,    -1,    -1,    -1,   885,   886,    -1,
      887, -3929,   890,   891,    -1,   892,   893,
      894,    -1,   895,    -1, -3916,    -1,   898,
      899,   900,  -735,    -2, -3920,   906,  -730,
       -5,    -1,   907,    -1,   908,   909,    -1,
      910,  -743,    -2,    -1,    -1,   911,    -1,
      912,   913,    -1,   914,    -1,    -1,   915,
       -1,    -1,    -1,    -1,    -1,   916,    -1,
       -1,    -1, -3952,  -714,    -2,    -1,   919,
    -3957,  -711,    -2,   922,    -1,    -1,    -1,
      923,   924,    -1,    -1,    -1,    -1,   925,
       -1, -3972,  -705,    -2,   928,   929,    -1,
      930,    -1,    -1,    -1,    -1,   931,    -1,
      932,    -1,   933,    -1,   934,   935,    -1,
       -1,   936,    -1,   937, -4002,   943,    -1,
      944,    -1,   945,   946,  -693,    -5,    -1,
       -1,   947,    -1,    -1,    -1,    -1,   948,
       -1,    -1,    -1,   949,    -1,   950,    -1,
      951,    -1,    -1,   952,    -1,   953,    -1,
      954,    -1, -4033,    -1,   959,   960,   961,
     -676,    -4,    -1, -4038,   965,  -669,    -3,
       -1,    -1,    -1,    -1, -4045,  -665,    -5,
       -1,    -1,   971,    -1,    -1,    -1,    -1,
      972,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   973,   974,   975,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   976,    -1,    -1,    -1,    -1,
       -1,   977,    -1,    -1,    -1,   978,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      979,    -1,    -1,    -1,   980,    -1,   981,
       -1,    -1,    -1,    -1,    -1,    -1,   982,
       -1,    -1,    -1,    -1,    -1,    -1,   983,
       -1, -4119,  -647,    -2,    -1,   986, -4133,
       -1,   989, -4128,   992,  -641,    -2,   993,
       -1,   994,  -644,    -2,   995,    -1,   996,
       -1,    -1,   997,    -1,    -1,    -1,   998,
       -1,    -1,    -1,    -1,    -1,   999,  1000,
     1001,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1002,    -1,  1003,    -1, -4165,  -627,
       -2,    -1,  1006, -4171,  1009,  -624,    -2,
     1010,  1011,    -1,    -1,  1012,  1013,    -1,
       -1,    -1,    -1,  1014,  1015,    -1,    -1,
       -1,  1016,    -1,    -1,  1017,  1018,  1019,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1020,  1021,  1022,
       -1,    -1,    -1,    -1,    -1, -4217,  1025,
     1026,  1027,  -608,    -2,    -1,    -1,    -1,
       -1,  1028,    -1,    -1,    -1,  1029,  1030,
       -1,    -1,    -1, -4234,  1034,  -600,    -3,
       -1,    -1,  1035,    -1,  1036,    -1,  1037,
     1038,    -1,  1039,  1040,    -1,    -1,    -1,
       -1,    -1,  1041,    -1,  1042,    -1,  1043,
       -1,    -1,  1044,    -1,    -1,    -1,  1045,
       -1,    -1,    -1,    -1,    -1,    -1,  1046,
       -1,  1047,    -1,    -1,    -1,    -1,  1048,
       -1,    -1,    -1,    -1,    -1,  1049,  1050,
       -1,  1051,    -1,    -1,    -1,  1052,    -1,
       -1,    -1,  1053,    -1,  1054,    -1, -4339,
     1057,    -1, -4337,  1062,  1063,    -1,  1064,
       -1, -4309,  1068,  -566,    -3,  1069,    -1,
     1070, -4318,    -1,  1073,  1074,  -560,    -2,
       -1,  1075,  1076, -4325,  1080,  -554,    -3,
     1081,    -1,  1082,    -1, -4332,  -548,    -3,
       -1,  1086,  1087,  -573,    -4,  -576,    -2,
       -1,    -1,    -1,  1088,  1089,    -1,    -1,
     1090,  1091,    -1,    -1,    -1,    -1,  1092,
       -1,  1093,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1094,    -1,    -1,
       -1,    -1,    -1,  1095,    -1,  1096, -4377,
     1099,  -534,    -2,    -1,  1100,    -1,    -1,
       -1,  1101,    -1,    -1,    -1,  1102,    -1,
       -1,  1103,    -1,  1104,    -1,  1105,    -1,
       -1,  1106,  1107,  1108,    -1,  1109,  1110,
       -1,  1111,    -1,    -1,  1112,  1113,    -1,
     1114,    -1,    -1,    -1,    -1,  1115,  1116,
    -4422,    -1,  1119,  1120,  -514,    -2,    -1,
     1121,  1122,  1123,    -1,    -1,    -1,  1124,
       -1,  1125,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1, -4450,  1130,  1131,  -505,    -4,    -1,
     1132,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1133,    -1,  1134,    -1,
       -1,    -1,  1135,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1136,    -1,    -1,    -1,    -1,    -1,
       -1, -4490,  -494,    -3,    -1,  1140,  1141,
       -1,  1142,    -1,    -1,  1143,    -1,    -1,
     1144,    -1,    -1,    -1,    -1,  1145,    -1,
       -1,  1146,    -1,  1147,    -1,    -1,  1148,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1149,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1150,    -1,    -1,    -1,
     1151,    -1,    -1,    -1,    -1,    -1,  1152,
       -1,  1153,  1154,    -1,  1155,  1156,    -1,
       -1,    -1,  1157,    -1,  1158,    -1,    -1,
       -1,    -1,  1159,    -1,    -1,  1160,    -1,
     1161,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1162,    -1,    -1,    -1,    -1,    -1,  1163,
       -1,    -1,    -1,    -1,    -1,  1164,    -1,
       -1,    -1, -4596,  -466,    -2,    -1,  1167,
       -1,  1168, -4603,  -462,    -2,    -1,  1171,
       -1,    -1,    -1,    -1,    -1,    -1,  1172,
       -1,    -1,    -1,    -1,    -1,    -1,  1173,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1174,    -1,    -1,
     1175,    -1,    -1,    -1,  1176,    -1,    -1,
       -1,    -1,    -1,  1177,  1178,    -1,    -1,
     1179,  1180,    -1,    -1,    -1,    -1,  1181,
       -1,    -1,    -1,  1182,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1183,
       -1,    -1,  1184,    -1,    -1,  1185,  1186,
       -1,  1187,    -1,    -1,    -1, -4690,  -443,
       -5,  1193,  1194,    -1,    -1,  1195,  1196,
       -1,    -1,  1197,  1198,    -1,    -1,  1199,
       -1,    -1,    -1,  1200,    -1,    -1,    -1,
       -1,    -1,    -1,  1201,    -1,    -1,    -1,
     1202,    -1,    -1,    -1,    -1,    -1,    -1,
       -1, -4728,  -428,    -2,    -1,    -1,    -1,
       -1,    -1,  1205, -4737,  -425,    -3,  1209,
    -4741,  -421,    -2,    -1,  1212,    -1,    -1,
       -1,    -1,    -1,    -1,  1213,    -1,  1214,
       -1,    -1,  1215,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1216,    -1,    -1,    -1,
     1217,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1218,    -1,    -1,    -1,  1219,    -1,    -1,
       -1,    -1,    -1, -4793,  -411,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1222,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1223,  1224,    -1,    -1,    -1,
       -1,    -1,  1225,    -1,    -1,    -1,  1226,
       -1,    -1,  1227,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1228,    -1,    -1,    -1,    -1,  1229,
       -1,    -1,  1230,    -1,    -1,  1231,    -1,
       -1,  1232,  1233,  1234,    -1,  1235,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1236,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1237,    -1,    -1,    -1,    -1,
     1238,    -1,  1239,    -1,    -1,    -1,    -1,
       -1,    -1,  1240,  1241,    -1,  1242,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -4918,  -388,    -4,    -1,    -1,
     1247,  1248,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1249,    -1,  1250,    -1,    -1,
     1251,    -1,    -1,  1252,    -1,    -1,    -1,
       -1,    -1, -4946,  -378,    -2,    -1,    -1,
       -1,  1255,    -1, -4954,  -375,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1258,    -1,  1259,    -1,    -1,  1260,    -1,
     1261,    -1,    -1,  1262,    -1,    -1,  1263,
       -1,  1264,    -1,    -1,    -1,    -1,    -1,
       -1,  1265,    -1,    -1,    -1,    -1,  1266,
       -1,    -1,    -1,    -1,    -1,  1267,    -1,
       -1,  1268,    -1,    -1,    -1,    -1,    -1,
       -1,  1269,    -1,  1270, -5032,  -360,    -5,
     1276,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1277,  1278,  1279,  1280,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1281,
     1282,    -1,    -1,    -1,    -1, -5082,  -348,
       -2,    -1,    -1,    -1,    -1,    -1,  1285,
     1286,    -1,    -1,    -1,  1287,    -1, -5098,
     1291,  -343,    -3,    -1, -5102,  -339,    -2,
       -1,    -1,    -1,  1294,    -1,  1295,    -1,
       -1,  1296, -5114,  -334,    -5,    -1,  1302,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1303,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1304,    -1,
     1305,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1306,    -1,  1307,    -1,  1308,    -1,    -1,
    -5161,  -322,    -2,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1311,  1312,    -1,    -1,    -1,  1313,
     1314,  1315,    -1,  1316,    -1,    -1,    -1,
       -1,    -1,  1317,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1318,
       -1,    -1,    -1,    -1,    -1,    -1,  1319,
     1320,    -1,    -1,    -1,    -1,    -1,    -1,
     1321,    -1,    -1,    -1,    -1,    -1, -5237,
     -309,    -2,    -1,    -1,    -1,    -1,    -1,
     1324,  1325,    -1,    -1,    -1,    -1,    -1,
     1326,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1327,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1328,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1329,    -1,  1330,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1331,    -1,    -1,    -1,
       -1,    -1,  1332,  1333,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1334,  1335,    -1,
       -1,    -1,    -1,    -1,  1336,  1337,    -1,
       -1,    -1,    -1,  1338,    -1,    -1,    -1,
       -1,    -1,    -1,  1339,    -1,    -1,    -1,
     1340,    -1,    -1,    -1,    -1,    -1,    -1,
     1341,    -1,    -1,  1342,    -1, -5355,  -288,
       -3,    -1,    -1,    -1,  1346,    -1,    -1,
       -1,    -1,    -1,  1347,  1348,    -1,  1349,
       -1, -5373,  1352,  -281,    -2,    -1,    -1,
     1353,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1354,    -1,  1355,  1356,    -1,
     1357,  1358,  1359,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1360,    -1,  1361,    -1,    -1,
       -1,    -1,  1362,    -1,    -1,    -1,  1363,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1364,    -1,    -1,  1365,    -1,
       -1,    -1,  1366,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1367,    -1,  1368,    -1,    -1,    -1,  1369,
       -1,  1370,    -1,    -1,  1371,    -1,    -1,
       -1,    -1,  1372,    -1,  1373,  1374,  1375,
       -1,    -1,    -1,    -1,    -1,    -1, -5479,
       -1,  1378,  1379,  1380,  -255,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1381,    -1,    -1,    -1,    -1,
       -1,    -1,  1382,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1383,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1384,  1385,  1386,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1387,    -1,    -1,    -1,  1388,    -1, -5552,
     -242,    -5, -5555,  -237,    -2,    -1,    -1,
       -1,    -1,    -1,  1396,    -1,    -1, -5566,
     -234,    -3,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1400,    -1,    -1,    -1,    -1,    -1,    -1,
     1401,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1402, -5598,  -228,    -2,  1405,
     1406,    -1,    -1,    -1,    -1,  1407,    -1,
       -1,    -1,    -1,  1408,    -1,    -1,    -1,
     1409,    -1,    -1,    -1,  1410,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1411,    -1,
       -1,  1412,    -1,    -1, -5634,  -218,    -5,
       -1,    -1,    -1,  1418, -5641,  -212,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1, -5668,  -210,    -2,    -1,
       -1,    -1,  1423, -5675,  -207,    -2,    -1,
     1426,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1427,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1428,
       -1,    -1,  1429,    -1,  1430,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1431,    -1,    -1,    -1,    -1,    -1,    -1,
     1432,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1433,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1434,    -1,    -1,  1435,  1436,    -1,    -1,
       -1,  1437,    -1,    -1,  1438,    -1,    -1,
     1439,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1440,    -1,  1441,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1442,    -1,    -1,    -1,
       -1,    -1,    -1,  1443,    -1,    -1,    -1,
       -1,    -1,  1444,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1445,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1446,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1447,    -1,
       -1,    -1,    -1,  1448,    -1,    -1,    -1,
    -5840,  -182,    -2,    -1,  1451,    -1,    -1,
       -1,    -1,  1452,    -1,    -1,    -1,    -1,
       -1,    -1,  1453,  1454,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1455,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1456,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1457,    -1,
       -1,    -1,    -1,  1458,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1459,    -1,    -1,  1460,    -1,  1461,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1462,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1463,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1464,    -1,
       -1,    -1,    -1,    -1,    -1, -5964,  -166,
       -2,    -1,    -1,    -1,  1467,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1468,    -1,    -1,    -1,    -1,  1469,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1470,  1471,    -1,
       -1,    -1, -6019,    -1,  1474,  -159,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1475,    -1,  1476,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1477,
       -1,    -1,    -1,  1478,    -1,    -1,    -1,
     1479,    -1,  1480,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1481,    -1,  1482,
       -1,    -1,    -1,    -1,  1483,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1484,    -1,  1485,  1486,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1487,    -1,    -1,  1488,    -1,    -1,  1489,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1490,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1, -6160,  -140,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1493,    -1,  1494,  1495,    -1,    -1,
       -1,    -1,    -1, -6186,  -135,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1498,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1499,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1500,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1501,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1502,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1503,    -1,    -1,
     1504,  1505,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1, -6328,  -125,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1508,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1509,    -1,    -1,
     1510,    -1,  1511,    -1,    -1,    -1,    -1,
     1512,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -6430,  -118,    -3,    -1,    -1,
     1516,    -1,    -1,    -1,    -1,    -1,    -1,
     1517,    -1,  1518,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1519,    -1,    -1,    -1,    -1,    -1,    -1,
     1520,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1521,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1522,    -1,    -1,  1523,    -1,  1524,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1525,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1526,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1527,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1528,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1529,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1, -6665,
     -101,    -3,    -1,    -1,    -1,    -1,    -1,
       -1,  1533,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1534,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1535,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1536,    -1,    -1,
       -1,    -1,    -1,  1537,    -1,    -1,    -1,
       -1,    -1,  1538,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1539,  1540,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1541,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1, -6770,
      -89,    -2, -6773,   -87,    -2,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1546,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1547,    -1,    -1,    -1,    -1,    -1,
       -1,  1548,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1549,    -1,  1550,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1551,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1552,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1553,    -1,
       -1,    -1,    -1,    -1,    -1,  1554,    -1,
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
     1555,  1556,    -1,    -1,    -1,    -1,    -1,
     1557,    -1,    -1,    -1,    -1, -7014,   -73,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1560,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1561,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1562,    -1,    -1,    -1,
       -1,  1563,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1564,  1565,
       -1,    -1,  1566,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1567,    -1,  1568,    -1,    -1,
       -1,    -1,    -1,  1569,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1570,    -1,
     1571,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1572,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1573,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1574,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1575,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1576,    -1,    -1,    -1,
       -1,    -1,  1577,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1578,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1579,    -1,
       -1,    -1,  1580,    -1,    -1,    -1,    -1,
       -1,  1581,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1582,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1583,    -1,    -1,    -1,    -1,    -1,    -1,
     1584,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1585,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1586,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1587,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1588,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1589,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1590,    -1,    -1,
       -1,  1591,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1592,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1593,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1594,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1595,
       -1,    -1,    -1,  1596,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1597,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1598,    -1,  1599,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1600,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1601,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1602,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1603,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1604,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1605,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1606,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1607,    -1,    -1,
       -1,    -1,    -1,  1608,    -1,    -1,    -1,
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
       -1,    -1,    -1,  1609,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1610,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  1611,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1612,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1613,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  1614,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1615,    -1,    -1,    -1,  1616,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1617,    -1,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  1618,
       -1,    -1,    -1,    -1,  1619,    -1,    -1,
       -1,    -1,    -1,  1620,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1621,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  1622,
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
     1623,    -1,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,  1624,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1625,    -1,    -1,
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
       -1,    -1,  1626,    -1,    -1,    -1,    -1,
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
       -1,  1627,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1628,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1629,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1630
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
#line 1641 "c/zx-elems.gperf"

/* EOF - gperf -t -D -C -Nzx_elem2tok c/zx-elems.gperf */
