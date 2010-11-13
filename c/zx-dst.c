/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-dst.gperf  */
/* Computed positions: -k'' */

#line 1 "c/zx-dst.gperf"

/* c/zx-dst-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-dst-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 2
#define MIN_WORD_LENGTH 10
#define MAX_WORD_LENGTH 12
#define MIN_HASH_VALUE 10
#define MAX_HASH_VALUE 12
/* maximum key range = 3, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
zx_dst_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  return len;
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 10,  0, 12
  };

struct zx_el_tok zx_dst_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 19 "c/zx-dst.gperf"
    {"TestResult", sizeof(struct zx_dst_TestResult_s)},
    {""},
#line 18 "c/zx-dst.gperf"
    {"ChangeFormat", sizeof(struct zx_elem_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_dst_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_dst_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_dst_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_dst_el_tab[key];
          }
    }
  return 0;
}
#line 20 "c/zx-dst.gperf"

/* EOF */