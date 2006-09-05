/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -t -D -C -T -l -G -W zx_elems -N zx_elem2tok c/saml2-elems.gperf  */
/* Computed positions: -k'1,6,$' */

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

#line 1 "c/saml2-elems.gperf"

/* c/saml2-elems.gperf - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id: saml2-elems.c,v 1.27 2006/09/05 05:09:38 sampo Exp $ */
#include "zx.h"
#include "c/saml2-ns.h"
#include <string.h>

#define TOTAL_KEYWORDS 140
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 23
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 253
/* maximum key range = 253, duplicates = 1 */

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
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254,  10,  65,  25,  50,  15,
        0,   0,  65, 110,  10,  75, 115, 105,  20,  45,
       75,  15,  55,   0,  65, 254, 254, 254,  40,   5,
      254, 254, 254, 254, 254, 254, 254,  55, 115,  10,
        0,   0,  60,  85,   5,  10, 254, 254,  85,  95,
       15,  85,  10, 254,  65,   0,   0,  10, 254, 254,
       15,   5,  20, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254, 254, 254, 254, 254,
      254, 254, 254, 254, 254, 254
    };
  register int hval = len;

  switch (hval)
    {
      default:
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
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const unsigned char zx_elems_lens[] =
  {
     1,  4,  5,  6,  9, 10,  1, 13, 14, 15,  6,  7,  8, 19,
     1, 17,  8, 14, 10, 12, 18, 15,  1,  8,  9, 10,  8, 14,
    10, 16, 12, 18, 19, 20,  6, 12, 18,  9,  5,  6, 23, 14,
    15, 22, 18, 19, 11, 12, 13,  9, 15, 11, 13,  4, 15, 11,
     8,  4,  5, 21, 12,  8,  9, 15, 16, 22, 18, 14, 15, 11,
    12, 23,  9, 20, 21, 12, 13, 14, 10, 16, 12,  8, 11,  7,
     9, 15, 11,  7,  8, 10, 12,  8, 19, 20, 11,  7,  8, 15,
    16,  7,  8, 19, 20,  6, 13, 14,  9, 10, 10, 16,  7,  8,
    14, 16, 18, 14, 12, 10,  1, 10, 11,  8, 16, 17, 16,  8,
     6, 13,  6,  7, 10,  6,  7,  8,  7,  9,  7, 11,  6,  8
  };

const struct zx_tok zx_elems[] =
  {
#line 102 "c/saml2-elems.gperf"
    {"G", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 114 "c/saml2-elems.gperf"
    {"Seed", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 58 "c/saml2-elems.gperf"
    {"Fault", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 82 "c/saml2-elems.gperf"
    {"Status", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 22 "c/saml2-elems.gperf"
    {"Signature", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 83 "c/saml2-elems.gperf"
    {"StatusCode", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 122 "c/saml2-elems.gperf"
    {"Y", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 141 "c/saml2-elems.gperf"
    {"StatusMessage", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 26 "c/saml2-elems.gperf"
    {"SignatureValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 23 "c/saml2-elems.gperf"
    {"SignatureMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 33 "c/saml2-elems.gperf"
    {"Advice", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 51 "c/saml2-elems.gperf"
    {"Subject", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 113 "c/saml2-elems.gperf"
    {"SPKISexp", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 24 "c/saml2-elems.gperf"
    {"SignatureProperties", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 104 "c/saml2-elems.gperf"
    {"J", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 25 "c/saml2-elems.gperf"
    {"SignatureProperty", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 101 "c/saml2-elems.gperf"
    {"Exponent", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 39 "c/saml2-elems.gperf"
    {"AuthnStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 68 "c/saml2-elems.gperf"
    {"Extensions", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 85 "c/saml2-elems.gperf"
    {"SubjectQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 63 "c/saml2-elems.gperf"
    {"AssertionIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 54 "c/saml2-elems.gperf"
    {"SubjectLocality", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 112 "c/saml2-elems.gperf"
    {"Q", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 126 "c/saml2-elems.gperf"
    {"Audience", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 34 "c/saml2-elems.gperf"
    {"Assertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 42 "c/saml2-elems.gperf"
    {"Conditions", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 46 "c/saml2-elems.gperf"
    {"Evidence", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 143 "c/saml2-elems.gperf"
    {"CarriedKeyName", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 65 "c/saml2-elems.gperf"
    {"AuthnQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 92 "c/saml2-elems.gperf"
    {"EncryptionMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 91 "c/saml2-elems.gperf"
    {"EncryptedKey", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 44 "c/saml2-elems.gperf"
    {"EncryptedAttribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 52 "c/saml2-elems.gperf"
    {"SubjectConfirmation", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 93 "c/saml2-elems.gperf"
    {"EncryptionProperties", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 32 "c/saml2-elems.gperf"
    {"Action", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 38 "c/saml2-elems.gperf"
    {"AuthnContext", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 94 "c/saml2-elems.gperf"
    {"EncryptionProperty", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 131 "c/saml2-elems.gperf"
    {"Condition", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 121 "c/saml2-elems.gperf"
    {"XPath", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 16 "c/saml2-elems.gperf"
    {"Object", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 127 "c/saml2-elems.gperf"
    {"AuthenticatingAuthority", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 117 "c/saml2-elems.gperf"
    {"X509IssuerName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 116 "c/saml2-elems.gperf"
    {"X509Certificate", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 10 "c/saml2-elems.gperf"
    {"CanonicalizationMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 43 "c/saml2-elems.gperf"
    {"EncryptedAssertion", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 37 "c/saml2-elems.gperf"
    {"AudienceRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 100 "c/saml2-elems.gperf"
    {"DigestValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 12 "c/saml2-elems.gperf"
    {"DigestMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 89 "c/saml2-elems.gperf"
    {"DataReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 19 "c/saml2-elems.gperf"
    {"Reference", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 120 "c/saml2-elems.gperf"
    {"X509SubjectName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 11 "c/saml2-elems.gperf"
    {"DSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 98 "c/saml2-elems.gperf"
    {"ReferenceList", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 148 "c/saml2-elems.gperf"
    {"root", "", 0},
#line 20 "c/saml2-elems.gperf"
    {"RetrievalMethod", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 18 "c/saml2-elems.gperf"
    {"RSAKeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 136 "c/saml2-elems.gperf"
    {"Artifact", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 56 "c/saml2-elems.gperf"
    {"Body", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 138 "c/saml2-elems.gperf"
    {"NewID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 79 "c/saml2-elems.gperf"
    {"RequestedAuthnContext", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 66 "c/saml2-elems.gperf"
    {"AuthnRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 80 "c/saml2-elems.gperf"
    {"Response", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 134 "c/saml2-elems.gperf"
    {"faultcode", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 61 "c/saml2-elems.gperf"
    {"ArtifactResolve", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 62 "c/saml2-elems.gperf"
    {"ArtifactResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 40 "c/saml2-elems.gperf"
    {"AuthzDecisionStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 67 "c/saml2-elems.gperf"
    {"AuthzDecisionQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 123 "c/saml2-elems.gperf"
    {"AssertionIDRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 124 "c/saml2-elems.gperf"
    {"AssertionURIRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 45 "c/saml2-elems.gperf"
    {"EncryptedID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 77 "c/saml2-elems.gperf"
    {"NameIDPolicy", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 53 "c/saml2-elems.gperf"
    {"SubjectConfirmationData", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 142 "c/saml2-elems.gperf"
    {"Terminate", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 75 "c/saml2-elems.gperf"
    {"NameIDMappingRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 76 "c/saml2-elems.gperf"
    {"NameIDMappingResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 110 "c/saml2-elems.gperf"
    {"PGPKeyPacket", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 90 "c/saml2-elems.gperf"
    {"EncryptedData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 78 "c/saml2-elems.gperf"
    {"NewEncryptedID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 27 "c/saml2-elems.gperf"
    {"SignedInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 103 "c/saml2-elems.gperf"
    {"HMACOutputLength", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 84 "c/saml2-elems.gperf"
    {"StatusDetail", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 145 "c/saml2-elems.gperf"
    {"KA_Nonce", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 144 "c/saml2-elems.gperf"
    {"CipherValue", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 146 "c/saml2-elems.gperf"
    {"KeySize", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 132 "c/saml2-elems.gperf"
    {"Statement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 88 "c/saml2-elems.gperf"
    {"CipherReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 137 "c/saml2-elems.gperf"
    {"GetComplete", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 81 "c/saml2-elems.gperf"
    {"Scoping", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 57 "c/saml2-elems.gperf"
    {"Envelope", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 147 "c/saml2-elems.gperf"
    {"OAEPparams", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 140 "c/saml2-elems.gperf"
    {"SessionIndex", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 15 "c/saml2-elems.gperf"
    {"Manifest", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 130 "c/saml2-elems.gperf"
    {"AuthnContextDeclRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 128 "c/saml2-elems.gperf"
    {"AuthnContextClassRef", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 139 "c/saml2-elems.gperf"
    {"RequesterID", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 70 "c/saml2-elems.gperf"
    {"IDPList", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 21 "c/saml2-elems.gperf"
    {"SPKIData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 86 "c/saml2-elems.gperf"
    {"AgreementMethod", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 119 "c/saml2-elems.gperf"
    {"X509SerialNumber", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 107 "c/saml2-elems.gperf"
    {"Modulus", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 69 "c/saml2-elems.gperf"
    {"IDPEntry", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 73 "c/saml2-elems.gperf"
    {"ManageNameIDRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 74 "c/saml2-elems.gperf"
    {"ManageNameIDResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 48 "c/saml2-elems.gperf"
    {"NameID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 71 "c/saml2-elems.gperf"
    {"LogoutRequest", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 72 "c/saml2-elems.gperf"
    {"LogoutResponse", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 35 "c/saml2-elems.gperf"
    {"Attribute", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 29 "c/saml2-elems.gperf"
    {"Transforms", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 99 "c/saml2-elems.gperf"
    {"Transforms", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 129 "c/saml2-elems.gperf"
    {"AuthnContextDecl", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 17 "c/saml2-elems.gperf"
    {"PGPData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 109 "c/saml2-elems.gperf"
    {"PGPKeyID", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 125 "c/saml2-elems.gperf"
    {"AttributeValue", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 31 "c/saml2-elems.gperf"
    {"X509IssuerSerial", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 36 "c/saml2-elems.gperf"
    {"AttributeStatement", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 64 "c/saml2-elems.gperf"
    {"AttributeQuery", "sp", zx_ns_tab + zx_xmlns_ix_sp},
#line 95 "c/saml2-elems.gperf"
    {"KeyReference", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 49 "c/saml2-elems.gperf"
    {"OneTimeUse", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 108 "c/saml2-elems.gperf"
    {"P", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 87 "c/saml2-elems.gperf"
    {"CipherData", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 135 "c/saml2-elems.gperf"
    {"faultstring", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 30 "c/saml2-elems.gperf"
    {"X509Data", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 50 "c/saml2-elems.gperf"
    {"ProxyRestriction", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 96 "c/saml2-elems.gperf"
    {"OriginatorKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 97 "c/saml2-elems.gperf"
    {"RecipientKeyInfo", "xenc", zx_ns_tab + zx_xmlns_ix_xenc},
#line 14 "c/saml2-elems.gperf"
    {"KeyValue", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 41 "c/saml2-elems.gperf"
    {"BaseID", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 149 "c/saml2-elems.gperf"
    {"TOK_NOT_FOUND", "ZX", 0},
#line 60 "c/saml2-elems.gperf"
    {"detail", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 105 "c/saml2-elems.gperf"
    {"KeyName", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 133 "c/saml2-elems.gperf"
    {"faultactor", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 59 "c/saml2-elems.gperf"
    {"Header", "se", zx_ns_tab + zx_xmlns_ix_se},
#line 115 "c/saml2-elems.gperf"
    {"X509CRL", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 106 "c/saml2-elems.gperf"
    {"MgmtData", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 13 "c/saml2-elems.gperf"
    {"KeyInfo", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 28 "c/saml2-elems.gperf"
    {"Transform", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 118 "c/saml2-elems.gperf"
    {"X509SKI", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 111 "c/saml2-elems.gperf"
    {"PgenCounter", "ds", zx_ns_tab + zx_xmlns_ix_ds},
#line 47 "c/saml2-elems.gperf"
    {"Issuer", "sa", zx_ns_tab + zx_xmlns_ix_sa},
#line 55 "c/saml2-elems.gperf"
    {"TestElem", "sa", zx_ns_tab + zx_xmlns_ix_sa}
  };

static const short lookup[] =
  {
      -1,    0,   -1,   -1,    1,    2,    3,   -1,
      -1,    4,    5,    6,   -1,    7,    8,    9,
      10,   11,   12,   13,   -1,   14,   15,   16,
      17,   18,   -1,   19,   20,   -1,   21,   22,
      -1,   23,   24,   25,   -1,   -1,   26,   27,
      28,   29,   30,   31,   32,   33,   34,   35,
      36,   37,   38,   39,   -1,   40,   41,   42,
      -1,   43,   44,   45,   -1,   46,   47,   48,
      49,   50,   51,   -1,   52,   53,   54,   55,
      -1,   56,   57,   58,   59,   60,   61,   62,
      63,   64,   65,   66,   67,   68,   69,   70,
      71,   72,   73,   74,   75,   76,   77,   78,
      79,   80,   81,   -1,   -1,   82,   83,   -1,
      84,   85,   86,   87,   88,   -1,   89,   -1,
      90,   91,   92,   93,   94,   95,   96,   -1,
      97,   98,   99,  100,  101,  102,  103,   -1,
     104,  105,   -1,   -1,   -1,   -1,  106, -286,
     109,  110,  111,  112,   -1,  113,   -1,  114,
     115,  -33,   -2,  116,   -1,   -1,  117,  118,
      -1,   -1,   -1,  119,  120,   -1,  121,   -1,
      -1,  122,  123,   -1,   -1,   -1,  124,   -1,
     125,   -1,   -1,  126,   -1,  127,   -1,   -1,
     128,  129,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  130,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  131,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  132,   -1,   -1,   -1,   -1,   -1,  133,
      -1,   -1,   -1,  134,   -1,  135,   -1,   -1,
     136,   -1,   -1,   -1,  137,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  138,   -1,
      -1,   -1,   -1,   -1,   -1,  139
  };

#ifdef __GNUC__
__inline
#endif
const struct zx_tok *
zx_elem2tok (str, len)
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
              if (len == zx_elems_lens[index])
                {
                  register const char *s = zx_elems[index].name;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &zx_elems[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &zx_elems_lens[TOTAL_KEYWORDS + lookup[offset]];
              register const struct zx_tok *wordptr = &zx_elems[TOTAL_KEYWORDS + lookup[offset]];
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
#line 150 "c/saml2-elems.gperf"

/* EOF - gperf -t -D -C -Nzx_elem2tok c/saml2-elems.gperf */
