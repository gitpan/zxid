/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-tas3sol.gperf  */
/* Computed positions: -k'' */

#line 1 "c/zx-tas3sol.gperf"

/* c/zx-tas3sol-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-tas3sol-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 2
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 11
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 11
/* maximum key range = 8, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
zx_tas3sol_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  return len;
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0, 11
  };

struct zx_el_tok zx_tas3sol_el_tab[] =
  {
    {""}, {""}, {""}, {""},
#line 18 "c/zx-tas3sol.gperf"
    {"Dict", sizeof(struct zx_tas3sol_Dict_s)},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "c/zx-tas3sol.gperf"
    {"Obligations", sizeof(struct zx_tas3sol_Obligations_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_tas3sol_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_tas3sol_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_tas3sol_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_tas3sol_el_tab[key];
          }
    }
  return 0;
}
#line 20 "c/zx-tas3sol.gperf"

/* EOF */