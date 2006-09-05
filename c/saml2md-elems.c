/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zxmd_elems -N zxmd_elem2tok c/saml2md-elems.gperf  */
/* Computed positions: -k'1,4,10,$' */

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
 * $Id: saml2md-elems.c,v 1.27 2006/09/05 05:09:42 sampo Exp $ */
#include "zx.h"
#include "c/saml2md-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 140
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 28
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 246
/* maximum key range = 246, duplicates = 2 */

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
  static const unsigned char asso_values[] =
    {
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247,  85, 247, 247,
      247, 247, 247, 247, 247,  20,  60,  40,  35,   0,
      247,   5,   0,  25,  95,  90,  80,  95,  10,  25,
        0,  75,  50,   0,  60, 247,  75,  40,   0,  10,
      247, 247, 247, 247, 247,  55, 247,  25,  80, 247,
       30,   0,   0,  90,   0,   0,  15, 247, 100, 100,
       15,  35,  45,  20,  45,   0,   0,  20,  60, 247,
        5,  55,  15, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
      247, 247, 247, 247, 247, 247, 247
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[9]+1];
      /*FALLTHROUGH*/
      case 9:
      case 8:
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
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const unsigned char zxmd_elems_lens[] =
  {
     1,  5,  9, 10,  1, 12,  9,  7,  1,  7,  9,  6,  8,  6,
    12, 14, 10, 16, 12,  8, 19, 20,  6, 22,  8,  9, 25, 12,
     4, 20,  6, 17, 19, 15,  8,  9, 15, 18,  4,  7, 13, 14,
    15, 11, 13,  9, 15, 16, 12,  8, 24, 10, 16, 13, 19, 10,
    10, 11, 23, 15, 16, 12, 18,  9, 10,  6,  7, 23, 14, 20,
     6,  8, 10, 11,  7,  8, 19, 15, 11, 13, 14, 15, 16,  7,
     8, 14,  7, 18, 14, 25, 16, 16,  8, 14, 15, 21,  8, 24,
    16, 18, 19, 25, 16, 22, 18, 19, 15,  7, 18, 15,  1, 18,
    19, 10, 16,  7, 13, 15, 26, 17, 13, 17,  8,  7,  8, 23,
    16,  9, 11, 12, 15,  1, 12, 11, 28, 16, 12, 13, 11, 16
  };

const struct zx_tok zxmd_elems[] =
  {
#line 110 "c/saml2md-elems.gperf"
    {"P", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 123 "c/saml2md-elems.gperf"
    {"XPath", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 142 "c/saml2md-elems.gperf"
    {"Statement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 47 "c/saml2md-elems.gperf"
    {"Extensions", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 104 "c/saml2md-elems.gperf"
    {"G", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 128 "c/saml2md-elems.gperf"
    {"EmailAddress", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 129 "c/saml2md-elems.gperf"
    {"GivenName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 131 "c/saml2md-elems.gperf"
    {"SurName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 124 "c/saml2md-elems.gperf"
    {"Y", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 83 "c/saml2md-elems.gperf"
    {"Subject", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 22 "c/saml2md-elems.gperf"
    {"Signature", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 65 "c/saml2md-elems.gperf"
    {"Advice", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 136 "c/saml2md-elems.gperf"
    {"Audience", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 16 "c/saml2md-elems.gperf"
    {"Object", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 70 "c/saml2md-elems.gperf"
    {"AuthnContext", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 71 "c/saml2md-elems.gperf"
    {"AuthnStatement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 147 "c/saml2md-elems.gperf"
    {"OAEPparams", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 82 "c/saml2md-elems.gperf"
    {"ProxyRestriction", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 130 "c/saml2md-elems.gperf"
    {"NameIDFormat", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 78 "c/saml2md-elems.gperf"
    {"Evidence", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 140 "c/saml2md-elems.gperf"
    {"AuthnContextDeclRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 138 "c/saml2md-elems.gperf"
    {"AuthnContextClassRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 64 "c/saml2md-elems.gperf"
    {"Action", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 72 "c/saml2md-elems.gperf"
    {"AuthzDecisionStatement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 103 "c/saml2md-elems.gperf"
    {"Exponent", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 66 "c/saml2md-elems.gperf"
    {"Assertion", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 34 "c/saml2md-elems.gperf"
    {"ArtifactResolutionService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 42 "c/saml2md-elems.gperf"
    {"AuthzService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 148 "c/saml2md-elems.gperf"
    {"root", "", 0},
#line 51 "c/saml2md-elems.gperf"
    {"NameIDMappingService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 80 "c/saml2md-elems.gperf"
    {"NameID", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 41 "c/saml2md-elems.gperf"
    {"AuthnQueryService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 69 "c/saml2md-elems.gperf"
    {"AudienceRestriction", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 90 "c/saml2md-elems.gperf"
    {"CipherReference", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 21 "c/saml2md-elems.gperf"
    {"SPKIData", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 19 "c/saml2md-elems.gperf"
    {"Reference", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 59 "c/saml2md-elems.gperf"
    {"SPSSODescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 45 "c/saml2md-elems.gperf"
    {"EntitiesDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 116 "c/saml2md-elems.gperf"
    {"Seed", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 17 "c/saml2md-elems.gperf"
    {"PGPData", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 43 "c/saml2md-elems.gperf"
    {"ContactPerson", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 26 "c/saml2md-elems.gperf"
    {"SignatureValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 23 "c/saml2md-elems.gperf"
    {"SignatureMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 113 "c/saml2md-elems.gperf"
    {"PgenCounter", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 91 "c/saml2md-elems.gperf"
    {"DataReference", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 67 "c/saml2md-elems.gperf"
    {"Attribute", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 88 "c/saml2md-elems.gperf"
    {"AgreementMethod", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 105 "c/saml2md-elems.gperf"
    {"HMACOutputLength", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 12 "c/saml2md-elems.gperf"
    {"DigestMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 115 "c/saml2md-elems.gperf"
    {"SPKISexp", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 35 "c/saml2md-elems.gperf"
    {"AssertionConsumerService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 74 "c/saml2md-elems.gperf"
    {"Conditions", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 54 "c/saml2md-elems.gperf"
    {"OrganizationName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 92 "c/saml2md-elems.gperf"
    {"EncryptedData", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 84 "c/saml2md-elems.gperf"
    {"SubjectConfirmation", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 29 "c/saml2md-elems.gperf"
    {"Transforms", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 101 "c/saml2md-elems.gperf"
    {"Transforms", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 61 "c/saml2md-elems.gperf"
    {"ServiceName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 53 "c/saml2md-elems.gperf"
    {"OrganizationDisplayName", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 125 "c/saml2md-elems.gperf"
    {"AffiliateMember", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 46 "c/saml2md-elems.gperf"
    {"EntityDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 52 "c/saml2md-elems.gperf"
    {"Organization", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 60 "c/saml2md-elems.gperf"
    {"ServiceDescription", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 141 "c/saml2md-elems.gperf"
    {"Condition", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 81 "c/saml2md-elems.gperf"
    {"OneTimeUse", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 79 "c/saml2md-elems.gperf"
    {"Issuer", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 146 "c/saml2md-elems.gperf"
    {"KeySize", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 85 "c/saml2md-elems.gperf"
    {"SubjectConfirmationData", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 119 "c/saml2md-elems.gperf"
    {"X509IssuerName", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 95 "c/saml2md-elems.gperf"
    {"EncryptionProperties", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 73 "c/saml2md-elems.gperf"
    {"BaseID", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 15 "c/saml2md-elems.gperf"
    {"Manifest", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 27 "c/saml2md-elems.gperf"
    {"SignedInfo", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 102 "c/saml2md-elems.gperf"
    {"DigestValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 107 "c/saml2md-elems.gperf"
    {"KeyName", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 145 "c/saml2md-elems.gperf"
    {"KA_Nonce", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 24 "c/saml2md-elems.gperf"
    {"SignatureProperties", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 134 "c/saml2md-elems.gperf"
    {"AssertionURIRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 144 "c/saml2md-elems.gperf"
    {"CipherValue", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 56 "c/saml2md-elems.gperf"
    {"PDPDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 143 "c/saml2md-elems.gperf"
    {"CarriedKeyName", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 86 "c/saml2md-elems.gperf"
    {"SubjectLocality", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 48 "c/saml2md-elems.gperf"
    {"IDPSSODescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 120 "c/saml2md-elems.gperf"
    {"X509SKI", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 30 "c/saml2md-elems.gperf"
    {"X509Data", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 135 "c/saml2md-elems.gperf"
    {"AttributeValue", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 109 "c/saml2md-elems.gperf"
    {"Modulus", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 76 "c/saml2md-elems.gperf"
    {"EncryptedAttribute", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 58 "c/saml2md-elems.gperf"
    {"RoleDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 38 "c/saml2md-elems.gperf"
    {"AttributeConsumingService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 44 "c/saml2md-elems.gperf"
    {"EncryptionMethod", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 94 "c/saml2md-elems.gperf"
    {"EncryptionMethod", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 108 "c/saml2md-elems.gperf"
    {"MgmtData", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 133 "c/saml2md-elems.gperf"
    {"AssertionIDRef", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 122 "c/saml2md-elems.gperf"
    {"X509SubjectName", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 33 "c/saml2md-elems.gperf"
    {"AffiliationDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 111 "c/saml2md-elems.gperf"
    {"PGPKeyID", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 40 "c/saml2md-elems.gperf"
    {"AuthnAuthorityDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 139 "c/saml2md-elems.gperf"
    {"AuthnContextDecl", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 75 "c/saml2md-elems.gperf"
    {"EncryptedAssertion", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 50 "c/saml2md-elems.gperf"
    {"ManageNameIDService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 36 "c/saml2md-elems.gperf"
    {"AssertionIDRequestService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 39 "c/saml2md-elems.gperf"
    {"AttributeService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 10 "c/saml2md-elems.gperf"
    {"CanonicalizationMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 68 "c/saml2md-elems.gperf"
    {"AttributeStatement", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 63 "c/saml2md-elems.gperf"
    {"SingleSignOnService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 132 "c/saml2md-elems.gperf"
    {"TelephoneNumber", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 127 "c/saml2md-elems.gperf"
    {"Company", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 57 "c/saml2md-elems.gperf"
    {"RequestedAttribute", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 20 "c/saml2md-elems.gperf"
    {"RetrievalMethod", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 114 "c/saml2md-elems.gperf"
    {"Q", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 96 "c/saml2md-elems.gperf"
    {"EncryptionProperty", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 62 "c/saml2md-elems.gperf"
    {"SingleLogoutService", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 89 "c/saml2md-elems.gperf"
    {"CipherData", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 126 "c/saml2md-elems.gperf"
    {"AttributeProfile", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 13 "c/saml2md-elems.gperf"
    {"KeyInfo", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 100 "c/saml2md-elems.gperf"
    {"ReferenceList", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 55 "c/saml2md-elems.gperf"
    {"OrganizationURL", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 32 "c/saml2md-elems.gperf"
    {"AdditionalMetadataLocation", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 25 "c/saml2md-elems.gperf"
    {"SignatureProperty", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 149 "c/saml2md-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 98 "c/saml2md-elems.gperf"
    {"OriginatorKeyInfo", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 87 "c/saml2md-elems.gperf"
    {"TestElem", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 117 "c/saml2md-elems.gperf"
    {"X509CRL", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 14 "c/saml2md-elems.gperf"
    {"KeyValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 137 "c/saml2md-elems.gperf"
    {"AuthenticatingAuthority", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 99 "c/saml2md-elems.gperf"
    {"RecipientKeyInfo", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 28 "c/saml2md-elems.gperf"
    {"Transform", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 77 "c/saml2md-elems.gperf"
    {"EncryptedID", "sa", zxmd_ns_tab + zxmd_xmlns_ix_sa},
#line 97 "c/saml2md-elems.gperf"
    {"KeyReference", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 118 "c/saml2md-elems.gperf"
    {"X509Certificate", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 106 "c/saml2md-elems.gperf"
    {"J", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 93 "c/saml2md-elems.gperf"
    {"EncryptedKey", "xenc", zxmd_ns_tab + zxmd_xmlns_ix_xenc},
#line 11 "c/saml2md-elems.gperf"
    {"DSAKeyValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 37 "c/saml2md-elems.gperf"
    {"AttributeAuthorityDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 31 "c/saml2md-elems.gperf"
    {"X509IssuerSerial", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 112 "c/saml2md-elems.gperf"
    {"PGPKeyPacket", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 49 "c/saml2md-elems.gperf"
    {"KeyDescriptor", "md", zxmd_ns_tab + zxmd_xmlns_ix_md},
#line 18 "c/saml2md-elems.gperf"
    {"RSAKeyValue", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds},
#line 121 "c/saml2md-elems.gperf"
    {"X509SerialNumber", "ds", zxmd_ns_tab + zxmd_xmlns_ix_ds}
  };

static const short lookup[] =
  {
      -1,    0,   -1,   -1,   -1,    1,   -1,   -1,
      -1,    2,    3,    4,    5,   -1,    6,   -1,
      -1,    7,   -1,   -1,   -1,    8,    9,   -1,
      10,   -1,   11,   -1,   12,   -1,   -1,   13,
      14,   -1,   15,   16,   17,   18,   19,   20,
      21,   22,   23,   24,   25,   26,   -1,   27,
      -1,   28,   29,   30,   31,   -1,   32,   33,
      -1,   -1,   34,   35,   36,   -1,   -1,   37,
      38,   -1,   -1,   39,   40,   41,   42,   43,
      -1,   44,   45,   46,   47,   48,   49,   50,
      51,   52,   -1,   53,   54, -261,   57,   -1,
      58,   -1,   59,   60,   61,   62,   63,   64,
      65,   66,   67,   68,   69,   70,   -1,   71,
      -1,   72,   73,   74,   75,   76,   77,   78,
      -1,   79,   80,   81,   82,   83,   84,   85,
     -85,   -2,   86,   87,   88,   89, -305,   -1,
      92,   93,   94,   95,   -1,   96,   97,   -1,
      98,   -1,   99,  100,  101,  102,  103,  104,
     105,  106,   -1,  107,  108,   -1,  109,  110,
      -1,  111,  112,  113,  114,  115,  116,   -1,
     117,  118,  119,  120,  -50,   -2,   -1,  121,
     122,   -1,   -1,   -1,  123,  124,   -1,   -1,
      -1,   -1,  125,   -1,   -1,  126,   -1,   -1,
     127,   -1,  128,  129,   -1,   -1,  130,  131,
     132,   -1,   -1,   -1,  133,   -1,  134,   -1,
      -1,  135,  136,  137,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  138,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  139
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
#line 150 "c/saml2md-elems.gperf"

/* EOF - gperf -t -D -C -Nzxmd_elem2tok c/saml2md-elems.gperf */
