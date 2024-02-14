
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/Sites.g4 by ANTLR 4.13.1


#include "SitesListener.h"
#include "SitesVisitor.h"

#include "SitesParser.h"


using namespace antlrcpp;
using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SitesParserStaticData final {
  SitesParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SitesParserStaticData(const SitesParserStaticData&) = delete;
  SitesParserStaticData(SitesParserStaticData&&) = delete;
  SitesParserStaticData& operator=(const SitesParserStaticData&) = delete;
  SitesParserStaticData& operator=(SitesParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sitesParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SitesParserStaticData *sitesParserStaticData = nullptr;

void sitesParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sitesParserStaticData != nullptr) {
    return;
  }
#else
  assert(sitesParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SitesParserStaticData>(
    std::vector<std::string>{
      "sites", "sitesList", "siteListEntry", "comment", "commentTextFragment", 
      "site", "siteDetail", "meetings", "fellowshipId", "meetingLocationType", 
      "meetingsDataUrl", "fellowship", "fellowshipName", "fellowshipUrl", 
      "organization", "organizationId", "organizationName", "organizationUrl", 
      "resource", "resourceEntityId", "resourceType", "resourceDataPrimary", 
      "resourceTextNumber", "resourcePhoneNumber", "resourceUrl", "resourceOptional", 
      "resourceDataContext", "resourceDataContextSpecifier", "entityId", 
      "entityIdSegment", "entityName", "entityNameSegment", "url", "uri", 
      "uriPort", "uriPath", "scheme", "host", "hostname", "domainNameOrIpv4Host", 
      "ipv6Host", "v6host", "v6hostSegment", "v6hostSep", "v6hostConfigParam", 
      "port", "path", "multiPathChunk", "pathString", "user", "login", "loginPassword", 
      "password", "frag", "fragString", "query", "search", "multiSearch", 
      "searchParameter", "searchParameterKey", "searchParameterValue", "searchParameterValueString", 
      "parameterString", "parameterName", "configParam", "string", "usString", 
      "phone", "countryCode", "areaCode", "phoneNumber", "localPhone", "localArea", 
      "localizer", "dtmf", "dtmfWithLocal", "localAreaWithDtmf", "dtmfAll", 
      "dtmfLocalizer", "phoneSep"
    },
    std::vector<std::string>{
      "", "'any'", "'text'", "'call'", "'chat'", "'test'", "'call-list'", 
      "'literature'", "'reading'", "'store'", "'bulletin'", "'us-in-person'", 
      "'intl-in-person'", "'all-in-person'", "'ca-in-person'", "'virtual'", 
      "'phone'", "'meetings'", "'fellowship'", "'organization'", "'resource'", 
      "'`'", "','", "", "", "", "'&'", "'@'", "'['", "']'", "'\\u003F'", 
      "", "", "", "", "", "", "", "", "", "'='", "':'", "'#'", "' '", "'$'", 
      "'/'", "'_'", "'+'", "'-'", "'%'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "ANY", "TEXT", "CALL", "CHAT", "TEST", "CALL_LIST", "LITERATURE", 
      "READING", "STORE", "BULLETIN", "US_IN_PERSON", "INTL_IN_PERSON", 
      "ALL_IN_PERSON", "CA_IN_PERSON", "VIRTUAL", "PHONE", "MEETINGS", "FELLOWSHIP", 
      "ORGANIZATION", "RESOURCE", "GRAVE", "COMMA", "SCHEME_SEP", "DBL_DOLLAR", 
      "DBL_COL", "AMP", "AT", "LBRACKET", "RBRACKET", "Q", "WS", "STRING", 
      "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", "DIGITS", "SINGLE_DIGIT_INT", 
      "ZERO", "EQ", "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", "PLUS", 
      "HYPH", "PERC", "LPAREN", "RPAREN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,51,504,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,7,
  	77,2,78,7,78,2,79,7,79,1,0,1,0,1,0,1,1,4,1,165,8,1,11,1,12,1,166,1,2,
  	1,2,3,2,171,8,2,1,3,1,3,5,3,175,8,3,10,3,12,3,178,9,3,1,3,1,3,1,4,1,4,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,6,3,6,191,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,
  	16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,241,8,
  	18,1,19,1,19,3,19,245,8,19,1,20,1,20,1,21,1,21,1,21,3,21,252,8,21,1,22,
  	4,22,255,8,22,11,22,12,22,256,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,26,
  	1,26,3,26,268,8,26,1,27,1,27,1,28,4,28,273,8,28,11,28,12,28,274,1,29,
  	1,29,1,30,1,30,5,30,281,8,30,10,30,12,30,284,9,30,1,31,1,31,1,32,1,32,
  	1,33,1,33,1,33,3,33,293,8,33,1,33,1,33,3,33,297,8,33,1,33,3,33,300,8,
  	33,1,33,3,33,303,8,33,1,33,3,33,306,8,33,1,34,1,34,1,34,1,35,1,35,3,35,
  	313,8,35,1,36,1,36,1,37,3,37,318,8,37,1,37,1,37,1,38,1,38,3,38,324,8,
  	38,1,39,1,39,3,39,328,8,39,1,40,1,40,1,40,1,40,1,41,3,41,335,8,41,1,41,
  	1,41,5,41,339,8,41,10,41,12,41,342,9,41,1,42,1,42,1,42,1,43,1,43,1,44,
  	1,44,1,45,1,45,1,46,1,46,5,46,355,8,46,10,46,12,46,358,9,46,1,46,3,46,
  	361,8,46,1,47,1,47,1,47,1,48,1,48,3,48,368,8,48,1,49,1,49,3,49,372,8,
  	49,1,50,1,50,3,50,376,8,50,1,50,1,50,1,51,1,51,1,51,1,52,1,52,3,52,385,
  	8,52,1,53,1,53,1,53,1,54,1,54,1,54,3,54,393,8,54,1,55,1,55,1,55,1,56,
  	1,56,5,56,400,8,56,10,56,12,56,403,9,56,1,57,1,57,1,57,1,58,1,58,3,58,
  	410,8,58,1,59,1,59,3,59,414,8,59,1,60,1,60,3,60,418,8,60,1,61,1,61,1,
  	61,1,61,3,61,424,8,61,1,62,1,62,1,62,1,62,1,63,1,63,5,63,432,8,63,10,
  	63,12,63,435,9,63,1,64,1,64,1,64,3,64,440,8,64,1,65,1,65,1,66,1,66,1,
  	66,1,67,1,67,1,67,1,67,1,67,1,67,1,68,3,68,454,8,68,1,68,1,68,1,69,3,
  	69,459,8,69,1,69,1,69,3,69,463,8,69,1,70,1,70,3,70,467,8,70,1,71,1,71,
  	1,71,1,71,1,72,1,72,1,73,1,73,1,74,1,74,3,74,479,8,74,1,75,1,75,3,75,
  	483,8,75,1,75,1,75,1,76,4,76,488,8,76,11,76,12,76,489,1,77,4,77,493,8,
  	77,11,77,12,77,494,1,78,4,78,498,8,78,11,78,12,78,499,1,79,1,79,1,79,
  	0,0,80,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,
  	92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,
  	130,132,134,136,138,140,142,144,146,148,150,152,154,156,158,0,8,5,0,21,
  	22,32,32,37,37,41,41,43,45,1,0,11,16,1,0,2,10,2,0,34,34,48,48,3,0,34,
  	34,43,43,48,48,2,0,25,25,41,41,2,0,32,32,37,37,2,0,43,43,48,48,475,0,
  	160,1,0,0,0,2,164,1,0,0,0,4,170,1,0,0,0,6,172,1,0,0,0,8,181,1,0,0,0,10,
  	183,1,0,0,0,12,190,1,0,0,0,14,192,1,0,0,0,16,200,1,0,0,0,18,202,1,0,0,
  	0,20,204,1,0,0,0,22,206,1,0,0,0,24,214,1,0,0,0,26,216,1,0,0,0,28,218,
  	1,0,0,0,30,226,1,0,0,0,32,228,1,0,0,0,34,230,1,0,0,0,36,232,1,0,0,0,38,
  	244,1,0,0,0,40,246,1,0,0,0,42,251,1,0,0,0,44,254,1,0,0,0,46,258,1,0,0,
  	0,48,260,1,0,0,0,50,262,1,0,0,0,52,267,1,0,0,0,54,269,1,0,0,0,56,272,
  	1,0,0,0,58,276,1,0,0,0,60,278,1,0,0,0,62,285,1,0,0,0,64,287,1,0,0,0,66,
  	289,1,0,0,0,68,307,1,0,0,0,70,310,1,0,0,0,72,314,1,0,0,0,74,317,1,0,0,
  	0,76,323,1,0,0,0,78,327,1,0,0,0,80,329,1,0,0,0,82,334,1,0,0,0,84,343,
  	1,0,0,0,86,346,1,0,0,0,88,348,1,0,0,0,90,350,1,0,0,0,92,352,1,0,0,0,94,
  	362,1,0,0,0,96,367,1,0,0,0,98,371,1,0,0,0,100,373,1,0,0,0,102,379,1,0,
  	0,0,104,384,1,0,0,0,106,386,1,0,0,0,108,392,1,0,0,0,110,394,1,0,0,0,112,
  	397,1,0,0,0,114,404,1,0,0,0,116,407,1,0,0,0,118,413,1,0,0,0,120,415,1,
  	0,0,0,122,423,1,0,0,0,124,425,1,0,0,0,126,429,1,0,0,0,128,439,1,0,0,0,
  	130,441,1,0,0,0,132,443,1,0,0,0,134,446,1,0,0,0,136,453,1,0,0,0,138,458,
  	1,0,0,0,140,466,1,0,0,0,142,468,1,0,0,0,144,472,1,0,0,0,146,474,1,0,0,
  	0,148,478,1,0,0,0,150,480,1,0,0,0,152,487,1,0,0,0,154,492,1,0,0,0,156,
  	497,1,0,0,0,158,501,1,0,0,0,160,161,3,2,1,0,161,162,5,0,0,1,162,1,1,0,
  	0,0,163,165,3,4,2,0,164,163,1,0,0,0,165,166,1,0,0,0,166,164,1,0,0,0,166,
  	167,1,0,0,0,167,3,1,0,0,0,168,171,3,6,3,0,169,171,3,10,5,0,170,168,1,
  	0,0,0,170,169,1,0,0,0,171,5,1,0,0,0,172,176,5,42,0,0,173,175,3,8,4,0,
  	174,173,1,0,0,0,175,178,1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,
  	1,0,0,0,178,176,1,0,0,0,179,180,5,31,0,0,180,7,1,0,0,0,181,182,7,0,0,
  	0,182,9,1,0,0,0,183,184,3,12,6,0,184,185,5,31,0,0,185,11,1,0,0,0,186,
  	191,3,14,7,0,187,191,3,22,11,0,188,191,3,28,14,0,189,191,3,36,18,0,190,
  	186,1,0,0,0,190,187,1,0,0,0,190,188,1,0,0,0,190,189,1,0,0,0,191,13,1,
  	0,0,0,192,193,5,17,0,0,193,194,5,22,0,0,194,195,3,16,8,0,195,196,5,22,
  	0,0,196,197,3,18,9,0,197,198,5,22,0,0,198,199,3,20,10,0,199,15,1,0,0,
  	0,200,201,3,56,28,0,201,17,1,0,0,0,202,203,7,1,0,0,203,19,1,0,0,0,204,
  	205,3,64,32,0,205,21,1,0,0,0,206,207,5,18,0,0,207,208,5,22,0,0,208,209,
  	3,16,8,0,209,210,5,22,0,0,210,211,3,24,12,0,211,212,5,22,0,0,212,213,
  	3,26,13,0,213,23,1,0,0,0,214,215,3,60,30,0,215,25,1,0,0,0,216,217,3,64,
  	32,0,217,27,1,0,0,0,218,219,5,19,0,0,219,220,5,22,0,0,220,221,3,30,15,
  	0,221,222,5,22,0,0,222,223,3,32,16,0,223,224,5,22,0,0,224,225,3,34,17,
  	0,225,29,1,0,0,0,226,227,3,56,28,0,227,31,1,0,0,0,228,229,3,60,30,0,229,
  	33,1,0,0,0,230,231,3,64,32,0,231,35,1,0,0,0,232,233,5,20,0,0,233,234,
  	5,22,0,0,234,235,3,38,19,0,235,236,5,22,0,0,236,237,3,40,20,0,237,238,
  	5,22,0,0,238,240,3,42,21,0,239,241,3,50,25,0,240,239,1,0,0,0,240,241,
  	1,0,0,0,241,37,1,0,0,0,242,245,3,16,8,0,243,245,3,30,15,0,244,242,1,0,
  	0,0,244,243,1,0,0,0,245,39,1,0,0,0,246,247,7,2,0,0,247,41,1,0,0,0,248,
  	252,3,44,22,0,249,252,3,46,23,0,250,252,3,48,24,0,251,248,1,0,0,0,251,
  	249,1,0,0,0,251,250,1,0,0,0,252,43,1,0,0,0,253,255,5,33,0,0,254,253,1,
  	0,0,0,255,256,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,45,1,0,0,0,
  	258,259,3,134,67,0,259,47,1,0,0,0,260,261,3,64,32,0,261,49,1,0,0,0,262,
  	263,5,22,0,0,263,264,3,52,26,0,264,51,1,0,0,0,265,268,5,1,0,0,266,268,
  	3,54,27,0,267,265,1,0,0,0,267,266,1,0,0,0,268,53,1,0,0,0,269,270,5,32,
  	0,0,270,55,1,0,0,0,271,273,3,58,29,0,272,271,1,0,0,0,273,274,1,0,0,0,
  	274,272,1,0,0,0,274,275,1,0,0,0,275,57,1,0,0,0,276,277,7,3,0,0,277,59,
  	1,0,0,0,278,282,5,34,0,0,279,281,3,62,31,0,280,279,1,0,0,0,281,284,1,
  	0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,283,61,1,0,0,0,284,282,1,0,0,0,
  	285,286,7,4,0,0,286,63,1,0,0,0,287,288,3,66,33,0,288,65,1,0,0,0,289,290,
  	3,72,36,0,290,292,5,23,0,0,291,293,3,100,50,0,292,291,1,0,0,0,292,293,
  	1,0,0,0,293,294,1,0,0,0,294,296,3,74,37,0,295,297,3,68,34,0,296,295,1,
  	0,0,0,296,297,1,0,0,0,297,299,1,0,0,0,298,300,3,70,35,0,299,298,1,0,0,
  	0,299,300,1,0,0,0,300,302,1,0,0,0,301,303,3,110,55,0,302,301,1,0,0,0,
  	302,303,1,0,0,0,303,305,1,0,0,0,304,306,3,106,53,0,305,304,1,0,0,0,305,
  	306,1,0,0,0,306,67,1,0,0,0,307,308,5,41,0,0,308,309,3,90,45,0,309,69,
  	1,0,0,0,310,312,5,45,0,0,311,313,3,92,46,0,312,311,1,0,0,0,312,313,1,
  	0,0,0,313,71,1,0,0,0,314,315,3,130,65,0,315,73,1,0,0,0,316,318,5,45,0,
  	0,317,316,1,0,0,0,317,318,1,0,0,0,318,319,1,0,0,0,319,320,3,76,38,0,320,
  	75,1,0,0,0,321,324,3,78,39,0,322,324,3,80,40,0,323,321,1,0,0,0,323,322,
  	1,0,0,0,324,77,1,0,0,0,325,328,3,124,62,0,326,328,3,130,65,0,327,325,
  	1,0,0,0,327,326,1,0,0,0,328,79,1,0,0,0,329,330,5,28,0,0,330,331,3,82,
  	41,0,331,332,5,29,0,0,332,81,1,0,0,0,333,335,5,25,0,0,334,333,1,0,0,0,
  	334,335,1,0,0,0,335,336,1,0,0,0,336,340,3,88,44,0,337,339,3,84,42,0,338,
  	337,1,0,0,0,339,342,1,0,0,0,340,338,1,0,0,0,340,341,1,0,0,0,341,83,1,
  	0,0,0,342,340,1,0,0,0,343,344,3,86,43,0,344,345,3,88,44,0,345,85,1,0,
  	0,0,346,347,7,5,0,0,347,87,1,0,0,0,348,349,3,128,64,0,349,89,1,0,0,0,
  	350,351,5,37,0,0,351,91,1,0,0,0,352,356,3,96,48,0,353,355,3,94,47,0,354,
  	353,1,0,0,0,355,358,1,0,0,0,356,354,1,0,0,0,356,357,1,0,0,0,357,360,1,
  	0,0,0,358,356,1,0,0,0,359,361,5,45,0,0,360,359,1,0,0,0,360,361,1,0,0,
  	0,361,93,1,0,0,0,362,363,5,45,0,0,363,364,3,96,48,0,364,95,1,0,0,0,365,
  	368,3,124,62,0,366,368,3,130,65,0,367,365,1,0,0,0,367,366,1,0,0,0,368,
  	97,1,0,0,0,369,372,3,124,62,0,370,372,3,130,65,0,371,369,1,0,0,0,371,
  	370,1,0,0,0,372,99,1,0,0,0,373,375,3,98,49,0,374,376,3,102,51,0,375,374,
  	1,0,0,0,375,376,1,0,0,0,376,377,1,0,0,0,377,378,5,27,0,0,378,101,1,0,
  	0,0,379,380,5,41,0,0,380,381,3,104,52,0,381,103,1,0,0,0,382,385,3,124,
  	62,0,383,385,3,130,65,0,384,382,1,0,0,0,384,383,1,0,0,0,385,105,1,0,0,
  	0,386,387,5,42,0,0,387,388,3,108,54,0,388,107,1,0,0,0,389,393,3,124,62,
  	0,390,393,3,130,65,0,391,393,5,37,0,0,392,389,1,0,0,0,392,390,1,0,0,0,
  	392,391,1,0,0,0,393,109,1,0,0,0,394,395,5,30,0,0,395,396,3,112,56,0,396,
  	111,1,0,0,0,397,401,3,116,58,0,398,400,3,114,57,0,399,398,1,0,0,0,400,
  	403,1,0,0,0,401,399,1,0,0,0,401,402,1,0,0,0,402,113,1,0,0,0,403,401,1,
  	0,0,0,404,405,5,26,0,0,405,406,3,116,58,0,406,115,1,0,0,0,407,409,3,118,
  	59,0,408,410,3,120,60,0,409,408,1,0,0,0,409,410,1,0,0,0,410,117,1,0,0,
  	0,411,414,3,124,62,0,412,414,3,130,65,0,413,411,1,0,0,0,413,412,1,0,0,
  	0,414,119,1,0,0,0,415,417,5,40,0,0,416,418,3,122,61,0,417,416,1,0,0,0,
  	417,418,1,0,0,0,418,121,1,0,0,0,419,424,3,124,62,0,420,424,3,130,65,0,
  	421,424,5,37,0,0,422,424,5,35,0,0,423,419,1,0,0,0,423,420,1,0,0,0,423,
  	421,1,0,0,0,423,422,1,0,0,0,424,123,1,0,0,0,425,426,5,24,0,0,426,427,
  	3,126,63,0,427,428,5,24,0,0,428,125,1,0,0,0,429,433,3,130,65,0,430,432,
  	3,132,66,0,431,430,1,0,0,0,432,435,1,0,0,0,433,431,1,0,0,0,433,434,1,
  	0,0,0,434,127,1,0,0,0,435,433,1,0,0,0,436,440,3,124,62,0,437,440,3,130,
  	65,0,438,440,5,37,0,0,439,436,1,0,0,0,439,437,1,0,0,0,439,438,1,0,0,0,
  	440,129,1,0,0,0,441,442,7,6,0,0,442,131,1,0,0,0,443,444,5,46,0,0,444,
  	445,3,130,65,0,445,133,1,0,0,0,446,447,3,136,68,0,447,448,3,158,79,0,
  	448,449,3,138,69,0,449,450,3,158,79,0,450,451,3,140,70,0,451,135,1,0,
  	0,0,452,454,5,47,0,0,453,452,1,0,0,0,453,454,1,0,0,0,454,455,1,0,0,0,
  	455,456,5,37,0,0,456,137,1,0,0,0,457,459,5,50,0,0,458,457,1,0,0,0,458,
  	459,1,0,0,0,459,460,1,0,0,0,460,462,5,37,0,0,461,463,5,51,0,0,462,461,
  	1,0,0,0,462,463,1,0,0,0,463,139,1,0,0,0,464,467,3,142,71,0,465,467,3,
  	148,74,0,466,464,1,0,0,0,466,465,1,0,0,0,467,141,1,0,0,0,468,469,3,144,
  	72,0,469,470,3,158,79,0,470,471,3,146,73,0,471,143,1,0,0,0,472,473,5,
  	37,0,0,473,145,1,0,0,0,474,475,5,37,0,0,475,147,1,0,0,0,476,479,3,150,
  	75,0,477,479,3,154,77,0,478,476,1,0,0,0,478,477,1,0,0,0,479,149,1,0,0,
  	0,480,482,3,152,76,0,481,483,3,158,79,0,482,481,1,0,0,0,482,483,1,0,0,
  	0,483,484,1,0,0,0,484,485,3,156,78,0,485,151,1,0,0,0,486,488,5,33,0,0,
  	487,486,1,0,0,0,488,489,1,0,0,0,489,487,1,0,0,0,489,490,1,0,0,0,490,153,
  	1,0,0,0,491,493,5,33,0,0,492,491,1,0,0,0,493,494,1,0,0,0,494,492,1,0,
  	0,0,494,495,1,0,0,0,495,155,1,0,0,0,496,498,5,33,0,0,497,496,1,0,0,0,
  	498,499,1,0,0,0,499,497,1,0,0,0,499,500,1,0,0,0,500,157,1,0,0,0,501,502,
  	7,7,0,0,502,159,1,0,0,0,45,166,170,176,190,240,244,251,256,267,274,282,
  	292,296,299,302,305,312,317,323,327,334,340,356,360,367,371,375,384,392,
  	401,409,413,417,423,433,439,453,458,462,466,478,482,489,494,499
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sitesParserStaticData = staticData.release();
}

}

SitesParser::SitesParser(TokenStream *input) : SitesParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SitesParser::SitesParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SitesParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sitesParserStaticData->atn, sitesParserStaticData->decisionToDFA, sitesParserStaticData->sharedContextCache, options);
}

SitesParser::~SitesParser() {
  delete _interpreter;
}

const atn::ATN& SitesParser::getATN() const {
  return *sitesParserStaticData->atn;
}

std::string SitesParser::getGrammarFileName() const {
  return "Sites.g4";
}

const std::vector<std::string>& SitesParser::getRuleNames() const {
  return sitesParserStaticData->ruleNames;
}

const dfa::Vocabulary& SitesParser::getVocabulary() const {
  return sitesParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SitesParser::getSerializedATN() const {
  return sitesParserStaticData->serializedATN;
}


//----------------- SitesContext ------------------------------------------------------------------

SitesParser::SitesContext::SitesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::SitesListContext* SitesParser::SitesContext::sitesList() {
  return getRuleContext<SitesParser::SitesListContext>(0);
}

tree::TerminalNode* SitesParser::SitesContext::EOF() {
  return getToken(SitesParser::EOF, 0);
}


size_t SitesParser::SitesContext::getRuleIndex() const {
  return SitesParser::RuleSites;
}

void SitesParser::SitesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSites(this);
}

void SitesParser::SitesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSites(this);
}


std::any SitesParser::SitesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSites(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SitesContext* SitesParser::sites() {
  SitesContext *_localctx = _tracker.createInstance<SitesContext>(_ctx, getState());
  enterRule(_localctx, 0, SitesParser::RuleSites);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    sitesList();
    setState(161);
    match(SitesParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SitesListContext ------------------------------------------------------------------

SitesParser::SitesListContext::SitesListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SitesParser::SiteListEntryContext *> SitesParser::SitesListContext::siteListEntry() {
  return getRuleContexts<SitesParser::SiteListEntryContext>();
}

SitesParser::SiteListEntryContext* SitesParser::SitesListContext::siteListEntry(size_t i) {
  return getRuleContext<SitesParser::SiteListEntryContext>(i);
}


size_t SitesParser::SitesListContext::getRuleIndex() const {
  return SitesParser::RuleSitesList;
}

void SitesParser::SitesListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSitesList(this);
}

void SitesParser::SitesListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSitesList(this);
}


std::any SitesParser::SitesListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSitesList(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SitesListContext* SitesParser::sitesList() {
  SitesListContext *_localctx = _tracker.createInstance<SitesListContext>(_ctx, getState());
  enterRule(_localctx, 2, SitesParser::RuleSitesList);
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
    setState(164); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(163);
      siteListEntry();
      setState(166); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4398048477184) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiteListEntryContext ------------------------------------------------------------------

SitesParser::SiteListEntryContext::SiteListEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::CommentContext* SitesParser::SiteListEntryContext::comment() {
  return getRuleContext<SitesParser::CommentContext>(0);
}

SitesParser::SiteContext* SitesParser::SiteListEntryContext::site() {
  return getRuleContext<SitesParser::SiteContext>(0);
}


size_t SitesParser::SiteListEntryContext::getRuleIndex() const {
  return SitesParser::RuleSiteListEntry;
}

void SitesParser::SiteListEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteListEntry(this);
}

void SitesParser::SiteListEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteListEntry(this);
}


std::any SitesParser::SiteListEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteListEntry(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteListEntryContext* SitesParser::siteListEntry() {
  SiteListEntryContext *_localctx = _tracker.createInstance<SiteListEntryContext>(_ctx, getState());
  enterRule(_localctx, 4, SitesParser::RuleSiteListEntry);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::HASH: {
        enterOuterAlt(_localctx, 1);
        setState(168);
        comment();
        break;
      }

      case SitesParser::MEETINGS:
      case SitesParser::FELLOWSHIP:
      case SitesParser::ORGANIZATION:
      case SitesParser::RESOURCE: {
        enterOuterAlt(_localctx, 2);
        setState(169);
        site();
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

//----------------- CommentContext ------------------------------------------------------------------

SitesParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::CommentContext::HASH() {
  return getToken(SitesParser::HASH, 0);
}

tree::TerminalNode* SitesParser::CommentContext::WS() {
  return getToken(SitesParser::WS, 0);
}

std::vector<SitesParser::CommentTextFragmentContext *> SitesParser::CommentContext::commentTextFragment() {
  return getRuleContexts<SitesParser::CommentTextFragmentContext>();
}

SitesParser::CommentTextFragmentContext* SitesParser::CommentContext::commentTextFragment(size_t i) {
  return getRuleContext<SitesParser::CommentTextFragmentContext>(i);
}


size_t SitesParser::CommentContext::getRuleIndex() const {
  return SitesParser::RuleComment;
}

void SitesParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void SitesParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}


std::any SitesParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::CommentContext* SitesParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 6, SitesParser::RuleComment);
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
    setState(172);
    match(SitesParser::HASH);
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 63913414623232) != 0)) {
      setState(173);
      commentTextFragment();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(SitesParser::WS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentTextFragmentContext ------------------------------------------------------------------

SitesParser::CommentTextFragmentContext::CommentTextFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::SPACE() {
  return getToken(SitesParser::SPACE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::GRAVE() {
  return getToken(SitesParser::GRAVE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::DOLLAR() {
  return getToken(SitesParser::DOLLAR, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::COMMA() {
  return getToken(SitesParser::COMMA, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::COL() {
  return getToken(SitesParser::COL, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::FS() {
  return getToken(SitesParser::FS, 0);
}


size_t SitesParser::CommentTextFragmentContext::getRuleIndex() const {
  return SitesParser::RuleCommentTextFragment;
}

void SitesParser::CommentTextFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommentTextFragment(this);
}

void SitesParser::CommentTextFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommentTextFragment(this);
}


std::any SitesParser::CommentTextFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitCommentTextFragment(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::CommentTextFragmentContext* SitesParser::commentTextFragment() {
  CommentTextFragmentContext *_localctx = _tracker.createInstance<CommentTextFragmentContext>(_ctx, getState());
  enterRule(_localctx, 8, SitesParser::RuleCommentTextFragment);
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
    setState(181);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 63913414623232) != 0))) {
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

//----------------- SiteContext ------------------------------------------------------------------

SitesParser::SiteContext::SiteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::SiteDetailContext* SitesParser::SiteContext::siteDetail() {
  return getRuleContext<SitesParser::SiteDetailContext>(0);
}

tree::TerminalNode* SitesParser::SiteContext::WS() {
  return getToken(SitesParser::WS, 0);
}


size_t SitesParser::SiteContext::getRuleIndex() const {
  return SitesParser::RuleSite;
}

void SitesParser::SiteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSite(this);
}

void SitesParser::SiteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSite(this);
}


std::any SitesParser::SiteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSite(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteContext* SitesParser::site() {
  SiteContext *_localctx = _tracker.createInstance<SiteContext>(_ctx, getState());
  enterRule(_localctx, 10, SitesParser::RuleSite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    siteDetail();
    setState(184);
    match(SitesParser::WS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiteDetailContext ------------------------------------------------------------------

SitesParser::SiteDetailContext::SiteDetailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::MeetingsContext* SitesParser::SiteDetailContext::meetings() {
  return getRuleContext<SitesParser::MeetingsContext>(0);
}

SitesParser::FellowshipContext* SitesParser::SiteDetailContext::fellowship() {
  return getRuleContext<SitesParser::FellowshipContext>(0);
}

SitesParser::OrganizationContext* SitesParser::SiteDetailContext::organization() {
  return getRuleContext<SitesParser::OrganizationContext>(0);
}

SitesParser::ResourceContext* SitesParser::SiteDetailContext::resource() {
  return getRuleContext<SitesParser::ResourceContext>(0);
}


size_t SitesParser::SiteDetailContext::getRuleIndex() const {
  return SitesParser::RuleSiteDetail;
}

void SitesParser::SiteDetailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteDetail(this);
}

void SitesParser::SiteDetailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteDetail(this);
}


std::any SitesParser::SiteDetailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteDetail(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteDetailContext* SitesParser::siteDetail() {
  SiteDetailContext *_localctx = _tracker.createInstance<SiteDetailContext>(_ctx, getState());
  enterRule(_localctx, 12, SitesParser::RuleSiteDetail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::MEETINGS: {
        enterOuterAlt(_localctx, 1);
        setState(186);
        meetings();
        break;
      }

      case SitesParser::FELLOWSHIP: {
        enterOuterAlt(_localctx, 2);
        setState(187);
        fellowship();
        break;
      }

      case SitesParser::ORGANIZATION: {
        enterOuterAlt(_localctx, 3);
        setState(188);
        organization();
        break;
      }

      case SitesParser::RESOURCE: {
        enterOuterAlt(_localctx, 4);
        setState(189);
        resource();
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

//----------------- MeetingsContext ------------------------------------------------------------------

SitesParser::MeetingsContext::MeetingsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::MeetingsContext::MEETINGS() {
  return getToken(SitesParser::MEETINGS, 0);
}

std::vector<tree::TerminalNode *> SitesParser::MeetingsContext::COMMA() {
  return getTokens(SitesParser::COMMA);
}

tree::TerminalNode* SitesParser::MeetingsContext::COMMA(size_t i) {
  return getToken(SitesParser::COMMA, i);
}

SitesParser::FellowshipIdContext* SitesParser::MeetingsContext::fellowshipId() {
  return getRuleContext<SitesParser::FellowshipIdContext>(0);
}

SitesParser::MeetingLocationTypeContext* SitesParser::MeetingsContext::meetingLocationType() {
  return getRuleContext<SitesParser::MeetingLocationTypeContext>(0);
}

SitesParser::MeetingsDataUrlContext* SitesParser::MeetingsContext::meetingsDataUrl() {
  return getRuleContext<SitesParser::MeetingsDataUrlContext>(0);
}


size_t SitesParser::MeetingsContext::getRuleIndex() const {
  return SitesParser::RuleMeetings;
}

void SitesParser::MeetingsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeetings(this);
}

void SitesParser::MeetingsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeetings(this);
}


std::any SitesParser::MeetingsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitMeetings(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::MeetingsContext* SitesParser::meetings() {
  MeetingsContext *_localctx = _tracker.createInstance<MeetingsContext>(_ctx, getState());
  enterRule(_localctx, 14, SitesParser::RuleMeetings);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(SitesParser::MEETINGS);
    setState(193);
    match(SitesParser::COMMA);
    setState(194);
    fellowshipId();
    setState(195);
    match(SitesParser::COMMA);
    setState(196);
    meetingLocationType();
    setState(197);
    match(SitesParser::COMMA);
    setState(198);
    meetingsDataUrl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FellowshipIdContext ------------------------------------------------------------------

SitesParser::FellowshipIdContext::FellowshipIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::EntityIdContext* SitesParser::FellowshipIdContext::entityId() {
  return getRuleContext<SitesParser::EntityIdContext>(0);
}


size_t SitesParser::FellowshipIdContext::getRuleIndex() const {
  return SitesParser::RuleFellowshipId;
}

void SitesParser::FellowshipIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFellowshipId(this);
}

void SitesParser::FellowshipIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFellowshipId(this);
}


std::any SitesParser::FellowshipIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitFellowshipId(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::FellowshipIdContext* SitesParser::fellowshipId() {
  FellowshipIdContext *_localctx = _tracker.createInstance<FellowshipIdContext>(_ctx, getState());
  enterRule(_localctx, 16, SitesParser::RuleFellowshipId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    entityId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeetingLocationTypeContext ------------------------------------------------------------------

SitesParser::MeetingLocationTypeContext::MeetingLocationTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::MeetingLocationTypeContext::US_IN_PERSON() {
  return getToken(SitesParser::US_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::MeetingLocationTypeContext::INTL_IN_PERSON() {
  return getToken(SitesParser::INTL_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::MeetingLocationTypeContext::ALL_IN_PERSON() {
  return getToken(SitesParser::ALL_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::MeetingLocationTypeContext::CA_IN_PERSON() {
  return getToken(SitesParser::CA_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::MeetingLocationTypeContext::VIRTUAL() {
  return getToken(SitesParser::VIRTUAL, 0);
}

tree::TerminalNode* SitesParser::MeetingLocationTypeContext::PHONE() {
  return getToken(SitesParser::PHONE, 0);
}


size_t SitesParser::MeetingLocationTypeContext::getRuleIndex() const {
  return SitesParser::RuleMeetingLocationType;
}

void SitesParser::MeetingLocationTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeetingLocationType(this);
}

void SitesParser::MeetingLocationTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeetingLocationType(this);
}


std::any SitesParser::MeetingLocationTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitMeetingLocationType(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::MeetingLocationTypeContext* SitesParser::meetingLocationType() {
  MeetingLocationTypeContext *_localctx = _tracker.createInstance<MeetingLocationTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, SitesParser::RuleMeetingLocationType);
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
    setState(202);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 129024) != 0))) {
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

//----------------- MeetingsDataUrlContext ------------------------------------------------------------------

SitesParser::MeetingsDataUrlContext::MeetingsDataUrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::UrlContext* SitesParser::MeetingsDataUrlContext::url() {
  return getRuleContext<SitesParser::UrlContext>(0);
}


size_t SitesParser::MeetingsDataUrlContext::getRuleIndex() const {
  return SitesParser::RuleMeetingsDataUrl;
}

void SitesParser::MeetingsDataUrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeetingsDataUrl(this);
}

void SitesParser::MeetingsDataUrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeetingsDataUrl(this);
}


std::any SitesParser::MeetingsDataUrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitMeetingsDataUrl(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::MeetingsDataUrlContext* SitesParser::meetingsDataUrl() {
  MeetingsDataUrlContext *_localctx = _tracker.createInstance<MeetingsDataUrlContext>(_ctx, getState());
  enterRule(_localctx, 20, SitesParser::RuleMeetingsDataUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    url();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FellowshipContext ------------------------------------------------------------------

SitesParser::FellowshipContext::FellowshipContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::FellowshipContext::FELLOWSHIP() {
  return getToken(SitesParser::FELLOWSHIP, 0);
}

std::vector<tree::TerminalNode *> SitesParser::FellowshipContext::COMMA() {
  return getTokens(SitesParser::COMMA);
}

tree::TerminalNode* SitesParser::FellowshipContext::COMMA(size_t i) {
  return getToken(SitesParser::COMMA, i);
}

SitesParser::FellowshipIdContext* SitesParser::FellowshipContext::fellowshipId() {
  return getRuleContext<SitesParser::FellowshipIdContext>(0);
}

SitesParser::FellowshipNameContext* SitesParser::FellowshipContext::fellowshipName() {
  return getRuleContext<SitesParser::FellowshipNameContext>(0);
}

SitesParser::FellowshipUrlContext* SitesParser::FellowshipContext::fellowshipUrl() {
  return getRuleContext<SitesParser::FellowshipUrlContext>(0);
}


size_t SitesParser::FellowshipContext::getRuleIndex() const {
  return SitesParser::RuleFellowship;
}

void SitesParser::FellowshipContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFellowship(this);
}

void SitesParser::FellowshipContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFellowship(this);
}


std::any SitesParser::FellowshipContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitFellowship(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::FellowshipContext* SitesParser::fellowship() {
  FellowshipContext *_localctx = _tracker.createInstance<FellowshipContext>(_ctx, getState());
  enterRule(_localctx, 22, SitesParser::RuleFellowship);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(SitesParser::FELLOWSHIP);
    setState(207);
    match(SitesParser::COMMA);
    setState(208);
    fellowshipId();
    setState(209);
    match(SitesParser::COMMA);
    setState(210);
    fellowshipName();
    setState(211);
    match(SitesParser::COMMA);
    setState(212);
    fellowshipUrl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FellowshipNameContext ------------------------------------------------------------------

SitesParser::FellowshipNameContext::FellowshipNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::EntityNameContext* SitesParser::FellowshipNameContext::entityName() {
  return getRuleContext<SitesParser::EntityNameContext>(0);
}


size_t SitesParser::FellowshipNameContext::getRuleIndex() const {
  return SitesParser::RuleFellowshipName;
}

void SitesParser::FellowshipNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFellowshipName(this);
}

void SitesParser::FellowshipNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFellowshipName(this);
}


std::any SitesParser::FellowshipNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitFellowshipName(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::FellowshipNameContext* SitesParser::fellowshipName() {
  FellowshipNameContext *_localctx = _tracker.createInstance<FellowshipNameContext>(_ctx, getState());
  enterRule(_localctx, 24, SitesParser::RuleFellowshipName);

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
    entityName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FellowshipUrlContext ------------------------------------------------------------------

SitesParser::FellowshipUrlContext::FellowshipUrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::UrlContext* SitesParser::FellowshipUrlContext::url() {
  return getRuleContext<SitesParser::UrlContext>(0);
}


size_t SitesParser::FellowshipUrlContext::getRuleIndex() const {
  return SitesParser::RuleFellowshipUrl;
}

void SitesParser::FellowshipUrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFellowshipUrl(this);
}

void SitesParser::FellowshipUrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFellowshipUrl(this);
}


std::any SitesParser::FellowshipUrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitFellowshipUrl(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::FellowshipUrlContext* SitesParser::fellowshipUrl() {
  FellowshipUrlContext *_localctx = _tracker.createInstance<FellowshipUrlContext>(_ctx, getState());
  enterRule(_localctx, 26, SitesParser::RuleFellowshipUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    url();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrganizationContext ------------------------------------------------------------------

SitesParser::OrganizationContext::OrganizationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::OrganizationContext::ORGANIZATION() {
  return getToken(SitesParser::ORGANIZATION, 0);
}

std::vector<tree::TerminalNode *> SitesParser::OrganizationContext::COMMA() {
  return getTokens(SitesParser::COMMA);
}

tree::TerminalNode* SitesParser::OrganizationContext::COMMA(size_t i) {
  return getToken(SitesParser::COMMA, i);
}

SitesParser::OrganizationIdContext* SitesParser::OrganizationContext::organizationId() {
  return getRuleContext<SitesParser::OrganizationIdContext>(0);
}

SitesParser::OrganizationNameContext* SitesParser::OrganizationContext::organizationName() {
  return getRuleContext<SitesParser::OrganizationNameContext>(0);
}

SitesParser::OrganizationUrlContext* SitesParser::OrganizationContext::organizationUrl() {
  return getRuleContext<SitesParser::OrganizationUrlContext>(0);
}


size_t SitesParser::OrganizationContext::getRuleIndex() const {
  return SitesParser::RuleOrganization;
}

void SitesParser::OrganizationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrganization(this);
}

void SitesParser::OrganizationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrganization(this);
}


std::any SitesParser::OrganizationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitOrganization(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::OrganizationContext* SitesParser::organization() {
  OrganizationContext *_localctx = _tracker.createInstance<OrganizationContext>(_ctx, getState());
  enterRule(_localctx, 28, SitesParser::RuleOrganization);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(SitesParser::ORGANIZATION);
    setState(219);
    match(SitesParser::COMMA);
    setState(220);
    organizationId();
    setState(221);
    match(SitesParser::COMMA);
    setState(222);
    organizationName();
    setState(223);
    match(SitesParser::COMMA);
    setState(224);
    organizationUrl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrganizationIdContext ------------------------------------------------------------------

SitesParser::OrganizationIdContext::OrganizationIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::EntityIdContext* SitesParser::OrganizationIdContext::entityId() {
  return getRuleContext<SitesParser::EntityIdContext>(0);
}


size_t SitesParser::OrganizationIdContext::getRuleIndex() const {
  return SitesParser::RuleOrganizationId;
}

void SitesParser::OrganizationIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrganizationId(this);
}

void SitesParser::OrganizationIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrganizationId(this);
}


std::any SitesParser::OrganizationIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitOrganizationId(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::OrganizationIdContext* SitesParser::organizationId() {
  OrganizationIdContext *_localctx = _tracker.createInstance<OrganizationIdContext>(_ctx, getState());
  enterRule(_localctx, 30, SitesParser::RuleOrganizationId);

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
    entityId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrganizationNameContext ------------------------------------------------------------------

SitesParser::OrganizationNameContext::OrganizationNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::EntityNameContext* SitesParser::OrganizationNameContext::entityName() {
  return getRuleContext<SitesParser::EntityNameContext>(0);
}


size_t SitesParser::OrganizationNameContext::getRuleIndex() const {
  return SitesParser::RuleOrganizationName;
}

void SitesParser::OrganizationNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrganizationName(this);
}

void SitesParser::OrganizationNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrganizationName(this);
}


std::any SitesParser::OrganizationNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitOrganizationName(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::OrganizationNameContext* SitesParser::organizationName() {
  OrganizationNameContext *_localctx = _tracker.createInstance<OrganizationNameContext>(_ctx, getState());
  enterRule(_localctx, 32, SitesParser::RuleOrganizationName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    entityName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrganizationUrlContext ------------------------------------------------------------------

SitesParser::OrganizationUrlContext::OrganizationUrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::UrlContext* SitesParser::OrganizationUrlContext::url() {
  return getRuleContext<SitesParser::UrlContext>(0);
}


size_t SitesParser::OrganizationUrlContext::getRuleIndex() const {
  return SitesParser::RuleOrganizationUrl;
}

void SitesParser::OrganizationUrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrganizationUrl(this);
}

void SitesParser::OrganizationUrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrganizationUrl(this);
}


std::any SitesParser::OrganizationUrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitOrganizationUrl(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::OrganizationUrlContext* SitesParser::organizationUrl() {
  OrganizationUrlContext *_localctx = _tracker.createInstance<OrganizationUrlContext>(_ctx, getState());
  enterRule(_localctx, 34, SitesParser::RuleOrganizationUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    url();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceContext ------------------------------------------------------------------

SitesParser::ResourceContext::ResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::ResourceContext::RESOURCE() {
  return getToken(SitesParser::RESOURCE, 0);
}

std::vector<tree::TerminalNode *> SitesParser::ResourceContext::COMMA() {
  return getTokens(SitesParser::COMMA);
}

tree::TerminalNode* SitesParser::ResourceContext::COMMA(size_t i) {
  return getToken(SitesParser::COMMA, i);
}

SitesParser::ResourceEntityIdContext* SitesParser::ResourceContext::resourceEntityId() {
  return getRuleContext<SitesParser::ResourceEntityIdContext>(0);
}

SitesParser::ResourceTypeContext* SitesParser::ResourceContext::resourceType() {
  return getRuleContext<SitesParser::ResourceTypeContext>(0);
}

SitesParser::ResourceDataPrimaryContext* SitesParser::ResourceContext::resourceDataPrimary() {
  return getRuleContext<SitesParser::ResourceDataPrimaryContext>(0);
}

SitesParser::ResourceOptionalContext* SitesParser::ResourceContext::resourceOptional() {
  return getRuleContext<SitesParser::ResourceOptionalContext>(0);
}


size_t SitesParser::ResourceContext::getRuleIndex() const {
  return SitesParser::RuleResource;
}

void SitesParser::ResourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResource(this);
}

void SitesParser::ResourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResource(this);
}


std::any SitesParser::ResourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResource(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceContext* SitesParser::resource() {
  ResourceContext *_localctx = _tracker.createInstance<ResourceContext>(_ctx, getState());
  enterRule(_localctx, 36, SitesParser::RuleResource);
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
    setState(232);
    match(SitesParser::RESOURCE);
    setState(233);
    match(SitesParser::COMMA);
    setState(234);
    resourceEntityId();
    setState(235);
    match(SitesParser::COMMA);
    setState(236);
    resourceType();
    setState(237);
    match(SitesParser::COMMA);
    setState(238);
    resourceDataPrimary();
    setState(240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::COMMA) {
      setState(239);
      resourceOptional();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceEntityIdContext ------------------------------------------------------------------

SitesParser::ResourceEntityIdContext::ResourceEntityIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::FellowshipIdContext* SitesParser::ResourceEntityIdContext::fellowshipId() {
  return getRuleContext<SitesParser::FellowshipIdContext>(0);
}

SitesParser::OrganizationIdContext* SitesParser::ResourceEntityIdContext::organizationId() {
  return getRuleContext<SitesParser::OrganizationIdContext>(0);
}


size_t SitesParser::ResourceEntityIdContext::getRuleIndex() const {
  return SitesParser::RuleResourceEntityId;
}

void SitesParser::ResourceEntityIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceEntityId(this);
}

void SitesParser::ResourceEntityIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceEntityId(this);
}


std::any SitesParser::ResourceEntityIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceEntityId(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceEntityIdContext* SitesParser::resourceEntityId() {
  ResourceEntityIdContext *_localctx = _tracker.createInstance<ResourceEntityIdContext>(_ctx, getState());
  enterRule(_localctx, 38, SitesParser::RuleResourceEntityId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(242);
      fellowshipId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(243);
      organizationId();
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

//----------------- ResourceTypeContext ------------------------------------------------------------------

SitesParser::ResourceTypeContext::ResourceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::ResourceTypeContext::TEXT() {
  return getToken(SitesParser::TEXT, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::CALL() {
  return getToken(SitesParser::CALL, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::CHAT() {
  return getToken(SitesParser::CHAT, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::TEST() {
  return getToken(SitesParser::TEST, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::CALL_LIST() {
  return getToken(SitesParser::CALL_LIST, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::LITERATURE() {
  return getToken(SitesParser::LITERATURE, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::READING() {
  return getToken(SitesParser::READING, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::STORE() {
  return getToken(SitesParser::STORE, 0);
}

tree::TerminalNode* SitesParser::ResourceTypeContext::BULLETIN() {
  return getToken(SitesParser::BULLETIN, 0);
}


size_t SitesParser::ResourceTypeContext::getRuleIndex() const {
  return SitesParser::RuleResourceType;
}

void SitesParser::ResourceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceType(this);
}

void SitesParser::ResourceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceType(this);
}


std::any SitesParser::ResourceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceType(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceTypeContext* SitesParser::resourceType() {
  ResourceTypeContext *_localctx = _tracker.createInstance<ResourceTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, SitesParser::RuleResourceType);
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
    setState(246);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2044) != 0))) {
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

//----------------- ResourceDataPrimaryContext ------------------------------------------------------------------

SitesParser::ResourceDataPrimaryContext::ResourceDataPrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ResourceTextNumberContext* SitesParser::ResourceDataPrimaryContext::resourceTextNumber() {
  return getRuleContext<SitesParser::ResourceTextNumberContext>(0);
}

SitesParser::ResourcePhoneNumberContext* SitesParser::ResourceDataPrimaryContext::resourcePhoneNumber() {
  return getRuleContext<SitesParser::ResourcePhoneNumberContext>(0);
}

SitesParser::ResourceUrlContext* SitesParser::ResourceDataPrimaryContext::resourceUrl() {
  return getRuleContext<SitesParser::ResourceUrlContext>(0);
}


size_t SitesParser::ResourceDataPrimaryContext::getRuleIndex() const {
  return SitesParser::RuleResourceDataPrimary;
}

void SitesParser::ResourceDataPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceDataPrimary(this);
}

void SitesParser::ResourceDataPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceDataPrimary(this);
}


std::any SitesParser::ResourceDataPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceDataPrimary(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceDataPrimaryContext* SitesParser::resourceDataPrimary() {
  ResourceDataPrimaryContext *_localctx = _tracker.createInstance<ResourceDataPrimaryContext>(_ctx, getState());
  enterRule(_localctx, 42, SitesParser::RuleResourceDataPrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(248);
      resourceTextNumber();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249);
      resourcePhoneNumber();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(250);
      resourceUrl();
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

//----------------- ResourceTextNumberContext ------------------------------------------------------------------

SitesParser::ResourceTextNumberContext::ResourceTextNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SitesParser::ResourceTextNumberContext::ALPHANUM() {
  return getTokens(SitesParser::ALPHANUM);
}

tree::TerminalNode* SitesParser::ResourceTextNumberContext::ALPHANUM(size_t i) {
  return getToken(SitesParser::ALPHANUM, i);
}


size_t SitesParser::ResourceTextNumberContext::getRuleIndex() const {
  return SitesParser::RuleResourceTextNumber;
}

void SitesParser::ResourceTextNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceTextNumber(this);
}

void SitesParser::ResourceTextNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceTextNumber(this);
}


std::any SitesParser::ResourceTextNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceTextNumber(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceTextNumberContext* SitesParser::resourceTextNumber() {
  ResourceTextNumberContext *_localctx = _tracker.createInstance<ResourceTextNumberContext>(_ctx, getState());
  enterRule(_localctx, 44, SitesParser::RuleResourceTextNumber);
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
    setState(254); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(253);
      match(SitesParser::ALPHANUM);
      setState(256); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SitesParser::ALPHANUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourcePhoneNumberContext ------------------------------------------------------------------

SitesParser::ResourcePhoneNumberContext::ResourcePhoneNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::PhoneContext* SitesParser::ResourcePhoneNumberContext::phone() {
  return getRuleContext<SitesParser::PhoneContext>(0);
}


size_t SitesParser::ResourcePhoneNumberContext::getRuleIndex() const {
  return SitesParser::RuleResourcePhoneNumber;
}

void SitesParser::ResourcePhoneNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourcePhoneNumber(this);
}

void SitesParser::ResourcePhoneNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourcePhoneNumber(this);
}


std::any SitesParser::ResourcePhoneNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourcePhoneNumber(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourcePhoneNumberContext* SitesParser::resourcePhoneNumber() {
  ResourcePhoneNumberContext *_localctx = _tracker.createInstance<ResourcePhoneNumberContext>(_ctx, getState());
  enterRule(_localctx, 46, SitesParser::RuleResourcePhoneNumber);

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
    phone();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceUrlContext ------------------------------------------------------------------

SitesParser::ResourceUrlContext::ResourceUrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::UrlContext* SitesParser::ResourceUrlContext::url() {
  return getRuleContext<SitesParser::UrlContext>(0);
}


size_t SitesParser::ResourceUrlContext::getRuleIndex() const {
  return SitesParser::RuleResourceUrl;
}

void SitesParser::ResourceUrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceUrl(this);
}

void SitesParser::ResourceUrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceUrl(this);
}


std::any SitesParser::ResourceUrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceUrl(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceUrlContext* SitesParser::resourceUrl() {
  ResourceUrlContext *_localctx = _tracker.createInstance<ResourceUrlContext>(_ctx, getState());
  enterRule(_localctx, 48, SitesParser::RuleResourceUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    url();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceOptionalContext ------------------------------------------------------------------

SitesParser::ResourceOptionalContext::ResourceOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::ResourceOptionalContext::COMMA() {
  return getToken(SitesParser::COMMA, 0);
}

SitesParser::ResourceDataContextContext* SitesParser::ResourceOptionalContext::resourceDataContext() {
  return getRuleContext<SitesParser::ResourceDataContextContext>(0);
}


size_t SitesParser::ResourceOptionalContext::getRuleIndex() const {
  return SitesParser::RuleResourceOptional;
}

void SitesParser::ResourceOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceOptional(this);
}

void SitesParser::ResourceOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceOptional(this);
}


std::any SitesParser::ResourceOptionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceOptional(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceOptionalContext* SitesParser::resourceOptional() {
  ResourceOptionalContext *_localctx = _tracker.createInstance<ResourceOptionalContext>(_ctx, getState());
  enterRule(_localctx, 50, SitesParser::RuleResourceOptional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    match(SitesParser::COMMA);
    setState(263);
    resourceDataContext();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceDataContextContext ------------------------------------------------------------------

SitesParser::ResourceDataContextContext::ResourceDataContextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::ResourceDataContextContext::ANY() {
  return getToken(SitesParser::ANY, 0);
}

SitesParser::ResourceDataContextSpecifierContext* SitesParser::ResourceDataContextContext::resourceDataContextSpecifier() {
  return getRuleContext<SitesParser::ResourceDataContextSpecifierContext>(0);
}


size_t SitesParser::ResourceDataContextContext::getRuleIndex() const {
  return SitesParser::RuleResourceDataContext;
}

void SitesParser::ResourceDataContextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceDataContext(this);
}

void SitesParser::ResourceDataContextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceDataContext(this);
}


std::any SitesParser::ResourceDataContextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceDataContext(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceDataContextContext* SitesParser::resourceDataContext() {
  ResourceDataContextContext *_localctx = _tracker.createInstance<ResourceDataContextContext>(_ctx, getState());
  enterRule(_localctx, 52, SitesParser::RuleResourceDataContext);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::ANY: {
        enterOuterAlt(_localctx, 1);
        setState(265);
        match(SitesParser::ANY);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(266);
        resourceDataContextSpecifier();
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

//----------------- ResourceDataContextSpecifierContext ------------------------------------------------------------------

SitesParser::ResourceDataContextSpecifierContext::ResourceDataContextSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::ResourceDataContextSpecifierContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}


size_t SitesParser::ResourceDataContextSpecifierContext::getRuleIndex() const {
  return SitesParser::RuleResourceDataContextSpecifier;
}

void SitesParser::ResourceDataContextSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceDataContextSpecifier(this);
}

void SitesParser::ResourceDataContextSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceDataContextSpecifier(this);
}


std::any SitesParser::ResourceDataContextSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitResourceDataContextSpecifier(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ResourceDataContextSpecifierContext* SitesParser::resourceDataContextSpecifier() {
  ResourceDataContextSpecifierContext *_localctx = _tracker.createInstance<ResourceDataContextSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 54, SitesParser::RuleResourceDataContextSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(SitesParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntityIdContext ------------------------------------------------------------------

SitesParser::EntityIdContext::EntityIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SitesParser::EntityIdSegmentContext *> SitesParser::EntityIdContext::entityIdSegment() {
  return getRuleContexts<SitesParser::EntityIdSegmentContext>();
}

SitesParser::EntityIdSegmentContext* SitesParser::EntityIdContext::entityIdSegment(size_t i) {
  return getRuleContext<SitesParser::EntityIdSegmentContext>(i);
}


size_t SitesParser::EntityIdContext::getRuleIndex() const {
  return SitesParser::RuleEntityId;
}

void SitesParser::EntityIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntityId(this);
}

void SitesParser::EntityIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntityId(this);
}


std::any SitesParser::EntityIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitEntityId(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::EntityIdContext* SitesParser::entityId() {
  EntityIdContext *_localctx = _tracker.createInstance<EntityIdContext>(_ctx, getState());
  enterRule(_localctx, 56, SitesParser::RuleEntityId);
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
    setState(272); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(271);
      entityIdSegment();
      setState(274); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SitesParser::ALPHA

    || _la == SitesParser::HYPH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntityIdSegmentContext ------------------------------------------------------------------

SitesParser::EntityIdSegmentContext::EntityIdSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::EntityIdSegmentContext::ALPHA() {
  return getToken(SitesParser::ALPHA, 0);
}

tree::TerminalNode* SitesParser::EntityIdSegmentContext::HYPH() {
  return getToken(SitesParser::HYPH, 0);
}


size_t SitesParser::EntityIdSegmentContext::getRuleIndex() const {
  return SitesParser::RuleEntityIdSegment;
}

void SitesParser::EntityIdSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntityIdSegment(this);
}

void SitesParser::EntityIdSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntityIdSegment(this);
}


std::any SitesParser::EntityIdSegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitEntityIdSegment(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::EntityIdSegmentContext* SitesParser::entityIdSegment() {
  EntityIdSegmentContext *_localctx = _tracker.createInstance<EntityIdSegmentContext>(_ctx, getState());
  enterRule(_localctx, 58, SitesParser::RuleEntityIdSegment);
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
    setState(276);
    _la = _input->LA(1);
    if (!(_la == SitesParser::ALPHA

    || _la == SitesParser::HYPH)) {
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

//----------------- EntityNameContext ------------------------------------------------------------------

SitesParser::EntityNameContext::EntityNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::EntityNameContext::ALPHA() {
  return getToken(SitesParser::ALPHA, 0);
}

std::vector<SitesParser::EntityNameSegmentContext *> SitesParser::EntityNameContext::entityNameSegment() {
  return getRuleContexts<SitesParser::EntityNameSegmentContext>();
}

SitesParser::EntityNameSegmentContext* SitesParser::EntityNameContext::entityNameSegment(size_t i) {
  return getRuleContext<SitesParser::EntityNameSegmentContext>(i);
}


size_t SitesParser::EntityNameContext::getRuleIndex() const {
  return SitesParser::RuleEntityName;
}

void SitesParser::EntityNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntityName(this);
}

void SitesParser::EntityNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntityName(this);
}


std::any SitesParser::EntityNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitEntityName(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::EntityNameContext* SitesParser::entityName() {
  EntityNameContext *_localctx = _tracker.createInstance<EntityNameContext>(_ctx, getState());
  enterRule(_localctx, 60, SitesParser::RuleEntityName);
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
    setState(278);
    match(SitesParser::ALPHA);
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 290288249602048) != 0)) {
      setState(279);
      entityNameSegment();
      setState(284);
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

//----------------- EntityNameSegmentContext ------------------------------------------------------------------

SitesParser::EntityNameSegmentContext::EntityNameSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::EntityNameSegmentContext::SPACE() {
  return getToken(SitesParser::SPACE, 0);
}

tree::TerminalNode* SitesParser::EntityNameSegmentContext::ALPHA() {
  return getToken(SitesParser::ALPHA, 0);
}

tree::TerminalNode* SitesParser::EntityNameSegmentContext::HYPH() {
  return getToken(SitesParser::HYPH, 0);
}


size_t SitesParser::EntityNameSegmentContext::getRuleIndex() const {
  return SitesParser::RuleEntityNameSegment;
}

void SitesParser::EntityNameSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntityNameSegment(this);
}

void SitesParser::EntityNameSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntityNameSegment(this);
}


std::any SitesParser::EntityNameSegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitEntityNameSegment(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::EntityNameSegmentContext* SitesParser::entityNameSegment() {
  EntityNameSegmentContext *_localctx = _tracker.createInstance<EntityNameSegmentContext>(_ctx, getState());
  enterRule(_localctx, 62, SitesParser::RuleEntityNameSegment);
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
    setState(285);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 290288249602048) != 0))) {
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

//----------------- UrlContext ------------------------------------------------------------------

SitesParser::UrlContext::UrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::UriContext* SitesParser::UrlContext::uri() {
  return getRuleContext<SitesParser::UriContext>(0);
}


size_t SitesParser::UrlContext::getRuleIndex() const {
  return SitesParser::RuleUrl;
}

void SitesParser::UrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUrl(this);
}

void SitesParser::UrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUrl(this);
}


std::any SitesParser::UrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUrl(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UrlContext* SitesParser::url() {
  UrlContext *_localctx = _tracker.createInstance<UrlContext>(_ctx, getState());
  enterRule(_localctx, 64, SitesParser::RuleUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
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

SitesParser::UriContext::UriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::SchemeContext* SitesParser::UriContext::scheme() {
  return getRuleContext<SitesParser::SchemeContext>(0);
}

tree::TerminalNode* SitesParser::UriContext::SCHEME_SEP() {
  return getToken(SitesParser::SCHEME_SEP, 0);
}

SitesParser::HostContext* SitesParser::UriContext::host() {
  return getRuleContext<SitesParser::HostContext>(0);
}

SitesParser::LoginContext* SitesParser::UriContext::login() {
  return getRuleContext<SitesParser::LoginContext>(0);
}

SitesParser::UriPortContext* SitesParser::UriContext::uriPort() {
  return getRuleContext<SitesParser::UriPortContext>(0);
}

SitesParser::UriPathContext* SitesParser::UriContext::uriPath() {
  return getRuleContext<SitesParser::UriPathContext>(0);
}

SitesParser::QueryContext* SitesParser::UriContext::query() {
  return getRuleContext<SitesParser::QueryContext>(0);
}

SitesParser::FragContext* SitesParser::UriContext::frag() {
  return getRuleContext<SitesParser::FragContext>(0);
}


size_t SitesParser::UriContext::getRuleIndex() const {
  return SitesParser::RuleUri;
}

void SitesParser::UriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUri(this);
}

void SitesParser::UriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUri(this);
}


std::any SitesParser::UriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUri(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UriContext* SitesParser::uri() {
  UriContext *_localctx = _tracker.createInstance<UriContext>(_ctx, getState());
  enterRule(_localctx, 66, SitesParser::RuleUri);
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
    setState(289);
    scheme();
    setState(290);
    match(SitesParser::SCHEME_SEP);
    setState(292);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(291);
      login();
      break;
    }

    default:
      break;
    }
    setState(294);
    host();
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::COL) {
      setState(295);
      uriPort();
    }
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::FS) {
      setState(298);
      uriPath();
    }
    setState(302);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::Q) {
      setState(301);
      query();
    }
    setState(305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::HASH) {
      setState(304);
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

SitesParser::UriPortContext::UriPortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::UriPortContext::COL() {
  return getToken(SitesParser::COL, 0);
}

SitesParser::PortContext* SitesParser::UriPortContext::port() {
  return getRuleContext<SitesParser::PortContext>(0);
}


size_t SitesParser::UriPortContext::getRuleIndex() const {
  return SitesParser::RuleUriPort;
}

void SitesParser::UriPortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriPort(this);
}

void SitesParser::UriPortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriPort(this);
}


std::any SitesParser::UriPortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUriPort(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UriPortContext* SitesParser::uriPort() {
  UriPortContext *_localctx = _tracker.createInstance<UriPortContext>(_ctx, getState());
  enterRule(_localctx, 68, SitesParser::RuleUriPort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(SitesParser::COL);
    setState(308);
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

SitesParser::UriPathContext::UriPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::UriPathContext::FS() {
  return getToken(SitesParser::FS, 0);
}

SitesParser::PathContext* SitesParser::UriPathContext::path() {
  return getRuleContext<SitesParser::PathContext>(0);
}


size_t SitesParser::UriPathContext::getRuleIndex() const {
  return SitesParser::RuleUriPath;
}

void SitesParser::UriPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriPath(this);
}

void SitesParser::UriPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriPath(this);
}


std::any SitesParser::UriPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUriPath(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UriPathContext* SitesParser::uriPath() {
  UriPathContext *_localctx = _tracker.createInstance<UriPathContext>(_ctx, getState());
  enterRule(_localctx, 70, SitesParser::RuleUriPath);
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
    setState(310);
    match(SitesParser::FS);
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 141750697984) != 0)) {
      setState(311);
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

SitesParser::SchemeContext::SchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::StringContext* SitesParser::SchemeContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::SchemeContext::getRuleIndex() const {
  return SitesParser::RuleScheme;
}

void SitesParser::SchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScheme(this);
}

void SitesParser::SchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScheme(this);
}


std::any SitesParser::SchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitScheme(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SchemeContext* SitesParser::scheme() {
  SchemeContext *_localctx = _tracker.createInstance<SchemeContext>(_ctx, getState());
  enterRule(_localctx, 72, SitesParser::RuleScheme);

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
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HostContext ------------------------------------------------------------------

SitesParser::HostContext::HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::HostnameContext* SitesParser::HostContext::hostname() {
  return getRuleContext<SitesParser::HostnameContext>(0);
}

tree::TerminalNode* SitesParser::HostContext::FS() {
  return getToken(SitesParser::FS, 0);
}


size_t SitesParser::HostContext::getRuleIndex() const {
  return SitesParser::RuleHost;
}

void SitesParser::HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost(this);
}

void SitesParser::HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost(this);
}


std::any SitesParser::HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitHost(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::HostContext* SitesParser::host() {
  HostContext *_localctx = _tracker.createInstance<HostContext>(_ctx, getState());
  enterRule(_localctx, 74, SitesParser::RuleHost);
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
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::FS) {
      setState(316);
      match(SitesParser::FS);
    }
    setState(319);
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

SitesParser::HostnameContext::HostnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::DomainNameOrIpv4HostContext* SitesParser::HostnameContext::domainNameOrIpv4Host() {
  return getRuleContext<SitesParser::DomainNameOrIpv4HostContext>(0);
}

SitesParser::Ipv6HostContext* SitesParser::HostnameContext::ipv6Host() {
  return getRuleContext<SitesParser::Ipv6HostContext>(0);
}


size_t SitesParser::HostnameContext::getRuleIndex() const {
  return SitesParser::RuleHostname;
}

void SitesParser::HostnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHostname(this);
}

void SitesParser::HostnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHostname(this);
}


std::any SitesParser::HostnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitHostname(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::HostnameContext* SitesParser::hostname() {
  HostnameContext *_localctx = _tracker.createInstance<HostnameContext>(_ctx, getState());
  enterRule(_localctx, 76, SitesParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR:
      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(321);
        domainNameOrIpv4Host();
        break;
      }

      case SitesParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(322);
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

SitesParser::DomainNameOrIpv4HostContext::DomainNameOrIpv4HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::DomainNameOrIpv4HostContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::DomainNameOrIpv4HostContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::DomainNameOrIpv4HostContext::getRuleIndex() const {
  return SitesParser::RuleDomainNameOrIpv4Host;
}

void SitesParser::DomainNameOrIpv4HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDomainNameOrIpv4Host(this);
}

void SitesParser::DomainNameOrIpv4HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDomainNameOrIpv4Host(this);
}


std::any SitesParser::DomainNameOrIpv4HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitDomainNameOrIpv4Host(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::DomainNameOrIpv4HostContext* SitesParser::domainNameOrIpv4Host() {
  DomainNameOrIpv4HostContext *_localctx = _tracker.createInstance<DomainNameOrIpv4HostContext>(_ctx, getState());
  enterRule(_localctx, 78, SitesParser::RuleDomainNameOrIpv4Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(325);
        parameterString();
        break;
      }

      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(326);
        string();
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

SitesParser::Ipv6HostContext::Ipv6HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::Ipv6HostContext::LBRACKET() {
  return getToken(SitesParser::LBRACKET, 0);
}

SitesParser::V6hostContext* SitesParser::Ipv6HostContext::v6host() {
  return getRuleContext<SitesParser::V6hostContext>(0);
}

tree::TerminalNode* SitesParser::Ipv6HostContext::RBRACKET() {
  return getToken(SitesParser::RBRACKET, 0);
}


size_t SitesParser::Ipv6HostContext::getRuleIndex() const {
  return SitesParser::RuleIpv6Host;
}

void SitesParser::Ipv6HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIpv6Host(this);
}

void SitesParser::Ipv6HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIpv6Host(this);
}


std::any SitesParser::Ipv6HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitIpv6Host(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::Ipv6HostContext* SitesParser::ipv6Host() {
  Ipv6HostContext *_localctx = _tracker.createInstance<Ipv6HostContext>(_ctx, getState());
  enterRule(_localctx, 80, SitesParser::RuleIpv6Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(SitesParser::LBRACKET);
    setState(330);
    v6host();
    setState(331);
    match(SitesParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- V6hostContext ------------------------------------------------------------------

SitesParser::V6hostContext::V6hostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::V6hostConfigParamContext* SitesParser::V6hostContext::v6hostConfigParam() {
  return getRuleContext<SitesParser::V6hostConfigParamContext>(0);
}

tree::TerminalNode* SitesParser::V6hostContext::DBL_COL() {
  return getToken(SitesParser::DBL_COL, 0);
}

std::vector<SitesParser::V6hostSegmentContext *> SitesParser::V6hostContext::v6hostSegment() {
  return getRuleContexts<SitesParser::V6hostSegmentContext>();
}

SitesParser::V6hostSegmentContext* SitesParser::V6hostContext::v6hostSegment(size_t i) {
  return getRuleContext<SitesParser::V6hostSegmentContext>(i);
}


size_t SitesParser::V6hostContext::getRuleIndex() const {
  return SitesParser::RuleV6host;
}

void SitesParser::V6hostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6host(this);
}

void SitesParser::V6hostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6host(this);
}


std::any SitesParser::V6hostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitV6host(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::V6hostContext* SitesParser::v6host() {
  V6hostContext *_localctx = _tracker.createInstance<V6hostContext>(_ctx, getState());
  enterRule(_localctx, 82, SitesParser::RuleV6host);
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
    setState(334);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::DBL_COL) {
      setState(333);
      match(SitesParser::DBL_COL);
    }
    setState(336);
    v6hostConfigParam();
    setState(340);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SitesParser::DBL_COL

    || _la == SitesParser::COL) {
      setState(337);
      v6hostSegment();
      setState(342);
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

SitesParser::V6hostSegmentContext::V6hostSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::V6hostSepContext* SitesParser::V6hostSegmentContext::v6hostSep() {
  return getRuleContext<SitesParser::V6hostSepContext>(0);
}

SitesParser::V6hostConfigParamContext* SitesParser::V6hostSegmentContext::v6hostConfigParam() {
  return getRuleContext<SitesParser::V6hostConfigParamContext>(0);
}


size_t SitesParser::V6hostSegmentContext::getRuleIndex() const {
  return SitesParser::RuleV6hostSegment;
}

void SitesParser::V6hostSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostSegment(this);
}

void SitesParser::V6hostSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostSegment(this);
}


std::any SitesParser::V6hostSegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitV6hostSegment(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::V6hostSegmentContext* SitesParser::v6hostSegment() {
  V6hostSegmentContext *_localctx = _tracker.createInstance<V6hostSegmentContext>(_ctx, getState());
  enterRule(_localctx, 84, SitesParser::RuleV6hostSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    v6hostSep();
    setState(344);
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

SitesParser::V6hostSepContext::V6hostSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::V6hostSepContext::COL() {
  return getToken(SitesParser::COL, 0);
}

tree::TerminalNode* SitesParser::V6hostSepContext::DBL_COL() {
  return getToken(SitesParser::DBL_COL, 0);
}


size_t SitesParser::V6hostSepContext::getRuleIndex() const {
  return SitesParser::RuleV6hostSep;
}

void SitesParser::V6hostSepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostSep(this);
}

void SitesParser::V6hostSepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostSep(this);
}


std::any SitesParser::V6hostSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitV6hostSep(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::V6hostSepContext* SitesParser::v6hostSep() {
  V6hostSepContext *_localctx = _tracker.createInstance<V6hostSepContext>(_ctx, getState());
  enterRule(_localctx, 86, SitesParser::RuleV6hostSep);
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
    setState(346);
    _la = _input->LA(1);
    if (!(_la == SitesParser::DBL_COL

    || _la == SitesParser::COL)) {
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

SitesParser::V6hostConfigParamContext::V6hostConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ConfigParamContext* SitesParser::V6hostConfigParamContext::configParam() {
  return getRuleContext<SitesParser::ConfigParamContext>(0);
}


size_t SitesParser::V6hostConfigParamContext::getRuleIndex() const {
  return SitesParser::RuleV6hostConfigParam;
}

void SitesParser::V6hostConfigParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostConfigParam(this);
}

void SitesParser::V6hostConfigParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostConfigParam(this);
}


std::any SitesParser::V6hostConfigParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitV6hostConfigParam(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::V6hostConfigParamContext* SitesParser::v6hostConfigParam() {
  V6hostConfigParamContext *_localctx = _tracker.createInstance<V6hostConfigParamContext>(_ctx, getState());
  enterRule(_localctx, 88, SitesParser::RuleV6hostConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
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

SitesParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::PortContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}


size_t SitesParser::PortContext::getRuleIndex() const {
  return SitesParser::RulePort;
}

void SitesParser::PortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPort(this);
}

void SitesParser::PortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPort(this);
}


std::any SitesParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PortContext* SitesParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 90, SitesParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(SitesParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

SitesParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::PathStringContext* SitesParser::PathContext::pathString() {
  return getRuleContext<SitesParser::PathStringContext>(0);
}

std::vector<SitesParser::MultiPathChunkContext *> SitesParser::PathContext::multiPathChunk() {
  return getRuleContexts<SitesParser::MultiPathChunkContext>();
}

SitesParser::MultiPathChunkContext* SitesParser::PathContext::multiPathChunk(size_t i) {
  return getRuleContext<SitesParser::MultiPathChunkContext>(i);
}

tree::TerminalNode* SitesParser::PathContext::FS() {
  return getToken(SitesParser::FS, 0);
}


size_t SitesParser::PathContext::getRuleIndex() const {
  return SitesParser::RulePath;
}

void SitesParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void SitesParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


std::any SitesParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PathContext* SitesParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 92, SitesParser::RulePath);
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
    setState(352);
    pathString();
    setState(356);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(353);
        multiPathChunk(); 
      }
      setState(358);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::FS) {
      setState(359);
      match(SitesParser::FS);
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

SitesParser::MultiPathChunkContext::MultiPathChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::MultiPathChunkContext::FS() {
  return getToken(SitesParser::FS, 0);
}

SitesParser::PathStringContext* SitesParser::MultiPathChunkContext::pathString() {
  return getRuleContext<SitesParser::PathStringContext>(0);
}


size_t SitesParser::MultiPathChunkContext::getRuleIndex() const {
  return SitesParser::RuleMultiPathChunk;
}

void SitesParser::MultiPathChunkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiPathChunk(this);
}

void SitesParser::MultiPathChunkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiPathChunk(this);
}


std::any SitesParser::MultiPathChunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitMultiPathChunk(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::MultiPathChunkContext* SitesParser::multiPathChunk() {
  MultiPathChunkContext *_localctx = _tracker.createInstance<MultiPathChunkContext>(_ctx, getState());
  enterRule(_localctx, 94, SitesParser::RuleMultiPathChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(SitesParser::FS);
    setState(363);
    pathString();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathStringContext ------------------------------------------------------------------

SitesParser::PathStringContext::PathStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::PathStringContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::PathStringContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::PathStringContext::getRuleIndex() const {
  return SitesParser::RulePathString;
}

void SitesParser::PathStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathString(this);
}

void SitesParser::PathStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathString(this);
}


std::any SitesParser::PathStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPathString(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PathStringContext* SitesParser::pathString() {
  PathStringContext *_localctx = _tracker.createInstance<PathStringContext>(_ctx, getState());
  enterRule(_localctx, 96, SitesParser::RulePathString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(365);
        parameterString();
        break;
      }

      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(366);
        string();
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

//----------------- UserContext ------------------------------------------------------------------

SitesParser::UserContext::UserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::UserContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::UserContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::UserContext::getRuleIndex() const {
  return SitesParser::RuleUser;
}

void SitesParser::UserContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser(this);
}

void SitesParser::UserContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser(this);
}


std::any SitesParser::UserContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUser(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UserContext* SitesParser::user() {
  UserContext *_localctx = _tracker.createInstance<UserContext>(_ctx, getState());
  enterRule(_localctx, 98, SitesParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(369);
        parameterString();
        break;
      }

      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(370);
        string();
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

SitesParser::LoginContext::LoginContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::UserContext* SitesParser::LoginContext::user() {
  return getRuleContext<SitesParser::UserContext>(0);
}

tree::TerminalNode* SitesParser::LoginContext::AT() {
  return getToken(SitesParser::AT, 0);
}

SitesParser::LoginPasswordContext* SitesParser::LoginContext::loginPassword() {
  return getRuleContext<SitesParser::LoginPasswordContext>(0);
}


size_t SitesParser::LoginContext::getRuleIndex() const {
  return SitesParser::RuleLogin;
}

void SitesParser::LoginContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogin(this);
}

void SitesParser::LoginContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogin(this);
}


std::any SitesParser::LoginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitLogin(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::LoginContext* SitesParser::login() {
  LoginContext *_localctx = _tracker.createInstance<LoginContext>(_ctx, getState());
  enterRule(_localctx, 100, SitesParser::RuleLogin);
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
    setState(373);
    user();
    setState(375);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::COL) {
      setState(374);
      loginPassword();
    }
    setState(377);
    match(SitesParser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoginPasswordContext ------------------------------------------------------------------

SitesParser::LoginPasswordContext::LoginPasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::LoginPasswordContext::COL() {
  return getToken(SitesParser::COL, 0);
}

SitesParser::PasswordContext* SitesParser::LoginPasswordContext::password() {
  return getRuleContext<SitesParser::PasswordContext>(0);
}


size_t SitesParser::LoginPasswordContext::getRuleIndex() const {
  return SitesParser::RuleLoginPassword;
}

void SitesParser::LoginPasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoginPassword(this);
}

void SitesParser::LoginPasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoginPassword(this);
}


std::any SitesParser::LoginPasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitLoginPassword(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::LoginPasswordContext* SitesParser::loginPassword() {
  LoginPasswordContext *_localctx = _tracker.createInstance<LoginPasswordContext>(_ctx, getState());
  enterRule(_localctx, 102, SitesParser::RuleLoginPassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    match(SitesParser::COL);
    setState(380);
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

SitesParser::PasswordContext::PasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::PasswordContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::PasswordContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::PasswordContext::getRuleIndex() const {
  return SitesParser::RulePassword;
}

void SitesParser::PasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPassword(this);
}

void SitesParser::PasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPassword(this);
}


std::any SitesParser::PasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPassword(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PasswordContext* SitesParser::password() {
  PasswordContext *_localctx = _tracker.createInstance<PasswordContext>(_ctx, getState());
  enterRule(_localctx, 104, SitesParser::RulePassword);

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
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(382);
        parameterString();
        break;
      }

      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(383);
        string();
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

SitesParser::FragContext::FragContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::FragContext::HASH() {
  return getToken(SitesParser::HASH, 0);
}

SitesParser::FragStringContext* SitesParser::FragContext::fragString() {
  return getRuleContext<SitesParser::FragStringContext>(0);
}


size_t SitesParser::FragContext::getRuleIndex() const {
  return SitesParser::RuleFrag;
}

void SitesParser::FragContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrag(this);
}

void SitesParser::FragContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrag(this);
}


std::any SitesParser::FragContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitFrag(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::FragContext* SitesParser::frag() {
  FragContext *_localctx = _tracker.createInstance<FragContext>(_ctx, getState());
  enterRule(_localctx, 106, SitesParser::RuleFrag);

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
    match(SitesParser::HASH);
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

SitesParser::FragStringContext::FragStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::FragStringContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::FragStringContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}

tree::TerminalNode* SitesParser::FragStringContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}


size_t SitesParser::FragStringContext::getRuleIndex() const {
  return SitesParser::RuleFragString;
}

void SitesParser::FragStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFragString(this);
}

void SitesParser::FragStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFragString(this);
}


std::any SitesParser::FragStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitFragString(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::FragStringContext* SitesParser::fragString() {
  FragStringContext *_localctx = _tracker.createInstance<FragStringContext>(_ctx, getState());
  enterRule(_localctx, 108, SitesParser::RuleFragString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(392);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(389);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(390);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(391);
      match(SitesParser::DIGITS);
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

//----------------- QueryContext ------------------------------------------------------------------

SitesParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::QueryContext::Q() {
  return getToken(SitesParser::Q, 0);
}

SitesParser::SearchContext* SitesParser::QueryContext::search() {
  return getRuleContext<SitesParser::SearchContext>(0);
}


size_t SitesParser::QueryContext::getRuleIndex() const {
  return SitesParser::RuleQuery;
}

void SitesParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void SitesParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


std::any SitesParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::QueryContext* SitesParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 110, SitesParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(SitesParser::Q);
    setState(395);
    search();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchContext ------------------------------------------------------------------

SitesParser::SearchContext::SearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::SearchParameterContext* SitesParser::SearchContext::searchParameter() {
  return getRuleContext<SitesParser::SearchParameterContext>(0);
}

std::vector<SitesParser::MultiSearchContext *> SitesParser::SearchContext::multiSearch() {
  return getRuleContexts<SitesParser::MultiSearchContext>();
}

SitesParser::MultiSearchContext* SitesParser::SearchContext::multiSearch(size_t i) {
  return getRuleContext<SitesParser::MultiSearchContext>(i);
}


size_t SitesParser::SearchContext::getRuleIndex() const {
  return SitesParser::RuleSearch;
}

void SitesParser::SearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearch(this);
}

void SitesParser::SearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearch(this);
}


std::any SitesParser::SearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSearch(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SearchContext* SitesParser::search() {
  SearchContext *_localctx = _tracker.createInstance<SearchContext>(_ctx, getState());
  enterRule(_localctx, 112, SitesParser::RuleSearch);
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
    setState(397);
    searchParameter();
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SitesParser::AMP) {
      setState(398);
      multiSearch();
      setState(403);
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

SitesParser::MultiSearchContext::MultiSearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::MultiSearchContext::AMP() {
  return getToken(SitesParser::AMP, 0);
}

SitesParser::SearchParameterContext* SitesParser::MultiSearchContext::searchParameter() {
  return getRuleContext<SitesParser::SearchParameterContext>(0);
}


size_t SitesParser::MultiSearchContext::getRuleIndex() const {
  return SitesParser::RuleMultiSearch;
}

void SitesParser::MultiSearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiSearch(this);
}

void SitesParser::MultiSearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiSearch(this);
}


std::any SitesParser::MultiSearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitMultiSearch(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::MultiSearchContext* SitesParser::multiSearch() {
  MultiSearchContext *_localctx = _tracker.createInstance<MultiSearchContext>(_ctx, getState());
  enterRule(_localctx, 114, SitesParser::RuleMultiSearch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    match(SitesParser::AMP);
    setState(405);
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

SitesParser::SearchParameterContext::SearchParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::SearchParameterKeyContext* SitesParser::SearchParameterContext::searchParameterKey() {
  return getRuleContext<SitesParser::SearchParameterKeyContext>(0);
}

SitesParser::SearchParameterValueContext* SitesParser::SearchParameterContext::searchParameterValue() {
  return getRuleContext<SitesParser::SearchParameterValueContext>(0);
}


size_t SitesParser::SearchParameterContext::getRuleIndex() const {
  return SitesParser::RuleSearchParameter;
}

void SitesParser::SearchParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameter(this);
}

void SitesParser::SearchParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameter(this);
}


std::any SitesParser::SearchParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSearchParameter(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SearchParameterContext* SitesParser::searchParameter() {
  SearchParameterContext *_localctx = _tracker.createInstance<SearchParameterContext>(_ctx, getState());
  enterRule(_localctx, 116, SitesParser::RuleSearchParameter);
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
    setState(407);
    searchParameterKey();
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::EQ) {
      setState(408);
      searchParameterValue();
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

SitesParser::SearchParameterKeyContext::SearchParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::SearchParameterKeyContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::SearchParameterKeyContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::SearchParameterKeyContext::getRuleIndex() const {
  return SitesParser::RuleSearchParameterKey;
}

void SitesParser::SearchParameterKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterKey(this);
}

void SitesParser::SearchParameterKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterKey(this);
}


std::any SitesParser::SearchParameterKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSearchParameterKey(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SearchParameterKeyContext* SitesParser::searchParameterKey() {
  SearchParameterKeyContext *_localctx = _tracker.createInstance<SearchParameterKeyContext>(_ctx, getState());
  enterRule(_localctx, 118, SitesParser::RuleSearchParameterKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(411);
        parameterString();
        break;
      }

      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(412);
        string();
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

SitesParser::SearchParameterValueContext::SearchParameterValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::SearchParameterValueContext::EQ() {
  return getToken(SitesParser::EQ, 0);
}

SitesParser::SearchParameterValueStringContext* SitesParser::SearchParameterValueContext::searchParameterValueString() {
  return getRuleContext<SitesParser::SearchParameterValueStringContext>(0);
}


size_t SitesParser::SearchParameterValueContext::getRuleIndex() const {
  return SitesParser::RuleSearchParameterValue;
}

void SitesParser::SearchParameterValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterValue(this);
}

void SitesParser::SearchParameterValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterValue(this);
}


std::any SitesParser::SearchParameterValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSearchParameterValue(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SearchParameterValueContext* SitesParser::searchParameterValue() {
  SearchParameterValueContext *_localctx = _tracker.createInstance<SearchParameterValueContext>(_ctx, getState());
  enterRule(_localctx, 120, SitesParser::RuleSearchParameterValue);
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
    setState(415);
    match(SitesParser::EQ);
    setState(417);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 176110436352) != 0)) {
      setState(416);
      searchParameterValueString();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchParameterValueStringContext ------------------------------------------------------------------

SitesParser::SearchParameterValueStringContext::SearchParameterValueStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::SearchParameterValueStringContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::SearchParameterValueStringContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}

tree::TerminalNode* SitesParser::SearchParameterValueStringContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}

tree::TerminalNode* SitesParser::SearchParameterValueStringContext::HEX() {
  return getToken(SitesParser::HEX, 0);
}


size_t SitesParser::SearchParameterValueStringContext::getRuleIndex() const {
  return SitesParser::RuleSearchParameterValueString;
}

void SitesParser::SearchParameterValueStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterValueString(this);
}

void SitesParser::SearchParameterValueStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterValueString(this);
}


std::any SitesParser::SearchParameterValueStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSearchParameterValueString(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SearchParameterValueStringContext* SitesParser::searchParameterValueString() {
  SearchParameterValueStringContext *_localctx = _tracker.createInstance<SearchParameterValueStringContext>(_ctx, getState());
  enterRule(_localctx, 122, SitesParser::RuleSearchParameterValueString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(419);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(420);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(421);
      match(SitesParser::DIGITS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(422);
      match(SitesParser::HEX);
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

//----------------- ParameterStringContext ------------------------------------------------------------------

SitesParser::ParameterStringContext::ParameterStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SitesParser::ParameterStringContext::DBL_DOLLAR() {
  return getTokens(SitesParser::DBL_DOLLAR);
}

tree::TerminalNode* SitesParser::ParameterStringContext::DBL_DOLLAR(size_t i) {
  return getToken(SitesParser::DBL_DOLLAR, i);
}

SitesParser::ParameterNameContext* SitesParser::ParameterStringContext::parameterName() {
  return getRuleContext<SitesParser::ParameterNameContext>(0);
}


size_t SitesParser::ParameterStringContext::getRuleIndex() const {
  return SitesParser::RuleParameterString;
}

void SitesParser::ParameterStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterString(this);
}

void SitesParser::ParameterStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterString(this);
}


std::any SitesParser::ParameterStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitParameterString(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ParameterStringContext* SitesParser::parameterString() {
  ParameterStringContext *_localctx = _tracker.createInstance<ParameterStringContext>(_ctx, getState());
  enterRule(_localctx, 124, SitesParser::RuleParameterString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(SitesParser::DBL_DOLLAR);
    setState(426);
    parameterName();
    setState(427);
    match(SitesParser::DBL_DOLLAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterNameContext ------------------------------------------------------------------

SitesParser::ParameterNameContext::ParameterNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::StringContext* SitesParser::ParameterNameContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}

std::vector<SitesParser::UsStringContext *> SitesParser::ParameterNameContext::usString() {
  return getRuleContexts<SitesParser::UsStringContext>();
}

SitesParser::UsStringContext* SitesParser::ParameterNameContext::usString(size_t i) {
  return getRuleContext<SitesParser::UsStringContext>(i);
}


size_t SitesParser::ParameterNameContext::getRuleIndex() const {
  return SitesParser::RuleParameterName;
}

void SitesParser::ParameterNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterName(this);
}

void SitesParser::ParameterNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterName(this);
}


std::any SitesParser::ParameterNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitParameterName(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ParameterNameContext* SitesParser::parameterName() {
  ParameterNameContext *_localctx = _tracker.createInstance<ParameterNameContext>(_ctx, getState());
  enterRule(_localctx, 126, SitesParser::RuleParameterName);
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
    setState(429);
    string();
    setState(433);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SitesParser::US) {
      setState(430);
      usString();
      setState(435);
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

//----------------- ConfigParamContext ------------------------------------------------------------------

SitesParser::ConfigParamContext::ConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::ConfigParamContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

SitesParser::StringContext* SitesParser::ConfigParamContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}

tree::TerminalNode* SitesParser::ConfigParamContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}


size_t SitesParser::ConfigParamContext::getRuleIndex() const {
  return SitesParser::RuleConfigParam;
}

void SitesParser::ConfigParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConfigParam(this);
}

void SitesParser::ConfigParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConfigParam(this);
}


std::any SitesParser::ConfigParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitConfigParam(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::ConfigParamContext* SitesParser::configParam() {
  ConfigParamContext *_localctx = _tracker.createInstance<ConfigParamContext>(_ctx, getState());
  enterRule(_localctx, 128, SitesParser::RuleConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(439);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(436);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(437);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(438);
      match(SitesParser::DIGITS);
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

//----------------- StringContext ------------------------------------------------------------------

SitesParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::StringContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::StringContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}


size_t SitesParser::StringContext::getRuleIndex() const {
  return SitesParser::RuleString;
}

void SitesParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void SitesParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


std::any SitesParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::StringContext* SitesParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 130, SitesParser::RuleString);
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
    setState(441);
    _la = _input->LA(1);
    if (!(_la == SitesParser::STRING

    || _la == SitesParser::DIGITS)) {
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

//----------------- UsStringContext ------------------------------------------------------------------

SitesParser::UsStringContext::UsStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::UsStringContext::US() {
  return getToken(SitesParser::US, 0);
}

SitesParser::StringContext* SitesParser::UsStringContext::string() {
  return getRuleContext<SitesParser::StringContext>(0);
}


size_t SitesParser::UsStringContext::getRuleIndex() const {
  return SitesParser::RuleUsString;
}

void SitesParser::UsStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsString(this);
}

void SitesParser::UsStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsString(this);
}


std::any SitesParser::UsStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUsString(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UsStringContext* SitesParser::usString() {
  UsStringContext *_localctx = _tracker.createInstance<UsStringContext>(_ctx, getState());
  enterRule(_localctx, 132, SitesParser::RuleUsString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(SitesParser::US);
    setState(444);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhoneContext ------------------------------------------------------------------

SitesParser::PhoneContext::PhoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::CountryCodeContext* SitesParser::PhoneContext::countryCode() {
  return getRuleContext<SitesParser::CountryCodeContext>(0);
}

std::vector<SitesParser::PhoneSepContext *> SitesParser::PhoneContext::phoneSep() {
  return getRuleContexts<SitesParser::PhoneSepContext>();
}

SitesParser::PhoneSepContext* SitesParser::PhoneContext::phoneSep(size_t i) {
  return getRuleContext<SitesParser::PhoneSepContext>(i);
}

SitesParser::AreaCodeContext* SitesParser::PhoneContext::areaCode() {
  return getRuleContext<SitesParser::AreaCodeContext>(0);
}

SitesParser::PhoneNumberContext* SitesParser::PhoneContext::phoneNumber() {
  return getRuleContext<SitesParser::PhoneNumberContext>(0);
}


size_t SitesParser::PhoneContext::getRuleIndex() const {
  return SitesParser::RulePhone;
}

void SitesParser::PhoneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhone(this);
}

void SitesParser::PhoneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhone(this);
}


std::any SitesParser::PhoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPhone(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PhoneContext* SitesParser::phone() {
  PhoneContext *_localctx = _tracker.createInstance<PhoneContext>(_ctx, getState());
  enterRule(_localctx, 134, SitesParser::RulePhone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    countryCode();
    setState(447);
    phoneSep();
    setState(448);
    areaCode();
    setState(449);
    phoneSep();
    setState(450);
    phoneNumber();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CountryCodeContext ------------------------------------------------------------------

SitesParser::CountryCodeContext::CountryCodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::CountryCodeContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}

tree::TerminalNode* SitesParser::CountryCodeContext::PLUS() {
  return getToken(SitesParser::PLUS, 0);
}


size_t SitesParser::CountryCodeContext::getRuleIndex() const {
  return SitesParser::RuleCountryCode;
}

void SitesParser::CountryCodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCountryCode(this);
}

void SitesParser::CountryCodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCountryCode(this);
}


std::any SitesParser::CountryCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitCountryCode(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::CountryCodeContext* SitesParser::countryCode() {
  CountryCodeContext *_localctx = _tracker.createInstance<CountryCodeContext>(_ctx, getState());
  enterRule(_localctx, 136, SitesParser::RuleCountryCode);
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
    setState(453);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::PLUS) {
      setState(452);
      match(SitesParser::PLUS);
    }
    setState(455);
    match(SitesParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AreaCodeContext ------------------------------------------------------------------

SitesParser::AreaCodeContext::AreaCodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::AreaCodeContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}

tree::TerminalNode* SitesParser::AreaCodeContext::LPAREN() {
  return getToken(SitesParser::LPAREN, 0);
}

tree::TerminalNode* SitesParser::AreaCodeContext::RPAREN() {
  return getToken(SitesParser::RPAREN, 0);
}


size_t SitesParser::AreaCodeContext::getRuleIndex() const {
  return SitesParser::RuleAreaCode;
}

void SitesParser::AreaCodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAreaCode(this);
}

void SitesParser::AreaCodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAreaCode(this);
}


std::any SitesParser::AreaCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitAreaCode(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::AreaCodeContext* SitesParser::areaCode() {
  AreaCodeContext *_localctx = _tracker.createInstance<AreaCodeContext>(_ctx, getState());
  enterRule(_localctx, 138, SitesParser::RuleAreaCode);
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
    setState(458);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::LPAREN) {
      setState(457);
      match(SitesParser::LPAREN);
    }
    setState(460);
    match(SitesParser::DIGITS);
    setState(462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::RPAREN) {
      setState(461);
      match(SitesParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhoneNumberContext ------------------------------------------------------------------

SitesParser::PhoneNumberContext::PhoneNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::LocalPhoneContext* SitesParser::PhoneNumberContext::localPhone() {
  return getRuleContext<SitesParser::LocalPhoneContext>(0);
}

SitesParser::DtmfContext* SitesParser::PhoneNumberContext::dtmf() {
  return getRuleContext<SitesParser::DtmfContext>(0);
}


size_t SitesParser::PhoneNumberContext::getRuleIndex() const {
  return SitesParser::RulePhoneNumber;
}

void SitesParser::PhoneNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhoneNumber(this);
}

void SitesParser::PhoneNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhoneNumber(this);
}


std::any SitesParser::PhoneNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPhoneNumber(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PhoneNumberContext* SitesParser::phoneNumber() {
  PhoneNumberContext *_localctx = _tracker.createInstance<PhoneNumberContext>(_ctx, getState());
  enterRule(_localctx, 140, SitesParser::RulePhoneNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(466);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(464);
        localPhone();
        break;
      }

      case SitesParser::ALPHANUM: {
        enterOuterAlt(_localctx, 2);
        setState(465);
        dtmf();
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

//----------------- LocalPhoneContext ------------------------------------------------------------------

SitesParser::LocalPhoneContext::LocalPhoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::LocalAreaContext* SitesParser::LocalPhoneContext::localArea() {
  return getRuleContext<SitesParser::LocalAreaContext>(0);
}

SitesParser::PhoneSepContext* SitesParser::LocalPhoneContext::phoneSep() {
  return getRuleContext<SitesParser::PhoneSepContext>(0);
}

SitesParser::LocalizerContext* SitesParser::LocalPhoneContext::localizer() {
  return getRuleContext<SitesParser::LocalizerContext>(0);
}


size_t SitesParser::LocalPhoneContext::getRuleIndex() const {
  return SitesParser::RuleLocalPhone;
}

void SitesParser::LocalPhoneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalPhone(this);
}

void SitesParser::LocalPhoneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalPhone(this);
}


std::any SitesParser::LocalPhoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitLocalPhone(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::LocalPhoneContext* SitesParser::localPhone() {
  LocalPhoneContext *_localctx = _tracker.createInstance<LocalPhoneContext>(_ctx, getState());
  enterRule(_localctx, 142, SitesParser::RuleLocalPhone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(468);
    localArea();
    setState(469);
    phoneSep();
    setState(470);
    localizer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalAreaContext ------------------------------------------------------------------

SitesParser::LocalAreaContext::LocalAreaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::LocalAreaContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}


size_t SitesParser::LocalAreaContext::getRuleIndex() const {
  return SitesParser::RuleLocalArea;
}

void SitesParser::LocalAreaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalArea(this);
}

void SitesParser::LocalAreaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalArea(this);
}


std::any SitesParser::LocalAreaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitLocalArea(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::LocalAreaContext* SitesParser::localArea() {
  LocalAreaContext *_localctx = _tracker.createInstance<LocalAreaContext>(_ctx, getState());
  enterRule(_localctx, 144, SitesParser::RuleLocalArea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    match(SitesParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalizerContext ------------------------------------------------------------------

SitesParser::LocalizerContext::LocalizerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::LocalizerContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}


size_t SitesParser::LocalizerContext::getRuleIndex() const {
  return SitesParser::RuleLocalizer;
}

void SitesParser::LocalizerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalizer(this);
}

void SitesParser::LocalizerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalizer(this);
}


std::any SitesParser::LocalizerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitLocalizer(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::LocalizerContext* SitesParser::localizer() {
  LocalizerContext *_localctx = _tracker.createInstance<LocalizerContext>(_ctx, getState());
  enterRule(_localctx, 146, SitesParser::RuleLocalizer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(SitesParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DtmfContext ------------------------------------------------------------------

SitesParser::DtmfContext::DtmfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::DtmfWithLocalContext* SitesParser::DtmfContext::dtmfWithLocal() {
  return getRuleContext<SitesParser::DtmfWithLocalContext>(0);
}

SitesParser::DtmfAllContext* SitesParser::DtmfContext::dtmfAll() {
  return getRuleContext<SitesParser::DtmfAllContext>(0);
}


size_t SitesParser::DtmfContext::getRuleIndex() const {
  return SitesParser::RuleDtmf;
}

void SitesParser::DtmfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmf(this);
}

void SitesParser::DtmfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmf(this);
}


std::any SitesParser::DtmfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitDtmf(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::DtmfContext* SitesParser::dtmf() {
  DtmfContext *_localctx = _tracker.createInstance<DtmfContext>(_ctx, getState());
  enterRule(_localctx, 148, SitesParser::RuleDtmf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      dtmfWithLocal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(477);
      dtmfAll();
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

//----------------- DtmfWithLocalContext ------------------------------------------------------------------

SitesParser::DtmfWithLocalContext::DtmfWithLocalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::LocalAreaWithDtmfContext* SitesParser::DtmfWithLocalContext::localAreaWithDtmf() {
  return getRuleContext<SitesParser::LocalAreaWithDtmfContext>(0);
}

SitesParser::DtmfLocalizerContext* SitesParser::DtmfWithLocalContext::dtmfLocalizer() {
  return getRuleContext<SitesParser::DtmfLocalizerContext>(0);
}

SitesParser::PhoneSepContext* SitesParser::DtmfWithLocalContext::phoneSep() {
  return getRuleContext<SitesParser::PhoneSepContext>(0);
}


size_t SitesParser::DtmfWithLocalContext::getRuleIndex() const {
  return SitesParser::RuleDtmfWithLocal;
}

void SitesParser::DtmfWithLocalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmfWithLocal(this);
}

void SitesParser::DtmfWithLocalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmfWithLocal(this);
}


std::any SitesParser::DtmfWithLocalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitDtmfWithLocal(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::DtmfWithLocalContext* SitesParser::dtmfWithLocal() {
  DtmfWithLocalContext *_localctx = _tracker.createInstance<DtmfWithLocalContext>(_ctx, getState());
  enterRule(_localctx, 150, SitesParser::RuleDtmfWithLocal);
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
    setState(480);
    localAreaWithDtmf();
    setState(482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::SPACE

    || _la == SitesParser::HYPH) {
      setState(481);
      phoneSep();
    }
    setState(484);
    dtmfLocalizer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalAreaWithDtmfContext ------------------------------------------------------------------

SitesParser::LocalAreaWithDtmfContext::LocalAreaWithDtmfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SitesParser::LocalAreaWithDtmfContext::ALPHANUM() {
  return getTokens(SitesParser::ALPHANUM);
}

tree::TerminalNode* SitesParser::LocalAreaWithDtmfContext::ALPHANUM(size_t i) {
  return getToken(SitesParser::ALPHANUM, i);
}


size_t SitesParser::LocalAreaWithDtmfContext::getRuleIndex() const {
  return SitesParser::RuleLocalAreaWithDtmf;
}

void SitesParser::LocalAreaWithDtmfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalAreaWithDtmf(this);
}

void SitesParser::LocalAreaWithDtmfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalAreaWithDtmf(this);
}


std::any SitesParser::LocalAreaWithDtmfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitLocalAreaWithDtmf(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::LocalAreaWithDtmfContext* SitesParser::localAreaWithDtmf() {
  LocalAreaWithDtmfContext *_localctx = _tracker.createInstance<LocalAreaWithDtmfContext>(_ctx, getState());
  enterRule(_localctx, 152, SitesParser::RuleLocalAreaWithDtmf);

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
    setState(487); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(486);
              match(SitesParser::ALPHANUM);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(489); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DtmfAllContext ------------------------------------------------------------------

SitesParser::DtmfAllContext::DtmfAllContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SitesParser::DtmfAllContext::ALPHANUM() {
  return getTokens(SitesParser::ALPHANUM);
}

tree::TerminalNode* SitesParser::DtmfAllContext::ALPHANUM(size_t i) {
  return getToken(SitesParser::ALPHANUM, i);
}


size_t SitesParser::DtmfAllContext::getRuleIndex() const {
  return SitesParser::RuleDtmfAll;
}

void SitesParser::DtmfAllContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmfAll(this);
}

void SitesParser::DtmfAllContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmfAll(this);
}


std::any SitesParser::DtmfAllContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitDtmfAll(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::DtmfAllContext* SitesParser::dtmfAll() {
  DtmfAllContext *_localctx = _tracker.createInstance<DtmfAllContext>(_ctx, getState());
  enterRule(_localctx, 154, SitesParser::RuleDtmfAll);
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
    setState(492); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(491);
      match(SitesParser::ALPHANUM);
      setState(494); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SitesParser::ALPHANUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DtmfLocalizerContext ------------------------------------------------------------------

SitesParser::DtmfLocalizerContext::DtmfLocalizerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SitesParser::DtmfLocalizerContext::ALPHANUM() {
  return getTokens(SitesParser::ALPHANUM);
}

tree::TerminalNode* SitesParser::DtmfLocalizerContext::ALPHANUM(size_t i) {
  return getToken(SitesParser::ALPHANUM, i);
}


size_t SitesParser::DtmfLocalizerContext::getRuleIndex() const {
  return SitesParser::RuleDtmfLocalizer;
}

void SitesParser::DtmfLocalizerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmfLocalizer(this);
}

void SitesParser::DtmfLocalizerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmfLocalizer(this);
}


std::any SitesParser::DtmfLocalizerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitDtmfLocalizer(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::DtmfLocalizerContext* SitesParser::dtmfLocalizer() {
  DtmfLocalizerContext *_localctx = _tracker.createInstance<DtmfLocalizerContext>(_ctx, getState());
  enterRule(_localctx, 156, SitesParser::RuleDtmfLocalizer);
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
    setState(497); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(496);
      match(SitesParser::ALPHANUM);
      setState(499); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SitesParser::ALPHANUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhoneSepContext ------------------------------------------------------------------

SitesParser::PhoneSepContext::PhoneSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::PhoneSepContext::SPACE() {
  return getToken(SitesParser::SPACE, 0);
}

tree::TerminalNode* SitesParser::PhoneSepContext::HYPH() {
  return getToken(SitesParser::HYPH, 0);
}


size_t SitesParser::PhoneSepContext::getRuleIndex() const {
  return SitesParser::RulePhoneSep;
}

void SitesParser::PhoneSepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhoneSep(this);
}

void SitesParser::PhoneSepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhoneSep(this);
}


std::any SitesParser::PhoneSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitPhoneSep(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::PhoneSepContext* SitesParser::phoneSep() {
  PhoneSepContext *_localctx = _tracker.createInstance<PhoneSepContext>(_ctx, getState());
  enterRule(_localctx, 158, SitesParser::RulePhoneSep);
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
    setState(501);
    _la = _input->LA(1);
    if (!(_la == SitesParser::SPACE

    || _la == SitesParser::HYPH)) {
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

void SitesParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sitesParserInitialize();
#else
  ::antlr4::internal::call_once(sitesParserOnceFlag, sitesParserInitialize);
#endif
}
