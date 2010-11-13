/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -l c/zx-mm7.gperf  */
/* Computed positions: -k'4,$' */

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

#line 1 "c/zx-mm7.gperf"

/* c/zx-mm7-elems.gperf - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
#include "zx.h"
#include "c/zx-ns.h"
#include "c/zx-mm7-data.h"
#include <string.h>

#define TOTAL_KEYWORDS 88
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 25
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 183
/* maximum key range = 182, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
zx_mm7_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
       45, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184,  15, 184,  15,  35, 184,
      184, 184, 184,  75, 184, 184, 184, 184, 184, 184,
        0, 184,   0, 184, 184, 184,  20, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184,  10,  10,  10,
        5,   5,   5,  65, 184,  40,  15,  20,  35,  80,
       80,   0,  20,  50,  10,  40,   0,  10,   0, 184,
      184,  90, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static unsigned char lengthtable[] =
  {
     0,  0,  2,  0,  0,  0,  0,  7,  0,  0, 10,  0,  2,  3,
     4, 10, 11,  2,  8,  9,  5,  6,  7, 13,  9, 10,  6,  0,
    13,  0, 25, 21, 12,  0,  9, 15,  0, 12,  0,  9, 10,  6,
    17, 18, 14,  0,  6,  0,  8,  9,  0, 16, 12,  8, 14, 10,
    11,  7, 13, 14, 20,  0, 17,  8, 14, 10, 16, 12,  0,  9,
    10,  0, 17, 18, 14,  0,  0, 17,  8,  9,  0,  0,  0, 13,
     9, 15,  0,  7,  0,  9, 10,  0, 12,  3,  9, 10,  0, 17,
     8, 14, 10,  0,  0,  0,  9, 20, 16, 17,  0,  9, 10,  0,
    12, 13,  0,  5,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,
     0, 12, 13,  0,  0,  0,  0,  0,  0,  0,  0, 17,  0,  9,
     0, 21,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0, 23
  };

struct zx_el_tok zx_mm7_el_tab[] =
  {
    {""}, {""},
#line 92 "c/zx-mm7.gperf"
    {"To", sizeof(struct zx_mm7_To_s)},
    {""}, {""}, {""}, {""},
#line 28 "c/zx-mm7.gperf"
    {"Content", sizeof(struct zx_mm7_Content_s)},
    {""}, {""},
#line 86 "c/zx-mm7.gperf"
    {"StatusText", sizeof(struct zx_elem_s)},
    {""},
#line 25 "c/zx-mm7.gperf"
    {"Cc", sizeof(struct zx_mm7_Cc_s)},
#line 21 "c/zx-mm7.gperf"
    {"Bcc", sizeof(struct zx_mm7_Bcc_s)},
#line 33 "c/zx-mm7.gperf"
    {"Date", sizeof(struct zx_elem_s)},
#line 85 "c/zx-mm7.gperf"
    {"StatusCode", sizeof(struct zx_elem_s)},
#line 82 "c/zx-mm7.gperf"
    {"ServiceCode", sizeof(struct zx_mm7_ServiceCode_s)},
#line 31 "c/zx-mm7.gperf"
    {"DC", sizeof(struct zx_elem_s)},
#line 34 "c/zx-mm7.gperf"
    {"DateTime", sizeof(struct zx_mm7_DateTime_s)},
#line 95 "c/zx-mm7.gperf"
    {"UserAgent", sizeof(struct zx_mm7_UserAgent_s)},
#line 105 "c/zx-mm7.gperf"
    {"value", sizeof(struct zx_elem_s)},
#line 78 "c/zx-mm7.gperf"
    {"Sender", sizeof(struct zx_mm7_Sender_s)},
#line 87 "c/zx-mm7.gperf"
    {"Subject", sizeof(struct zx_elem_s)},
#line 30 "c/zx-mm7.gperf"
    {"CredentialRef", sizeof(struct zx_elem_s)},
#line 83 "c/zx-mm7.gperf"
    {"ShortCode", sizeof(struct zx_mm7_ShortCode_s)},
#line 32 "c/zx-mm7.gperf"
    {"DRMContent", sizeof(struct zx_elem_s)},
#line 57 "c/zx-mm7.gperf"
    {"Number", sizeof(struct zx_mm7_Number_s)},
    {""},
#line 20 "c/zx-mm7.gperf"
    {"AuxApplicInfo", sizeof(struct zx_elem_s)},
    {""},
#line 60 "c/zx-mm7.gperf"
    {"Previouslysentdateandtime", sizeof(struct zx_mm7_Previouslysentdateandtime_s)},
#line 43 "c/zx-mm7.gperf"
    {"DistributionIndicator", sizeof(struct zx_elem_s)},
#line 97 "c/zx-mm7.gperf"
    {"VASPErrorRsp", sizeof(struct zx_mm7_VASPErrorRsp_s)},
    {""},
#line 91 "c/zx-mm7.gperf"
    {"TimeStamp", sizeof(struct zx_elem_s)},
#line 90 "c/zx-mm7.gperf"
    {"ThirdPartyPayer", sizeof(struct zx_mm7_ThirdPartyPayer_s)},
    {""},
#line 68 "c/zx-mm7.gperf"
    {"ReadReplyRsp", sizeof(struct zx_mm7_ReadReplyRsp_s)},
    {""},
#line 24 "c/zx-mm7.gperf"
    {"CancelRsp", sizeof(struct zx_mm7_CancelRsp_s)},
#line 65 "c/zx-mm7.gperf"
    {"RSErrorRsp", sizeof(struct zx_mm7_RSErrorRsp_s)},
#line 98 "c/zx-mm7.gperf"
    {"VASPID", sizeof(struct zx_elem_s)},
#line 101 "c/zx-mm7.gperf"
    {"extendedCancelRsp", sizeof(struct zx_mm7_extendedCancelRsp_s)},
#line 103 "c/zx-mm7.gperf"
    {"extendedReplaceRsp", sizeof(struct zx_mm7_extendedReplaceRsp_s)},
#line 63 "c/zx-mm7.gperf"
    {"QueryStatusRsp", sizeof(struct zx_mm7_QueryStatusRsp_s)},
    {""},
#line 84 "c/zx-mm7.gperf"
    {"Status", sizeof(struct zx_mm7_Status_s)},
    {""},
#line 51 "c/zx-mm7.gperf"
    {"MMStatus", sizeof(struct zx_elem_s)},
#line 69 "c/zx-mm7.gperf"
    {"Recipient", sizeof(struct zx_mm7_Recipient_s)},
    {""},
#line 50 "c/zx-mm7.gperf"
    {"MMSRelayServerID", sizeof(struct zx_elem_s)},
#line 29 "c/zx-mm7.gperf"
    {"ContentClass", sizeof(struct zx_elem_s)},
#line 22 "c/zx-mm7.gperf"
    {"CancelID", sizeof(struct zx_elem_s)},
#line 39 "c/zx-mm7.gperf"
    {"DeliveryReport", sizeof(struct zx_elem_s)},
#line 45 "c/zx-mm7.gperf"
    {"ExpiryDate", sizeof(struct zx_elem_s)},
#line 56 "c/zx-mm7.gperf"
    {"MessageType", sizeof(struct zx_elem_s)},
#line 42 "c/zx-mm7.gperf"
    {"Details", sizeof(struct zx_mm7_Details_s)},
#line 79 "c/zx-mm7.gperf"
    {"SenderAddress", sizeof(struct zx_mm7_SenderAddress_s)},
#line 27 "c/zx-mm7.gperf"
    {"ChargedPartyID", sizeof(struct zx_elem_s)},
#line 44 "c/zx-mm7.gperf"
    {"EarliestDeliveryTime", sizeof(struct zx_elem_s)},
    {""},
#line 58 "c/zx-mm7.gperf"
    {"PreferredChannels", sizeof(struct zx_mm7_PreferredChannels_s)},
#line 48 "c/zx-mm7.gperf"
    {"LinkedID", sizeof(struct zx_elem_s)},
#line 94 "c/zx-mm7.gperf"
    {"UACapabilities", sizeof(struct zx_mm7_UACapabilities_s)},
#line 74 "c/zx-mm7.gperf"
    {"ReplaceRsp", sizeof(struct zx_mm7_ReplaceRsp_s)},
#line 54 "c/zx-mm7.gperf"
    {"MessageExtraData", sizeof(struct zx_mm7_MessageExtraData_s)},
#line 67 "c/zx-mm7.gperf"
    {"ReadReplyReq", sizeof(struct zx_mm7_ReadReplyReq_s)},
    {""},
#line 23 "c/zx-mm7.gperf"
    {"CancelReq", sizeof(struct zx_mm7_CancelReq_s)},
#line 36 "c/zx-mm7.gperf"
    {"DeliverRsp", sizeof(struct zx_mm7_DeliverRsp_s)},
    {""},
#line 100 "c/zx-mm7.gperf"
    {"extendedCancelReq", sizeof(struct zx_mm7_extendedCancelReq_s)},
#line 102 "c/zx-mm7.gperf"
    {"extendedReplaceReq", sizeof(struct zx_mm7_extendedReplaceReq_s)},
#line 62 "c/zx-mm7.gperf"
    {"QueryStatusReq", sizeof(struct zx_mm7_QueryStatusReq_s)},
    {""}, {""},
#line 41 "c/zx-mm7.gperf"
    {"DeliveryReportRsp", sizeof(struct zx_mm7_DeliveryReportRsp_s)},
#line 19 "c/zx-mm7.gperf"
    {"ApplicID", sizeof(struct zx_elem_s)},
#line 72 "c/zx-mm7.gperf"
    {"ReplaceID", sizeof(struct zx_elem_s)},
    {""}, {""}, {""},
#line 75 "c/zx-mm7.gperf"
    {"ReplyApplicID", sizeof(struct zx_elem_s)},
#line 55 "c/zx-mm7.gperf"
    {"MessageID", sizeof(struct zx_elem_s)},
#line 77 "c/zx-mm7.gperf"
    {"ReplyChargingID", sizeof(struct zx_elem_s)},
    {""},
#line 99 "c/zx-mm7.gperf"
    {"element", sizeof(struct zx_mm7_element_s)},
    {""},
#line 81 "c/zx-mm7.gperf"
    {"SenderSPI", sizeof(struct zx_elem_s)},
#line 71 "c/zx-mm7.gperf"
    {"Recipients", sizeof(struct zx_mm7_Recipients_s)},
    {""},
#line 53 "c/zx-mm7.gperf"
    {"MessageClass", sizeof(struct zx_elem_s)},
#line 104 "c/zx-mm7.gperf"
    {"key", sizeof(struct zx_elem_s)},
#line 46 "c/zx-mm7.gperf"
    {"Extension", sizeof(struct zx_mm7_Extension_s)},
#line 73 "c/zx-mm7.gperf"
    {"ReplaceReq", sizeof(struct zx_mm7_ReplaceReq_s)},
    {""},
#line 52 "c/zx-mm7.gperf"
    {"MMStatusExtension", sizeof(struct zx_elem_s)},
#line 61 "c/zx-mm7.gperf"
    {"Priority", sizeof(struct zx_elem_s)},
#line 64 "c/zx-mm7.gperf"
    {"RFC2822Address", sizeof(struct zx_mm7_RFC2822Address_s)},
#line 35 "c/zx-mm7.gperf"
    {"DeliverReq", sizeof(struct zx_mm7_DeliverReq_s)},
    {""}, {""}, {""},
#line 66 "c/zx-mm7.gperf"
    {"ReadReply", sizeof(struct zx_elem_s)},
#line 80 "c/zx-mm7.gperf"
    {"SenderIdentification", sizeof(struct zx_mm7_SenderIdentification_s)},
#line 59 "c/zx-mm7.gperf"
    {"Previouslysentby", sizeof(struct zx_mm7_Previouslysentby_s)},
#line 40 "c/zx-mm7.gperf"
    {"DeliveryReportReq", sizeof(struct zx_mm7_DeliveryReportReq_s)},
    {""},
#line 89 "c/zx-mm7.gperf"
    {"SubmitRsp", sizeof(struct zx_mm7_SubmitRsp_s)},
#line 49 "c/zx-mm7.gperf"
    {"MM7Version", sizeof(struct zx_elem_s)},
    {""},
#line 26 "c/zx-mm7.gperf"
    {"ChargedParty", sizeof(struct zx_elem_s)},
#line 76 "c/zx-mm7.gperf"
    {"ReplyCharging", sizeof(struct zx_mm7_ReplyCharging_s)},
    {""},
#line 96 "c/zx-mm7.gperf"
    {"VASID", sizeof(struct zx_elem_s)},
    {""},
#line 37 "c/zx-mm7.gperf"
    {"DeliverUsing", sizeof(struct zx_elem_s)},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 70 "c/zx-mm7.gperf"
    {"RecipientSPI", sizeof(struct zx_elem_s)},
#line 93 "c/zx-mm7.gperf"
    {"TransactionID", sizeof(struct zx_mm7_TransactionID_s)},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 38 "c/zx-mm7.gperf"
    {"DeliveryCondition", sizeof(struct zx_mm7_DeliveryCondition_s)},
    {""},
#line 88 "c/zx-mm7.gperf"
    {"SubmitReq", sizeof(struct zx_mm7_SubmitReq_s)},
    {""},
#line 18 "c/zx-mm7.gperf"
    {"AdditionalInformation", sizeof(struct zx_mm7_AdditionalInformation_s)},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 47 "c/zx-mm7.gperf"
    {"IdentityAddressingToken", sizeof(struct zx_mm7_IdentityAddressingToken_s)}
  };

#ifdef __GNUC__
__inline
#endif
struct zx_el_tok *
zx_mm7_elem2tok (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = zx_mm7_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = zx_mm7_el_tab[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &zx_mm7_el_tab[key];
          }
    }
  return 0;
}
#line 106 "c/zx-mm7.gperf"

/* EOF */