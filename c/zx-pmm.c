/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-pmm.gperf  */
/* Computed positions: -k'3,5' */

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

#line 1 "c/zx-pmm.gperf"

/* c/zx-pmm-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-pmm-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 18
#define MIN_WORD_LENGTH 8
#define MAX_WORD_LENGTH 20
#define MIN_HASH_VALUE 8
#define MAX_HASH_VALUE 44
/* maximum key range = 37, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_pmm_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45,  0, 45, 45,  5, 45,
      45, 25, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 20, 45,  0, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45,  5, 45, 45,
       0, 45, 45, 45, 45,  5, 45, 45,  0, 45,
      45,  5, 45, 45, 45, 45,  0, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45
    };
  return len + asso_values[(unsigned char)str[4]] + asso_values[(unsigned char)str[2]];
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  0,  0,  8,  0, 10,  0, 12,  8,
    14,  0, 16, 12, 18,  9,  0, 16, 12,  0,  0,  0, 16, 17,
     0,  0, 20, 11,  0,  0,  0,  0, 11,  0,  0, 19,  0,  0,
     0,  0, 19
  };

struct zx_el_tok zx_pmm_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 31 "c/zx-pmm.gperf"
    {"PMUpdate", sizeof(struct zx_pmm_PMUpdate_s)},
    {""},
#line 18 "c/zx-pmm.gperf"
    {"PMActivate", sizeof(struct zx_pmm_PMActivate_s)},
    {""},
#line 32 "c/zx-pmm.gperf"
    {"PMUpdateItem", sizeof(struct zx_pmm_PMUpdateItem_s)},
#line 24 "c/zx-pmm.gperf"
    {"PMDelete", sizeof(struct zx_pmm_PMDelete_s)},
#line 19 "c/zx-pmm.gperf"
    {"PMActivateItem", sizeof(struct zx_pmm_PMActivateItem_s)},
    {""},
#line 33 "c/zx-pmm.gperf"
    {"PMUpdateResponse", sizeof(struct zx_pmm_PMUpdateResponse_s)},
#line 25 "c/zx-pmm.gperf"
    {"PMDeleteItem", sizeof(struct zx_pmm_PMDeleteItem_s)},
#line 20 "c/zx-pmm.gperf"
    {"PMActivateResponse", sizeof(struct zx_pmm_PMActivateResponse_s)},
#line 34 "c/zx-pmm.gperf"
    {"Provision", sizeof(struct zx_pmm_Provision_s)},
    {""},
#line 26 "c/zx-pmm.gperf"
    {"PMDeleteResponse", sizeof(struct zx_pmm_PMDeleteResponse_s)},
#line 21 "c/zx-pmm.gperf"
    {"PMDeactivate", sizeof(struct zx_pmm_PMDeactivate_s)},
    {""}, {""}, {""},
#line 22 "c/zx-pmm.gperf"
    {"PMDeactivateItem", sizeof(struct zx_pmm_PMDeactivateItem_s)},
#line 35 "c/zx-pmm.gperf"
    {"ProvisionResponse", sizeof(struct zx_pmm_ProvisionResponse_s)},
    {""}, {""},
#line 23 "c/zx-pmm.gperf"
    {"PMDeactivateResponse", sizeof(struct zx_pmm_PMDeactivateResponse_s)},
#line 29 "c/zx-pmm.gperf"
    {"PMSetStatus", sizeof(struct zx_pmm_PMSetStatus_s)},
    {""}, {""}, {""}, {""},
#line 27 "c/zx-pmm.gperf"
    {"PMGetStatus", sizeof(struct zx_pmm_PMGetStatus_s)},
    {""}, {""},
#line 30 "c/zx-pmm.gperf"
    {"PMSetStatusResponse", sizeof(struct zx_pmm_PMSetStatusResponse_s)},
    {""}, {""}, {""}, {""},
#line 28 "c/zx-pmm.gperf"
    {"PMGetStatusResponse", sizeof(struct zx_pmm_PMGetStatusResponse_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_pmm_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_pmm_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_pmm_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_pmm_el_tab[key];
          }
    }
  return 0;
}
#line 36 "c/zx-pmm.gperf"

/* EOF */