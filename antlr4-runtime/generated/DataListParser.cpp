
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1


#include "DataListListener.h"
#include "DataListVisitor.h"

#include "DataListParser.h"


using namespace antlrcpp;
using namespace antlrcpp;

using namespace antlr4;

namespace {

struct DataListParserStaticData final {
  DataListParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DataListParserStaticData(const DataListParserStaticData&) = delete;
  DataListParserStaticData(DataListParserStaticData&&) = delete;
  DataListParserStaticData& operator=(const DataListParserStaticData&) = delete;
  DataListParserStaticData& operator=(DataListParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag datalistParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
DataListParserStaticData *datalistParserStaticData = nullptr;

void datalistParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (datalistParserStaticData != nullptr) {
    return;
  }
#else
  assert(datalistParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DataListParserStaticData>(
    std::vector<std::string>{
      "dlist", "dataList", "source", "lastUpdated", "dateTime", "year", 
      "month", "day", "hour", "minute", "second", "timeZone", "tzMod", "tzHour", 
      "tzMinutes", "startList", "listId", "listItem", "listItemContent", 
      "numericalListItemContent", "complexListItemContent", "dataListString", 
      "endList", "url", "uri", "uriPort", "uriPath", "scheme", "schemeSeparator", 
      "uriSchemePrefix", "uriScheme", "host", "hostname", "domainNameOrIpv4Host", 
      "ipv6Host", "v6host", "v6hostSegment", "v6hostSep", "v6hostConfigParam", 
      "port", "path", "multiPathChunk", "pathString", "login", "user", "loginPassword", 
      "password", "frag", "fragString", "query", "search", "multiSearch", 
      "searchParameter", "searchParameterKey", "searchParameterValue", "parameterString", 
      "parameterName", "configParam"
    },
    std::vector<std::string>{
      "", "", "'lastUpdated'", "'start-list'", "'end-list'", "'static'", 
      "", "", "", "", "", "", "", "", "", "", "", "'.'", "'='", "':'", "'#'", 
      "' '", "'$'", "'/'", "'_'", "'+'", "'-'", "'%'", "'['", "']'", "'&'", 
      "'@'", "'\\u003F'"
    },
    std::vector<std::string>{
      "", "SOURCE", "LAST_UPDATED", "START_LIST", "END_LIST", "STATIC_SOURCE", 
      "DBL_DOLLAR", "DBL_COL", "WS", "BASIC_STRING", "STRING", "DIGITS", 
      "ALPHANUM", "ALPHA", "HEX", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", 
      "EQ", "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", 
      "PERC", "LBRACKET", "RBRACKET", "AMP", "AT", "Q"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,448,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,1,0,4,0,118,8,0,11,0,12,0,119,1,0,1,0,4,0,124,8,0,11,0,12,
  	0,125,1,0,1,0,1,1,1,1,5,1,132,8,1,10,1,12,1,135,9,1,1,1,1,1,1,2,1,2,1,
  	2,1,2,3,2,143,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,3,4,163,8,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,
  	8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,3,11,183,8,11,1,12,1,12,1,13,
  	1,13,1,14,1,14,1,15,1,15,4,15,193,8,15,11,15,12,15,194,1,15,1,15,5,15,
  	199,8,15,10,15,12,15,202,9,15,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,18,
  	1,18,3,18,213,8,18,1,19,1,19,4,19,217,8,19,11,19,12,19,218,1,19,5,19,
  	222,8,19,10,19,12,19,225,9,19,1,20,1,20,4,20,229,8,20,11,20,12,20,230,
  	1,20,5,20,234,8,20,10,20,12,20,237,9,20,1,21,1,21,1,22,1,22,4,22,243,
  	8,22,11,22,12,22,244,1,22,1,22,5,22,249,8,22,10,22,12,22,252,9,22,1,22,
  	3,22,255,8,22,1,23,1,23,1,24,1,24,1,24,3,24,262,8,24,1,24,1,24,3,24,266,
  	8,24,1,24,3,24,269,8,24,1,24,3,24,272,8,24,1,24,3,24,275,8,24,1,25,1,
  	25,1,25,1,26,1,26,3,26,282,8,26,1,27,3,27,285,8,27,1,27,1,27,1,28,1,28,
  	3,28,291,8,28,1,28,3,28,294,8,28,1,29,1,29,1,30,1,30,1,31,3,31,301,8,
  	31,1,31,1,31,1,32,1,32,3,32,307,8,32,1,33,1,33,1,33,1,33,3,33,313,8,33,
  	1,34,1,34,1,34,1,34,1,35,3,35,320,8,35,1,35,1,35,5,35,324,8,35,10,35,
  	12,35,327,9,35,1,36,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,4,40,
  	339,8,40,11,40,12,40,340,1,40,5,40,344,8,40,10,40,12,40,347,9,40,1,40,
  	3,40,350,8,40,1,41,1,41,4,41,354,8,41,11,41,12,41,355,1,42,1,42,1,42,
  	1,42,1,42,1,42,3,42,364,8,42,1,43,1,43,3,43,368,8,43,1,43,1,43,1,44,1,
  	44,1,44,1,44,3,44,376,8,44,1,45,1,45,1,45,1,46,1,46,1,46,1,46,3,46,385,
  	8,46,1,47,1,47,1,47,1,48,1,48,1,48,1,48,3,48,394,8,48,1,49,1,49,3,49,
  	398,8,49,1,50,1,50,5,50,402,8,50,10,50,12,50,405,9,50,1,51,1,51,1,51,
  	1,52,1,52,1,52,5,52,413,8,52,10,52,12,52,416,9,52,1,53,1,53,1,53,1,53,
  	3,53,422,8,53,1,54,1,54,1,54,1,54,1,54,4,54,429,8,54,11,54,12,54,430,
  	1,54,3,54,434,8,54,1,55,1,55,1,55,1,55,1,56,1,56,1,57,1,57,1,57,1,57,
  	3,57,446,8,57,1,57,0,0,58,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,
  	78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,0,4,
  	1,0,25,26,1,0,9,10,2,0,7,7,19,19,1,0,9,11,455,0,117,1,0,0,0,2,129,1,0,
  	0,0,4,138,1,0,0,0,6,146,1,0,0,0,8,151,1,0,0,0,10,166,1,0,0,0,12,168,1,
  	0,0,0,14,170,1,0,0,0,16,172,1,0,0,0,18,174,1,0,0,0,20,176,1,0,0,0,22,
  	178,1,0,0,0,24,184,1,0,0,0,26,186,1,0,0,0,28,188,1,0,0,0,30,190,1,0,0,
  	0,32,205,1,0,0,0,34,207,1,0,0,0,36,212,1,0,0,0,38,214,1,0,0,0,40,226,
  	1,0,0,0,42,238,1,0,0,0,44,240,1,0,0,0,46,256,1,0,0,0,48,258,1,0,0,0,50,
  	276,1,0,0,0,52,279,1,0,0,0,54,284,1,0,0,0,56,288,1,0,0,0,58,295,1,0,0,
  	0,60,297,1,0,0,0,62,300,1,0,0,0,64,306,1,0,0,0,66,312,1,0,0,0,68,314,
  	1,0,0,0,70,319,1,0,0,0,72,328,1,0,0,0,74,331,1,0,0,0,76,333,1,0,0,0,78,
  	335,1,0,0,0,80,338,1,0,0,0,82,351,1,0,0,0,84,363,1,0,0,0,86,365,1,0,0,
  	0,88,375,1,0,0,0,90,377,1,0,0,0,92,384,1,0,0,0,94,386,1,0,0,0,96,393,
  	1,0,0,0,98,395,1,0,0,0,100,399,1,0,0,0,102,406,1,0,0,0,104,409,1,0,0,
  	0,106,421,1,0,0,0,108,433,1,0,0,0,110,435,1,0,0,0,112,439,1,0,0,0,114,
  	445,1,0,0,0,116,118,3,4,2,0,117,116,1,0,0,0,118,119,1,0,0,0,119,117,1,
  	0,0,0,119,120,1,0,0,0,120,121,1,0,0,0,121,123,3,6,3,0,122,124,3,2,1,0,
  	123,122,1,0,0,0,124,125,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,127,
  	1,0,0,0,127,128,5,0,0,1,128,1,1,0,0,0,129,133,3,30,15,0,130,132,3,34,
  	17,0,131,130,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,
  	134,136,1,0,0,0,135,133,1,0,0,0,136,137,3,44,22,0,137,3,1,0,0,0,138,139,
  	5,1,0,0,139,142,5,18,0,0,140,143,5,5,0,0,141,143,3,46,23,0,142,140,1,
  	0,0,0,142,141,1,0,0,0,143,144,1,0,0,0,144,145,5,8,0,0,145,5,1,0,0,0,146,
  	147,5,2,0,0,147,148,5,18,0,0,148,149,3,8,4,0,149,150,5,8,0,0,150,7,1,
  	0,0,0,151,152,3,10,5,0,152,153,5,26,0,0,153,154,3,12,6,0,154,155,5,26,
  	0,0,155,156,3,14,7,0,156,157,5,21,0,0,157,158,3,16,8,0,158,159,5,19,0,
  	0,159,162,3,18,9,0,160,161,5,19,0,0,161,163,3,20,10,0,162,160,1,0,0,0,
  	162,163,1,0,0,0,163,164,1,0,0,0,164,165,3,22,11,0,165,9,1,0,0,0,166,167,
  	5,11,0,0,167,11,1,0,0,0,168,169,5,11,0,0,169,13,1,0,0,0,170,171,5,11,
  	0,0,171,15,1,0,0,0,172,173,5,11,0,0,173,17,1,0,0,0,174,175,5,11,0,0,175,
  	19,1,0,0,0,176,177,5,11,0,0,177,21,1,0,0,0,178,179,3,24,12,0,179,182,
  	3,26,13,0,180,181,5,19,0,0,181,183,3,28,14,0,182,180,1,0,0,0,182,183,
  	1,0,0,0,183,23,1,0,0,0,184,185,7,0,0,0,185,25,1,0,0,0,186,187,5,11,0,
  	0,187,27,1,0,0,0,188,189,5,11,0,0,189,29,1,0,0,0,190,192,5,3,0,0,191,
  	193,5,21,0,0,192,191,1,0,0,0,193,194,1,0,0,0,194,192,1,0,0,0,194,195,
  	1,0,0,0,195,196,1,0,0,0,196,200,3,32,16,0,197,199,5,21,0,0,198,197,1,
  	0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,203,1,0,0,0,
  	202,200,1,0,0,0,203,204,5,8,0,0,204,31,1,0,0,0,205,206,5,1,0,0,206,33,
  	1,0,0,0,207,208,3,36,18,0,208,209,5,8,0,0,209,35,1,0,0,0,210,213,3,38,
  	19,0,211,213,3,40,20,0,212,210,1,0,0,0,212,211,1,0,0,0,213,37,1,0,0,0,
  	214,223,5,11,0,0,215,217,5,21,0,0,216,215,1,0,0,0,217,218,1,0,0,0,218,
  	216,1,0,0,0,218,219,1,0,0,0,219,220,1,0,0,0,220,222,5,11,0,0,221,216,
  	1,0,0,0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,39,1,0,0,
  	0,225,223,1,0,0,0,226,235,3,42,21,0,227,229,5,21,0,0,228,227,1,0,0,0,
  	229,230,1,0,0,0,230,228,1,0,0,0,230,231,1,0,0,0,231,232,1,0,0,0,232,234,
  	3,42,21,0,233,228,1,0,0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,
  	0,0,236,41,1,0,0,0,237,235,1,0,0,0,238,239,7,1,0,0,239,43,1,0,0,0,240,
  	242,5,4,0,0,241,243,5,21,0,0,242,241,1,0,0,0,243,244,1,0,0,0,244,242,
  	1,0,0,0,244,245,1,0,0,0,245,246,1,0,0,0,246,250,3,32,16,0,247,249,5,21,
  	0,0,248,247,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,0,250,251,1,0,0,0,251,
  	254,1,0,0,0,252,250,1,0,0,0,253,255,5,8,0,0,254,253,1,0,0,0,254,255,1,
  	0,0,0,255,45,1,0,0,0,256,257,3,48,24,0,257,47,1,0,0,0,258,259,3,54,27,
  	0,259,261,3,56,28,0,260,262,3,86,43,0,261,260,1,0,0,0,261,262,1,0,0,0,
  	262,263,1,0,0,0,263,265,3,62,31,0,264,266,3,50,25,0,265,264,1,0,0,0,265,
  	266,1,0,0,0,266,268,1,0,0,0,267,269,3,52,26,0,268,267,1,0,0,0,268,269,
  	1,0,0,0,269,271,1,0,0,0,270,272,3,98,49,0,271,270,1,0,0,0,271,272,1,0,
  	0,0,272,274,1,0,0,0,273,275,3,94,47,0,274,273,1,0,0,0,274,275,1,0,0,0,
  	275,49,1,0,0,0,276,277,5,19,0,0,277,278,3,78,39,0,278,51,1,0,0,0,279,
  	281,5,23,0,0,280,282,3,80,40,0,281,280,1,0,0,0,281,282,1,0,0,0,282,53,
  	1,0,0,0,283,285,3,58,29,0,284,283,1,0,0,0,284,285,1,0,0,0,285,286,1,0,
  	0,0,286,287,3,60,30,0,287,55,1,0,0,0,288,290,5,19,0,0,289,291,5,23,0,
  	0,290,289,1,0,0,0,290,291,1,0,0,0,291,293,1,0,0,0,292,294,5,23,0,0,293,
  	292,1,0,0,0,293,294,1,0,0,0,294,57,1,0,0,0,295,296,5,9,0,0,296,59,1,0,
  	0,0,297,298,5,9,0,0,298,61,1,0,0,0,299,301,5,23,0,0,300,299,1,0,0,0,300,
  	301,1,0,0,0,301,302,1,0,0,0,302,303,3,64,32,0,303,63,1,0,0,0,304,307,
  	3,66,33,0,305,307,3,68,34,0,306,304,1,0,0,0,306,305,1,0,0,0,307,65,1,
  	0,0,0,308,313,3,110,55,0,309,313,5,9,0,0,310,313,5,10,0,0,311,313,5,11,
  	0,0,312,308,1,0,0,0,312,309,1,0,0,0,312,310,1,0,0,0,312,311,1,0,0,0,313,
  	67,1,0,0,0,314,315,5,28,0,0,315,316,3,70,35,0,316,317,5,29,0,0,317,69,
  	1,0,0,0,318,320,5,7,0,0,319,318,1,0,0,0,319,320,1,0,0,0,320,321,1,0,0,
  	0,321,325,3,76,38,0,322,324,3,72,36,0,323,322,1,0,0,0,324,327,1,0,0,0,
  	325,323,1,0,0,0,325,326,1,0,0,0,326,71,1,0,0,0,327,325,1,0,0,0,328,329,
  	3,74,37,0,329,330,3,76,38,0,330,73,1,0,0,0,331,332,7,2,0,0,332,75,1,0,
  	0,0,333,334,3,114,57,0,334,77,1,0,0,0,335,336,5,11,0,0,336,79,1,0,0,0,
  	337,339,3,84,42,0,338,337,1,0,0,0,339,340,1,0,0,0,340,338,1,0,0,0,340,
  	341,1,0,0,0,341,345,1,0,0,0,342,344,3,82,41,0,343,342,1,0,0,0,344,347,
  	1,0,0,0,345,343,1,0,0,0,345,346,1,0,0,0,346,349,1,0,0,0,347,345,1,0,0,
  	0,348,350,5,23,0,0,349,348,1,0,0,0,349,350,1,0,0,0,350,81,1,0,0,0,351,
  	353,5,23,0,0,352,354,3,84,42,0,353,352,1,0,0,0,354,355,1,0,0,0,355,353,
  	1,0,0,0,355,356,1,0,0,0,356,83,1,0,0,0,357,364,3,110,55,0,358,364,5,9,
  	0,0,359,364,5,10,0,0,360,364,5,11,0,0,361,364,5,26,0,0,362,364,5,24,0,
  	0,363,357,1,0,0,0,363,358,1,0,0,0,363,359,1,0,0,0,363,360,1,0,0,0,363,
  	361,1,0,0,0,363,362,1,0,0,0,364,85,1,0,0,0,365,367,3,88,44,0,366,368,
  	3,90,45,0,367,366,1,0,0,0,367,368,1,0,0,0,368,369,1,0,0,0,369,370,5,31,
  	0,0,370,87,1,0,0,0,371,376,3,110,55,0,372,376,5,9,0,0,373,376,5,10,0,
  	0,374,376,5,11,0,0,375,371,1,0,0,0,375,372,1,0,0,0,375,373,1,0,0,0,375,
  	374,1,0,0,0,376,89,1,0,0,0,377,378,5,19,0,0,378,379,3,92,46,0,379,91,
  	1,0,0,0,380,385,3,110,55,0,381,385,5,9,0,0,382,385,5,10,0,0,383,385,5,
  	11,0,0,384,380,1,0,0,0,384,381,1,0,0,0,384,382,1,0,0,0,384,383,1,0,0,
  	0,385,93,1,0,0,0,386,387,5,20,0,0,387,388,3,96,48,0,388,95,1,0,0,0,389,
  	394,3,110,55,0,390,394,5,9,0,0,391,394,5,10,0,0,392,394,5,11,0,0,393,
  	389,1,0,0,0,393,390,1,0,0,0,393,391,1,0,0,0,393,392,1,0,0,0,394,97,1,
  	0,0,0,395,397,5,32,0,0,396,398,3,100,50,0,397,396,1,0,0,0,397,398,1,0,
  	0,0,398,99,1,0,0,0,399,403,3,104,52,0,400,402,3,102,51,0,401,400,1,0,
  	0,0,402,405,1,0,0,0,403,401,1,0,0,0,403,404,1,0,0,0,404,101,1,0,0,0,405,
  	403,1,0,0,0,406,407,5,30,0,0,407,408,3,104,52,0,408,103,1,0,0,0,409,410,
  	3,106,53,0,410,414,5,18,0,0,411,413,3,108,54,0,412,411,1,0,0,0,413,416,
  	1,0,0,0,414,412,1,0,0,0,414,415,1,0,0,0,415,105,1,0,0,0,416,414,1,0,0,
  	0,417,422,3,110,55,0,418,422,5,9,0,0,419,422,5,10,0,0,420,422,5,11,0,
  	0,421,417,1,0,0,0,421,418,1,0,0,0,421,419,1,0,0,0,421,420,1,0,0,0,422,
  	107,1,0,0,0,423,434,3,110,55,0,424,434,5,9,0,0,425,434,5,10,0,0,426,434,
  	5,11,0,0,427,429,5,14,0,0,428,427,1,0,0,0,429,430,1,0,0,0,430,428,1,0,
  	0,0,430,431,1,0,0,0,431,434,1,0,0,0,432,434,5,19,0,0,433,423,1,0,0,0,
  	433,424,1,0,0,0,433,425,1,0,0,0,433,426,1,0,0,0,433,428,1,0,0,0,433,432,
  	1,0,0,0,434,109,1,0,0,0,435,436,5,6,0,0,436,437,3,112,56,0,437,438,5,
  	6,0,0,438,111,1,0,0,0,439,440,7,3,0,0,440,113,1,0,0,0,441,446,3,110,55,
  	0,442,446,5,9,0,0,443,446,5,10,0,0,444,446,5,11,0,0,445,441,1,0,0,0,445,
  	442,1,0,0,0,445,443,1,0,0,0,445,444,1,0,0,0,446,115,1,0,0,0,46,119,125,
  	133,142,162,182,194,200,212,218,223,230,235,244,250,254,261,265,268,271,
  	274,281,284,290,293,300,306,312,319,325,340,345,349,355,363,367,375,384,
  	393,397,403,414,421,430,433,445
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  datalistParserStaticData = staticData.release();
}

}

DataListParser::DataListParser(TokenStream *input) : DataListParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

DataListParser::DataListParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  DataListParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *datalistParserStaticData->atn, datalistParserStaticData->decisionToDFA, datalistParserStaticData->sharedContextCache, options);
}

DataListParser::~DataListParser() {
  delete _interpreter;
}

const atn::ATN& DataListParser::getATN() const {
  return *datalistParserStaticData->atn;
}

std::string DataListParser::getGrammarFileName() const {
  return "DataList.g4";
}

const std::vector<std::string>& DataListParser::getRuleNames() const {
  return datalistParserStaticData->ruleNames;
}

const dfa::Vocabulary& DataListParser::getVocabulary() const {
  return datalistParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DataListParser::getSerializedATN() const {
  return datalistParserStaticData->serializedATN;
}


//----------------- DlistContext ------------------------------------------------------------------

DataListParser::DlistContext::DlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::LastUpdatedContext* DataListParser::DlistContext::lastUpdated() {
  return getRuleContext<DataListParser::LastUpdatedContext>(0);
}

tree::TerminalNode* DataListParser::DlistContext::EOF() {
  return getToken(DataListParser::EOF, 0);
}

std::vector<DataListParser::SourceContext *> DataListParser::DlistContext::source() {
  return getRuleContexts<DataListParser::SourceContext>();
}

DataListParser::SourceContext* DataListParser::DlistContext::source(size_t i) {
  return getRuleContext<DataListParser::SourceContext>(i);
}

std::vector<DataListParser::DataListContext *> DataListParser::DlistContext::dataList() {
  return getRuleContexts<DataListParser::DataListContext>();
}

DataListParser::DataListContext* DataListParser::DlistContext::dataList(size_t i) {
  return getRuleContext<DataListParser::DataListContext>(i);
}


size_t DataListParser::DlistContext::getRuleIndex() const {
  return DataListParser::RuleDlist;
}

void DataListParser::DlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDlist(this);
}

void DataListParser::DlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDlist(this);
}


std::any DataListParser::DlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitDlist(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::DlistContext* DataListParser::dlist() {
  DlistContext *_localctx = _tracker.createInstance<DlistContext>(_ctx, getState());
  enterRule(_localctx, 0, DataListParser::RuleDlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(116);
      source();
      setState(119); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DataListParser::SOURCE);
    setState(121);
    lastUpdated();
    setState(123); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(122);
      dataList();
      setState(125); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DataListParser::START_LIST);
    setState(127);
    match(DataListParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataListContext ------------------------------------------------------------------

DataListParser::DataListContext::DataListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::StartListContext* DataListParser::DataListContext::startList() {
  return getRuleContext<DataListParser::StartListContext>(0);
}

DataListParser::EndListContext* DataListParser::DataListContext::endList() {
  return getRuleContext<DataListParser::EndListContext>(0);
}

std::vector<DataListParser::ListItemContext *> DataListParser::DataListContext::listItem() {
  return getRuleContexts<DataListParser::ListItemContext>();
}

DataListParser::ListItemContext* DataListParser::DataListContext::listItem(size_t i) {
  return getRuleContext<DataListParser::ListItemContext>(i);
}


size_t DataListParser::DataListContext::getRuleIndex() const {
  return DataListParser::RuleDataList;
}

void DataListParser::DataListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataList(this);
}

void DataListParser::DataListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataList(this);
}


std::any DataListParser::DataListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitDataList(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::DataListContext* DataListParser::dataList() {
  DataListContext *_localctx = _tracker.createInstance<DataListContext>(_ctx, getState());
  enterRule(_localctx, 2, DataListParser::RuleDataList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    startList();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3584) != 0)) {
      setState(130);
      listItem();
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    endList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceContext ------------------------------------------------------------------

DataListParser::SourceContext::SourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::SourceContext::SOURCE() {
  return getToken(DataListParser::SOURCE, 0);
}

tree::TerminalNode* DataListParser::SourceContext::EQ() {
  return getToken(DataListParser::EQ, 0);
}

tree::TerminalNode* DataListParser::SourceContext::WS() {
  return getToken(DataListParser::WS, 0);
}

tree::TerminalNode* DataListParser::SourceContext::STATIC_SOURCE() {
  return getToken(DataListParser::STATIC_SOURCE, 0);
}

DataListParser::UrlContext* DataListParser::SourceContext::url() {
  return getRuleContext<DataListParser::UrlContext>(0);
}


size_t DataListParser::SourceContext::getRuleIndex() const {
  return DataListParser::RuleSource;
}

void DataListParser::SourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSource(this);
}

void DataListParser::SourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSource(this);
}


std::any DataListParser::SourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSource(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SourceContext* DataListParser::source() {
  SourceContext *_localctx = _tracker.createInstance<SourceContext>(_ctx, getState());
  enterRule(_localctx, 4, DataListParser::RuleSource);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(DataListParser::SOURCE);
    setState(139);
    match(DataListParser::EQ);
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::STATIC_SOURCE: {
        setState(140);
        match(DataListParser::STATIC_SOURCE);
        break;
      }

      case DataListParser::BASIC_STRING: {
        setState(141);
        url();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(144);
    match(DataListParser::WS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastUpdatedContext ------------------------------------------------------------------

DataListParser::LastUpdatedContext::LastUpdatedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::LastUpdatedContext::LAST_UPDATED() {
  return getToken(DataListParser::LAST_UPDATED, 0);
}

tree::TerminalNode* DataListParser::LastUpdatedContext::EQ() {
  return getToken(DataListParser::EQ, 0);
}

DataListParser::DateTimeContext* DataListParser::LastUpdatedContext::dateTime() {
  return getRuleContext<DataListParser::DateTimeContext>(0);
}

tree::TerminalNode* DataListParser::LastUpdatedContext::WS() {
  return getToken(DataListParser::WS, 0);
}


size_t DataListParser::LastUpdatedContext::getRuleIndex() const {
  return DataListParser::RuleLastUpdated;
}

void DataListParser::LastUpdatedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastUpdated(this);
}

void DataListParser::LastUpdatedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastUpdated(this);
}


std::any DataListParser::LastUpdatedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitLastUpdated(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::LastUpdatedContext* DataListParser::lastUpdated() {
  LastUpdatedContext *_localctx = _tracker.createInstance<LastUpdatedContext>(_ctx, getState());
  enterRule(_localctx, 6, DataListParser::RuleLastUpdated);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(DataListParser::LAST_UPDATED);
    setState(147);
    match(DataListParser::EQ);
    setState(148);
    dateTime();
    setState(149);
    match(DataListParser::WS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DateTimeContext ------------------------------------------------------------------

DataListParser::DateTimeContext::DateTimeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::YearContext* DataListParser::DateTimeContext::year() {
  return getRuleContext<DataListParser::YearContext>(0);
}

std::vector<tree::TerminalNode *> DataListParser::DateTimeContext::HYPH() {
  return getTokens(DataListParser::HYPH);
}

tree::TerminalNode* DataListParser::DateTimeContext::HYPH(size_t i) {
  return getToken(DataListParser::HYPH, i);
}

DataListParser::MonthContext* DataListParser::DateTimeContext::month() {
  return getRuleContext<DataListParser::MonthContext>(0);
}

DataListParser::DayContext* DataListParser::DateTimeContext::day() {
  return getRuleContext<DataListParser::DayContext>(0);
}

tree::TerminalNode* DataListParser::DateTimeContext::SPACE() {
  return getToken(DataListParser::SPACE, 0);
}

DataListParser::HourContext* DataListParser::DateTimeContext::hour() {
  return getRuleContext<DataListParser::HourContext>(0);
}

std::vector<tree::TerminalNode *> DataListParser::DateTimeContext::COL() {
  return getTokens(DataListParser::COL);
}

tree::TerminalNode* DataListParser::DateTimeContext::COL(size_t i) {
  return getToken(DataListParser::COL, i);
}

DataListParser::MinuteContext* DataListParser::DateTimeContext::minute() {
  return getRuleContext<DataListParser::MinuteContext>(0);
}

DataListParser::TimeZoneContext* DataListParser::DateTimeContext::timeZone() {
  return getRuleContext<DataListParser::TimeZoneContext>(0);
}

DataListParser::SecondContext* DataListParser::DateTimeContext::second() {
  return getRuleContext<DataListParser::SecondContext>(0);
}


size_t DataListParser::DateTimeContext::getRuleIndex() const {
  return DataListParser::RuleDateTime;
}

void DataListParser::DateTimeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDateTime(this);
}

void DataListParser::DateTimeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDateTime(this);
}


std::any DataListParser::DateTimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitDateTime(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::DateTimeContext* DataListParser::dateTime() {
  DateTimeContext *_localctx = _tracker.createInstance<DateTimeContext>(_ctx, getState());
  enterRule(_localctx, 8, DataListParser::RuleDateTime);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    year();
    setState(152);
    match(DataListParser::HYPH);
    setState(153);
    month();
    setState(154);
    match(DataListParser::HYPH);
    setState(155);
    day();
    setState(156);
    match(DataListParser::SPACE);
    setState(157);
    hour();
    setState(158);
    match(DataListParser::COL);
    setState(159);
    minute();
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(160);
      match(DataListParser::COL);
      setState(161);
      second();
    }
    setState(164);
    timeZone();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- YearContext ------------------------------------------------------------------

DataListParser::YearContext::YearContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::YearContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::YearContext::getRuleIndex() const {
  return DataListParser::RuleYear;
}

void DataListParser::YearContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYear(this);
}

void DataListParser::YearContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYear(this);
}


std::any DataListParser::YearContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitYear(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::YearContext* DataListParser::year() {
  YearContext *_localctx = _tracker.createInstance<YearContext>(_ctx, getState());
  enterRule(_localctx, 10, DataListParser::RuleYear);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MonthContext ------------------------------------------------------------------

DataListParser::MonthContext::MonthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::MonthContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::MonthContext::getRuleIndex() const {
  return DataListParser::RuleMonth;
}

void DataListParser::MonthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMonth(this);
}

void DataListParser::MonthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMonth(this);
}


std::any DataListParser::MonthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitMonth(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::MonthContext* DataListParser::month() {
  MonthContext *_localctx = _tracker.createInstance<MonthContext>(_ctx, getState());
  enterRule(_localctx, 12, DataListParser::RuleMonth);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DayContext ------------------------------------------------------------------

DataListParser::DayContext::DayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::DayContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::DayContext::getRuleIndex() const {
  return DataListParser::RuleDay;
}

void DataListParser::DayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDay(this);
}

void DataListParser::DayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDay(this);
}


std::any DataListParser::DayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitDay(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::DayContext* DataListParser::day() {
  DayContext *_localctx = _tracker.createInstance<DayContext>(_ctx, getState());
  enterRule(_localctx, 14, DataListParser::RuleDay);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HourContext ------------------------------------------------------------------

DataListParser::HourContext::HourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::HourContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::HourContext::getRuleIndex() const {
  return DataListParser::RuleHour;
}

void DataListParser::HourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHour(this);
}

void DataListParser::HourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHour(this);
}


std::any DataListParser::HourContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitHour(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::HourContext* DataListParser::hour() {
  HourContext *_localctx = _tracker.createInstance<HourContext>(_ctx, getState());
  enterRule(_localctx, 16, DataListParser::RuleHour);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinuteContext ------------------------------------------------------------------

DataListParser::MinuteContext::MinuteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::MinuteContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::MinuteContext::getRuleIndex() const {
  return DataListParser::RuleMinute;
}

void DataListParser::MinuteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinute(this);
}

void DataListParser::MinuteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinute(this);
}


std::any DataListParser::MinuteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitMinute(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::MinuteContext* DataListParser::minute() {
  MinuteContext *_localctx = _tracker.createInstance<MinuteContext>(_ctx, getState());
  enterRule(_localctx, 18, DataListParser::RuleMinute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SecondContext ------------------------------------------------------------------

DataListParser::SecondContext::SecondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::SecondContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::SecondContext::getRuleIndex() const {
  return DataListParser::RuleSecond;
}

void DataListParser::SecondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecond(this);
}

void DataListParser::SecondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecond(this);
}


std::any DataListParser::SecondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSecond(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SecondContext* DataListParser::second() {
  SecondContext *_localctx = _tracker.createInstance<SecondContext>(_ctx, getState());
  enterRule(_localctx, 20, DataListParser::RuleSecond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimeZoneContext ------------------------------------------------------------------

DataListParser::TimeZoneContext::TimeZoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::TzModContext* DataListParser::TimeZoneContext::tzMod() {
  return getRuleContext<DataListParser::TzModContext>(0);
}

DataListParser::TzHourContext* DataListParser::TimeZoneContext::tzHour() {
  return getRuleContext<DataListParser::TzHourContext>(0);
}

tree::TerminalNode* DataListParser::TimeZoneContext::COL() {
  return getToken(DataListParser::COL, 0);
}

DataListParser::TzMinutesContext* DataListParser::TimeZoneContext::tzMinutes() {
  return getRuleContext<DataListParser::TzMinutesContext>(0);
}


size_t DataListParser::TimeZoneContext::getRuleIndex() const {
  return DataListParser::RuleTimeZone;
}

void DataListParser::TimeZoneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimeZone(this);
}

void DataListParser::TimeZoneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimeZone(this);
}


std::any DataListParser::TimeZoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitTimeZone(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::TimeZoneContext* DataListParser::timeZone() {
  TimeZoneContext *_localctx = _tracker.createInstance<TimeZoneContext>(_ctx, getState());
  enterRule(_localctx, 22, DataListParser::RuleTimeZone);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    tzMod();
    setState(179);
    tzHour();
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(180);
      match(DataListParser::COL);
      setState(181);
      tzMinutes();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TzModContext ------------------------------------------------------------------

DataListParser::TzModContext::TzModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::TzModContext::PLUS() {
  return getToken(DataListParser::PLUS, 0);
}

tree::TerminalNode* DataListParser::TzModContext::HYPH() {
  return getToken(DataListParser::HYPH, 0);
}


size_t DataListParser::TzModContext::getRuleIndex() const {
  return DataListParser::RuleTzMod;
}

void DataListParser::TzModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTzMod(this);
}

void DataListParser::TzModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTzMod(this);
}


std::any DataListParser::TzModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitTzMod(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::TzModContext* DataListParser::tzMod() {
  TzModContext *_localctx = _tracker.createInstance<TzModContext>(_ctx, getState());
  enterRule(_localctx, 24, DataListParser::RuleTzMod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    _la = _input->LA(1);
    if (!(_la == DataListParser::PLUS

    || _la == DataListParser::HYPH)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TzHourContext ------------------------------------------------------------------

DataListParser::TzHourContext::TzHourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::TzHourContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::TzHourContext::getRuleIndex() const {
  return DataListParser::RuleTzHour;
}

void DataListParser::TzHourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTzHour(this);
}

void DataListParser::TzHourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTzHour(this);
}


std::any DataListParser::TzHourContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitTzHour(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::TzHourContext* DataListParser::tzHour() {
  TzHourContext *_localctx = _tracker.createInstance<TzHourContext>(_ctx, getState());
  enterRule(_localctx, 26, DataListParser::RuleTzHour);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TzMinutesContext ------------------------------------------------------------------

DataListParser::TzMinutesContext::TzMinutesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::TzMinutesContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::TzMinutesContext::getRuleIndex() const {
  return DataListParser::RuleTzMinutes;
}

void DataListParser::TzMinutesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTzMinutes(this);
}

void DataListParser::TzMinutesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTzMinutes(this);
}


std::any DataListParser::TzMinutesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitTzMinutes(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::TzMinutesContext* DataListParser::tzMinutes() {
  TzMinutesContext *_localctx = _tracker.createInstance<TzMinutesContext>(_ctx, getState());
  enterRule(_localctx, 28, DataListParser::RuleTzMinutes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartListContext ------------------------------------------------------------------

DataListParser::StartListContext::StartListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::StartListContext::START_LIST() {
  return getToken(DataListParser::START_LIST, 0);
}

DataListParser::ListIdContext* DataListParser::StartListContext::listId() {
  return getRuleContext<DataListParser::ListIdContext>(0);
}

tree::TerminalNode* DataListParser::StartListContext::WS() {
  return getToken(DataListParser::WS, 0);
}

std::vector<tree::TerminalNode *> DataListParser::StartListContext::SPACE() {
  return getTokens(DataListParser::SPACE);
}

tree::TerminalNode* DataListParser::StartListContext::SPACE(size_t i) {
  return getToken(DataListParser::SPACE, i);
}


size_t DataListParser::StartListContext::getRuleIndex() const {
  return DataListParser::RuleStartList;
}

void DataListParser::StartListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStartList(this);
}

void DataListParser::StartListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStartList(this);
}


std::any DataListParser::StartListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitStartList(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::StartListContext* DataListParser::startList() {
  StartListContext *_localctx = _tracker.createInstance<StartListContext>(_ctx, getState());
  enterRule(_localctx, 30, DataListParser::RuleStartList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(DataListParser::START_LIST);
    setState(192); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(191);
      match(DataListParser::SPACE);
      setState(194); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DataListParser::SPACE);
    setState(196);
    listId();
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::SPACE) {
      setState(197);
      match(DataListParser::SPACE);
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(203);
    match(DataListParser::WS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListIdContext ------------------------------------------------------------------

DataListParser::ListIdContext::ListIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::ListIdContext::SOURCE() {
  return getToken(DataListParser::SOURCE, 0);
}


size_t DataListParser::ListIdContext::getRuleIndex() const {
  return DataListParser::RuleListId;
}

void DataListParser::ListIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListId(this);
}

void DataListParser::ListIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListId(this);
}


std::any DataListParser::ListIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitListId(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ListIdContext* DataListParser::listId() {
  ListIdContext *_localctx = _tracker.createInstance<ListIdContext>(_ctx, getState());
  enterRule(_localctx, 32, DataListParser::RuleListId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(DataListParser::SOURCE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListItemContext ------------------------------------------------------------------

DataListParser::ListItemContext::ListItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ListItemContentContext* DataListParser::ListItemContext::listItemContent() {
  return getRuleContext<DataListParser::ListItemContentContext>(0);
}

tree::TerminalNode* DataListParser::ListItemContext::WS() {
  return getToken(DataListParser::WS, 0);
}


size_t DataListParser::ListItemContext::getRuleIndex() const {
  return DataListParser::RuleListItem;
}

void DataListParser::ListItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListItem(this);
}

void DataListParser::ListItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListItem(this);
}


std::any DataListParser::ListItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitListItem(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ListItemContext* DataListParser::listItem() {
  ListItemContext *_localctx = _tracker.createInstance<ListItemContext>(_ctx, getState());
  enterRule(_localctx, 34, DataListParser::RuleListItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    listItemContent();
    setState(208);
    match(DataListParser::WS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListItemContentContext ------------------------------------------------------------------

DataListParser::ListItemContentContext::ListItemContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::NumericalListItemContentContext* DataListParser::ListItemContentContext::numericalListItemContent() {
  return getRuleContext<DataListParser::NumericalListItemContentContext>(0);
}

DataListParser::ComplexListItemContentContext* DataListParser::ListItemContentContext::complexListItemContent() {
  return getRuleContext<DataListParser::ComplexListItemContentContext>(0);
}


size_t DataListParser::ListItemContentContext::getRuleIndex() const {
  return DataListParser::RuleListItemContent;
}

void DataListParser::ListItemContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListItemContent(this);
}

void DataListParser::ListItemContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListItemContent(this);
}


std::any DataListParser::ListItemContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitListItemContent(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ListItemContentContext* DataListParser::listItemContent() {
  ListItemContentContext *_localctx = _tracker.createInstance<ListItemContentContext>(_ctx, getState());
  enterRule(_localctx, 36, DataListParser::RuleListItemContent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(210);
        numericalListItemContent();
        break;
      }

      case DataListParser::BASIC_STRING:
      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(211);
        complexListItemContent();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericalListItemContentContext ------------------------------------------------------------------

DataListParser::NumericalListItemContentContext::NumericalListItemContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DataListParser::NumericalListItemContentContext::DIGITS() {
  return getTokens(DataListParser::DIGITS);
}

tree::TerminalNode* DataListParser::NumericalListItemContentContext::DIGITS(size_t i) {
  return getToken(DataListParser::DIGITS, i);
}

std::vector<tree::TerminalNode *> DataListParser::NumericalListItemContentContext::SPACE() {
  return getTokens(DataListParser::SPACE);
}

tree::TerminalNode* DataListParser::NumericalListItemContentContext::SPACE(size_t i) {
  return getToken(DataListParser::SPACE, i);
}


size_t DataListParser::NumericalListItemContentContext::getRuleIndex() const {
  return DataListParser::RuleNumericalListItemContent;
}

void DataListParser::NumericalListItemContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericalListItemContent(this);
}

void DataListParser::NumericalListItemContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericalListItemContent(this);
}


std::any DataListParser::NumericalListItemContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitNumericalListItemContent(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::NumericalListItemContentContext* DataListParser::numericalListItemContent() {
  NumericalListItemContentContext *_localctx = _tracker.createInstance<NumericalListItemContentContext>(_ctx, getState());
  enterRule(_localctx, 38, DataListParser::RuleNumericalListItemContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(DataListParser::DIGITS);
    setState(223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::SPACE) {
      setState(216); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(215);
        match(DataListParser::SPACE);
        setState(218); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == DataListParser::SPACE);
      setState(220);
      match(DataListParser::DIGITS);
      setState(225);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComplexListItemContentContext ------------------------------------------------------------------

DataListParser::ComplexListItemContentContext::ComplexListItemContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DataListParser::DataListStringContext *> DataListParser::ComplexListItemContentContext::dataListString() {
  return getRuleContexts<DataListParser::DataListStringContext>();
}

DataListParser::DataListStringContext* DataListParser::ComplexListItemContentContext::dataListString(size_t i) {
  return getRuleContext<DataListParser::DataListStringContext>(i);
}

std::vector<tree::TerminalNode *> DataListParser::ComplexListItemContentContext::SPACE() {
  return getTokens(DataListParser::SPACE);
}

tree::TerminalNode* DataListParser::ComplexListItemContentContext::SPACE(size_t i) {
  return getToken(DataListParser::SPACE, i);
}


size_t DataListParser::ComplexListItemContentContext::getRuleIndex() const {
  return DataListParser::RuleComplexListItemContent;
}

void DataListParser::ComplexListItemContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplexListItemContent(this);
}

void DataListParser::ComplexListItemContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplexListItemContent(this);
}


std::any DataListParser::ComplexListItemContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitComplexListItemContent(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ComplexListItemContentContext* DataListParser::complexListItemContent() {
  ComplexListItemContentContext *_localctx = _tracker.createInstance<ComplexListItemContentContext>(_ctx, getState());
  enterRule(_localctx, 40, DataListParser::RuleComplexListItemContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    dataListString();
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::SPACE) {
      setState(228); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(227);
        match(DataListParser::SPACE);
        setState(230); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == DataListParser::SPACE);
      setState(232);
      dataListString();
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataListStringContext ------------------------------------------------------------------

DataListParser::DataListStringContext::DataListStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::DataListStringContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::DataListStringContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}


size_t DataListParser::DataListStringContext::getRuleIndex() const {
  return DataListParser::RuleDataListString;
}

void DataListParser::DataListStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataListString(this);
}

void DataListParser::DataListStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataListString(this);
}


std::any DataListParser::DataListStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitDataListString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::DataListStringContext* DataListParser::dataListString() {
  DataListStringContext *_localctx = _tracker.createInstance<DataListStringContext>(_ctx, getState());
  enterRule(_localctx, 42, DataListParser::RuleDataListString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    _la = _input->LA(1);
    if (!(_la == DataListParser::BASIC_STRING

    || _la == DataListParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndListContext ------------------------------------------------------------------

DataListParser::EndListContext::EndListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::EndListContext::END_LIST() {
  return getToken(DataListParser::END_LIST, 0);
}

DataListParser::ListIdContext* DataListParser::EndListContext::listId() {
  return getRuleContext<DataListParser::ListIdContext>(0);
}

std::vector<tree::TerminalNode *> DataListParser::EndListContext::SPACE() {
  return getTokens(DataListParser::SPACE);
}

tree::TerminalNode* DataListParser::EndListContext::SPACE(size_t i) {
  return getToken(DataListParser::SPACE, i);
}

tree::TerminalNode* DataListParser::EndListContext::WS() {
  return getToken(DataListParser::WS, 0);
}


size_t DataListParser::EndListContext::getRuleIndex() const {
  return DataListParser::RuleEndList;
}

void DataListParser::EndListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndList(this);
}

void DataListParser::EndListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndList(this);
}


std::any DataListParser::EndListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitEndList(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::EndListContext* DataListParser::endList() {
  EndListContext *_localctx = _tracker.createInstance<EndListContext>(_ctx, getState());
  enterRule(_localctx, 44, DataListParser::RuleEndList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(DataListParser::END_LIST);
    setState(242); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(241);
      match(DataListParser::SPACE);
      setState(244); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DataListParser::SPACE);
    setState(246);
    listId();
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::SPACE) {
      setState(247);
      match(DataListParser::SPACE);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(254);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::WS) {
      setState(253);
      match(DataListParser::WS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UrlContext ------------------------------------------------------------------

DataListParser::UrlContext::UrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::UriContext* DataListParser::UrlContext::uri() {
  return getRuleContext<DataListParser::UriContext>(0);
}


size_t DataListParser::UrlContext::getRuleIndex() const {
  return DataListParser::RuleUrl;
}

void DataListParser::UrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUrl(this);
}

void DataListParser::UrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUrl(this);
}


std::any DataListParser::UrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUrl(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UrlContext* DataListParser::url() {
  UrlContext *_localctx = _tracker.createInstance<UrlContext>(_ctx, getState());
  enterRule(_localctx, 46, DataListParser::RuleUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    uri();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriContext ------------------------------------------------------------------

DataListParser::UriContext::UriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::SchemeContext* DataListParser::UriContext::scheme() {
  return getRuleContext<DataListParser::SchemeContext>(0);
}

DataListParser::SchemeSeparatorContext* DataListParser::UriContext::schemeSeparator() {
  return getRuleContext<DataListParser::SchemeSeparatorContext>(0);
}

DataListParser::HostContext* DataListParser::UriContext::host() {
  return getRuleContext<DataListParser::HostContext>(0);
}

DataListParser::LoginContext* DataListParser::UriContext::login() {
  return getRuleContext<DataListParser::LoginContext>(0);
}

DataListParser::UriPortContext* DataListParser::UriContext::uriPort() {
  return getRuleContext<DataListParser::UriPortContext>(0);
}

DataListParser::UriPathContext* DataListParser::UriContext::uriPath() {
  return getRuleContext<DataListParser::UriPathContext>(0);
}

DataListParser::QueryContext* DataListParser::UriContext::query() {
  return getRuleContext<DataListParser::QueryContext>(0);
}

DataListParser::FragContext* DataListParser::UriContext::frag() {
  return getRuleContext<DataListParser::FragContext>(0);
}


size_t DataListParser::UriContext::getRuleIndex() const {
  return DataListParser::RuleUri;
}

void DataListParser::UriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUri(this);
}

void DataListParser::UriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUri(this);
}


std::any DataListParser::UriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUri(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UriContext* DataListParser::uri() {
  UriContext *_localctx = _tracker.createInstance<UriContext>(_ctx, getState());
  enterRule(_localctx, 48, DataListParser::RuleUri);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    scheme();
    setState(259);
    schemeSeparator();
    setState(261);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(260);
      login();
      break;
    }

    default:
      break;
    }
    setState(263);
    host();
    setState(265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(264);
      uriPort();
    }
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::FS) {
      setState(267);
      uriPath();
    }
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::Q) {
      setState(270);
      query();
    }
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::HASH) {
      setState(273);
      frag();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriPortContext ------------------------------------------------------------------

DataListParser::UriPortContext::UriPortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::UriPortContext::COL() {
  return getToken(DataListParser::COL, 0);
}

DataListParser::PortContext* DataListParser::UriPortContext::port() {
  return getRuleContext<DataListParser::PortContext>(0);
}


size_t DataListParser::UriPortContext::getRuleIndex() const {
  return DataListParser::RuleUriPort;
}

void DataListParser::UriPortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriPort(this);
}

void DataListParser::UriPortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriPort(this);
}


std::any DataListParser::UriPortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUriPort(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UriPortContext* DataListParser::uriPort() {
  UriPortContext *_localctx = _tracker.createInstance<UriPortContext>(_ctx, getState());
  enterRule(_localctx, 50, DataListParser::RuleUriPort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(DataListParser::COL);
    setState(277);
    port();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriPathContext ------------------------------------------------------------------

DataListParser::UriPathContext::UriPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::UriPathContext::FS() {
  return getToken(DataListParser::FS, 0);
}

DataListParser::PathContext* DataListParser::UriPathContext::path() {
  return getRuleContext<DataListParser::PathContext>(0);
}


size_t DataListParser::UriPathContext::getRuleIndex() const {
  return DataListParser::RuleUriPath;
}

void DataListParser::UriPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriPath(this);
}

void DataListParser::UriPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriPath(this);
}


std::any DataListParser::UriPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUriPath(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UriPathContext* DataListParser::uriPath() {
  UriPathContext *_localctx = _tracker.createInstance<UriPathContext>(_ctx, getState());
  enterRule(_localctx, 52, DataListParser::RuleUriPath);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(DataListParser::FS);
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 83889728) != 0)) {
      setState(280);
      path();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeContext ------------------------------------------------------------------

DataListParser::SchemeContext::SchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::UriSchemeContext* DataListParser::SchemeContext::uriScheme() {
  return getRuleContext<DataListParser::UriSchemeContext>(0);
}

DataListParser::UriSchemePrefixContext* DataListParser::SchemeContext::uriSchemePrefix() {
  return getRuleContext<DataListParser::UriSchemePrefixContext>(0);
}


size_t DataListParser::SchemeContext::getRuleIndex() const {
  return DataListParser::RuleScheme;
}

void DataListParser::SchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScheme(this);
}

void DataListParser::SchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScheme(this);
}


std::any DataListParser::SchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitScheme(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SchemeContext* DataListParser::scheme() {
  SchemeContext *_localctx = _tracker.createInstance<SchemeContext>(_ctx, getState());
  enterRule(_localctx, 54, DataListParser::RuleScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(283);
      uriSchemePrefix();
      break;
    }

    default:
      break;
    }
    setState(286);
    uriScheme();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeSeparatorContext ------------------------------------------------------------------

DataListParser::SchemeSeparatorContext::SchemeSeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::SchemeSeparatorContext::COL() {
  return getToken(DataListParser::COL, 0);
}

std::vector<tree::TerminalNode *> DataListParser::SchemeSeparatorContext::FS() {
  return getTokens(DataListParser::FS);
}

tree::TerminalNode* DataListParser::SchemeSeparatorContext::FS(size_t i) {
  return getToken(DataListParser::FS, i);
}


size_t DataListParser::SchemeSeparatorContext::getRuleIndex() const {
  return DataListParser::RuleSchemeSeparator;
}

void DataListParser::SchemeSeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeSeparator(this);
}

void DataListParser::SchemeSeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeSeparator(this);
}


std::any DataListParser::SchemeSeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSchemeSeparator(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SchemeSeparatorContext* DataListParser::schemeSeparator() {
  SchemeSeparatorContext *_localctx = _tracker.createInstance<SchemeSeparatorContext>(_ctx, getState());
  enterRule(_localctx, 56, DataListParser::RuleSchemeSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(DataListParser::COL);
    setState(290);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(289);
      match(DataListParser::FS);
      break;
    }

    default:
      break;
    }
    setState(293);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(292);
      match(DataListParser::FS);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriSchemePrefixContext ------------------------------------------------------------------

DataListParser::UriSchemePrefixContext::UriSchemePrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::UriSchemePrefixContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}


size_t DataListParser::UriSchemePrefixContext::getRuleIndex() const {
  return DataListParser::RuleUriSchemePrefix;
}

void DataListParser::UriSchemePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriSchemePrefix(this);
}

void DataListParser::UriSchemePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriSchemePrefix(this);
}


std::any DataListParser::UriSchemePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUriSchemePrefix(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UriSchemePrefixContext* DataListParser::uriSchemePrefix() {
  UriSchemePrefixContext *_localctx = _tracker.createInstance<UriSchemePrefixContext>(_ctx, getState());
  enterRule(_localctx, 58, DataListParser::RuleUriSchemePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(DataListParser::BASIC_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriSchemeContext ------------------------------------------------------------------

DataListParser::UriSchemeContext::UriSchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::UriSchemeContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}


size_t DataListParser::UriSchemeContext::getRuleIndex() const {
  return DataListParser::RuleUriScheme;
}

void DataListParser::UriSchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriScheme(this);
}

void DataListParser::UriSchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriScheme(this);
}


std::any DataListParser::UriSchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUriScheme(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UriSchemeContext* DataListParser::uriScheme() {
  UriSchemeContext *_localctx = _tracker.createInstance<UriSchemeContext>(_ctx, getState());
  enterRule(_localctx, 60, DataListParser::RuleUriScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(DataListParser::BASIC_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostContext ------------------------------------------------------------------

DataListParser::HostContext::HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::HostnameContext* DataListParser::HostContext::hostname() {
  return getRuleContext<DataListParser::HostnameContext>(0);
}

tree::TerminalNode* DataListParser::HostContext::FS() {
  return getToken(DataListParser::FS, 0);
}


size_t DataListParser::HostContext::getRuleIndex() const {
  return DataListParser::RuleHost;
}

void DataListParser::HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost(this);
}

void DataListParser::HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost(this);
}


std::any DataListParser::HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitHost(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::HostContext* DataListParser::host() {
  HostContext *_localctx = _tracker.createInstance<HostContext>(_ctx, getState());
  enterRule(_localctx, 62, DataListParser::RuleHost);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::FS) {
      setState(299);
      match(DataListParser::FS);
    }
    setState(302);
    hostname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostnameContext ------------------------------------------------------------------

DataListParser::HostnameContext::HostnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::DomainNameOrIpv4HostContext* DataListParser::HostnameContext::domainNameOrIpv4Host() {
  return getRuleContext<DataListParser::DomainNameOrIpv4HostContext>(0);
}

DataListParser::Ipv6HostContext* DataListParser::HostnameContext::ipv6Host() {
  return getRuleContext<DataListParser::Ipv6HostContext>(0);
}


size_t DataListParser::HostnameContext::getRuleIndex() const {
  return DataListParser::RuleHostname;
}

void DataListParser::HostnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHostname(this);
}

void DataListParser::HostnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHostname(this);
}


std::any DataListParser::HostnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitHostname(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::HostnameContext* DataListParser::hostname() {
  HostnameContext *_localctx = _tracker.createInstance<HostnameContext>(_ctx, getState());
  enterRule(_localctx, 64, DataListParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR:
      case DataListParser::BASIC_STRING:
      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(304);
        domainNameOrIpv4Host();
        break;
      }

      case DataListParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(305);
        ipv6Host();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DomainNameOrIpv4HostContext ------------------------------------------------------------------

DataListParser::DomainNameOrIpv4HostContext::DomainNameOrIpv4HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::DomainNameOrIpv4HostContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::DomainNameOrIpv4HostContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::DomainNameOrIpv4HostContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::DomainNameOrIpv4HostContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::DomainNameOrIpv4HostContext::getRuleIndex() const {
  return DataListParser::RuleDomainNameOrIpv4Host;
}

void DataListParser::DomainNameOrIpv4HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDomainNameOrIpv4Host(this);
}

void DataListParser::DomainNameOrIpv4HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDomainNameOrIpv4Host(this);
}


std::any DataListParser::DomainNameOrIpv4HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitDomainNameOrIpv4Host(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::DomainNameOrIpv4HostContext* DataListParser::domainNameOrIpv4Host() {
  DomainNameOrIpv4HostContext *_localctx = _tracker.createInstance<DomainNameOrIpv4HostContext>(_ctx, getState());
  enterRule(_localctx, 66, DataListParser::RuleDomainNameOrIpv4Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(308);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(309);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(310);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(311);
        match(DataListParser::DIGITS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ipv6HostContext ------------------------------------------------------------------

DataListParser::Ipv6HostContext::Ipv6HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::Ipv6HostContext::LBRACKET() {
  return getToken(DataListParser::LBRACKET, 0);
}

DataListParser::V6hostContext* DataListParser::Ipv6HostContext::v6host() {
  return getRuleContext<DataListParser::V6hostContext>(0);
}

tree::TerminalNode* DataListParser::Ipv6HostContext::RBRACKET() {
  return getToken(DataListParser::RBRACKET, 0);
}


size_t DataListParser::Ipv6HostContext::getRuleIndex() const {
  return DataListParser::RuleIpv6Host;
}

void DataListParser::Ipv6HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIpv6Host(this);
}

void DataListParser::Ipv6HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIpv6Host(this);
}


std::any DataListParser::Ipv6HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitIpv6Host(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::Ipv6HostContext* DataListParser::ipv6Host() {
  Ipv6HostContext *_localctx = _tracker.createInstance<Ipv6HostContext>(_ctx, getState());
  enterRule(_localctx, 68, DataListParser::RuleIpv6Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(DataListParser::LBRACKET);
    setState(315);
    v6host();
    setState(316);
    match(DataListParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- V6hostContext ------------------------------------------------------------------

DataListParser::V6hostContext::V6hostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::V6hostConfigParamContext* DataListParser::V6hostContext::v6hostConfigParam() {
  return getRuleContext<DataListParser::V6hostConfigParamContext>(0);
}

tree::TerminalNode* DataListParser::V6hostContext::DBL_COL() {
  return getToken(DataListParser::DBL_COL, 0);
}

std::vector<DataListParser::V6hostSegmentContext *> DataListParser::V6hostContext::v6hostSegment() {
  return getRuleContexts<DataListParser::V6hostSegmentContext>();
}

DataListParser::V6hostSegmentContext* DataListParser::V6hostContext::v6hostSegment(size_t i) {
  return getRuleContext<DataListParser::V6hostSegmentContext>(i);
}


size_t DataListParser::V6hostContext::getRuleIndex() const {
  return DataListParser::RuleV6host;
}

void DataListParser::V6hostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6host(this);
}

void DataListParser::V6hostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6host(this);
}


std::any DataListParser::V6hostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitV6host(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::V6hostContext* DataListParser::v6host() {
  V6hostContext *_localctx = _tracker.createInstance<V6hostContext>(_ctx, getState());
  enterRule(_localctx, 70, DataListParser::RuleV6host);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::DBL_COL) {
      setState(318);
      match(DataListParser::DBL_COL);
    }
    setState(321);
    v6hostConfigParam();
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::DBL_COL

    || _la == DataListParser::COL) {
      setState(322);
      v6hostSegment();
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- V6hostSegmentContext ------------------------------------------------------------------

DataListParser::V6hostSegmentContext::V6hostSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::V6hostSepContext* DataListParser::V6hostSegmentContext::v6hostSep() {
  return getRuleContext<DataListParser::V6hostSepContext>(0);
}

DataListParser::V6hostConfigParamContext* DataListParser::V6hostSegmentContext::v6hostConfigParam() {
  return getRuleContext<DataListParser::V6hostConfigParamContext>(0);
}


size_t DataListParser::V6hostSegmentContext::getRuleIndex() const {
  return DataListParser::RuleV6hostSegment;
}

void DataListParser::V6hostSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostSegment(this);
}

void DataListParser::V6hostSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostSegment(this);
}


std::any DataListParser::V6hostSegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitV6hostSegment(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::V6hostSegmentContext* DataListParser::v6hostSegment() {
  V6hostSegmentContext *_localctx = _tracker.createInstance<V6hostSegmentContext>(_ctx, getState());
  enterRule(_localctx, 72, DataListParser::RuleV6hostSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    v6hostSep();
    setState(329);
    v6hostConfigParam();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- V6hostSepContext ------------------------------------------------------------------

DataListParser::V6hostSepContext::V6hostSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::V6hostSepContext::COL() {
  return getToken(DataListParser::COL, 0);
}

tree::TerminalNode* DataListParser::V6hostSepContext::DBL_COL() {
  return getToken(DataListParser::DBL_COL, 0);
}


size_t DataListParser::V6hostSepContext::getRuleIndex() const {
  return DataListParser::RuleV6hostSep;
}

void DataListParser::V6hostSepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostSep(this);
}

void DataListParser::V6hostSepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostSep(this);
}


std::any DataListParser::V6hostSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitV6hostSep(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::V6hostSepContext* DataListParser::v6hostSep() {
  V6hostSepContext *_localctx = _tracker.createInstance<V6hostSepContext>(_ctx, getState());
  enterRule(_localctx, 74, DataListParser::RuleV6hostSep);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    _la = _input->LA(1);
    if (!(_la == DataListParser::DBL_COL

    || _la == DataListParser::COL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- V6hostConfigParamContext ------------------------------------------------------------------

DataListParser::V6hostConfigParamContext::V6hostConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ConfigParamContext* DataListParser::V6hostConfigParamContext::configParam() {
  return getRuleContext<DataListParser::ConfigParamContext>(0);
}


size_t DataListParser::V6hostConfigParamContext::getRuleIndex() const {
  return DataListParser::RuleV6hostConfigParam;
}

void DataListParser::V6hostConfigParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostConfigParam(this);
}

void DataListParser::V6hostConfigParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostConfigParam(this);
}


std::any DataListParser::V6hostConfigParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitV6hostConfigParam(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::V6hostConfigParamContext* DataListParser::v6hostConfigParam() {
  V6hostConfigParamContext *_localctx = _tracker.createInstance<V6hostConfigParamContext>(_ctx, getState());
  enterRule(_localctx, 76, DataListParser::RuleV6hostConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    configParam();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PortContext ------------------------------------------------------------------

DataListParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::PortContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::PortContext::getRuleIndex() const {
  return DataListParser::RulePort;
}

void DataListParser::PortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPort(this);
}

void DataListParser::PortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPort(this);
}


std::any DataListParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::PortContext* DataListParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 78, DataListParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(DataListParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

DataListParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DataListParser::PathStringContext *> DataListParser::PathContext::pathString() {
  return getRuleContexts<DataListParser::PathStringContext>();
}

DataListParser::PathStringContext* DataListParser::PathContext::pathString(size_t i) {
  return getRuleContext<DataListParser::PathStringContext>(i);
}

std::vector<DataListParser::MultiPathChunkContext *> DataListParser::PathContext::multiPathChunk() {
  return getRuleContexts<DataListParser::MultiPathChunkContext>();
}

DataListParser::MultiPathChunkContext* DataListParser::PathContext::multiPathChunk(size_t i) {
  return getRuleContext<DataListParser::MultiPathChunkContext>(i);
}

tree::TerminalNode* DataListParser::PathContext::FS() {
  return getToken(DataListParser::FS, 0);
}


size_t DataListParser::PathContext::getRuleIndex() const {
  return DataListParser::RulePath;
}

void DataListParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void DataListParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


std::any DataListParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::PathContext* DataListParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 80, DataListParser::RulePath);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(338); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(337);
      pathString();
      setState(340); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 83889728) != 0));
    setState(345);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(342);
        multiPathChunk(); 
      }
      setState(347);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::FS) {
      setState(348);
      match(DataListParser::FS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiPathChunkContext ------------------------------------------------------------------

DataListParser::MultiPathChunkContext::MultiPathChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::MultiPathChunkContext::FS() {
  return getToken(DataListParser::FS, 0);
}

std::vector<DataListParser::PathStringContext *> DataListParser::MultiPathChunkContext::pathString() {
  return getRuleContexts<DataListParser::PathStringContext>();
}

DataListParser::PathStringContext* DataListParser::MultiPathChunkContext::pathString(size_t i) {
  return getRuleContext<DataListParser::PathStringContext>(i);
}


size_t DataListParser::MultiPathChunkContext::getRuleIndex() const {
  return DataListParser::RuleMultiPathChunk;
}

void DataListParser::MultiPathChunkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiPathChunk(this);
}

void DataListParser::MultiPathChunkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiPathChunk(this);
}


std::any DataListParser::MultiPathChunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitMultiPathChunk(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::MultiPathChunkContext* DataListParser::multiPathChunk() {
  MultiPathChunkContext *_localctx = _tracker.createInstance<MultiPathChunkContext>(_ctx, getState());
  enterRule(_localctx, 82, DataListParser::RuleMultiPathChunk);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(DataListParser::FS);
    setState(353); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(352);
      pathString();
      setState(355); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 83889728) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathStringContext ------------------------------------------------------------------

DataListParser::PathStringContext::PathStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::PathStringContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::PathStringContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::PathStringContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::PathStringContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}

tree::TerminalNode* DataListParser::PathStringContext::HYPH() {
  return getToken(DataListParser::HYPH, 0);
}

tree::TerminalNode* DataListParser::PathStringContext::US() {
  return getToken(DataListParser::US, 0);
}


size_t DataListParser::PathStringContext::getRuleIndex() const {
  return DataListParser::RulePathString;
}

void DataListParser::PathStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathString(this);
}

void DataListParser::PathStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathString(this);
}


std::any DataListParser::PathStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitPathString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::PathStringContext* DataListParser::pathString() {
  PathStringContext *_localctx = _tracker.createInstance<PathStringContext>(_ctx, getState());
  enterRule(_localctx, 84, DataListParser::RulePathString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(357);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(358);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(359);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(360);
        match(DataListParser::DIGITS);
        break;
      }

      case DataListParser::HYPH: {
        enterOuterAlt(_localctx, 5);
        setState(361);
        match(DataListParser::HYPH);
        break;
      }

      case DataListParser::US: {
        enterOuterAlt(_localctx, 6);
        setState(362);
        match(DataListParser::US);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoginContext ------------------------------------------------------------------

DataListParser::LoginContext::LoginContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::UserContext* DataListParser::LoginContext::user() {
  return getRuleContext<DataListParser::UserContext>(0);
}

tree::TerminalNode* DataListParser::LoginContext::AT() {
  return getToken(DataListParser::AT, 0);
}

DataListParser::LoginPasswordContext* DataListParser::LoginContext::loginPassword() {
  return getRuleContext<DataListParser::LoginPasswordContext>(0);
}


size_t DataListParser::LoginContext::getRuleIndex() const {
  return DataListParser::RuleLogin;
}

void DataListParser::LoginContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogin(this);
}

void DataListParser::LoginContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogin(this);
}


std::any DataListParser::LoginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitLogin(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::LoginContext* DataListParser::login() {
  LoginContext *_localctx = _tracker.createInstance<LoginContext>(_ctx, getState());
  enterRule(_localctx, 86, DataListParser::RuleLogin);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    user();
    setState(367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(366);
      loginPassword();
    }
    setState(369);
    match(DataListParser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserContext ------------------------------------------------------------------

DataListParser::UserContext::UserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::UserContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::UserContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::UserContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::UserContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::UserContext::getRuleIndex() const {
  return DataListParser::RuleUser;
}

void DataListParser::UserContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser(this);
}

void DataListParser::UserContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser(this);
}


std::any DataListParser::UserContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUser(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UserContext* DataListParser::user() {
  UserContext *_localctx = _tracker.createInstance<UserContext>(_ctx, getState());
  enterRule(_localctx, 88, DataListParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(375);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(371);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(372);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(373);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(374);
        match(DataListParser::DIGITS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoginPasswordContext ------------------------------------------------------------------

DataListParser::LoginPasswordContext::LoginPasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::LoginPasswordContext::COL() {
  return getToken(DataListParser::COL, 0);
}

DataListParser::PasswordContext* DataListParser::LoginPasswordContext::password() {
  return getRuleContext<DataListParser::PasswordContext>(0);
}


size_t DataListParser::LoginPasswordContext::getRuleIndex() const {
  return DataListParser::RuleLoginPassword;
}

void DataListParser::LoginPasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoginPassword(this);
}

void DataListParser::LoginPasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoginPassword(this);
}


std::any DataListParser::LoginPasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitLoginPassword(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::LoginPasswordContext* DataListParser::loginPassword() {
  LoginPasswordContext *_localctx = _tracker.createInstance<LoginPasswordContext>(_ctx, getState());
  enterRule(_localctx, 90, DataListParser::RuleLoginPassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(DataListParser::COL);
    setState(378);
    password();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PasswordContext ------------------------------------------------------------------

DataListParser::PasswordContext::PasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::PasswordContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::PasswordContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::PasswordContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::PasswordContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::PasswordContext::getRuleIndex() const {
  return DataListParser::RulePassword;
}

void DataListParser::PasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPassword(this);
}

void DataListParser::PasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPassword(this);
}


std::any DataListParser::PasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitPassword(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::PasswordContext* DataListParser::password() {
  PasswordContext *_localctx = _tracker.createInstance<PasswordContext>(_ctx, getState());
  enterRule(_localctx, 92, DataListParser::RulePassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(384);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(380);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(381);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(382);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(383);
        match(DataListParser::DIGITS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FragContext ------------------------------------------------------------------

DataListParser::FragContext::FragContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::FragContext::HASH() {
  return getToken(DataListParser::HASH, 0);
}

DataListParser::FragStringContext* DataListParser::FragContext::fragString() {
  return getRuleContext<DataListParser::FragStringContext>(0);
}


size_t DataListParser::FragContext::getRuleIndex() const {
  return DataListParser::RuleFrag;
}

void DataListParser::FragContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrag(this);
}

void DataListParser::FragContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrag(this);
}


std::any DataListParser::FragContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitFrag(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::FragContext* DataListParser::frag() {
  FragContext *_localctx = _tracker.createInstance<FragContext>(_ctx, getState());
  enterRule(_localctx, 94, DataListParser::RuleFrag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(DataListParser::HASH);
    setState(387);
    fragString();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FragStringContext ------------------------------------------------------------------

DataListParser::FragStringContext::FragStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::FragStringContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::FragStringContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::FragStringContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::FragStringContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::FragStringContext::getRuleIndex() const {
  return DataListParser::RuleFragString;
}

void DataListParser::FragStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFragString(this);
}

void DataListParser::FragStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFragString(this);
}


std::any DataListParser::FragStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitFragString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::FragStringContext* DataListParser::fragString() {
  FragStringContext *_localctx = _tracker.createInstance<FragStringContext>(_ctx, getState());
  enterRule(_localctx, 96, DataListParser::RuleFragString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(393);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(389);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(390);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(391);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(392);
        match(DataListParser::DIGITS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

DataListParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::QueryContext::Q() {
  return getToken(DataListParser::Q, 0);
}

DataListParser::SearchContext* DataListParser::QueryContext::search() {
  return getRuleContext<DataListParser::SearchContext>(0);
}


size_t DataListParser::QueryContext::getRuleIndex() const {
  return DataListParser::RuleQuery;
}

void DataListParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void DataListParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


std::any DataListParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::QueryContext* DataListParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 98, DataListParser::RuleQuery);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    match(DataListParser::Q);
    setState(397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3648) != 0)) {
      setState(396);
      search();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchContext ------------------------------------------------------------------

DataListParser::SearchContext::SearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::SearchParameterContext* DataListParser::SearchContext::searchParameter() {
  return getRuleContext<DataListParser::SearchParameterContext>(0);
}

std::vector<DataListParser::MultiSearchContext *> DataListParser::SearchContext::multiSearch() {
  return getRuleContexts<DataListParser::MultiSearchContext>();
}

DataListParser::MultiSearchContext* DataListParser::SearchContext::multiSearch(size_t i) {
  return getRuleContext<DataListParser::MultiSearchContext>(i);
}


size_t DataListParser::SearchContext::getRuleIndex() const {
  return DataListParser::RuleSearch;
}

void DataListParser::SearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearch(this);
}

void DataListParser::SearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearch(this);
}


std::any DataListParser::SearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSearch(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SearchContext* DataListParser::search() {
  SearchContext *_localctx = _tracker.createInstance<SearchContext>(_ctx, getState());
  enterRule(_localctx, 100, DataListParser::RuleSearch);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    searchParameter();
    setState(403);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::AMP) {
      setState(400);
      multiSearch();
      setState(405);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiSearchContext ------------------------------------------------------------------

DataListParser::MultiSearchContext::MultiSearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::MultiSearchContext::AMP() {
  return getToken(DataListParser::AMP, 0);
}

DataListParser::SearchParameterContext* DataListParser::MultiSearchContext::searchParameter() {
  return getRuleContext<DataListParser::SearchParameterContext>(0);
}


size_t DataListParser::MultiSearchContext::getRuleIndex() const {
  return DataListParser::RuleMultiSearch;
}

void DataListParser::MultiSearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiSearch(this);
}

void DataListParser::MultiSearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiSearch(this);
}


std::any DataListParser::MultiSearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitMultiSearch(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::MultiSearchContext* DataListParser::multiSearch() {
  MultiSearchContext *_localctx = _tracker.createInstance<MultiSearchContext>(_ctx, getState());
  enterRule(_localctx, 102, DataListParser::RuleMultiSearch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(DataListParser::AMP);
    setState(407);
    searchParameter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchParameterContext ------------------------------------------------------------------

DataListParser::SearchParameterContext::SearchParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::SearchParameterKeyContext* DataListParser::SearchParameterContext::searchParameterKey() {
  return getRuleContext<DataListParser::SearchParameterKeyContext>(0);
}

tree::TerminalNode* DataListParser::SearchParameterContext::EQ() {
  return getToken(DataListParser::EQ, 0);
}

std::vector<DataListParser::SearchParameterValueContext *> DataListParser::SearchParameterContext::searchParameterValue() {
  return getRuleContexts<DataListParser::SearchParameterValueContext>();
}

DataListParser::SearchParameterValueContext* DataListParser::SearchParameterContext::searchParameterValue(size_t i) {
  return getRuleContext<DataListParser::SearchParameterValueContext>(i);
}


size_t DataListParser::SearchParameterContext::getRuleIndex() const {
  return DataListParser::RuleSearchParameter;
}

void DataListParser::SearchParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameter(this);
}

void DataListParser::SearchParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameter(this);
}


std::any DataListParser::SearchParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSearchParameter(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SearchParameterContext* DataListParser::searchParameter() {
  SearchParameterContext *_localctx = _tracker.createInstance<SearchParameterContext>(_ctx, getState());
  enterRule(_localctx, 104, DataListParser::RuleSearchParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    searchParameterKey();
    setState(410);
    match(DataListParser::EQ);
    setState(414);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 544320) != 0)) {
      setState(411);
      searchParameterValue();
      setState(416);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchParameterKeyContext ------------------------------------------------------------------

DataListParser::SearchParameterKeyContext::SearchParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::SearchParameterKeyContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::SearchParameterKeyContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::SearchParameterKeyContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::SearchParameterKeyContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::SearchParameterKeyContext::getRuleIndex() const {
  return DataListParser::RuleSearchParameterKey;
}

void DataListParser::SearchParameterKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterKey(this);
}

void DataListParser::SearchParameterKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterKey(this);
}


std::any DataListParser::SearchParameterKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSearchParameterKey(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SearchParameterKeyContext* DataListParser::searchParameterKey() {
  SearchParameterKeyContext *_localctx = _tracker.createInstance<SearchParameterKeyContext>(_ctx, getState());
  enterRule(_localctx, 106, DataListParser::RuleSearchParameterKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(417);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(418);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(419);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(420);
        match(DataListParser::DIGITS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchParameterValueContext ------------------------------------------------------------------

DataListParser::SearchParameterValueContext::SearchParameterValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::SearchParameterValueContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::SearchParameterValueContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::SearchParameterValueContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::SearchParameterValueContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}

std::vector<tree::TerminalNode *> DataListParser::SearchParameterValueContext::HEX() {
  return getTokens(DataListParser::HEX);
}

tree::TerminalNode* DataListParser::SearchParameterValueContext::HEX(size_t i) {
  return getToken(DataListParser::HEX, i);
}

tree::TerminalNode* DataListParser::SearchParameterValueContext::COL() {
  return getToken(DataListParser::COL, 0);
}


size_t DataListParser::SearchParameterValueContext::getRuleIndex() const {
  return DataListParser::RuleSearchParameterValue;
}

void DataListParser::SearchParameterValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterValue(this);
}

void DataListParser::SearchParameterValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterValue(this);
}


std::any DataListParser::SearchParameterValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSearchParameterValue(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SearchParameterValueContext* DataListParser::searchParameterValue() {
  SearchParameterValueContext *_localctx = _tracker.createInstance<SearchParameterValueContext>(_ctx, getState());
  enterRule(_localctx, 108, DataListParser::RuleSearchParameterValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(433);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(423);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(424);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(425);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(426);
        match(DataListParser::DIGITS);
        break;
      }

      case DataListParser::HEX: {
        enterOuterAlt(_localctx, 5);
        setState(428); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(427);
                  match(DataListParser::HEX);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(430); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case DataListParser::COL: {
        enterOuterAlt(_localctx, 6);
        setState(432);
        match(DataListParser::COL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterStringContext ------------------------------------------------------------------

DataListParser::ParameterStringContext::ParameterStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DataListParser::ParameterStringContext::DBL_DOLLAR() {
  return getTokens(DataListParser::DBL_DOLLAR);
}

tree::TerminalNode* DataListParser::ParameterStringContext::DBL_DOLLAR(size_t i) {
  return getToken(DataListParser::DBL_DOLLAR, i);
}

DataListParser::ParameterNameContext* DataListParser::ParameterStringContext::parameterName() {
  return getRuleContext<DataListParser::ParameterNameContext>(0);
}


size_t DataListParser::ParameterStringContext::getRuleIndex() const {
  return DataListParser::RuleParameterString;
}

void DataListParser::ParameterStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterString(this);
}

void DataListParser::ParameterStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterString(this);
}


std::any DataListParser::ParameterStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitParameterString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ParameterStringContext* DataListParser::parameterString() {
  ParameterStringContext *_localctx = _tracker.createInstance<ParameterStringContext>(_ctx, getState());
  enterRule(_localctx, 110, DataListParser::RuleParameterString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(DataListParser::DBL_DOLLAR);
    setState(436);
    parameterName();
    setState(437);
    match(DataListParser::DBL_DOLLAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterNameContext ------------------------------------------------------------------

DataListParser::ParameterNameContext::ParameterNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::ParameterNameContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::ParameterNameContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::ParameterNameContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::ParameterNameContext::getRuleIndex() const {
  return DataListParser::RuleParameterName;
}

void DataListParser::ParameterNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterName(this);
}

void DataListParser::ParameterNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterName(this);
}


std::any DataListParser::ParameterNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitParameterName(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ParameterNameContext* DataListParser::parameterName() {
  ParameterNameContext *_localctx = _tracker.createInstance<ParameterNameContext>(_ctx, getState());
  enterRule(_localctx, 112, DataListParser::RuleParameterName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3584) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConfigParamContext ------------------------------------------------------------------

DataListParser::ConfigParamContext::ConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::ConfigParamContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

tree::TerminalNode* DataListParser::ConfigParamContext::BASIC_STRING() {
  return getToken(DataListParser::BASIC_STRING, 0);
}

tree::TerminalNode* DataListParser::ConfigParamContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::ConfigParamContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::ConfigParamContext::getRuleIndex() const {
  return DataListParser::RuleConfigParam;
}

void DataListParser::ConfigParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConfigParam(this);
}

void DataListParser::ConfigParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConfigParam(this);
}


std::any DataListParser::ConfigParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitConfigParam(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::ConfigParamContext* DataListParser::configParam() {
  ConfigParamContext *_localctx = _tracker.createInstance<ConfigParamContext>(_ctx, getState());
  enterRule(_localctx, 114, DataListParser::RuleConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(441);
        parameterString();
        break;
      }

      case DataListParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(442);
        match(DataListParser::BASIC_STRING);
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(443);
        match(DataListParser::STRING);
        break;
      }

      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(444);
        match(DataListParser::DIGITS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void DataListParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  datalistParserInitialize();
#else
  ::antlr4::internal::call_once(datalistParserOnceFlag, datalistParserInitialize);
#endif
}
