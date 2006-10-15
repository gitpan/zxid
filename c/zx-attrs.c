/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_attrs -N zx_attr2tok c/zx-attrs.gperf  */
/* Computed positions: -k'1,3,5,$' */

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

#line 1 "c/zx-attrs.gperf"

/* c/zx-attrs.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 150
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 30
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 310
/* maximum key range = 304, duplicates = 1 */

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
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311,  10,  25,  10,  35,  30,
       65, 311, 311,  35, 311,   0, 105,  75, 110, 311,
       15,   0,  25,  70,  95, 135, 125,  65, 311, 311,
      311, 311, 311, 311, 311, 311, 311,   0,  25,  35,
        0,   0,  50, 115, 125,   5,  35,  20,  60,   5,
        0,  65,  85,  80,   5,  10,   5,  60,  85,  10,
       20,  60, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311, 311, 311, 311, 311,
      311, 311, 311, 311, 311, 311
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const unsigned char zx_attrs_lens[] =
  {
     2,  3,  4,  3,  5,  6,  8,  5,  7,  8,  9, 10,  7,  8,
    11, 12, 13, 19, 20,  2,  2, 18,  4, 15, 21, 17, 11,  7,
     3,  4,  5, 21,  7,  8,  9,  6, 23,  9, 11, 12,  3,  9,
     5,  6,  9, 30, 11,  2,  3, 29, 10,  6, 12,  8,  9, 10,
     6, 12, 13,  4,  5, 11,  7,  8, 15, 11, 12, 13,  4, 20,
     6, 12, 23,  9,  7,  8,  9,  5, 16,  7,  3, 19, 15,  6,
     7, 13,  9,  5, 16, 12, 13,  4, 10, 26,  7,  8,  9, 10,
    11, 12,  8, 10,  6, 12, 13,  9,  7,  5,  7,  8,  9, 10,
    12,  8,  9,  5,  6,  7,  8, 10, 27, 13,  9,  5, 18, 14,
    10, 12,  8, 14,  9,  3,  4,  8,  4,  8,  5,  9, 10, 12,
    10, 15,  3,  5, 10, 26, 13, 15, 21, 10
  };

const struct zx_tok zx_attrs[] =
  {
#line 106 "c/zx-attrs.gperf"
    {"id", "", 0},
#line 124 "c/zx-attrs.gperf"
    {"min", "", 0},
#line 128 "c/zx-attrs.gperf"
    {"name", "", 0},
#line 132 "c/zx-attrs.gperf"
    {"nym", "", 0},
#line 147 "c/zx-attrs.gperf"
    {"title", "", 0},
#line 131 "c/zx-attrs.gperf"
    {"number", "", 0},
#line 97 "c/zx-attrs.gperf"
    {"duration", "", 0},
#line 98 "c/zx-attrs.gperf"
    {"actor", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 28 "c/zx-attrs.gperf"
    {"Consent", "", 0},
#line 135 "c/zx-attrs.gperf"
    {"redirect", "", 0},
#line 129 "c/zx-attrs.gperf"
    {"namespace", "", 0},
#line 27 "c/zx-attrs.gperf"
    {"Comparison", "", 0},
#line 11 "c/zx-attrs.gperf"
    {"Address", "", 0},
#line 108 "c/zx-attrs.gperf"
    {"interact", "", 0},
#line 130 "c/zx-attrs.gperf"
    {"newEntryIDs", "", 0},
#line 23 "c/zx-attrs.gperf"
    {"AuthnInstant", "", 0},
#line 19 "c/zx-attrs.gperf"
    {"AttributeName", "", 0},
#line 24 "c/zx-attrs.gperf"
    {"AuthnRequestsSigned", "", 0},
#line 22 "c/zx-attrs.gperf"
    {"AuthenticationMethod", "", 0},
#line 43 "c/zx-attrs.gperf"
    {"Id", "", 0},
#line 158 "c/zx-attrs.gperf"
    {"Id", "wsu", zx_ns_tab + zx_xmlns_ix_wsu},
#line 20 "c/zx-attrs.gperf"
    {"AttributeNamespace", "", 0},
#line 90 "c/zx-attrs.gperf"
    {"code", "", 0},
#line 120 "c/zx-attrs.gperf"
    {"maxInteractTime", "", 0},
#line 21 "c/zx-attrs.gperf"
    {"AuthenticationInstant", "", 0},
#line 96 "c/zx-attrs.gperf"
    {"descriptionIDRefs", "", 0},
#line 94 "c/zx-attrs.gperf"
    {"contactType", "", 0},
#line 93 "c/zx-attrs.gperf"
    {"consent", "", 0},
#line 118 "c/zx-attrs.gperf"
    {"max", "", 0},
#line 89 "c/zx-attrs.gperf"
    {"case", "", 0},
#line 107 "c/zx-attrs.gperf"
    {"index", "", 0},
#line 17 "c/zx-attrs.gperf"
    {"AssertionIssueInstant", "", 0},
#line 91 "c/zx-attrs.gperf"
    {"comment", "", 0},
#line 100 "c/zx-attrs.gperf"
    {"entityID", "", 0},
#line 121 "c/zx-attrs.gperf"
    {"mechanism", "", 0},
#line 47 "c/zx-attrs.gperf"
    {"Issuer", "", 0},
#line 66 "c/zx-attrs.gperf"
    {"ReauthenticateOnOrAfter", "", 0},
#line 123 "c/zx-attrs.gperf"
    {"messageID", "", 0},
#line 33 "c/zx-attrs.gperf"
    {"Destination", "", 0},
#line 46 "c/zx-attrs.gperf"
    {"IssueInstant", "", 0},
#line 152 "c/zx-attrs.gperf"
    {"use", "", 0},
#line 42 "c/zx-attrs.gperf"
    {"IPAddress", "", 0},
#line 151 "c/zx-attrs.gperf"
    {"usage", "", 0},
#line 104 "c/zx-attrs.gperf"
    {"format", "", 0},
#line 45 "c/zx-attrs.gperf"
    {"IsPassive", "", 0},
#line 18 "c/zx-attrs.gperf"
    {"AttributeConsumingServiceIndex", "", 0},
#line 16 "c/zx-attrs.gperf"
    {"AssertionID", "", 0},
#line 41 "c/zx-attrs.gperf"
    {"ID", "", 0},
#line 150 "c/zx-attrs.gperf"
    {"uri", "", 0},
#line 14 "c/zx-attrs.gperf"
    {"AssertionConsumerServiceIndex", "", 0},
#line 149 "c/zx-attrs.gperf"
    {"updateType", "", 0},
#line 122 "c/zx-attrs.gperf"
    {"medium", "", 0},
#line 37 "c/zx-attrs.gperf"
    {"EncodingType", "", 0},
#line 127 "c/zx-attrs.gperf"
    {"multiple", "", 0},
#line 156 "c/zx-attrs.gperf"
    {"wantDSEPR", "", 0},
#line 38 "c/zx-attrs.gperf"
    {"ForceAuthn", "", 0},
#line 39 "c/zx-attrs.gperf"
    {"Format", "", 0},
#line 40 "c/zx-attrs.gperf"
    {"FriendlyName", "", 0},
#line 88 "c/zx-attrs.gperf"
    {"cacheDuration", "", 0},
#line 117 "c/zx-attrs.gperf"
    {"link", "", 0},
#line 29 "c/zx-attrs.gperf"
    {"Count", "", 0},
#line 141 "c/zx-attrs.gperf"
    {"resultsType", "", 0},
#line 111 "c/zx-attrs.gperf"
    {"issueTo", "", 0},
#line 32 "c/zx-attrs.gperf"
    {"Decision", "", 0},
#line 92 "c/zx-attrs.gperf"
    {"confirmationURI", "", 0},
#line 13 "c/zx-attrs.gperf"
    {"AllowCreate", "", 0},
#line 53 "c/zx-attrs.gperf"
    {"MinorVersion", "", 0},
#line 25 "c/zx-attrs.gperf"
    {"AuthorityKind", "", 0},
#line 148 "c/zx-attrs.gperf"
    {"type", "", 0},
#line 84 "c/zx-attrs.gperf"
    {"WantAssertionsSigned", "", 0},
#line 65 "c/zx-attrs.gperf"
    {"Reason", "", 0},
#line 63 "c/zx-attrs.gperf"
    {"ProviderName", "", 0},
#line 85 "c/zx-attrs.gperf"
    {"WantAuthnRequestsSigned", "", 0},
#line 112 "c/zx-attrs.gperf"
    {"itemIDRef", "", 0},
#line 155 "c/zx-attrs.gperf"
    {"version", "", 0},
#line 70 "c/zx-attrs.gperf"
    {"Resource", "", 0},
#line 109 "c/zx-attrs.gperf"
    {"isDefault", "", 0},
#line 10 "c/zx-attrs.gperf"
    {"xmlns", "", 0},
#line 68 "c/zx-attrs.gperf"
    {"RelationshipType", "", 0},
#line 101 "c/zx-attrs.gperf"
    {"entryID", "", 0},
#line 137 "c/zx-attrs.gperf"
    {"ref", "", 0},
#line 77 "c/zx-attrs.gperf"
    {"SessionNotOnOrAfter", "", 0},
#line 95 "c/zx-attrs.gperf"
    {"credentialLevel", "", 0},
#line 78 "c/zx-attrs.gperf"
    {"Target", "", 0},
#line 31 "c/zx-attrs.gperf"
    {"DNSName", "", 0},
#line 140 "c/zx-attrs.gperf"
    {"requiredChars", "", 0},
#line 146 "c/zx-attrs.gperf"
    {"timestamp", "", 0},
#line 58 "c/zx-attrs.gperf"
    {"Nonce", "", 0},
#line 72 "c/zx-attrs.gperf"
    {"ResponseLocation", "", 0},
#line 76 "c/zx-attrs.gperf"
    {"SessionIndex", "", 0},
#line 103 "c/zx-attrs.gperf"
    {"excludedChars", "", 0},
#line 54 "c/zx-attrs.gperf"
    {"Name", "", 0},
#line 110 "c/zx-attrs.gperf"
    {"isRequired", "", 0},
#line 116 "c/zx-attrs.gperf"
    {"libertyPrincipalIdentifier", "", 0},
#line 144 "c/zx-attrs.gperf"
    {"svcMDID", "", 0},
#line 102 "c/zx-attrs.gperf"
    {"errorURL", "", 0},
#line 59 "c/zx-attrs.gperf"
    {"NotBefore", "", 0},
#line 30 "c/zx-attrs.gperf"
    {"DNSAddress", "", 0},
#line 136 "c/zx-attrs.gperf"
    {"redirectURL", "", 0},
#line 50 "c/zx-attrs.gperf"
    {"MajorVersion", "", 0},
#line 115 "c/zx-attrs.gperf"
    {"language", "", 0},
#line 62 "c/zx-attrs.gperf"
    {"ProviderID", "", 0},
#line 143 "c/zx-attrs.gperf"
    {"signed", "", 0},
#line 60 "c/zx-attrs.gperf"
    {"NotOnOrAfter", "", 0},
#line 56 "c/zx-attrs.gperf"
    {"NameQualifier", "", 0},
#line 57 "c/zx-attrs.gperf"
    {"Namespace", "", 0},
#line 142 "c/zx-attrs.gperf"
    {"sharing", "", 0},
#line 157 "c/zx-attrs.gperf"
    {"Usage", "wsse", zx_ns_tab + zx_xmlns_ix_wsse},
#line 83 "c/zx-attrs.gperf"
    {"Version", "", 0},
#line 126 "c/zx-attrs.gperf"
    {"moreLink", "", 0},
#line 12 "c/zx-attrs.gperf"
    {"Algorithm", "", 0},
#line 71 "c/zx-attrs.gperf"
    {"ResponseID", "", 0},
#line 44 "c/zx-attrs.gperf"
    {"InResponseTo", "", 0},
#line 125 "c/zx-attrs.gperf"
    {"minChars", "", 0},
#line 69 "c/zx-attrs.gperf"
    {"RequestID", "", 0},
#line 154 "c/zx-attrs.gperf"
    {"value", "", 0},
#line 51 "c/zx-attrs.gperf"
    {"Method", "", 0},
#line 26 "c/zx-attrs.gperf"
    {"Binding", "", 0},
#line 49 "c/zx-attrs.gperf"
    {"Location", "", 0},
#line 64 "c/zx-attrs.gperf"
    {"ProxyCount", "", 0},
#line 15 "c/zx-attrs.gperf"
    {"AssertionConsumerServiceURL", "", 0},
#line 86 "c/zx-attrs.gperf"
    {"affiliationID", "", 0},
#line 67 "c/zx-attrs.gperf"
    {"Recipient", "", 0},
#line 139 "c/zx-attrs.gperf"
    {"reqID", "", 0},
#line 87 "c/zx-attrs.gperf"
    {"affiliationOwnerID", "", 0},
#line 99 "c/zx-attrs.gperf"
    {"mustUnderstand", "e", zx_ns_tab + zx_xmlns_ix_e},
#line 35 "c/zx-attrs.gperf"
    {"DeviceType", "", 0},
#line 34 "c/zx-attrs.gperf"
    {"DeviceInHand", "", 0},
#line 119 "c/zx-attrs.gperf"
    {"maxChars", "", 0},
#line 138 "c/zx-attrs.gperf"
    {"refToMessageID", "", 0},
#line 145 "c/zx-attrs.gperf"
    {"timeStamp", "", 0},
#line 48 "c/zx-attrs.gperf"
    {"Loc", "", 0},
#line 114 "c/zx-attrs.gperf"
    {"lang", "", 0},
#line 52 "c/zx-attrs.gperf"
    {"MimeType", "", 0},
#line 79 "c/zx-attrs.gperf"
    {"Type", "", 0},
#line 36 "c/zx-attrs.gperf"
    {"Encoding", "", 0},
#line 81 "c/zx-attrs.gperf"
    {"Value", "", 0},
#line 82 "c/zx-attrs.gperf"
    {"ValueType", "", 0},
#line 55 "c/zx-attrs.gperf"
    {"NameFormat", "", 0},
#line 74 "c/zx-attrs.gperf"
    {"SPProvidedID", "", 0},
#line 134 "c/zx-attrs.gperf"
    {"providerID", "", 0},
#line 73 "c/zx-attrs.gperf"
    {"SPNameQualifier", "", 0},
#line 80 "c/zx-attrs.gperf"
    {"URI", "", 0},
#line 113 "c/zx-attrs.gperf"
    {"label", "", 0},
#line 153 "c/zx-attrs.gperf"
    {"validUntil", "", 0},
#line 133 "c/zx-attrs.gperf"
    {"protocolSupportEnumeration", "", 0},
#line 159 "c/zx-attrs.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 61 "c/zx-attrs.gperf"
    {"ProtocolBinding", "", 0},
#line 105 "c/zx-attrs.gperf"
    {"governingAgreementRef", "", 0},
#line 75 "c/zx-attrs.gperf"
    {"SeedLength", "", 0}
  };

static const short lookup[] =
  {
      -1,   -1,   -1,   -1,   -1,   -1,   -1,    0,
       1,    2,   -1,   -1,   -1,    3,   -1,    4,
       5,   -1,    6,   -1,    7,   -1,    8,    9,
      10,   11,   -1,   12,   13,   -1,   -1,   14,
      15,   16,   17,   18,   -1, -194,   21,   22,
      23,   24,   25, -131,   -2,   -1,   26,   27,
      28,   29,   30,   31,   32,   33,   34,   -1,
      35,   -1,   36,   37,   -1,   38,   39,   40,
      41,   42,   43,   -1,   -1,   44,   45,   46,
      47,   48,   49,   50,   51,   52,   53,   54,
      55,   56,   57,   58,   59,   60,   61,   62,
      63,   -1,   64,   65,   66,   67,   68,   69,
      70,   71,   72,   73,   -1,   -1,   74,   75,
      76,   77,   78,   79,   80,   81,   82,   83,
      84,   85,   86,   87,   88,   89,   90,   91,
      92,   93,   94,   95,   96,   97,   98,   99,
     100,   -1,  101,  102,  103,  104,  105,   -1,
      -1,  106,   -1,   -1,  107,   -1,  108,  109,
     110,  111,   -1,  112,  113,  114,  115,  116,
     117,  118,   -1,  119,   -1,  120,  121,  122,
     123,   -1,   -1,  124,  125,  126,   -1,  127,
     128,  129,   -1,   -1,   -1,   -1,  130,   -1,
      -1,   -1,  131,  132,   -1,   -1,   -1,  133,
     134,   -1,   -1,   -1,  135,   -1,  136,   -1,
      -1,   -1,  137,  138,   -1,  139,   -1,   -1,
     140,   -1,   -1,   -1,   -1,  141,   -1,   -1,
     142,   -1,  143,   -1,   -1,   -1,   -1,  144,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  145,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  146,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  147,  148,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  149
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zx_attr2tok (str, len)
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
              if (len == zx_attrs_lens[index])
                {
                  register const char *s = zx_attrs[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zx_attrs[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &zx_attrs_lens[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordptr = &zx_attrs[TOTAL_KEYWORDS + lookup[offset]];
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
#line 160 "c/zx-attrs.gperf"

/* EOF - gperf -t -D -C -Nzx_attr2tok c/zx-attrs.gperf */
