/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-xasp.gperf  */
/* Computed positions: -k'' */

#line 1 "c/zx-xasp.gperf"

/* c/zx-xasp-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-xasp-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 2
#define MIN_WORD_LENGTH 16
#define MAX_WORD_LENGTH 23
#define MIN_HASH_VALUE 16
#define MAX_HASH_VALUE 23
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
zx_xasp_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  return len;
}

static unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0, 16,  0,  0,  0,  0,  0,  0, 23
  };

struct zx_el_tok zx_xasp_el_tab[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "c/zx-xasp.gperf"
    {"XACMLPolicyQuery", sizeof(struct zx_xasp_XACMLPolicyQuery_s)},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 18 "c/zx-xasp.gperf"
    {"XACMLAuthzDecisionQuery", sizeof(struct zx_xasp_XACMLAuthzDecisionQuery_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_xasp_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_xasp_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_xasp_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_xasp_el_tab[key];
          }
    }
  return 0;
}
#line 20 "c/zx-xasp.gperf"

/* EOF */
