
#include "zx.h"

struct zx_ns_s ns_a = { 0, sizeof("prefix")-1,"prefix", sizeof("url")-1,"url" };

struct zx_ns_s ns_tab[] = {
  { 0, sizeof("prefix0")-1,"prefix0", sizeof("url")-1,"url" },
  { 0, sizeof("prefix1")-1,"prefix1", sizeof("url")-1,"url" },
  { 0, sizeof("prefix2")-1,"prefix2", sizeof("url")-1,"url" }
};

struct zx_tok test[] = { { "foo", "", ns_tab + 2 } };


int main(int argc, char** argv)
{
  printf("prefix(%.*s)\n", test[0].ns->prefix_len, test[0].ns->prefix);
  return 0;
}

