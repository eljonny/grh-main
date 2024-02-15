
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
      "siteFormat", "siteType", "siteDetailFormat", "siteFormatElement", 
      "siteFormatId", "optionalDataElement", "optionalSiteFormatId", "site", 
      "siteDetail", "meetings", "fellowshipId", "meetingLocationType", "meetingsDataUrl", 
      "fellowship", "fellowshipName", "fellowshipUrl", "organization", "organizationId", 
      "organizationName", "organizationUrl", "resource", "resourceEntityId", 
      "resourceType", "resourceDataPrimary", "resourceTextNumber", "resourcePhoneNumber", 
      "resourceUrl", "resourceOptional", "resourceDataContext", "resourceDataContextSpecifier", 
      "entityId", "entityIdSegment", "entityName", "entityNameSegment", 
      "url", "uri", "uriPort", "uriPath", "scheme", "schemeSeparator", "uriSchemePrefix", 
      "uriScheme", "host", "hostname", "domainNameOrIpv4Host", "ipv6Host", 
      "v6host", "v6hostSegment", "v6hostSep", "v6hostConfigParam", "port", 
      "path", "multiPathChunk", "pathString", "login", "user", "loginPassword", 
      "password", "frag", "fragString", "query", "search", "multiSearch", 
      "searchParameter", "searchParameterKey", "searchParameterValue", "parameterString", 
      "parameterName", "configParam", "phone", "countryCode", "areaCode", 
      "phoneNumber", "localPhone", "localArea", "localizer", "dtmf", "dtmfWithLocal", 
      "localAreaWithDtmf", "dtmfAll", "dtmfLocalizer", "phoneSep"
    },
    std::vector<std::string>{
      "", "'any'", "'text'", "'call'", "'chat'", "'test'", "'call-list'", 
      "'program-literature'", "'reading'", "'store'", "'bulletin'", "'us-in-person'", 
      "'intl-in-person'", "'all-in-person'", "'ca-in-person'", "'virtual'", 
      "'phone'", "'meetings'", "'fellowship'", "'organization'", "'resource'", 
      "'`'", "'\"'", "','", "", "", "", "", "", "", "", "", "", "", "", 
      "'.'", "'='", "':'", "'#'", "' '", "'$'", "'/'", "'_'", "'+'", "'-'", 
      "'%'", "'['", "']'", "'&'", "'@'", "'\\u003F'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "ANY", "TEXT", "CALL", "CHAT", "TEST", "CALL_LIST", "LITERATURE", 
      "READING", "STORE", "BULLETIN", "US_IN_PERSON", "INTL_IN_PERSON", 
      "ALL_IN_PERSON", "CA_IN_PERSON", "VIRTUAL", "PHONE", "MEETINGS", "FELLOWSHIP", 
      "ORGANIZATION", "RESOURCE", "GRAVE", "DQUOTE", "COMMA", "DBL_DOLLAR", 
      "DBL_COL", "WS", "BASIC_STRING", "STRING", "DIGITS", "ALPHANUM", "ALPHA", 
      "HEX", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", "EQ", "COL", "HASH", 
      "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", "PERC", "LBRACKET", 
      "RBRACKET", "AMP", "AT", "Q", "LPAREN", "RPAREN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,52,620,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,7,
  	84,2,85,7,85,2,86,7,86,1,0,1,0,1,0,1,1,4,1,179,8,1,11,1,12,1,180,1,2,
  	1,2,3,2,185,8,2,1,3,1,3,5,3,189,8,3,10,3,12,3,192,9,3,1,3,1,3,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,3,4,234,8,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,4,7,244,8,7,11,7,12,7,
  	245,1,7,5,7,249,8,7,10,7,12,7,252,9,7,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,
  	10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,273,8,
  	13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,
  	17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,1,25,3,25,323,8,25,1,26,1,26,3,26,327,8,26,
  	1,27,1,27,1,28,1,28,1,28,3,28,334,8,28,1,29,4,29,337,8,29,11,29,12,29,
  	338,1,29,5,29,342,8,29,10,29,12,29,345,9,29,1,30,1,30,1,31,1,31,1,32,
  	1,32,1,32,1,33,1,33,3,33,356,8,33,1,34,1,34,1,35,4,35,361,8,35,11,35,
  	12,35,362,1,36,1,36,1,37,1,37,5,37,369,8,37,10,37,12,37,372,9,37,1,38,
  	1,38,1,39,1,39,1,40,1,40,1,40,3,40,381,8,40,1,40,1,40,3,40,385,8,40,1,
  	40,3,40,388,8,40,1,40,3,40,391,8,40,1,40,3,40,394,8,40,1,41,1,41,1,41,
  	1,42,1,42,3,42,401,8,42,1,43,3,43,404,8,43,1,43,1,43,1,44,1,44,3,44,410,
  	8,44,1,44,3,44,413,8,44,1,45,1,45,1,46,1,46,1,47,3,47,420,8,47,1,47,1,
  	47,1,48,1,48,3,48,426,8,48,1,49,1,49,1,49,1,49,3,49,432,8,49,1,50,1,50,
  	1,50,1,50,1,51,3,51,439,8,51,1,51,1,51,5,51,443,8,51,10,51,12,51,446,
  	9,51,1,52,1,52,1,52,1,53,1,53,1,54,1,54,1,55,1,55,1,56,4,56,458,8,56,
  	11,56,12,56,459,1,56,5,56,463,8,56,10,56,12,56,466,9,56,1,56,3,56,469,
  	8,56,1,57,1,57,4,57,473,8,57,11,57,12,57,474,1,58,1,58,1,58,1,58,1,58,
  	1,58,3,58,483,8,58,1,59,1,59,3,59,487,8,59,1,59,1,59,1,60,1,60,1,60,1,
  	60,3,60,495,8,60,1,61,1,61,1,61,1,62,1,62,1,62,1,62,3,62,504,8,62,1,63,
  	1,63,1,63,1,64,1,64,1,64,1,64,3,64,513,8,64,1,65,1,65,3,65,517,8,65,1,
  	66,1,66,5,66,521,8,66,10,66,12,66,524,9,66,1,67,1,67,1,67,1,68,1,68,1,
  	68,5,68,532,8,68,10,68,12,68,535,9,68,1,69,1,69,1,69,1,69,3,69,541,8,
  	69,1,70,1,70,1,70,1,70,1,70,4,70,548,8,70,11,70,12,70,549,1,70,3,70,553,
  	8,70,1,71,1,71,1,71,1,71,1,72,1,72,1,73,1,73,1,73,1,73,3,73,565,8,73,
  	1,74,1,74,1,74,1,74,1,74,1,74,3,74,573,8,74,1,75,3,75,576,8,75,1,75,1,
  	75,1,76,3,76,581,8,76,1,76,1,76,3,76,585,8,76,1,77,1,77,3,77,589,8,77,
  	1,78,1,78,1,78,1,78,1,79,1,79,1,80,1,80,1,81,1,81,3,81,601,8,81,1,82,
  	1,82,3,82,605,8,82,1,82,1,82,1,83,4,83,610,8,83,11,83,12,83,611,1,84,
  	1,84,1,85,1,85,1,86,1,86,1,86,0,0,87,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,
  	114,116,118,120,122,124,126,128,130,132,134,136,138,140,142,144,146,148,
  	150,152,154,156,158,160,162,164,166,168,170,172,0,10,1,0,17,20,1,0,27,
  	28,1,0,11,16,1,0,2,10,2,0,27,28,44,44,3,0,27,28,39,39,44,44,2,0,25,25,
  	37,37,1,0,27,29,2,0,27,27,29,29,3,0,35,35,39,39,44,44,644,0,174,1,0,0,
  	0,2,178,1,0,0,0,4,184,1,0,0,0,6,186,1,0,0,0,8,233,1,0,0,0,10,235,1,0,
  	0,0,12,240,1,0,0,0,14,243,1,0,0,0,16,253,1,0,0,0,18,256,1,0,0,0,20,258,
  	1,0,0,0,22,263,1,0,0,0,24,265,1,0,0,0,26,272,1,0,0,0,28,274,1,0,0,0,30,
  	282,1,0,0,0,32,284,1,0,0,0,34,286,1,0,0,0,36,288,1,0,0,0,38,296,1,0,0,
  	0,40,298,1,0,0,0,42,300,1,0,0,0,44,308,1,0,0,0,46,310,1,0,0,0,48,312,
  	1,0,0,0,50,314,1,0,0,0,52,326,1,0,0,0,54,328,1,0,0,0,56,333,1,0,0,0,58,
  	336,1,0,0,0,60,346,1,0,0,0,62,348,1,0,0,0,64,350,1,0,0,0,66,355,1,0,0,
  	0,68,357,1,0,0,0,70,360,1,0,0,0,72,364,1,0,0,0,74,366,1,0,0,0,76,373,
  	1,0,0,0,78,375,1,0,0,0,80,377,1,0,0,0,82,395,1,0,0,0,84,398,1,0,0,0,86,
  	403,1,0,0,0,88,407,1,0,0,0,90,414,1,0,0,0,92,416,1,0,0,0,94,419,1,0,0,
  	0,96,425,1,0,0,0,98,431,1,0,0,0,100,433,1,0,0,0,102,438,1,0,0,0,104,447,
  	1,0,0,0,106,450,1,0,0,0,108,452,1,0,0,0,110,454,1,0,0,0,112,457,1,0,0,
  	0,114,470,1,0,0,0,116,482,1,0,0,0,118,484,1,0,0,0,120,494,1,0,0,0,122,
  	496,1,0,0,0,124,503,1,0,0,0,126,505,1,0,0,0,128,512,1,0,0,0,130,514,1,
  	0,0,0,132,518,1,0,0,0,134,525,1,0,0,0,136,528,1,0,0,0,138,540,1,0,0,0,
  	140,552,1,0,0,0,142,554,1,0,0,0,144,558,1,0,0,0,146,564,1,0,0,0,148,566,
  	1,0,0,0,150,575,1,0,0,0,152,580,1,0,0,0,154,588,1,0,0,0,156,590,1,0,0,
  	0,158,594,1,0,0,0,160,596,1,0,0,0,162,600,1,0,0,0,164,602,1,0,0,0,166,
  	609,1,0,0,0,168,613,1,0,0,0,170,615,1,0,0,0,172,617,1,0,0,0,174,175,3,
  	2,1,0,175,176,5,0,0,1,176,1,1,0,0,0,177,179,3,4,2,0,178,177,1,0,0,0,179,
  	180,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,3,1,0,0,0,182,185,3,6,
  	3,0,183,185,3,24,12,0,184,182,1,0,0,0,184,183,1,0,0,0,185,5,1,0,0,0,186,
  	190,5,38,0,0,187,189,3,8,4,0,188,187,1,0,0,0,189,192,1,0,0,0,190,188,
  	1,0,0,0,190,191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,194,5,26,
  	0,0,194,7,1,0,0,0,195,234,5,27,0,0,196,234,5,28,0,0,197,234,5,39,0,0,
  	198,234,5,21,0,0,199,234,5,40,0,0,200,234,5,24,0,0,201,234,5,44,0,0,202,
  	234,5,23,0,0,203,234,5,37,0,0,204,234,5,29,0,0,205,234,5,41,0,0,206,234,
  	5,22,0,0,207,234,5,38,0,0,208,234,5,17,0,0,209,234,5,18,0,0,210,234,5,
  	19,0,0,211,234,5,20,0,0,212,234,5,2,0,0,213,234,5,3,0,0,214,234,5,4,0,
  	0,215,234,5,5,0,0,216,234,5,6,0,0,217,234,5,7,0,0,218,234,5,8,0,0,219,
  	234,5,9,0,0,220,234,5,10,0,0,221,234,5,11,0,0,222,234,5,12,0,0,223,234,
  	5,13,0,0,224,234,5,14,0,0,225,234,5,15,0,0,226,234,5,16,0,0,227,234,5,
  	46,0,0,228,234,5,47,0,0,229,234,5,48,0,0,230,234,5,49,0,0,231,234,5,50,
  	0,0,232,234,3,10,5,0,233,195,1,0,0,0,233,196,1,0,0,0,233,197,1,0,0,0,
  	233,198,1,0,0,0,233,199,1,0,0,0,233,200,1,0,0,0,233,201,1,0,0,0,233,202,
  	1,0,0,0,233,203,1,0,0,0,233,204,1,0,0,0,233,205,1,0,0,0,233,206,1,0,0,
  	0,233,207,1,0,0,0,233,208,1,0,0,0,233,209,1,0,0,0,233,210,1,0,0,0,233,
  	211,1,0,0,0,233,212,1,0,0,0,233,213,1,0,0,0,233,214,1,0,0,0,233,215,1,
  	0,0,0,233,216,1,0,0,0,233,217,1,0,0,0,233,218,1,0,0,0,233,219,1,0,0,0,
  	233,220,1,0,0,0,233,221,1,0,0,0,233,222,1,0,0,0,233,223,1,0,0,0,233,224,
  	1,0,0,0,233,225,1,0,0,0,233,226,1,0,0,0,233,227,1,0,0,0,233,228,1,0,0,
  	0,233,229,1,0,0,0,233,230,1,0,0,0,233,231,1,0,0,0,233,232,1,0,0,0,234,
  	9,1,0,0,0,235,236,5,21,0,0,236,237,3,12,6,0,237,238,5,21,0,0,238,239,
  	3,14,7,0,239,11,1,0,0,0,240,241,7,0,0,0,241,13,1,0,0,0,242,244,3,16,8,
  	0,243,242,1,0,0,0,244,245,1,0,0,0,245,243,1,0,0,0,245,246,1,0,0,0,246,
  	250,1,0,0,0,247,249,3,20,10,0,248,247,1,0,0,0,249,252,1,0,0,0,250,248,
  	1,0,0,0,250,251,1,0,0,0,251,15,1,0,0,0,252,250,1,0,0,0,253,254,5,23,0,
  	0,254,255,3,18,9,0,255,17,1,0,0,0,256,257,7,1,0,0,257,19,1,0,0,0,258,
  	259,5,46,0,0,259,260,5,23,0,0,260,261,3,22,11,0,261,262,5,47,0,0,262,
  	21,1,0,0,0,263,264,3,18,9,0,264,23,1,0,0,0,265,266,3,26,13,0,266,267,
  	5,26,0,0,267,25,1,0,0,0,268,273,3,28,14,0,269,273,3,36,18,0,270,273,3,
  	42,21,0,271,273,3,50,25,0,272,268,1,0,0,0,272,269,1,0,0,0,272,270,1,0,
  	0,0,272,271,1,0,0,0,273,27,1,0,0,0,274,275,5,17,0,0,275,276,5,23,0,0,
  	276,277,3,30,15,0,277,278,5,23,0,0,278,279,3,32,16,0,279,280,5,23,0,0,
  	280,281,3,34,17,0,281,29,1,0,0,0,282,283,3,70,35,0,283,31,1,0,0,0,284,
  	285,7,2,0,0,285,33,1,0,0,0,286,287,3,78,39,0,287,35,1,0,0,0,288,289,5,
  	18,0,0,289,290,5,23,0,0,290,291,3,30,15,0,291,292,5,23,0,0,292,293,3,
  	38,19,0,293,294,5,23,0,0,294,295,3,40,20,0,295,37,1,0,0,0,296,297,3,74,
  	37,0,297,39,1,0,0,0,298,299,3,78,39,0,299,41,1,0,0,0,300,301,5,19,0,0,
  	301,302,5,23,0,0,302,303,3,44,22,0,303,304,5,23,0,0,304,305,3,46,23,0,
  	305,306,5,23,0,0,306,307,3,48,24,0,307,43,1,0,0,0,308,309,3,70,35,0,309,
  	45,1,0,0,0,310,311,3,74,37,0,311,47,1,0,0,0,312,313,3,78,39,0,313,49,
  	1,0,0,0,314,315,5,20,0,0,315,316,5,23,0,0,316,317,3,52,26,0,317,318,5,
  	23,0,0,318,319,3,54,27,0,319,320,5,23,0,0,320,322,3,56,28,0,321,323,3,
  	64,32,0,322,321,1,0,0,0,322,323,1,0,0,0,323,51,1,0,0,0,324,327,3,30,15,
  	0,325,327,3,44,22,0,326,324,1,0,0,0,326,325,1,0,0,0,327,53,1,0,0,0,328,
  	329,7,3,0,0,329,55,1,0,0,0,330,334,3,58,29,0,331,334,3,60,30,0,332,334,
  	3,62,31,0,333,330,1,0,0,0,333,331,1,0,0,0,333,332,1,0,0,0,334,57,1,0,
  	0,0,335,337,5,29,0,0,336,335,1,0,0,0,337,338,1,0,0,0,338,336,1,0,0,0,
  	338,339,1,0,0,0,339,343,1,0,0,0,340,342,5,27,0,0,341,340,1,0,0,0,342,
  	345,1,0,0,0,343,341,1,0,0,0,343,344,1,0,0,0,344,59,1,0,0,0,345,343,1,
  	0,0,0,346,347,3,148,74,0,347,61,1,0,0,0,348,349,3,78,39,0,349,63,1,0,
  	0,0,350,351,5,23,0,0,351,352,3,66,33,0,352,65,1,0,0,0,353,356,5,1,0,0,
  	354,356,3,68,34,0,355,353,1,0,0,0,355,354,1,0,0,0,356,67,1,0,0,0,357,
  	358,7,1,0,0,358,69,1,0,0,0,359,361,3,72,36,0,360,359,1,0,0,0,361,362,
  	1,0,0,0,362,360,1,0,0,0,362,363,1,0,0,0,363,71,1,0,0,0,364,365,7,4,0,
  	0,365,73,1,0,0,0,366,370,7,1,0,0,367,369,3,76,38,0,368,367,1,0,0,0,369,
  	372,1,0,0,0,370,368,1,0,0,0,370,371,1,0,0,0,371,75,1,0,0,0,372,370,1,
  	0,0,0,373,374,7,5,0,0,374,77,1,0,0,0,375,376,3,80,40,0,376,79,1,0,0,0,
  	377,378,3,86,43,0,378,380,3,88,44,0,379,381,3,118,59,0,380,379,1,0,0,
  	0,380,381,1,0,0,0,381,382,1,0,0,0,382,384,3,94,47,0,383,385,3,82,41,0,
  	384,383,1,0,0,0,384,385,1,0,0,0,385,387,1,0,0,0,386,388,3,84,42,0,387,
  	386,1,0,0,0,387,388,1,0,0,0,388,390,1,0,0,0,389,391,3,130,65,0,390,389,
  	1,0,0,0,390,391,1,0,0,0,391,393,1,0,0,0,392,394,3,126,63,0,393,392,1,
  	0,0,0,393,394,1,0,0,0,394,81,1,0,0,0,395,396,5,37,0,0,396,397,3,110,55,
  	0,397,83,1,0,0,0,398,400,5,41,0,0,399,401,3,112,56,0,400,399,1,0,0,0,
  	400,401,1,0,0,0,401,85,1,0,0,0,402,404,3,90,45,0,403,402,1,0,0,0,403,
  	404,1,0,0,0,404,405,1,0,0,0,405,406,3,92,46,0,406,87,1,0,0,0,407,409,
  	5,37,0,0,408,410,5,41,0,0,409,408,1,0,0,0,409,410,1,0,0,0,410,412,1,0,
  	0,0,411,413,5,41,0,0,412,411,1,0,0,0,412,413,1,0,0,0,413,89,1,0,0,0,414,
  	415,5,27,0,0,415,91,1,0,0,0,416,417,5,27,0,0,417,93,1,0,0,0,418,420,5,
  	41,0,0,419,418,1,0,0,0,419,420,1,0,0,0,420,421,1,0,0,0,421,422,3,96,48,
  	0,422,95,1,0,0,0,423,426,3,98,49,0,424,426,3,100,50,0,425,423,1,0,0,0,
  	425,424,1,0,0,0,426,97,1,0,0,0,427,432,3,142,71,0,428,432,5,27,0,0,429,
  	432,5,28,0,0,430,432,5,29,0,0,431,427,1,0,0,0,431,428,1,0,0,0,431,429,
  	1,0,0,0,431,430,1,0,0,0,432,99,1,0,0,0,433,434,5,46,0,0,434,435,3,102,
  	51,0,435,436,5,47,0,0,436,101,1,0,0,0,437,439,5,25,0,0,438,437,1,0,0,
  	0,438,439,1,0,0,0,439,440,1,0,0,0,440,444,3,108,54,0,441,443,3,104,52,
  	0,442,441,1,0,0,0,443,446,1,0,0,0,444,442,1,0,0,0,444,445,1,0,0,0,445,
  	103,1,0,0,0,446,444,1,0,0,0,447,448,3,106,53,0,448,449,3,108,54,0,449,
  	105,1,0,0,0,450,451,7,6,0,0,451,107,1,0,0,0,452,453,3,146,73,0,453,109,
  	1,0,0,0,454,455,5,29,0,0,455,111,1,0,0,0,456,458,3,116,58,0,457,456,1,
  	0,0,0,458,459,1,0,0,0,459,457,1,0,0,0,459,460,1,0,0,0,460,464,1,0,0,0,
  	461,463,3,114,57,0,462,461,1,0,0,0,463,466,1,0,0,0,464,462,1,0,0,0,464,
  	465,1,0,0,0,465,468,1,0,0,0,466,464,1,0,0,0,467,469,5,41,0,0,468,467,
  	1,0,0,0,468,469,1,0,0,0,469,113,1,0,0,0,470,472,5,41,0,0,471,473,3,116,
  	58,0,472,471,1,0,0,0,473,474,1,0,0,0,474,472,1,0,0,0,474,475,1,0,0,0,
  	475,115,1,0,0,0,476,483,3,142,71,0,477,483,5,27,0,0,478,483,5,28,0,0,
  	479,483,5,29,0,0,480,483,5,44,0,0,481,483,5,42,0,0,482,476,1,0,0,0,482,
  	477,1,0,0,0,482,478,1,0,0,0,482,479,1,0,0,0,482,480,1,0,0,0,482,481,1,
  	0,0,0,483,117,1,0,0,0,484,486,3,120,60,0,485,487,3,122,61,0,486,485,1,
  	0,0,0,486,487,1,0,0,0,487,488,1,0,0,0,488,489,5,49,0,0,489,119,1,0,0,
  	0,490,495,3,142,71,0,491,495,5,27,0,0,492,495,5,28,0,0,493,495,5,29,0,
  	0,494,490,1,0,0,0,494,491,1,0,0,0,494,492,1,0,0,0,494,493,1,0,0,0,495,
  	121,1,0,0,0,496,497,5,37,0,0,497,498,3,124,62,0,498,123,1,0,0,0,499,504,
  	3,142,71,0,500,504,5,27,0,0,501,504,5,28,0,0,502,504,5,29,0,0,503,499,
  	1,0,0,0,503,500,1,0,0,0,503,501,1,0,0,0,503,502,1,0,0,0,504,125,1,0,0,
  	0,505,506,5,38,0,0,506,507,3,128,64,0,507,127,1,0,0,0,508,513,3,142,71,
  	0,509,513,5,27,0,0,510,513,5,28,0,0,511,513,5,29,0,0,512,508,1,0,0,0,
  	512,509,1,0,0,0,512,510,1,0,0,0,512,511,1,0,0,0,513,129,1,0,0,0,514,516,
  	5,50,0,0,515,517,3,132,66,0,516,515,1,0,0,0,516,517,1,0,0,0,517,131,1,
  	0,0,0,518,522,3,136,68,0,519,521,3,134,67,0,520,519,1,0,0,0,521,524,1,
  	0,0,0,522,520,1,0,0,0,522,523,1,0,0,0,523,133,1,0,0,0,524,522,1,0,0,0,
  	525,526,5,48,0,0,526,527,3,136,68,0,527,135,1,0,0,0,528,529,3,138,69,
  	0,529,533,5,36,0,0,530,532,3,140,70,0,531,530,1,0,0,0,532,535,1,0,0,0,
  	533,531,1,0,0,0,533,534,1,0,0,0,534,137,1,0,0,0,535,533,1,0,0,0,536,541,
  	3,142,71,0,537,541,5,27,0,0,538,541,5,28,0,0,539,541,5,29,0,0,540,536,
  	1,0,0,0,540,537,1,0,0,0,540,538,1,0,0,0,540,539,1,0,0,0,541,139,1,0,0,
  	0,542,553,3,142,71,0,543,553,5,27,0,0,544,553,5,28,0,0,545,553,5,29,0,
  	0,546,548,5,32,0,0,547,546,1,0,0,0,548,549,1,0,0,0,549,547,1,0,0,0,549,
  	550,1,0,0,0,550,553,1,0,0,0,551,553,5,37,0,0,552,542,1,0,0,0,552,543,
  	1,0,0,0,552,544,1,0,0,0,552,545,1,0,0,0,552,547,1,0,0,0,552,551,1,0,0,
  	0,553,141,1,0,0,0,554,555,5,24,0,0,555,556,3,144,72,0,556,557,5,24,0,
  	0,557,143,1,0,0,0,558,559,7,7,0,0,559,145,1,0,0,0,560,565,3,142,71,0,
  	561,565,5,27,0,0,562,565,5,28,0,0,563,565,5,29,0,0,564,560,1,0,0,0,564,
  	561,1,0,0,0,564,562,1,0,0,0,564,563,1,0,0,0,565,147,1,0,0,0,566,567,3,
  	150,75,0,567,568,3,172,86,0,568,569,3,152,76,0,569,570,3,172,86,0,570,
  	572,3,154,77,0,571,573,5,0,0,1,572,571,1,0,0,0,572,573,1,0,0,0,573,149,
  	1,0,0,0,574,576,5,43,0,0,575,574,1,0,0,0,575,576,1,0,0,0,576,577,1,0,
  	0,0,577,578,5,29,0,0,578,151,1,0,0,0,579,581,5,51,0,0,580,579,1,0,0,0,
  	580,581,1,0,0,0,581,582,1,0,0,0,582,584,5,29,0,0,583,585,5,52,0,0,584,
  	583,1,0,0,0,584,585,1,0,0,0,585,153,1,0,0,0,586,589,3,156,78,0,587,589,
  	3,162,81,0,588,586,1,0,0,0,588,587,1,0,0,0,589,155,1,0,0,0,590,591,3,
  	158,79,0,591,592,3,172,86,0,592,593,3,160,80,0,593,157,1,0,0,0,594,595,
  	5,29,0,0,595,159,1,0,0,0,596,597,5,29,0,0,597,161,1,0,0,0,598,601,3,164,
  	82,0,599,601,3,168,84,0,600,598,1,0,0,0,600,599,1,0,0,0,601,163,1,0,0,
  	0,602,604,3,166,83,0,603,605,3,172,86,0,604,603,1,0,0,0,604,605,1,0,0,
  	0,605,606,1,0,0,0,606,607,3,170,85,0,607,165,1,0,0,0,608,610,7,8,0,0,
  	609,608,1,0,0,0,610,611,1,0,0,0,611,609,1,0,0,0,611,612,1,0,0,0,612,167,
  	1,0,0,0,613,614,5,27,0,0,614,169,1,0,0,0,615,616,5,27,0,0,616,171,1,0,
  	0,0,617,618,7,9,0,0,618,173,1,0,0,0,53,180,184,190,233,245,250,272,322,
  	326,333,338,343,355,362,370,380,384,387,390,393,400,403,409,412,419,425,
  	431,438,444,459,464,468,474,482,486,494,503,512,516,522,533,540,549,552,
  	564,572,575,580,584,588,600,604,611
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
    setState(174);
    sitesList();
    setState(175);
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
    setState(178); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(177);
      siteListEntry();
      setState(180); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 274879873024) != 0));
   
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
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::HASH: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        comment();
        break;
      }

      case SitesParser::MEETINGS:
      case SitesParser::FELLOWSHIP:
      case SitesParser::ORGANIZATION:
      case SitesParser::RESOURCE: {
        enterOuterAlt(_localctx, 2);
        setState(183);
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
    setState(186);
    match(SitesParser::HASH);
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2203284836188156) != 0)) {
      setState(187);
      commentTextFragment();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(193);
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

tree::TerminalNode* SitesParser::CommentTextFragmentContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
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

tree::TerminalNode* SitesParser::CommentTextFragmentContext::DBL_DOLLAR() {
  return getToken(SitesParser::DBL_DOLLAR, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::HYPH() {
  return getToken(SitesParser::HYPH, 0);
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

tree::TerminalNode* SitesParser::CommentTextFragmentContext::DQUOTE() {
  return getToken(SitesParser::DQUOTE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::HASH() {
  return getToken(SitesParser::HASH, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::MEETINGS() {
  return getToken(SitesParser::MEETINGS, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::FELLOWSHIP() {
  return getToken(SitesParser::FELLOWSHIP, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::ORGANIZATION() {
  return getToken(SitesParser::ORGANIZATION, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::RESOURCE() {
  return getToken(SitesParser::RESOURCE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::TEXT() {
  return getToken(SitesParser::TEXT, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::CALL() {
  return getToken(SitesParser::CALL, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::CHAT() {
  return getToken(SitesParser::CHAT, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::TEST() {
  return getToken(SitesParser::TEST, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::CALL_LIST() {
  return getToken(SitesParser::CALL_LIST, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::LITERATURE() {
  return getToken(SitesParser::LITERATURE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::READING() {
  return getToken(SitesParser::READING, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::STORE() {
  return getToken(SitesParser::STORE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::BULLETIN() {
  return getToken(SitesParser::BULLETIN, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::US_IN_PERSON() {
  return getToken(SitesParser::US_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::INTL_IN_PERSON() {
  return getToken(SitesParser::INTL_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::ALL_IN_PERSON() {
  return getToken(SitesParser::ALL_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::CA_IN_PERSON() {
  return getToken(SitesParser::CA_IN_PERSON, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::VIRTUAL() {
  return getToken(SitesParser::VIRTUAL, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::PHONE() {
  return getToken(SitesParser::PHONE, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::LBRACKET() {
  return getToken(SitesParser::LBRACKET, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::RBRACKET() {
  return getToken(SitesParser::RBRACKET, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::AMP() {
  return getToken(SitesParser::AMP, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::AT() {
  return getToken(SitesParser::AT, 0);
}

tree::TerminalNode* SitesParser::CommentTextFragmentContext::Q() {
  return getToken(SitesParser::Q, 0);
}

SitesParser::SiteFormatContext* SitesParser::CommentTextFragmentContext::siteFormat() {
  return getRuleContext<SitesParser::SiteFormatContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(SitesParser::BASIC_STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
      match(SitesParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
      match(SitesParser::SPACE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(198);
      match(SitesParser::GRAVE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(199);
      match(SitesParser::DOLLAR);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(200);
      match(SitesParser::DBL_DOLLAR);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(201);
      match(SitesParser::HYPH);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(202);
      match(SitesParser::COMMA);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(203);
      match(SitesParser::COL);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(204);
      match(SitesParser::DIGITS);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(205);
      match(SitesParser::FS);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(206);
      match(SitesParser::DQUOTE);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(207);
      match(SitesParser::HASH);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(208);
      match(SitesParser::MEETINGS);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(209);
      match(SitesParser::FELLOWSHIP);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(210);
      match(SitesParser::ORGANIZATION);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(211);
      match(SitesParser::RESOURCE);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(212);
      match(SitesParser::TEXT);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(213);
      match(SitesParser::CALL);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(214);
      match(SitesParser::CHAT);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(215);
      match(SitesParser::TEST);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(216);
      match(SitesParser::CALL_LIST);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(217);
      match(SitesParser::LITERATURE);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(218);
      match(SitesParser::READING);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(219);
      match(SitesParser::STORE);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(220);
      match(SitesParser::BULLETIN);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(221);
      match(SitesParser::US_IN_PERSON);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(222);
      match(SitesParser::INTL_IN_PERSON);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(223);
      match(SitesParser::ALL_IN_PERSON);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(224);
      match(SitesParser::CA_IN_PERSON);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(225);
      match(SitesParser::VIRTUAL);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(226);
      match(SitesParser::PHONE);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(227);
      match(SitesParser::LBRACKET);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(228);
      match(SitesParser::RBRACKET);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(229);
      match(SitesParser::AMP);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(230);
      match(SitesParser::AT);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(231);
      match(SitesParser::Q);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(232);
      siteFormat();
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

//----------------- SiteFormatContext ------------------------------------------------------------------

SitesParser::SiteFormatContext::SiteFormatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SitesParser::SiteFormatContext::GRAVE() {
  return getTokens(SitesParser::GRAVE);
}

tree::TerminalNode* SitesParser::SiteFormatContext::GRAVE(size_t i) {
  return getToken(SitesParser::GRAVE, i);
}

SitesParser::SiteTypeContext* SitesParser::SiteFormatContext::siteType() {
  return getRuleContext<SitesParser::SiteTypeContext>(0);
}

SitesParser::SiteDetailFormatContext* SitesParser::SiteFormatContext::siteDetailFormat() {
  return getRuleContext<SitesParser::SiteDetailFormatContext>(0);
}


size_t SitesParser::SiteFormatContext::getRuleIndex() const {
  return SitesParser::RuleSiteFormat;
}

void SitesParser::SiteFormatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteFormat(this);
}

void SitesParser::SiteFormatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteFormat(this);
}


std::any SitesParser::SiteFormatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteFormat(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteFormatContext* SitesParser::siteFormat() {
  SiteFormatContext *_localctx = _tracker.createInstance<SiteFormatContext>(_ctx, getState());
  enterRule(_localctx, 10, SitesParser::RuleSiteFormat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(SitesParser::GRAVE);
    setState(236);
    siteType();
    setState(237);
    match(SitesParser::GRAVE);
    setState(238);
    siteDetailFormat();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiteTypeContext ------------------------------------------------------------------

SitesParser::SiteTypeContext::SiteTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::SiteTypeContext::MEETINGS() {
  return getToken(SitesParser::MEETINGS, 0);
}

tree::TerminalNode* SitesParser::SiteTypeContext::FELLOWSHIP() {
  return getToken(SitesParser::FELLOWSHIP, 0);
}

tree::TerminalNode* SitesParser::SiteTypeContext::ORGANIZATION() {
  return getToken(SitesParser::ORGANIZATION, 0);
}

tree::TerminalNode* SitesParser::SiteTypeContext::RESOURCE() {
  return getToken(SitesParser::RESOURCE, 0);
}


size_t SitesParser::SiteTypeContext::getRuleIndex() const {
  return SitesParser::RuleSiteType;
}

void SitesParser::SiteTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteType(this);
}

void SitesParser::SiteTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteType(this);
}


std::any SitesParser::SiteTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteType(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteTypeContext* SitesParser::siteType() {
  SiteTypeContext *_localctx = _tracker.createInstance<SiteTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, SitesParser::RuleSiteType);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1966080) != 0))) {
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

//----------------- SiteDetailFormatContext ------------------------------------------------------------------

SitesParser::SiteDetailFormatContext::SiteDetailFormatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SitesParser::SiteFormatElementContext *> SitesParser::SiteDetailFormatContext::siteFormatElement() {
  return getRuleContexts<SitesParser::SiteFormatElementContext>();
}

SitesParser::SiteFormatElementContext* SitesParser::SiteDetailFormatContext::siteFormatElement(size_t i) {
  return getRuleContext<SitesParser::SiteFormatElementContext>(i);
}

std::vector<SitesParser::OptionalDataElementContext *> SitesParser::SiteDetailFormatContext::optionalDataElement() {
  return getRuleContexts<SitesParser::OptionalDataElementContext>();
}

SitesParser::OptionalDataElementContext* SitesParser::SiteDetailFormatContext::optionalDataElement(size_t i) {
  return getRuleContext<SitesParser::OptionalDataElementContext>(i);
}


size_t SitesParser::SiteDetailFormatContext::getRuleIndex() const {
  return SitesParser::RuleSiteDetailFormat;
}

void SitesParser::SiteDetailFormatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteDetailFormat(this);
}

void SitesParser::SiteDetailFormatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteDetailFormat(this);
}


std::any SitesParser::SiteDetailFormatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteDetailFormat(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteDetailFormatContext* SitesParser::siteDetailFormat() {
  SiteDetailFormatContext *_localctx = _tracker.createInstance<SiteDetailFormatContext>(_ctx, getState());
  enterRule(_localctx, 14, SitesParser::RuleSiteDetailFormat);

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
    setState(243); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(242);
              siteFormatElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(245); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(250);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(247);
        optionalDataElement(); 
      }
      setState(252);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiteFormatElementContext ------------------------------------------------------------------

SitesParser::SiteFormatElementContext::SiteFormatElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::SiteFormatElementContext::COMMA() {
  return getToken(SitesParser::COMMA, 0);
}

SitesParser::SiteFormatIdContext* SitesParser::SiteFormatElementContext::siteFormatId() {
  return getRuleContext<SitesParser::SiteFormatIdContext>(0);
}


size_t SitesParser::SiteFormatElementContext::getRuleIndex() const {
  return SitesParser::RuleSiteFormatElement;
}

void SitesParser::SiteFormatElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteFormatElement(this);
}

void SitesParser::SiteFormatElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteFormatElement(this);
}


std::any SitesParser::SiteFormatElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteFormatElement(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteFormatElementContext* SitesParser::siteFormatElement() {
  SiteFormatElementContext *_localctx = _tracker.createInstance<SiteFormatElementContext>(_ctx, getState());
  enterRule(_localctx, 16, SitesParser::RuleSiteFormatElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(SitesParser::COMMA);
    setState(254);
    siteFormatId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiteFormatIdContext ------------------------------------------------------------------

SitesParser::SiteFormatIdContext::SiteFormatIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::SiteFormatIdContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::SiteFormatIdContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}


size_t SitesParser::SiteFormatIdContext::getRuleIndex() const {
  return SitesParser::RuleSiteFormatId;
}

void SitesParser::SiteFormatIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiteFormatId(this);
}

void SitesParser::SiteFormatIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiteFormatId(this);
}


std::any SitesParser::SiteFormatIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSiteFormatId(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SiteFormatIdContext* SitesParser::siteFormatId() {
  SiteFormatIdContext *_localctx = _tracker.createInstance<SiteFormatIdContext>(_ctx, getState());
  enterRule(_localctx, 18, SitesParser::RuleSiteFormatId);
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
    setState(256);
    _la = _input->LA(1);
    if (!(_la == SitesParser::BASIC_STRING

    || _la == SitesParser::STRING)) {
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

//----------------- OptionalDataElementContext ------------------------------------------------------------------

SitesParser::OptionalDataElementContext::OptionalDataElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::OptionalDataElementContext::LBRACKET() {
  return getToken(SitesParser::LBRACKET, 0);
}

tree::TerminalNode* SitesParser::OptionalDataElementContext::COMMA() {
  return getToken(SitesParser::COMMA, 0);
}

SitesParser::OptionalSiteFormatIdContext* SitesParser::OptionalDataElementContext::optionalSiteFormatId() {
  return getRuleContext<SitesParser::OptionalSiteFormatIdContext>(0);
}

tree::TerminalNode* SitesParser::OptionalDataElementContext::RBRACKET() {
  return getToken(SitesParser::RBRACKET, 0);
}


size_t SitesParser::OptionalDataElementContext::getRuleIndex() const {
  return SitesParser::RuleOptionalDataElement;
}

void SitesParser::OptionalDataElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalDataElement(this);
}

void SitesParser::OptionalDataElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalDataElement(this);
}


std::any SitesParser::OptionalDataElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitOptionalDataElement(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::OptionalDataElementContext* SitesParser::optionalDataElement() {
  OptionalDataElementContext *_localctx = _tracker.createInstance<OptionalDataElementContext>(_ctx, getState());
  enterRule(_localctx, 20, SitesParser::RuleOptionalDataElement);

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
    match(SitesParser::LBRACKET);
    setState(259);
    match(SitesParser::COMMA);
    setState(260);
    optionalSiteFormatId();
    setState(261);
    match(SitesParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalSiteFormatIdContext ------------------------------------------------------------------

SitesParser::OptionalSiteFormatIdContext::OptionalSiteFormatIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::SiteFormatIdContext* SitesParser::OptionalSiteFormatIdContext::siteFormatId() {
  return getRuleContext<SitesParser::SiteFormatIdContext>(0);
}


size_t SitesParser::OptionalSiteFormatIdContext::getRuleIndex() const {
  return SitesParser::RuleOptionalSiteFormatId;
}

void SitesParser::OptionalSiteFormatIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalSiteFormatId(this);
}

void SitesParser::OptionalSiteFormatIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalSiteFormatId(this);
}


std::any SitesParser::OptionalSiteFormatIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitOptionalSiteFormatId(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::OptionalSiteFormatIdContext* SitesParser::optionalSiteFormatId() {
  OptionalSiteFormatIdContext *_localctx = _tracker.createInstance<OptionalSiteFormatIdContext>(_ctx, getState());
  enterRule(_localctx, 22, SitesParser::RuleOptionalSiteFormatId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    siteFormatId();
   
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
  enterRule(_localctx, 24, SitesParser::RuleSite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    siteDetail();
    setState(266);
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
  enterRule(_localctx, 26, SitesParser::RuleSiteDetail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(272);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::MEETINGS: {
        enterOuterAlt(_localctx, 1);
        setState(268);
        meetings();
        break;
      }

      case SitesParser::FELLOWSHIP: {
        enterOuterAlt(_localctx, 2);
        setState(269);
        fellowship();
        break;
      }

      case SitesParser::ORGANIZATION: {
        enterOuterAlt(_localctx, 3);
        setState(270);
        organization();
        break;
      }

      case SitesParser::RESOURCE: {
        enterOuterAlt(_localctx, 4);
        setState(271);
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
  enterRule(_localctx, 28, SitesParser::RuleMeetings);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(SitesParser::MEETINGS);
    setState(275);
    match(SitesParser::COMMA);
    setState(276);
    fellowshipId();
    setState(277);
    match(SitesParser::COMMA);
    setState(278);
    meetingLocationType();
    setState(279);
    match(SitesParser::COMMA);
    setState(280);
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
  enterRule(_localctx, 30, SitesParser::RuleFellowshipId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
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
  enterRule(_localctx, 32, SitesParser::RuleMeetingLocationType);
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
    setState(284);
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
  enterRule(_localctx, 34, SitesParser::RuleMeetingsDataUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
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
  enterRule(_localctx, 36, SitesParser::RuleFellowship);

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
    match(SitesParser::FELLOWSHIP);
    setState(289);
    match(SitesParser::COMMA);
    setState(290);
    fellowshipId();
    setState(291);
    match(SitesParser::COMMA);
    setState(292);
    fellowshipName();
    setState(293);
    match(SitesParser::COMMA);
    setState(294);
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
  enterRule(_localctx, 38, SitesParser::RuleFellowshipName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
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
  enterRule(_localctx, 40, SitesParser::RuleFellowshipUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
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
  enterRule(_localctx, 42, SitesParser::RuleOrganization);

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
    match(SitesParser::ORGANIZATION);
    setState(301);
    match(SitesParser::COMMA);
    setState(302);
    organizationId();
    setState(303);
    match(SitesParser::COMMA);
    setState(304);
    organizationName();
    setState(305);
    match(SitesParser::COMMA);
    setState(306);
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
  enterRule(_localctx, 44, SitesParser::RuleOrganizationId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
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
  enterRule(_localctx, 46, SitesParser::RuleOrganizationName);

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
  enterRule(_localctx, 48, SitesParser::RuleOrganizationUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
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
  enterRule(_localctx, 50, SitesParser::RuleResource);
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
    setState(314);
    match(SitesParser::RESOURCE);
    setState(315);
    match(SitesParser::COMMA);
    setState(316);
    resourceEntityId();
    setState(317);
    match(SitesParser::COMMA);
    setState(318);
    resourceType();
    setState(319);
    match(SitesParser::COMMA);
    setState(320);
    resourceDataPrimary();
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::COMMA) {
      setState(321);
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
  enterRule(_localctx, 52, SitesParser::RuleResourceEntityId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(326);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(324);
      fellowshipId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(325);
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
  enterRule(_localctx, 54, SitesParser::RuleResourceType);
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
    setState(328);
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
  enterRule(_localctx, 56, SitesParser::RuleResourceDataPrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(330);
      resourceTextNumber();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(331);
      resourcePhoneNumber();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(332);
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

std::vector<tree::TerminalNode *> SitesParser::ResourceTextNumberContext::DIGITS() {
  return getTokens(SitesParser::DIGITS);
}

tree::TerminalNode* SitesParser::ResourceTextNumberContext::DIGITS(size_t i) {
  return getToken(SitesParser::DIGITS, i);
}

std::vector<tree::TerminalNode *> SitesParser::ResourceTextNumberContext::BASIC_STRING() {
  return getTokens(SitesParser::BASIC_STRING);
}

tree::TerminalNode* SitesParser::ResourceTextNumberContext::BASIC_STRING(size_t i) {
  return getToken(SitesParser::BASIC_STRING, i);
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
  enterRule(_localctx, 58, SitesParser::RuleResourceTextNumber);
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
    setState(336); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(335);
      match(SitesParser::DIGITS);
      setState(338); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SitesParser::DIGITS);
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SitesParser::BASIC_STRING) {
      setState(340);
      match(SitesParser::BASIC_STRING);
      setState(345);
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
  enterRule(_localctx, 60, SitesParser::RuleResourcePhoneNumber);

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
  enterRule(_localctx, 62, SitesParser::RuleResourceUrl);

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
  enterRule(_localctx, 64, SitesParser::RuleResourceOptional);

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
    match(SitesParser::COMMA);
    setState(351);
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
  enterRule(_localctx, 66, SitesParser::RuleResourceDataContext);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(355);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::ANY: {
        enterOuterAlt(_localctx, 1);
        setState(353);
        match(SitesParser::ANY);
        break;
      }

      case SitesParser::BASIC_STRING:
      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(354);
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

tree::TerminalNode* SitesParser::ResourceDataContextSpecifierContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
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
  enterRule(_localctx, 68, SitesParser::RuleResourceDataContextSpecifier);
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
    setState(357);
    _la = _input->LA(1);
    if (!(_la == SitesParser::BASIC_STRING

    || _la == SitesParser::STRING)) {
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
  enterRule(_localctx, 70, SitesParser::RuleEntityId);
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
    setState(360); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(359);
      entityIdSegment();
      setState(362); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592588697600) != 0));
   
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

tree::TerminalNode* SitesParser::EntityIdSegmentContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::EntityIdSegmentContext::STRING() {
  return getToken(SitesParser::STRING, 0);
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
  enterRule(_localctx, 72, SitesParser::RuleEntityIdSegment);
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
    setState(364);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592588697600) != 0))) {
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

tree::TerminalNode* SitesParser::EntityNameContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::EntityNameContext::STRING() {
  return getToken(SitesParser::STRING, 0);
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
  enterRule(_localctx, 74, SitesParser::RuleEntityName);
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
    setState(366);
    _la = _input->LA(1);
    if (!(_la == SitesParser::BASIC_STRING

    || _la == SitesParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(370);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18142344511488) != 0)) {
      setState(367);
      entityNameSegment();
      setState(372);
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

tree::TerminalNode* SitesParser::EntityNameSegmentContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::EntityNameSegmentContext::STRING() {
  return getToken(SitesParser::STRING, 0);
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
  enterRule(_localctx, 76, SitesParser::RuleEntityNameSegment);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18142344511488) != 0))) {
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
  enterRule(_localctx, 78, SitesParser::RuleUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
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

SitesParser::SchemeSeparatorContext* SitesParser::UriContext::schemeSeparator() {
  return getRuleContext<SitesParser::SchemeSeparatorContext>(0);
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
  enterRule(_localctx, 80, SitesParser::RuleUri);
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
    setState(377);
    scheme();
    setState(378);
    schemeSeparator();
    setState(380);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(379);
      login();
      break;
    }

    default:
      break;
    }
    setState(382);
    host();
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::COL) {
      setState(383);
      uriPort();
    }
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::FS) {
      setState(386);
      uriPath();
    }
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::Q) {
      setState(389);
      query();
    }
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::HASH) {
      setState(392);
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
  enterRule(_localctx, 82, SitesParser::RuleUriPort);

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
    match(SitesParser::COL);
    setState(396);
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
  enterRule(_localctx, 84, SitesParser::RuleUriPath);
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
    setState(398);
    match(SitesParser::FS);
    setState(400);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 21991188856832) != 0)) {
      setState(399);
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

SitesParser::UriSchemeContext* SitesParser::SchemeContext::uriScheme() {
  return getRuleContext<SitesParser::UriSchemeContext>(0);
}

SitesParser::UriSchemePrefixContext* SitesParser::SchemeContext::uriSchemePrefix() {
  return getRuleContext<SitesParser::UriSchemePrefixContext>(0);
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
  enterRule(_localctx, 86, SitesParser::RuleScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(402);
      uriSchemePrefix();
      break;
    }

    default:
      break;
    }
    setState(405);
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

SitesParser::SchemeSeparatorContext::SchemeSeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::SchemeSeparatorContext::COL() {
  return getToken(SitesParser::COL, 0);
}

std::vector<tree::TerminalNode *> SitesParser::SchemeSeparatorContext::FS() {
  return getTokens(SitesParser::FS);
}

tree::TerminalNode* SitesParser::SchemeSeparatorContext::FS(size_t i) {
  return getToken(SitesParser::FS, i);
}


size_t SitesParser::SchemeSeparatorContext::getRuleIndex() const {
  return SitesParser::RuleSchemeSeparator;
}

void SitesParser::SchemeSeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeSeparator(this);
}

void SitesParser::SchemeSeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeSeparator(this);
}


std::any SitesParser::SchemeSeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitSchemeSeparator(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::SchemeSeparatorContext* SitesParser::schemeSeparator() {
  SchemeSeparatorContext *_localctx = _tracker.createInstance<SchemeSeparatorContext>(_ctx, getState());
  enterRule(_localctx, 88, SitesParser::RuleSchemeSeparator);

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
    match(SitesParser::COL);
    setState(409);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(408);
      match(SitesParser::FS);
      break;
    }

    default:
      break;
    }
    setState(412);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(411);
      match(SitesParser::FS);
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

SitesParser::UriSchemePrefixContext::UriSchemePrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::UriSchemePrefixContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}


size_t SitesParser::UriSchemePrefixContext::getRuleIndex() const {
  return SitesParser::RuleUriSchemePrefix;
}

void SitesParser::UriSchemePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriSchemePrefix(this);
}

void SitesParser::UriSchemePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriSchemePrefix(this);
}


std::any SitesParser::UriSchemePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUriSchemePrefix(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UriSchemePrefixContext* SitesParser::uriSchemePrefix() {
  UriSchemePrefixContext *_localctx = _tracker.createInstance<UriSchemePrefixContext>(_ctx, getState());
  enterRule(_localctx, 90, SitesParser::RuleUriSchemePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(SitesParser::BASIC_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriSchemeContext ------------------------------------------------------------------

SitesParser::UriSchemeContext::UriSchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SitesParser::UriSchemeContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}


size_t SitesParser::UriSchemeContext::getRuleIndex() const {
  return SitesParser::RuleUriScheme;
}

void SitesParser::UriSchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriScheme(this);
}

void SitesParser::UriSchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SitesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriScheme(this);
}


std::any SitesParser::UriSchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SitesVisitor*>(visitor))
    return parserVisitor->visitUriScheme(this);
  else
    return visitor->visitChildren(this);
}

SitesParser::UriSchemeContext* SitesParser::uriScheme() {
  UriSchemeContext *_localctx = _tracker.createInstance<UriSchemeContext>(_ctx, getState());
  enterRule(_localctx, 92, SitesParser::RuleUriScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(SitesParser::BASIC_STRING);
   
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
  enterRule(_localctx, 94, SitesParser::RuleHost);
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
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::FS) {
      setState(418);
      match(SitesParser::FS);
    }
    setState(421);
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
  enterRule(_localctx, 96, SitesParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(425);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR:
      case SitesParser::BASIC_STRING:
      case SitesParser::STRING:
      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(423);
        domainNameOrIpv4Host();
        break;
      }

      case SitesParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(424);
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

tree::TerminalNode* SitesParser::DomainNameOrIpv4HostContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::DomainNameOrIpv4HostContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::DomainNameOrIpv4HostContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
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
  enterRule(_localctx, 98, SitesParser::RuleDomainNameOrIpv4Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(431);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(427);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(428);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(429);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(430);
        match(SitesParser::DIGITS);
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
  enterRule(_localctx, 100, SitesParser::RuleIpv6Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(SitesParser::LBRACKET);
    setState(434);
    v6host();
    setState(435);
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
  enterRule(_localctx, 102, SitesParser::RuleV6host);
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
    setState(438);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::DBL_COL) {
      setState(437);
      match(SitesParser::DBL_COL);
    }
    setState(440);
    v6hostConfigParam();
    setState(444);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SitesParser::DBL_COL

    || _la == SitesParser::COL) {
      setState(441);
      v6hostSegment();
      setState(446);
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
  enterRule(_localctx, 104, SitesParser::RuleV6hostSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    v6hostSep();
    setState(448);
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
  enterRule(_localctx, 106, SitesParser::RuleV6hostSep);
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
    setState(450);
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
  enterRule(_localctx, 108, SitesParser::RuleV6hostConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
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
  enterRule(_localctx, 110, SitesParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
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

std::vector<SitesParser::PathStringContext *> SitesParser::PathContext::pathString() {
  return getRuleContexts<SitesParser::PathStringContext>();
}

SitesParser::PathStringContext* SitesParser::PathContext::pathString(size_t i) {
  return getRuleContext<SitesParser::PathStringContext>(i);
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
  enterRule(_localctx, 112, SitesParser::RulePath);
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
    setState(457); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(456);
      pathString();
      setState(459); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 21991188856832) != 0));
    setState(464);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(461);
        multiPathChunk(); 
      }
      setState(466);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::FS) {
      setState(467);
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

std::vector<SitesParser::PathStringContext *> SitesParser::MultiPathChunkContext::pathString() {
  return getRuleContexts<SitesParser::PathStringContext>();
}

SitesParser::PathStringContext* SitesParser::MultiPathChunkContext::pathString(size_t i) {
  return getRuleContext<SitesParser::PathStringContext>(i);
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
  enterRule(_localctx, 114, SitesParser::RuleMultiPathChunk);
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
    setState(470);
    match(SitesParser::FS);
    setState(472); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(471);
      pathString();
      setState(474); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 21991188856832) != 0));
   
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

tree::TerminalNode* SitesParser::PathStringContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::PathStringContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::PathStringContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}

tree::TerminalNode* SitesParser::PathStringContext::HYPH() {
  return getToken(SitesParser::HYPH, 0);
}

tree::TerminalNode* SitesParser::PathStringContext::US() {
  return getToken(SitesParser::US, 0);
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
  enterRule(_localctx, 116, SitesParser::RulePathString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(482);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(476);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(477);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(478);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(479);
        match(SitesParser::DIGITS);
        break;
      }

      case SitesParser::HYPH: {
        enterOuterAlt(_localctx, 5);
        setState(480);
        match(SitesParser::HYPH);
        break;
      }

      case SitesParser::US: {
        enterOuterAlt(_localctx, 6);
        setState(481);
        match(SitesParser::US);
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
  enterRule(_localctx, 118, SitesParser::RuleLogin);
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
    setState(484);
    user();
    setState(486);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::COL) {
      setState(485);
      loginPassword();
    }
    setState(488);
    match(SitesParser::AT);
   
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

tree::TerminalNode* SitesParser::UserContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::UserContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::UserContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
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
  enterRule(_localctx, 120, SitesParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(494);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(490);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(491);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(492);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(493);
        match(SitesParser::DIGITS);
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
  enterRule(_localctx, 122, SitesParser::RuleLoginPassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(SitesParser::COL);
    setState(497);
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

tree::TerminalNode* SitesParser::PasswordContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::PasswordContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::PasswordContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
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
  enterRule(_localctx, 124, SitesParser::RulePassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(503);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(499);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(500);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(501);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(502);
        match(SitesParser::DIGITS);
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
  enterRule(_localctx, 126, SitesParser::RuleFrag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(SitesParser::HASH);
    setState(506);
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

tree::TerminalNode* SitesParser::FragStringContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::FragStringContext::STRING() {
  return getToken(SitesParser::STRING, 0);
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
  enterRule(_localctx, 128, SitesParser::RuleFragString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(512);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(508);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(509);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(510);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(511);
        match(SitesParser::DIGITS);
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
  enterRule(_localctx, 130, SitesParser::RuleQuery);
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
    setState(514);
    match(SitesParser::Q);
    setState(516);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 956301312) != 0)) {
      setState(515);
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
  enterRule(_localctx, 132, SitesParser::RuleSearch);
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
    setState(518);
    searchParameter();
    setState(522);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SitesParser::AMP) {
      setState(519);
      multiSearch();
      setState(524);
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
  enterRule(_localctx, 134, SitesParser::RuleMultiSearch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(SitesParser::AMP);
    setState(526);
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

tree::TerminalNode* SitesParser::SearchParameterContext::EQ() {
  return getToken(SitesParser::EQ, 0);
}

std::vector<SitesParser::SearchParameterValueContext *> SitesParser::SearchParameterContext::searchParameterValue() {
  return getRuleContexts<SitesParser::SearchParameterValueContext>();
}

SitesParser::SearchParameterValueContext* SitesParser::SearchParameterContext::searchParameterValue(size_t i) {
  return getRuleContext<SitesParser::SearchParameterValueContext>(i);
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
  enterRule(_localctx, 136, SitesParser::RuleSearchParameter);
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
    setState(528);
    searchParameterKey();
    setState(529);
    match(SitesParser::EQ);
    setState(533);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 142690222080) != 0)) {
      setState(530);
      searchParameterValue();
      setState(535);
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

SitesParser::SearchParameterKeyContext::SearchParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::SearchParameterKeyContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

tree::TerminalNode* SitesParser::SearchParameterKeyContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::SearchParameterKeyContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::SearchParameterKeyContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
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
  enterRule(_localctx, 138, SitesParser::RuleSearchParameterKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(540);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(536);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(537);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(538);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(539);
        match(SitesParser::DIGITS);
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

SitesParser::ParameterStringContext* SitesParser::SearchParameterValueContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

tree::TerminalNode* SitesParser::SearchParameterValueContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::SearchParameterValueContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::SearchParameterValueContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
}

std::vector<tree::TerminalNode *> SitesParser::SearchParameterValueContext::HEX() {
  return getTokens(SitesParser::HEX);
}

tree::TerminalNode* SitesParser::SearchParameterValueContext::HEX(size_t i) {
  return getToken(SitesParser::HEX, i);
}

tree::TerminalNode* SitesParser::SearchParameterValueContext::COL() {
  return getToken(SitesParser::COL, 0);
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
  enterRule(_localctx, 140, SitesParser::RuleSearchParameterValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(542);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(543);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(544);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(545);
        match(SitesParser::DIGITS);
        break;
      }

      case SitesParser::HEX: {
        enterOuterAlt(_localctx, 5);
        setState(547); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(546);
                  match(SitesParser::HEX);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(549); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case SitesParser::COL: {
        enterOuterAlt(_localctx, 6);
        setState(551);
        match(SitesParser::COL);
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
  enterRule(_localctx, 142, SitesParser::RuleParameterString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(SitesParser::DBL_DOLLAR);
    setState(555);
    parameterName();
    setState(556);
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

tree::TerminalNode* SitesParser::ParameterNameContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::ParameterNameContext::STRING() {
  return getToken(SitesParser::STRING, 0);
}

tree::TerminalNode* SitesParser::ParameterNameContext::DIGITS() {
  return getToken(SitesParser::DIGITS, 0);
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
  enterRule(_localctx, 144, SitesParser::RuleParameterName);
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
    setState(558);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0))) {
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

SitesParser::ConfigParamContext::ConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SitesParser::ParameterStringContext* SitesParser::ConfigParamContext::parameterString() {
  return getRuleContext<SitesParser::ParameterStringContext>(0);
}

tree::TerminalNode* SitesParser::ConfigParamContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
}

tree::TerminalNode* SitesParser::ConfigParamContext::STRING() {
  return getToken(SitesParser::STRING, 0);
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
  enterRule(_localctx, 146, SitesParser::RuleConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(564);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SitesParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(560);
        parameterString();
        break;
      }

      case SitesParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(561);
        match(SitesParser::BASIC_STRING);
        break;
      }

      case SitesParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(562);
        match(SitesParser::STRING);
        break;
      }

      case SitesParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(563);
        match(SitesParser::DIGITS);
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

tree::TerminalNode* SitesParser::PhoneContext::EOF() {
  return getToken(SitesParser::EOF, 0);
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
  enterRule(_localctx, 148, SitesParser::RulePhone);
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
    setState(566);
    countryCode();
    setState(567);
    phoneSep();
    setState(568);
    areaCode();
    setState(569);
    phoneSep();
    setState(570);
    phoneNumber();
    setState(572);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::EOF) {
      setState(571);
      match(SitesParser::EOF);
    }
   
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
  enterRule(_localctx, 150, SitesParser::RuleCountryCode);
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
    setState(575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::PLUS) {
      setState(574);
      match(SitesParser::PLUS);
    }
    setState(577);
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
  enterRule(_localctx, 152, SitesParser::RuleAreaCode);
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
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::LPAREN) {
      setState(579);
      match(SitesParser::LPAREN);
    }
    setState(582);
    match(SitesParser::DIGITS);
    setState(584);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SitesParser::RPAREN) {
      setState(583);
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
  enterRule(_localctx, 154, SitesParser::RulePhoneNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(588);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(586);
      localPhone();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(587);
      dtmf();
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
  enterRule(_localctx, 156, SitesParser::RuleLocalPhone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    localArea();
    setState(591);
    phoneSep();
    setState(592);
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
  enterRule(_localctx, 158, SitesParser::RuleLocalArea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
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
  enterRule(_localctx, 160, SitesParser::RuleLocalizer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
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
  enterRule(_localctx, 162, SitesParser::RuleDtmf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(600);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(598);
      dtmfWithLocal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(599);
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
  enterRule(_localctx, 164, SitesParser::RuleDtmfWithLocal);
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
    setState(602);
    localAreaWithDtmf();
    setState(604);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18176301596672) != 0)) {
      setState(603);
      phoneSep();
    }
    setState(606);
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

std::vector<tree::TerminalNode *> SitesParser::LocalAreaWithDtmfContext::DIGITS() {
  return getTokens(SitesParser::DIGITS);
}

tree::TerminalNode* SitesParser::LocalAreaWithDtmfContext::DIGITS(size_t i) {
  return getToken(SitesParser::DIGITS, i);
}

std::vector<tree::TerminalNode *> SitesParser::LocalAreaWithDtmfContext::BASIC_STRING() {
  return getTokens(SitesParser::BASIC_STRING);
}

tree::TerminalNode* SitesParser::LocalAreaWithDtmfContext::BASIC_STRING(size_t i) {
  return getToken(SitesParser::BASIC_STRING, i);
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
  enterRule(_localctx, 166, SitesParser::RuleLocalAreaWithDtmf);
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
    setState(609); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(608);
              _la = _input->LA(1);
              if (!(_la == SitesParser::BASIC_STRING

              || _la == SitesParser::DIGITS)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(611); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
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

tree::TerminalNode* SitesParser::DtmfAllContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
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
  enterRule(_localctx, 168, SitesParser::RuleDtmfAll);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(613);
    match(SitesParser::BASIC_STRING);
   
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

tree::TerminalNode* SitesParser::DtmfLocalizerContext::BASIC_STRING() {
  return getToken(SitesParser::BASIC_STRING, 0);
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
  enterRule(_localctx, 170, SitesParser::RuleDtmfLocalizer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    match(SitesParser::BASIC_STRING);
   
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

tree::TerminalNode* SitesParser::PhoneSepContext::PERIOD() {
  return getToken(SitesParser::PERIOD, 0);
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
  enterRule(_localctx, 172, SitesParser::RulePhoneSep);
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
    setState(617);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18176301596672) != 0))) {
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
