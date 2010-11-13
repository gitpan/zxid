/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-dap.gperf  */
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

#line 1 "c/zx-dap.gperf"

/* c/zx-dap-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-dap-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 29
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 14
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 44
/* maximum key range = 43, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_dap_hash (str, len)
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
      45, 45, 45, 45, 45, 23, 45, 30,  5, 45,
      45, 45, 45,  0, 45, 45,  0, 25,  0, 45,
      45, 20, 30, 20, 10, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
       0, 45, 15, 45, 45, 45, 45, 45, 45, 45,
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
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45
    };
  return len + asso_values[(unsigned char)str[0]];
}

static unsigned char lengthtable[] =
  {
     0,  0,  2,  0,  4,  0,  6,  7,  8,  4,  0,  6, 12,  0,
    14, 10,  6,  7,  8, 14,  0,  6,  0,  0,  4,  5,  6,  0,
     0,  9,  0,  6, 12, 13, 11, 10,  6,  0,  0, 14, 10, 11,
     0,  0, 14
  };

struct zx_el_tok zx_dap_el_tab[] =
  {
    {""}, {""},
#line 45 "c/zx-dap.gperf"
    {"dn", sizeof(struct zx_elem_s)},
    {""},
#line 27 "c/zx-dap.gperf"
    {"LDIF", sizeof(struct zx_dap_LDIF_s)},
    {""},
#line 33 "c/zx-dap.gperf"
    {"Notify", sizeof(struct zx_dap_Notify_s)},
#line 31 "c/zx-dap.gperf"
    {"NewData", sizeof(struct zx_dap_NewData_s)},
#line 26 "c/zx-dap.gperf"
    {"ItemData", sizeof(struct zx_dap_ItemData_s)},
#line 22 "c/zx-dap.gperf"
    {"Data", sizeof(struct zx_dap_Data_s)},
    {""},
#line 23 "c/zx-dap.gperf"
    {"Delete", sizeof(struct zx_dap_Delete_s)},
#line 32 "c/zx-dap.gperf"
    {"Notification", sizeof(struct zx_dap_Notification_s)},
    {""},
#line 34 "c/zx-dap.gperf"
    {"NotifyResponse", sizeof(struct zx_dap_NotifyResponse_s)},
#line 24 "c/zx-dap.gperf"
    {"DeleteItem", sizeof(struct zx_dap_DeleteItem_s)},
#line 43 "c/zx-dap.gperf"
    {"TestOp", sizeof(struct zx_dap_TestOp_s)},
#line 44 "c/zx-dap.gperf"
    {"Trigger", sizeof(struct zx_elem_s)},
#line 42 "c/zx-dap.gperf"
    {"TestItem", sizeof(struct zx_dap_TestItem_s)},
#line 25 "c/zx-dap.gperf"
    {"DeleteResponse", sizeof(struct zx_dap_DeleteResponse_s)},
    {""},
#line 46 "c/zx-dap.gperf"
    {"filter", sizeof(struct zx_elem_s)},
    {""}, {""},
#line 40 "c/zx-dap.gperf"
    {"Sort", sizeof(struct zx_elem_s)},
#line 35 "c/zx-dap.gperf"
    {"Query", sizeof(struct zx_dap_Query_s)},
#line 39 "c/zx-dap.gperf"
    {"Select", sizeof(struct zx_dap_Select_s)},
    {""}, {""},
#line 36 "c/zx-dap.gperf"
    {"QueryItem", sizeof(struct zx_dap_QueryItem_s)},
    {""},
#line 28 "c/zx-dap.gperf"
    {"Modify", sizeof(struct zx_dap_Modify_s)},
#line 41 "c/zx-dap.gperf"
    {"Subscription", sizeof(struct zx_dap_Subscription_s)},
#line 37 "c/zx-dap.gperf"
    {"QueryResponse", sizeof(struct zx_dap_QueryResponse_s)},
#line 18 "c/zx-dap.gperf"
    {"Aggregation", sizeof(struct zx_elem_s)},
#line 29 "c/zx-dap.gperf"
    {"ModifyItem", sizeof(struct zx_dap_ModifyItem_s)},
#line 19 "c/zx-dap.gperf"
    {"Create", sizeof(struct zx_dap_Create_s)},
    {""}, {""},
#line 30 "c/zx-dap.gperf"
    {"ModifyResponse", sizeof(struct zx_dap_ModifyResponse_s)},
#line 20 "c/zx-dap.gperf"
    {"CreateItem", sizeof(struct zx_dap_CreateItem_s)},
#line 38 "c/zx-dap.gperf"
    {"ResultQuery", sizeof(struct zx_dap_ResultQuery_s)},
    {""}, {""},
#line 21 "c/zx-dap.gperf"
    {"CreateResponse", sizeof(struct zx_dap_CreateResponse_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_dap_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_dap_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_dap_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_dap_el_tab[key];
          }
    }
  return 0;
}
#line 47 "c/zx-dap.gperf"

/* EOF */