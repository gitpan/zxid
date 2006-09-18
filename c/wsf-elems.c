/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zxwsf_elems -N zxwsf_elem2tok c/wsf-elems.gperf  */
/* Computed positions: -k'1,4,8,12' */

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

#line 1 "c/wsf-elems.gperf"

/* c/wsf-elems.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/wsf-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 190
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 282
/* maximum key range = 281, duplicates = 48 */

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
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283,  75, 100,  85,   5,  20,
       80, 283,  90,  10, 283, 155,   5,   5,  90,  80,
       55,  75,  30,  10,   0, 115,  15,  60, 283, 283,
      283, 283, 283, 283, 283,   0, 283,   5,   0, 105,
       20,   0,  30,  10,  25,  60, 283, 283,  75,   5,
       45,  45,  35,   5,  20,   0,   5,  40,  55, 283,
       10,  65,   5, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const unsigned char zxwsf_elems_lens[] =
  {
     2,  5,  7,  4,  4,  5,  5,  9,  6,  6,  4,  4,  5,  6,
     6,  6,  7,  8,  9, 10,  8,  8,  4,  6,  6, 18, 14,  6,
    13, 19, 21, 22, 18, 18,  9, 20, 20, 21, 27,  8, 29, 30,
    10,  6,  7,  7, 13, 19, 19,  5,  5, 12, 18, 18, 19, 19,
    10, 11, 12,  8,  9,  9, 20,  6,  9,  9,  9, 10, 11, 11,
    17, 14, 15, 12,  8,  9, 10, 10, 11,  7,  4, 16,  7,  7,
     8,  8, 15, 21,  7, 23,  4,  4,  5,  5, 11,  7,  7, 13,
    14, 16, 17, 13, 13, 14, 20, 21,  7,  9,  9,  9, 10, 10,
     6,  6, 12, 23, 10, 10, 11,  7,  7,  8, 14, 11, 17, 18,
     4,  4, 11, 12,  9,  9, 15, 11, 11, 22,  8, 19, 10, 10,
    10,  6,  6,  7,  8,  9,  6,  6,  7,  7, 13, 24, 15, 15,
    14, 14, 14, 15, 15, 13,  4,  5,  5,  7, 18, 14, 25,  4,
     4, 20,  7, 28, 19, 11, 13, 21, 13, 19, 26, 13, 14, 14,
     5, 19, 14, 14, 13, 18, 17, 17
  };

const struct zx_tok zxwsf_elems[] =
  {
#line 25 "c/wsf-elems.gperf"
    {"To", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 133 "c/wsf-elems.gperf"
    {"Token", "sec", zxwsf_ns_tab + zxwsf_xmlns_ix_sec},
#line 153 "c/wsf-elems.gperf"
    {"Timeout", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 112 "c/wsf-elems.gperf"
    {"Text", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 123 "c/wsf-elems.gperf"
    {"Text", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 182 "c/wsf-elems.gperf"
    {"Label", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 185 "c/wsf-elems.gperf"
    {"Label", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 150 "c/wsf-elems.gperf"
    {"Timestamp", "wsu", zxwsf_ns_tab + zxwsf_xmlns_ix_wsu},
#line 110 "c/wsf-elems.gperf"
    {"Select", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 122 "c/wsf-elems.gperf"
    {"Select", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 106 "c/wsf-elems.gperf"
    {"Item", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 120 "c/wsf-elems.gperf"
    {"Item", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 72 "c/wsf-elems.gperf"
    {"SvcMD", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 62 "c/wsf-elems.gperf"
    {"Status", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 125 "c/wsf-elems.gperf"
    {"Status", "lu", zxwsf_ns_tab + zxwsf_xmlns_ix_lu},
#line 111 "c/wsf-elems.gperf"
    {"Status", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 171 "c/wsf-elems.gperf"
    {"SvcMDID", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 16 "c/wsf-elems.gperf"
    {"Metadata", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 15 "c/wsf-elems.gperf"
    {"MessageID", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 81 "c/wsf-elems.gperf"
    {"SvcMDQuery", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 88 "c/wsf-elems.gperf"
    {"Envelope", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 93 "c/wsf-elems.gperf"
    {"Envelope", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 198 "c/wsf-elems.gperf"
    {"root", "", 0},
#line 91 "c/wsf-elems.gperf"
    {"detail", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 96 "c/wsf-elems.gperf"
    {"detail", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 82 "c/wsf-elems.gperf"
    {"SvcMDQueryResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 194 "c/wsf-elems.gperf"
    {"SessionSubject", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 39 "c/wsf-elems.gperf"
    {"Sender", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 83 "c/wsf-elems.gperf"
    {"SvcMDRegister", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 73 "c/wsf-elems.gperf"
    {"SvcMDAssociationAdd", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 77 "c/wsf-elems.gperf"
    {"SvcMDAssociationQuery", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 75 "c/wsf-elems.gperf"
    {"SvcMDAssociationDelete", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 36 "c/wsf-elems.gperf"
    {"InteractionService", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 104 "c/wsf-elems.gperf"
    {"InteractionService", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 22 "c/wsf-elems.gperf"
    {"RelatesTo", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 105 "c/wsf-elems.gperf"
    {"InteractionStatement", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 119 "c/wsf-elems.gperf"
    {"InteractionStatement", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 84 "c/wsf-elems.gperf"
    {"SvcMDRegisterResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 74 "c/wsf-elems.gperf"
    {"SvcMDAssociationAddResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 138 "c/wsf-elems.gperf"
    {"Embedded", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 78 "c/wsf-elems.gperf"
    {"SvcMDAssociationQueryResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 76 "c/wsf-elems.gperf"
    {"SvcMDAssociationDeleteResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 126 "c/wsf-elems.gperf"
    {"TestResult", "lu", zxwsf_ns_tab + zxwsf_xmlns_ix_lu},
#line 190 "c/wsf-elems.gperf"
    {"Issuer", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 101 "c/wsf-elems.gperf"
    {"Inquiry", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 116 "c/wsf-elems.gperf"
    {"Inquiry", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 196 "c/wsf-elems.gperf"
    {"EncryptedData", "xenc", zxwsf_ns_tab + zxwsf_xmlns_ix_xenc},
#line 49 "c/wsf-elems.gperf"
    {"EncryptedResourceID", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 98 "c/wsf-elems.gperf"
    {"EncryptedResourceID", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 183 "c/wsf-elems.gperf"
    {"Value", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 186 "c/wsf-elems.gperf"
    {"Value", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 85 "c/wsf-elems.gperf"
    {"SvcMDReplace", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 102 "c/wsf-elems.gperf"
    {"InteractionRequest", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 117 "c/wsf-elems.gperf"
    {"InteractionRequest", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 103 "c/wsf-elems.gperf"
    {"InteractionResponse", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 118 "c/wsf-elems.gperf"
    {"InteractionResponse", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 24 "c/wsf-elems.gperf"
    {"RetryAfter", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 51 "c/wsf-elems.gperf"
    {"InsertEntry", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 189 "c/wsf-elems.gperf"
    {"IssueInstant", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 156 "c/wsf-elems.gperf"
    {"Endpoint", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 107 "c/wsf-elems.gperf"
    {"Parameter", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 121 "c/wsf-elems.gperf"
    {"Parameter", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 86 "c/wsf-elems.gperf"
    {"SvcMDReplaceResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 52 "c/wsf-elems.gperf"
    {"Modify", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 50 "c/wsf-elems.gperf"
    {"Extension", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 124 "c/wsf-elems.gperf"
    {"Extension", "lu", zxwsf_ns_tab + zxwsf_xmlns_ix_lu},
#line 99 "c/wsf-elems.gperf"
    {"Extension", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 20 "c/wsf-elems.gperf"
    {"ProblemIRI", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 161 "c/wsf-elems.gperf"
    {"ServiceType", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 170 "c/wsf-elems.gperf"
    {"ServiceType", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 12 "c/wsf-elems.gperf"
    {"EndpointReference", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 34 "c/wsf-elems.gperf"
    {"EndpointUpdate", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 63 "c/wsf-elems.gperf"
    {"EndpointContext", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 193 "c/wsf-elems.gperf"
    {"ProxySubject", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 141 "c/wsf-elems.gperf"
    {"Password", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 176 "c/wsf-elems.gperf"
    {"Signature", "ds", zxwsf_ns_tab + zxwsf_xmlns_ix_ds},
#line 59 "c/wsf-elems.gperf"
    {"ResourceID", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 109 "c/wsf-elems.gperf"
    {"ResourceID", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 134 "c/wsf-elems.gperf"
    {"TokenPolicy", "sec", zxwsf_ns_tab + zxwsf_xmlns_ix_sec},
#line 149 "c/wsf-elems.gperf"
    {"Expires", "wsu", zxwsf_ns_tab + zxwsf_xmlns_ix_wsu},
#line 14 "c/wsf-elems.gperf"
    {"From", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 60 "c/wsf-elems.gperf"
    {"ResourceOffering", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 26 "c/wsf-elems.gperf"
    {"Consent", "b12", zxwsf_ns_tab + zxwsf_xmlns_ix_b12},
#line 32 "c/wsf-elems.gperf"
    {"Consent", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 154 "c/wsf-elems.gperf"
    {"Abstract", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 164 "c/wsf-elems.gperf"
    {"Abstract", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 61 "c/wsf-elems.gperf"
    {"ServiceInstance", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 195 "c/wsf-elems.gperf"
    {"RequestedAuthnContext", "sp", zxwsf_ns_tab + zxwsf_xmlns_ix_sp},
#line 148 "c/wsf-elems.gperf"
    {"Created", "wsu", zxwsf_ns_tab + zxwsf_xmlns_ix_wsu},
#line 129 "c/wsf-elems.gperf"
    {"ResourceAccessStatement", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 181 "c/wsf-elems.gperf"
    {"Hint", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 184 "c/wsf-elems.gperf"
    {"Hint", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 55 "c/wsf-elems.gperf"
    {"Query", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 67 "c/wsf-elems.gperf"
    {"Query", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 79 "c/wsf-elems.gperf"
    {"SvcMDDelete", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 11 "c/wsf-elems.gperf"
    {"Address", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 166 "c/wsf-elems.gperf"
    {"Address", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 199 "c/wsf-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 40 "c/wsf-elems.gperf"
    {"TargetIdentity", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 69 "c/wsf-elems.gperf"
    {"RequestedService", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 135 "c/wsf-elems.gperf"
    {"TransitedProvider", "sec", zxwsf_ns_tab + zxwsf_xmlns_ix_sec},
#line 56 "c/wsf-elems.gperf"
    {"QueryResponse", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 68 "c/wsf-elems.gperf"
    {"QueryResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 130 "c/wsf-elems.gperf"
    {"SessionContext", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 58 "c/wsf-elems.gperf"
    {"RequestedServiceType", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 136 "c/wsf-elems.gperf"
    {"TransitedProviderPath", "sec", zxwsf_ns_tab + zxwsf_xmlns_ix_sec},
#line 23 "c/wsf-elems.gperf"
    {"ReplyTo", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 35 "c/wsf-elems.gperf"
    {"Framework", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 127 "c/wsf-elems.gperf"
    {"Framework", "sbf", zxwsf_ns_tab + zxwsf_xmlns_ix_sbf},
#line 64 "c/wsf-elems.gperf"
    {"Framework", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 151 "c/wsf-elems.gperf"
    {"SoapAction", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 162 "c/wsf-elems.gperf"
    {"SoapAction", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 90 "c/wsf-elems.gperf"
    {"Header", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 95 "c/wsf-elems.gperf"
    {"Header", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 197 "c/wsf-elems.gperf"
    {"EncryptedKey", "xenc", zxwsf_ns_tab + zxwsf_xmlns_ix_xenc},
#line 131 "c/wsf-elems.gperf"
    {"SessionContextStatement", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 172 "c/wsf-elems.gperf"
    {"faultactor", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 177 "c/wsf-elems.gperf"
    {"faultactor", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 27 "c/wsf-elems.gperf"
    {"Correlation", "b12", zxwsf_ns_tab + zxwsf_xmlns_ix_b12},
#line 97 "c/wsf-elems.gperf"
    {"Confirm", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 114 "c/wsf-elems.gperf"
    {"Confirm", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 143 "c/wsf-elems.gperf"
    {"Security", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 53 "c/wsf-elems.gperf"
    {"ModifyResponse", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 47 "c/wsf-elems.gperf"
    {"Description", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 48 "c/wsf-elems.gperf"
    {"EncryptResourceID", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 45 "c/wsf-elems.gperf"
    {"AuthorizeRequester", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 100 "c/wsf-elems.gperf"
    {"Help", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 115 "c/wsf-elems.gperf"
    {"Help", "is", zxwsf_ns_tab + zxwsf_xmlns_ix_is},
#line 57 "c/wsf-elems.gperf"
    {"RemoveEntry", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 191 "c/wsf-elems.gperf"
    {"NumberOfUses", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 173 "c/wsf-elems.gperf"
    {"faultcode", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 178 "c/wsf-elems.gperf"
    {"faultcode", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 70 "c/wsf-elems.gperf"
    {"SecurityContext", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 174 "c/wsf-elems.gperf"
    {"faultstring", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 179 "c/wsf-elems.gperf"
    {"faultstring", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 144 "c/wsf-elems.gperf"
    {"SecurityTokenReference", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 29 "c/wsf-elems.gperf"
    {"Provider", "b12", zxwsf_ns_tab + zxwsf_xmlns_ix_b12},
#line 80 "c/wsf-elems.gperf"
    {"SvcMDDeleteResponse", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 158 "c/wsf-elems.gperf"
    {"ProviderID", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 192 "c/wsf-elems.gperf"
    {"ProviderID", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 168 "c/wsf-elems.gperf"
    {"ProviderID", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 10 "c/wsf-elems.gperf"
    {"Action", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 165 "c/wsf-elems.gperf"
    {"Action", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 163 "c/wsf-elems.gperf"
    {"WsdlURI", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 146 "c/wsf-elems.gperf"
    {"Username", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 142 "c/wsf-elems.gperf"
    {"Reference", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 157 "c/wsf-elems.gperf"
    {"Option", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 167 "c/wsf-elems.gperf"
    {"Option", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 54 "c/wsf-elems.gperf"
    {"Options", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 66 "c/wsf-elems.gperf"
    {"Options", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 147 "c/wsf-elems.gperf"
    {"UsernameToken", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 145 "c/wsf-elems.gperf"
    {"TransformationParameters", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 38 "c/wsf-elems.gperf"
    {"RedirectRequest", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 108 "c/wsf-elems.gperf"
    {"RedirectRequest", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 152 "c/wsf-elems.gperf"
    {"SecurityMechID", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 169 "c/wsf-elems.gperf"
    {"SecurityMechID", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 159 "c/wsf-elems.gperf"
    {"SecurityMechID", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 42 "c/wsf-elems.gperf"
    {"UserInteraction", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 113 "c/wsf-elems.gperf"
    {"UserInteraction", "is12", zxwsf_ns_tab + zxwsf_xmlns_ix_is12},
#line 18 "c/wsf-elems.gperf"
    {"ProblemHeader", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 65 "c/wsf-elems.gperf"
    {"Keys", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 89 "c/wsf-elems.gperf"
    {"Fault", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 94 "c/wsf-elems.gperf"
    {"Fault", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 13 "c/wsf-elems.gperf"
    {"FaultTo", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 19 "c/wsf-elems.gperf"
    {"ProblemHeaderQName", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 71 "c/wsf-elems.gperf"
    {"ServiceContext", "di", zxwsf_ns_tab + zxwsf_xmlns_ix_di},
#line 128 "c/wsf-elems.gperf"
    {"ProxyInfoConfirmationData", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 87 "c/wsf-elems.gperf"
    {"Body", "dise", zxwsf_ns_tab + zxwsf_xmlns_ix_dise},
#line 92 "c/wsf-elems.gperf"
    {"Body", "e", zxwsf_ns_tab + zxwsf_xmlns_ix_e},
#line 188 "c/wsf-elems.gperf"
    {"AssertionIDReference", "sa11", zxwsf_ns_tab + zxwsf_xmlns_ix_sa11},
#line 175 "c/wsf-elems.gperf"
    {"KeyInfo", "ds", zxwsf_ns_tab + zxwsf_xmlns_ix_ds},
#line 132 "c/wsf-elems.gperf"
    {"ValidityRestrictionCondition", "sec12", zxwsf_ns_tab + zxwsf_xmlns_ix_sec12},
#line 21 "c/wsf-elems.gperf"
    {"ReferenceParameters", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 46 "c/wsf-elems.gperf"
    {"Credentials", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 155 "c/wsf-elems.gperf"
    {"CredentialRef", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 43 "c/wsf-elems.gperf"
    {"AuthenticateRequester", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 139 "c/wsf-elems.gperf"
    {"KeyIdentifier", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 137 "c/wsf-elems.gperf"
    {"BinarySecurityToken", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 44 "c/wsf-elems.gperf"
    {"AuthenticateSessionContext", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 17 "c/wsf-elems.gperf"
    {"ProblemAction", "a", zxwsf_ns_tab + zxwsf_xmlns_ix_a},
#line 31 "c/wsf-elems.gperf"
    {"ApplicationEPR", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 160 "c/wsf-elems.gperf"
    {"ServiceNameRef", "di12", zxwsf_ns_tab + zxwsf_xmlns_ix_di12},
#line 140 "c/wsf-elems.gperf"
    {"Nonce", "wsse", zxwsf_ns_tab + zxwsf_xmlns_ix_wsse},
#line 180 "c/wsf-elems.gperf"
    {"RequestAuthnContext", "ff12", zxwsf_ns_tab + zxwsf_xmlns_ix_ff12},
#line 30 "c/wsf-elems.gperf"
    {"UsageDirective", "b12", zxwsf_ns_tab + zxwsf_xmlns_ix_b12},
#line 41 "c/wsf-elems.gperf"
    {"UsageDirective", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 187 "c/wsf-elems.gperf"
    {"KeyDescriptor", "md", zxwsf_ns_tab + zxwsf_xmlns_ix_md},
#line 33 "c/wsf-elems.gperf"
    {"CredentialsContext", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b},
#line 28 "c/wsf-elems.gperf"
    {"ProcessingContext", "b12", zxwsf_ns_tab + zxwsf_xmlns_ix_b12},
#line 37 "c/wsf-elems.gperf"
    {"ProcessingContext", "b", zxwsf_ns_tab + zxwsf_xmlns_ix_b}
  };

static const short lookup[] =
  {
      -1,   -1,    0,   -1,   -1,    1,   -1,    2,
      -1, -450, -202, -185,   -2,   -1,    7,   -1,
    -208, -182,   -2, -448,   12, -217,   16,   17,
      18,   19, -177,   -3, -446,   22,   -1, -444,
      -1,   25,   26,   -1,   27,   -1,   28,   29,
      -1,   30,   31, -244,   34, -242,   37,   38,
      39,   40,   41, -155,   -2, -158,   -2,   42,
      43, -442,   46, -440, -438,   -1,   51, -436,
    -434,   56,   57,   58,   59, -263,   62,   63,
    -130,   -2, -432,   67, -430,   70,   -1,   71,
      72,   -1,   73,   74,   75, -427,   78,   79,
      -1,   80,   -1,   81, -425, -423,   -1,   86,
      87,   88,   89, -421, -419,   94, -417,   97,
      98,   -1,   99,  100, -415,  103,  104,  105,
     106,   -1, -413, -407, -405,  114,  115,   -1,
    -403,  118, -401,  121,  122,   -1,  123,  124,
     125, -398,   -1,  128,  129,   -1, -396,  132,
    -394,  135,  136,  137, -392, -387,  143,  144,
     145,   -1, -385, -383,  150,  151, -342,  -38,
      -2,   -1, -381, -347,  -33,   -2,  159,  160,
    -357,   -1,  163,  164,  165,  166,  -29,   -2,
      -1, -370,  169,   -1,  170,  171,  172,   -1,
     173,   -1,  174,  -23,   -2,  175,   -1,  176,
     177,   -1,  178,   -1,  179,  180,  -36,   -3,
     -42,   -2,  -44,   -2,  -49,   -2,   -1,  181,
     182,  -52,   -3,  -57,   -2,  -60,   -2,  -64,
      -2,  183,  -71,   -2,  -74,   -2,  -78,   -2,
     -80,   -2,   -1, -411,   -6,   -2,  -83,   -3,
     -89,   -2,  -95,   -2,  -98,   -2, -100,   -2,
    -106,   -2, -108,   -2, -114,   -2,  186, -122,
      -2, -126,   -3, -136,   -2, -138,   -2, -141,
      -2, -143,   -2, -146,   -2, -167,   -2, -170,
      -2, -180,   -2, -187,   -2,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  187,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -2,   -2, -471
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zxwsf_elem2tok (str, len)
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
              if (len == zxwsf_elems_lens[index])
                {
                  register const char *s = zxwsf_elems[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zxwsf_elems[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &zxwsf_elems_lens[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordptr = &zxwsf_elems[TOTAL_KEYWORDS + lookup[offset]];
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
#line 200 "c/wsf-elems.gperf"

/* EOF - gperf -t -D -C -Nzxwsf_elem2tok c/wsf-elems.gperf */
