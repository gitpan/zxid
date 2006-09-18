/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zxmd_elems -N zxmd_elem2tok c/saml2md-elems.gperf  */
/* Computed positions: -k'1,6,11' */

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

#line 1 "c/saml2md-elems.gperf"

/* c/saml2md-elems.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/saml2md-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 178
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 48
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 280
/* maximum key range = 280, duplicates = 19 */

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
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281,   5,   0, 100,  45,  60,
      115,   0,   5,  70,  25, 115,   5,  90,  10,  15,
      100,   5,   0,  20,  30,   0, 281, 281, 145,  15,
      281, 281, 281, 281, 281, 281, 281,  55,  65,  45,
       60,   0,  90, 281,   5,  20, 281, 281,   0,   5,
       35,  20,  60, 281,  80,  35,   0, 120, 281, 281,
       40,  95,  50, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281, 281, 281, 281, 281,
      281, 281, 281, 281, 281, 281
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const unsigned char zxmd_elems_lens[] =
  {
     1,  1,  9,  6,  9, 15,  1,  9,  9, 15,  6,  4, 15,  1,
     8,  9, 10,  7,  7, 13,  9, 15, 16, 32,  8, 15, 15, 37,
    38, 14,  6, 17,  8, 24,  6, 27, 18, 19, 11, 22, 13, 19,
     6, 27, 23, 14, 12, 12,  8, 15, 15, 16, 16,  7, 14, 25,
    11, 12, 23, 23,  9, 10, 21, 21, 12,  8,  4, 15, 16, 18,
    14, 10, 22, 13, 19, 20, 12,  8, 15,  1, 12,  8,  9, 10,
    11,  7,  9, 10, 12, 12, 24, 25, 17, 13, 19, 25, 12,  8,
    14,  7, 18,  9, 10, 10, 12, 18, 18, 15, 16, 22, 18, 14,
    26,  7,  7, 16, 13,  5, 11,  7,  8,  6, 12,  8, 19, 16,
    22, 13, 13, 19, 20, 16, 27, 28, 15, 15, 16,  7,  7, 18,
    19, 11, 23, 19, 15, 16, 17, 13, 10, 11, 22, 13, 13, 36,
    38,  8, 14, 12,  8, 11,  7, 16,  7, 28, 16, 16, 16, 31,
    37, 18, 20, 48, 16, 16, 12,  7, 15, 15
  };

const struct zx_tok zxmd_elems[] =
  {
#line 118 "c/saml2md-elems.gperf"
    {"G", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 128 "c/saml2md-elems.gperf"
    {"Q", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 19 "c/saml2md-elems.gperf"
    {"Reference", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 79 "c/saml2md-elems.gperf"
    {"Advice", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 80 "c/saml2md-elems.gperf"
    {"Assertion", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 20 "c/saml2md-elems.gperf"
    {"RetrievalMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 138 "c/saml2md-elems.gperf"
    {"Y", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 148 "c/saml2md-elems.gperf"
    {"GivenName", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 167 "c/saml2md-elems.gperf"
    {"GivenName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 172 "c/saml2md-elems.gperf"
    {"AssertionURIRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 16 "c/saml2md-elems.gperf"
    {"Object", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 130 "c/saml2md-elems.gperf"
    {"Seed", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 102 "c/saml2md-elems.gperf"
    {"AgreementMethod", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 120 "c/saml2md-elems.gperf"
    {"J", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 129 "c/saml2md-elems.gperf"
    {"SPKISexp", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 22 "c/saml2md-elems.gperf"
    {"Signature", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 95 "c/saml2md-elems.gperf"
    {"OneTimeUse", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 161 "c/saml2md-elems.gperf"
    {"SurName", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 169 "c/saml2md-elems.gperf"
    {"SurName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 114 "c/saml2md-elems.gperf"
    {"ReferenceList", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 180 "c/saml2md-elems.gperf"
    {"Statement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 23 "c/saml2md-elems.gperf"
    {"SignatureMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 113 "c/saml2md-elems.gperf"
    {"RecipientKeyInfo", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 154 "c/saml2md-elems.gperf"
    {"RegisterNameIdentifierServiceURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 101 "c/saml2md-elems.gperf"
    {"TestElem", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 139 "c/saml2md-elems.gperf"
    {"AffiliateMember", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 163 "c/saml2md-elems.gperf"
    {"AffiliateMember", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 152 "c/saml2md-elems.gperf"
    {"RegisterNameIdentifierProtocolProfile", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 153 "c/saml2md-elems.gperf"
    {"RegisterNameIdentifierServiceReturnURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 85 "c/saml2md-elems.gperf"
    {"AuthnStatement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 78 "c/saml2md-elems.gperf"
    {"Action", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 55 "c/saml2md-elems.gperf"
    {"AuthnQueryService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 174 "c/saml2md-elems.gperf"
    {"Audience", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 49 "c/saml2md-elems.gperf"
    {"AssertionConsumerService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 87 "c/saml2md-elems.gperf"
    {"BaseID", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 34 "c/saml2md-elems.gperf"
    {"AssertionConsumerServiceURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 71 "c/saml2md-elems.gperf"
    {"RequestedAttribute", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 77 "c/saml2md-elems.gperf"
    {"SingleSignOnService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 116 "c/saml2md-elems.gperf"
    {"DigestValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 159 "c/saml2md-elems.gperf"
    {"SingleSignOnServiceURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 187 "c/saml2md-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 140 "c/saml2md-elems.gperf"
    {"AuthnRequestsSigned", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 94 "c/saml2md-elems.gperf"
    {"NameID", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 158 "c/saml2md-elems.gperf"
    {"SingleSignOnProtocolProfile", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 175 "c/saml2md-elems.gperf"
    {"AuthenticatingAuthority", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 171 "c/saml2md-elems.gperf"
    {"AssertionIDRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 41 "c/saml2md-elems.gperf"
    {"Organization", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 66 "c/saml2md-elems.gperf"
    {"Organization", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 117 "c/saml2md-elems.gperf"
    {"Exponent", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 44 "c/saml2md-elems.gperf"
    {"OrganizationURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 69 "c/saml2md-elems.gperf"
    {"OrganizationURL", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 43 "c/saml2md-elems.gperf"
    {"OrganizationName", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 68 "c/saml2md-elems.gperf"
    {"OrganizationName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 97 "c/saml2md-elems.gperf"
    {"Subject", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 72 "c/saml2md-elems.gperf"
    {"RoleDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 50 "c/saml2md-elems.gperf"
    {"AssertionIDRequestService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 75 "c/saml2md-elems.gperf"
    {"ServiceName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 12 "c/saml2md-elems.gperf"
    {"DigestMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 42 "c/saml2md-elems.gperf"
    {"OrganizationDisplayName", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 67 "c/saml2md-elems.gperf"
    {"OrganizationDisplayName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 81 "c/saml2md-elems.gperf"
    {"Attribute", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 185 "c/saml2md-elems.gperf"
    {"OAEPparams", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 33 "c/saml2md-elems.gperf"
    {"AffiliationDescriptor", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 47 "c/saml2md-elems.gperf"
    {"AffiliationDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 56 "c/saml2md-elems.gperf"
    {"AuthzService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 21 "c/saml2md-elems.gperf"
    {"SPKIData", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 186 "c/saml2md-elems.gperf"
    {"root", "", 0},
#line 141 "c/saml2md-elems.gperf"
    {"AuthnServiceURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 53 "c/saml2md-elems.gperf"
    {"AttributeService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 82 "c/saml2md-elems.gperf"
    {"AttributeStatement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 26 "c/saml2md-elems.gperf"
    {"SignatureValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 27 "c/saml2md-elems.gperf"
    {"SignedInfo", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 86 "c/saml2md-elems.gperf"
    {"AuthzDecisionStatement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 105 "c/saml2md-elems.gperf"
    {"DataReference", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 83 "c/saml2md-elems.gperf"
    {"AudienceRestriction", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 65 "c/saml2md-elems.gperf"
    {"NameIDMappingService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 45 "c/saml2md-elems.gperf"
    {"SPDescriptor", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 15 "c/saml2md-elems.gperf"
    {"Manifest", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 73 "c/saml2md-elems.gperf"
    {"SPSSODescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 124 "c/saml2md-elems.gperf"
    {"P", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 160 "c/saml2md-elems.gperf"
    {"SoapEndpoint", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 92 "c/saml2md-elems.gperf"
    {"Evidence", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 38 "c/saml2md-elems.gperf"
    {"Extension", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 61 "c/saml2md-elems.gperf"
    {"Extensions", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 18 "c/saml2md-elems.gperf"
    {"RSAKeyValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 17 "c/saml2md-elems.gperf"
    {"PGPData", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 179 "c/saml2md-elems.gperf"
    {"Condition", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 88 "c/saml2md-elems.gperf"
    {"Conditions", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 143 "c/saml2md-elems.gperf"
    {"EmailAddress", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 166 "c/saml2md-elems.gperf"
    {"EmailAddress", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 54 "c/saml2md-elems.gperf"
    {"AuthnAuthorityDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 52 "c/saml2md-elems.gperf"
    {"AttributeConsumingService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 25 "c/saml2md-elems.gperf"
    {"SignatureProperty", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 39 "c/saml2md-elems.gperf"
    {"IDPDescriptor", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 24 "c/saml2md-elems.gperf"
    {"SignatureProperties", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 48 "c/saml2md-elems.gperf"
    {"ArtifactResolutionService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 168 "c/saml2md-elems.gperf"
    {"NameIDFormat", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 14 "c/saml2md-elems.gperf"
    {"KeyValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 181 "c/saml2md-elems.gperf"
    {"CarriedKeyName", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 121 "c/saml2md-elems.gperf"
    {"KeyName", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 74 "c/saml2md-elems.gperf"
    {"ServiceDescription", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 28 "c/saml2md-elems.gperf"
    {"Transform", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 29 "c/saml2md-elems.gperf"
    {"Transforms", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 115 "c/saml2md-elems.gperf"
    {"Transforms", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 107 "c/saml2md-elems.gperf"
    {"EncryptedKey", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 36 "c/saml2md-elems.gperf"
    {"EntitiesDescriptor", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 59 "c/saml2md-elems.gperf"
    {"EntitiesDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 100 "c/saml2md-elems.gperf"
    {"SubjectLocality", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 96 "c/saml2md-elems.gperf"
    {"ProxyRestriction", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 32 "c/saml2md-elems.gperf"
    {"AdditionalMetaLocation", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 90 "c/saml2md-elems.gperf"
    {"EncryptedAttribute", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 173 "c/saml2md-elems.gperf"
    {"AttributeValue", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 46 "c/saml2md-elems.gperf"
    {"AdditionalMetadataLocation", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 142 "c/saml2md-elems.gperf"
    {"Company", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 165 "c/saml2md-elems.gperf"
    {"Company", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 119 "c/saml2md-elems.gperf"
    {"HMACOutputLength", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 70 "c/saml2md-elems.gperf"
    {"PDPDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 137 "c/saml2md-elems.gperf"
    {"XPath", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 11 "c/saml2md-elems.gperf"
    {"DSAKeyValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 131 "c/saml2md-elems.gperf"
    {"X509CRL", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 122 "c/saml2md-elems.gperf"
    {"MgmtData", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 93 "c/saml2md-elems.gperf"
    {"Issuer", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 84 "c/saml2md-elems.gperf"
    {"AuthnContext", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 183 "c/saml2md-elems.gperf"
    {"KA_Nonce", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 76 "c/saml2md-elems.gperf"
    {"SingleLogoutService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 177 "c/saml2md-elems.gperf"
    {"AuthnContextDecl", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 157 "c/saml2md-elems.gperf"
    {"SingleLogoutServiceURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 40 "c/saml2md-elems.gperf"
    {"KeyDescriptor", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 63 "c/saml2md-elems.gperf"
    {"KeyDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 178 "c/saml2md-elems.gperf"
    {"AuthnContextDeclRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 176 "c/saml2md-elems.gperf"
    {"AuthnContextClassRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 164 "c/saml2md-elems.gperf"
    {"AttributeProfile", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 155 "c/saml2md-elems.gperf"
    {"SingleLogoutProtocolProfile", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 156 "c/saml2md-elems.gperf"
    {"SingleLogoutServiceReturnURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 162 "c/saml2md-elems.gperf"
    {"TelephoneNumber", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 170 "c/saml2md-elems.gperf"
    {"TelephoneNumber", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 135 "c/saml2md-elems.gperf"
    {"X509SerialNumber", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 149 "c/saml2md-elems.gperf"
    {"KeySize", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 184 "c/saml2md-elems.gperf"
    {"KeySize", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 89 "c/saml2md-elems.gperf"
    {"EncryptedAssertion", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 98 "c/saml2md-elems.gperf"
    {"SubjectConfirmation", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 91 "c/saml2md-elems.gperf"
    {"EncryptedID", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 99 "c/saml2md-elems.gperf"
    {"SubjectConfirmationData", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 64 "c/saml2md-elems.gperf"
    {"ManageNameIDService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 132 "c/saml2md-elems.gperf"
    {"X509Certificate", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 62 "c/saml2md-elems.gperf"
    {"IDPSSODescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 112 "c/saml2md-elems.gperf"
    {"OriginatorKeyInfo", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 106 "c/saml2md-elems.gperf"
    {"EncryptedData", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 103 "c/saml2md-elems.gperf"
    {"CipherData", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 182 "c/saml2md-elems.gperf"
    {"CipherValue", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 10 "c/saml2md-elems.gperf"
    {"CanonicalizationMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 35 "c/saml2md-elems.gperf"
    {"ContactPerson", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 57 "c/saml2md-elems.gperf"
    {"ContactPerson", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 151 "c/saml2md-elems.gperf"
    {"NameIdentifierMappingProtocolProfile", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 150 "c/saml2md-elems.gperf"
    {"NameIdentifierMappingEncryptionProfile", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 125 "c/saml2md-elems.gperf"
    {"PGPKeyID", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 133 "c/saml2md-elems.gperf"
    {"X509IssuerName", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 126 "c/saml2md-elems.gperf"
    {"PGPKeyPacket", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 30 "c/saml2md-elems.gperf"
    {"X509Data", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 127 "c/saml2md-elems.gperf"
    {"PgenCounter", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 13 "c/saml2md-elems.gperf"
    {"KeyInfo", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 31 "c/saml2md-elems.gperf"
    {"X509IssuerSerial", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 123 "c/saml2md-elems.gperf"
    {"Modulus", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 51 "c/saml2md-elems.gperf"
    {"AttributeAuthorityDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 58 "c/saml2md-elems.gperf"
    {"EncryptionMethod", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 144 "c/saml2md-elems.gperf"
    {"EncryptionMethod", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 108 "c/saml2md-elems.gperf"
    {"EncryptionMethod", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 147 "c/saml2md-elems.gperf"
    {"FederationTerminationServiceURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 146 "c/saml2md-elems.gperf"
    {"FederationTerminationServiceReturnURL", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 110 "c/saml2md-elems.gperf"
    {"EncryptionProperty", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 109 "c/saml2md-elems.gperf"
    {"EncryptionProperties", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 145 "c/saml2md-elems.gperf"
    {"FederationTerminationNotificationProtocolProfile", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 37 "c/saml2md-elems.gperf"
    {"EntityDescriptor", "m20", zxmd_ns_tab + zxmd_xmlns_ix_m20},
#line 60 "c/saml2md-elems.gperf"
    {"EntityDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 111 "c/saml2md-elems.gperf"
    {"KeyReference", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 134 "c/saml2md-elems.gperf"
    {"X509SKI", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 104 "c/saml2md-elems.gperf"
    {"CipherReference", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 136 "c/saml2md-elems.gperf"
    {"X509SubjectName", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds}
  };

static const short lookup[] =
  {
      -1,    0,   -1,   -1,   -1,   -1,    1,   -1,
      -1,    2,   -1,    3,   -1,   -1,    4,    5,
       6,   -1,   -1, -201,    9,   10, -171,   -2,
      11,   12,   13,   -1,   14,   15,   16,   -1,
    -402,   19,   20,   21,   22,   23,   24,   -1,
    -244,   -1,   27,   28,   29,   -1,   30,   31,
      32,   33,   -1,   34,   35,   36,   37,   -1,
      38,   39,   40,   41,   -1,   42,   43,   44,
      45, -153,   -2, -400,   48,   -1, -398, -392,
      53,   -1,   54,   55,   56,   57, -388,   60,
      61, -384,   64,   65,   66,   67,   68,   -1,
      69,   70,   71,   -1,   72,   73,   74,   75,
      -1,   76,   77,   -1,   78,   79,   80,   81,
      82,   83,   84,   85,   -1,   86,   87,   -1,
    -304,   -1,   90,   91,   -1,   92,   93,   94,
      95,   -1,   96,   97,   98,  -90,   -2,   99,
     100,  101, -380,   -1,  104, -333,   -1,  107,
     108,  109,  110,  111,   -1,  112, -322,  -65,
      -2,   -1,  115,   -1,  116,   -1,  117,  118,
     119,  120,  -73,   -2,  121,  122,  123,  124,
      -1,  125,  126, -378,  129,  130,  131,  132,
     133,   -1, -364,  136, -362,  139,  140,   -1,
     141,   -1,  142,  143,  144,  145,  146,  -41,
      -2,  -44,   -2,   -1,  147,   -1,  148,  149,
     150, -373,  -27,   -2,  153,   -1,  154,  -51,
      -2,  -76,   -2,  155,  156, -116,   -2,  157,
     158, -120,   -2,  159,  160, -127,   -2,   -1,
     161,  162,  163, -129,   -2, -132,   -2, -161,
      -2,   -1, -406,  -14,   -3,   -1,   -1,  167,
      -1,   -1,   -1,   -1,   -1,  168,  169,   -1,
     170,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     171,   -1,   -1, -431,   -6,   -2,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  174,   -1,
      -1,   -1,   -1,  175,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  176,   -1,   -1,   -1,   -1,
     177
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zxmd_elem2tok (str, len)
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
              if (len == zxmd_elems_lens[index])
                {
                  register const char *s = zxmd_elems[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zxmd_elems[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &zxmd_elems_lens[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordptr = &zxmd_elems[TOTAL_KEYWORDS + lookup[offset]];
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
#line 188 "c/saml2md-elems.gperf"

/* EOF - gperf -t -D -C -Nzxmd_elem2tok c/saml2md-elems.gperf */
