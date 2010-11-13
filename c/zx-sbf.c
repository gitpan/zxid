/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-sbf.gperf  */
/* Computed positions: -k'' */

#line 1 "c/zx-sbf.gperf"

/* c/zx-sbf-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-sbf-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 1
#define MIN_WORD_LENGTH 9
#define MAX_WORD_LENGTH 9
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 9
/* maximum key range = 1, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
zx_sbf_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  return len;
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  9
  };

struct zx_el_tok zx_sbf_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 18 "c/zx-sbf.gperf"
    {"Framework", sizeof(struct zx_sbf_Framework_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_sbf_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_sbf_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_sbf_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_sbf_el_tab[key];
          }
    }
  return 0;
}
#line 19 "c/zx-sbf.gperf"

/* EOF */
