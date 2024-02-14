
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
      "tzMinutes", "startList", "listItem", "listItemContent", "endList", 
      "url", "uri", "uriPort", "uriPath", "scheme", "host", "hostname", 
      "domainNameOrIpv4Host", "ipv6Host", "v6host", "v6hostSegment", "v6hostSep", 
      "v6hostConfigParam", "port", "path", "multiPathChunk", "pathString", 
      "user", "login", "loginPassword", "password", "frag", "fragString", 
      "query", "search", "multiSearch", "searchParameter", "searchParameterKey", 
      "searchParameterValue", "searchParameterValueString", "parameterString", 
      "parameterName", "configParam", "string", "usString"
    },
    std::vector<std::string>{
      "", "", "'lastUpdated'", "'start-list'", "'end-list'", "'static'", 
      "", "", "", "'&'", "'@'", "'['", "']'", "'\\u003F'", "", "", "", "", 
      "", "", "", "", "", "'='", "':'", "'#'", "' '", "'$'", "'/'", "'_'", 
      "'+'", "'-'", "'%'"
    },
    std::vector<std::string>{
      "", "SOURCE", "LAST_UPDATED", "START_LIST", "END_LIST", "STATIC_SOURCE", 
      "SCHEME_SEP", "DBL_DOLLAR", "DBL_COL", "AMP", "AT", "LBRACKET", "RBRACKET", 
      "Q", "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", "DIGITS", 
      "SINGLE_DIGIT_INT", "ZERO", "EQ", "COL", "HASH", "SPACE", "DOLLAR", 
      "FS", "US", "PLUS", "HYPH", "PERC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,370,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,1,0,4,0,110,8,0,11,0,12,0,
  	111,1,0,1,0,4,0,116,8,0,11,0,12,0,117,1,0,1,0,1,1,1,1,5,1,124,8,1,10,
  	1,12,1,127,9,1,1,1,1,1,1,2,1,2,1,2,1,2,3,2,135,8,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,155,8,4,1,4,
  	1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,
  	1,11,3,11,175,8,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,
  	1,16,1,16,1,17,1,17,1,17,5,17,192,8,17,10,17,12,17,195,9,17,1,17,1,17,
  	1,17,5,17,200,8,17,10,17,12,17,203,9,17,3,17,205,8,17,1,18,1,18,3,18,
  	209,8,18,1,19,1,19,1,20,1,20,1,20,3,20,216,8,20,1,20,1,20,3,20,220,8,
  	20,1,20,3,20,223,8,20,1,20,3,20,226,8,20,1,20,3,20,229,8,20,1,21,1,21,
  	1,21,1,22,1,22,3,22,236,8,22,1,23,1,23,1,24,3,24,241,8,24,1,24,1,24,1,
  	25,1,25,3,25,247,8,25,1,26,1,26,3,26,251,8,26,1,27,1,27,1,27,1,27,1,28,
  	3,28,258,8,28,1,28,1,28,5,28,262,8,28,10,28,12,28,265,9,28,1,29,1,29,
  	1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,5,33,278,8,33,10,33,12,33,
  	281,9,33,1,33,3,33,284,8,33,1,34,1,34,1,34,1,35,1,35,3,35,291,8,35,1,
  	36,1,36,3,36,295,8,36,1,37,1,37,3,37,299,8,37,1,37,1,37,1,38,1,38,1,38,
  	1,39,1,39,3,39,308,8,39,1,40,1,40,1,40,1,41,1,41,1,41,3,41,316,8,41,1,
  	42,1,42,1,42,1,43,1,43,5,43,323,8,43,10,43,12,43,326,9,43,1,44,1,44,1,
  	44,1,45,1,45,3,45,333,8,45,1,46,1,46,3,46,337,8,46,1,47,1,47,3,47,341,
  	8,47,1,48,1,48,1,48,1,48,3,48,347,8,48,1,49,1,49,1,49,1,49,1,50,1,50,
  	5,50,355,8,50,10,50,12,50,358,9,50,1,51,1,51,1,51,3,51,363,8,51,1,52,
  	1,52,1,53,1,53,1,53,1,53,0,0,54,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,
  	74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,0,3,1,0,30,31,
  	2,0,8,8,24,24,2,0,15,15,20,20,354,0,109,1,0,0,0,2,121,1,0,0,0,4,130,1,
  	0,0,0,6,138,1,0,0,0,8,143,1,0,0,0,10,158,1,0,0,0,12,160,1,0,0,0,14,162,
  	1,0,0,0,16,164,1,0,0,0,18,166,1,0,0,0,20,168,1,0,0,0,22,170,1,0,0,0,24,
  	176,1,0,0,0,26,178,1,0,0,0,28,180,1,0,0,0,30,182,1,0,0,0,32,185,1,0,0,
  	0,34,204,1,0,0,0,36,206,1,0,0,0,38,210,1,0,0,0,40,212,1,0,0,0,42,230,
  	1,0,0,0,44,233,1,0,0,0,46,237,1,0,0,0,48,240,1,0,0,0,50,246,1,0,0,0,52,
  	250,1,0,0,0,54,252,1,0,0,0,56,257,1,0,0,0,58,266,1,0,0,0,60,269,1,0,0,
  	0,62,271,1,0,0,0,64,273,1,0,0,0,66,275,1,0,0,0,68,285,1,0,0,0,70,290,
  	1,0,0,0,72,294,1,0,0,0,74,296,1,0,0,0,76,302,1,0,0,0,78,307,1,0,0,0,80,
  	309,1,0,0,0,82,315,1,0,0,0,84,317,1,0,0,0,86,320,1,0,0,0,88,327,1,0,0,
  	0,90,330,1,0,0,0,92,336,1,0,0,0,94,338,1,0,0,0,96,346,1,0,0,0,98,348,
  	1,0,0,0,100,352,1,0,0,0,102,362,1,0,0,0,104,364,1,0,0,0,106,366,1,0,0,
  	0,108,110,3,4,2,0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,
  	112,1,0,0,0,112,113,1,0,0,0,113,115,3,6,3,0,114,116,3,2,1,0,115,114,1,
  	0,0,0,116,117,1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,119,1,0,0,0,
  	119,120,5,0,0,1,120,1,1,0,0,0,121,125,3,30,15,0,122,124,3,32,16,0,123,
  	122,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,128,1,
  	0,0,0,127,125,1,0,0,0,128,129,3,36,18,0,129,3,1,0,0,0,130,131,5,1,0,0,
  	131,134,5,23,0,0,132,135,5,5,0,0,133,135,3,38,19,0,134,132,1,0,0,0,134,
  	133,1,0,0,0,135,136,1,0,0,0,136,137,5,14,0,0,137,5,1,0,0,0,138,139,5,
  	2,0,0,139,140,5,23,0,0,140,141,3,8,4,0,141,142,5,14,0,0,142,7,1,0,0,0,
  	143,144,3,10,5,0,144,145,5,31,0,0,145,146,3,12,6,0,146,147,5,31,0,0,147,
  	148,3,14,7,0,148,149,5,26,0,0,149,150,3,16,8,0,150,151,5,24,0,0,151,154,
  	3,18,9,0,152,153,5,24,0,0,153,155,3,20,10,0,154,152,1,0,0,0,154,155,1,
  	0,0,0,155,156,1,0,0,0,156,157,3,22,11,0,157,9,1,0,0,0,158,159,5,20,0,
  	0,159,11,1,0,0,0,160,161,5,20,0,0,161,13,1,0,0,0,162,163,5,20,0,0,163,
  	15,1,0,0,0,164,165,5,20,0,0,165,17,1,0,0,0,166,167,5,20,0,0,167,19,1,
  	0,0,0,168,169,5,20,0,0,169,21,1,0,0,0,170,171,3,24,12,0,171,174,3,26,
  	13,0,172,173,5,24,0,0,173,175,3,28,14,0,174,172,1,0,0,0,174,175,1,0,0,
  	0,175,23,1,0,0,0,176,177,7,0,0,0,177,25,1,0,0,0,178,179,5,20,0,0,179,
  	27,1,0,0,0,180,181,5,20,0,0,181,29,1,0,0,0,182,183,5,3,0,0,183,184,5,
  	14,0,0,184,31,1,0,0,0,185,186,3,34,17,0,186,187,5,14,0,0,187,33,1,0,0,
  	0,188,193,5,20,0,0,189,190,5,26,0,0,190,192,5,20,0,0,191,189,1,0,0,0,
  	192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,205,1,0,0,0,195,193,
  	1,0,0,0,196,201,5,15,0,0,197,198,5,26,0,0,198,200,5,15,0,0,199,197,1,
  	0,0,0,200,203,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,205,1,0,0,0,
  	203,201,1,0,0,0,204,188,1,0,0,0,204,196,1,0,0,0,205,35,1,0,0,0,206,208,
  	5,4,0,0,207,209,5,14,0,0,208,207,1,0,0,0,208,209,1,0,0,0,209,37,1,0,0,
  	0,210,211,3,40,20,0,211,39,1,0,0,0,212,213,3,46,23,0,213,215,5,6,0,0,
  	214,216,3,74,37,0,215,214,1,0,0,0,215,216,1,0,0,0,216,217,1,0,0,0,217,
  	219,3,48,24,0,218,220,3,42,21,0,219,218,1,0,0,0,219,220,1,0,0,0,220,222,
  	1,0,0,0,221,223,3,44,22,0,222,221,1,0,0,0,222,223,1,0,0,0,223,225,1,0,
  	0,0,224,226,3,84,42,0,225,224,1,0,0,0,225,226,1,0,0,0,226,228,1,0,0,0,
  	227,229,3,80,40,0,228,227,1,0,0,0,228,229,1,0,0,0,229,41,1,0,0,0,230,
  	231,5,24,0,0,231,232,3,64,32,0,232,43,1,0,0,0,233,235,5,28,0,0,234,236,
  	3,66,33,0,235,234,1,0,0,0,235,236,1,0,0,0,236,45,1,0,0,0,237,238,3,104,
  	52,0,238,47,1,0,0,0,239,241,5,28,0,0,240,239,1,0,0,0,240,241,1,0,0,0,
  	241,242,1,0,0,0,242,243,3,50,25,0,243,49,1,0,0,0,244,247,3,52,26,0,245,
  	247,3,54,27,0,246,244,1,0,0,0,246,245,1,0,0,0,247,51,1,0,0,0,248,251,
  	3,98,49,0,249,251,3,104,52,0,250,248,1,0,0,0,250,249,1,0,0,0,251,53,1,
  	0,0,0,252,253,5,11,0,0,253,254,3,56,28,0,254,255,5,12,0,0,255,55,1,0,
  	0,0,256,258,5,8,0,0,257,256,1,0,0,0,257,258,1,0,0,0,258,259,1,0,0,0,259,
  	263,3,62,31,0,260,262,3,58,29,0,261,260,1,0,0,0,262,265,1,0,0,0,263,261,
  	1,0,0,0,263,264,1,0,0,0,264,57,1,0,0,0,265,263,1,0,0,0,266,267,3,60,30,
  	0,267,268,3,62,31,0,268,59,1,0,0,0,269,270,7,1,0,0,270,61,1,0,0,0,271,
  	272,3,102,51,0,272,63,1,0,0,0,273,274,5,20,0,0,274,65,1,0,0,0,275,279,
  	3,70,35,0,276,278,3,68,34,0,277,276,1,0,0,0,278,281,1,0,0,0,279,277,1,
  	0,0,0,279,280,1,0,0,0,280,283,1,0,0,0,281,279,1,0,0,0,282,284,5,28,0,
  	0,283,282,1,0,0,0,283,284,1,0,0,0,284,67,1,0,0,0,285,286,5,28,0,0,286,
  	287,3,70,35,0,287,69,1,0,0,0,288,291,3,98,49,0,289,291,3,104,52,0,290,
  	288,1,0,0,0,290,289,1,0,0,0,291,71,1,0,0,0,292,295,3,98,49,0,293,295,
  	3,104,52,0,294,292,1,0,0,0,294,293,1,0,0,0,295,73,1,0,0,0,296,298,3,72,
  	36,0,297,299,3,76,38,0,298,297,1,0,0,0,298,299,1,0,0,0,299,300,1,0,0,
  	0,300,301,5,10,0,0,301,75,1,0,0,0,302,303,5,24,0,0,303,304,3,78,39,0,
  	304,77,1,0,0,0,305,308,3,98,49,0,306,308,3,104,52,0,307,305,1,0,0,0,307,
  	306,1,0,0,0,308,79,1,0,0,0,309,310,5,25,0,0,310,311,3,82,41,0,311,81,
  	1,0,0,0,312,316,3,98,49,0,313,316,3,104,52,0,314,316,5,20,0,0,315,312,
  	1,0,0,0,315,313,1,0,0,0,315,314,1,0,0,0,316,83,1,0,0,0,317,318,5,13,0,
  	0,318,319,3,86,43,0,319,85,1,0,0,0,320,324,3,90,45,0,321,323,3,88,44,
  	0,322,321,1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,0,325,
  	87,1,0,0,0,326,324,1,0,0,0,327,328,5,9,0,0,328,329,3,90,45,0,329,89,1,
  	0,0,0,330,332,3,92,46,0,331,333,3,94,47,0,332,331,1,0,0,0,332,333,1,0,
  	0,0,333,91,1,0,0,0,334,337,3,98,49,0,335,337,3,104,52,0,336,334,1,0,0,
  	0,336,335,1,0,0,0,337,93,1,0,0,0,338,340,5,23,0,0,339,341,3,96,48,0,340,
  	339,1,0,0,0,340,341,1,0,0,0,341,95,1,0,0,0,342,347,3,98,49,0,343,347,
  	3,104,52,0,344,347,5,20,0,0,345,347,5,18,0,0,346,342,1,0,0,0,346,343,
  	1,0,0,0,346,344,1,0,0,0,346,345,1,0,0,0,347,97,1,0,0,0,348,349,5,7,0,
  	0,349,350,3,100,50,0,350,351,5,7,0,0,351,99,1,0,0,0,352,356,3,104,52,
  	0,353,355,3,106,53,0,354,353,1,0,0,0,355,358,1,0,0,0,356,354,1,0,0,0,
  	356,357,1,0,0,0,357,101,1,0,0,0,358,356,1,0,0,0,359,363,3,98,49,0,360,
  	363,3,104,52,0,361,363,5,20,0,0,362,359,1,0,0,0,362,360,1,0,0,0,362,361,
  	1,0,0,0,363,103,1,0,0,0,364,365,7,2,0,0,365,105,1,0,0,0,366,367,5,29,
  	0,0,367,368,3,104,52,0,368,107,1,0,0,0,35,111,117,125,134,154,174,193,
  	201,204,208,215,219,222,225,228,235,240,246,250,257,263,279,283,290,294,
  	298,307,315,324,332,336,340,346,356,362
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
    setState(109); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(108);
      source();
      setState(111); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DataListParser::SOURCE);
    setState(113);
    lastUpdated();
    setState(115); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(114);
      dataList();
      setState(117); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DataListParser::START_LIST);
    setState(119);
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
    setState(121);
    startList();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::STRING

    || _la == DataListParser::DIGITS) {
      setState(122);
      listItem();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
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
    setState(130);
    match(DataListParser::SOURCE);
    setState(131);
    match(DataListParser::EQ);
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::STATIC_SOURCE: {
        setState(132);
        match(DataListParser::STATIC_SOURCE);
        break;
      }

      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        setState(133);
        url();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(136);
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
    setState(138);
    match(DataListParser::LAST_UPDATED);
    setState(139);
    match(DataListParser::EQ);
    setState(140);
    dateTime();
    setState(141);
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
    setState(143);
    year();
    setState(144);
    match(DataListParser::HYPH);
    setState(145);
    month();
    setState(146);
    match(DataListParser::HYPH);
    setState(147);
    day();
    setState(148);
    match(DataListParser::SPACE);
    setState(149);
    hour();
    setState(150);
    match(DataListParser::COL);
    setState(151);
    minute();
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(152);
      match(DataListParser::COL);
      setState(153);
      second();
    }
    setState(156);
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
    setState(158);
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
    setState(160);
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
    setState(162);
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
    setState(164);
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
    setState(170);
    tzMod();
    setState(171);
    tzHour();
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(172);
      match(DataListParser::COL);
      setState(173);
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
    setState(176);
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
    setState(178);
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
    setState(180);
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

tree::TerminalNode* DataListParser::StartListContext::WS() {
  return getToken(DataListParser::WS, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(DataListParser::START_LIST);
    setState(183);
    match(DataListParser::WS);
   
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
  enterRule(_localctx, 32, DataListParser::RuleListItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    listItemContent();
    setState(186);
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

std::vector<tree::TerminalNode *> DataListParser::ListItemContentContext::DIGITS() {
  return getTokens(DataListParser::DIGITS);
}

tree::TerminalNode* DataListParser::ListItemContentContext::DIGITS(size_t i) {
  return getToken(DataListParser::DIGITS, i);
}

std::vector<tree::TerminalNode *> DataListParser::ListItemContentContext::SPACE() {
  return getTokens(DataListParser::SPACE);
}

tree::TerminalNode* DataListParser::ListItemContentContext::SPACE(size_t i) {
  return getToken(DataListParser::SPACE, i);
}

std::vector<tree::TerminalNode *> DataListParser::ListItemContentContext::STRING() {
  return getTokens(DataListParser::STRING);
}

tree::TerminalNode* DataListParser::ListItemContentContext::STRING(size_t i) {
  return getToken(DataListParser::STRING, i);
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
  enterRule(_localctx, 34, DataListParser::RuleListItemContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(188);
        match(DataListParser::DIGITS);
        setState(193);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DataListParser::SPACE) {
          setState(189);
          match(DataListParser::SPACE);
          setState(190);
          match(DataListParser::DIGITS);
          setState(195);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case DataListParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(196);
        match(DataListParser::STRING);
        setState(201);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DataListParser::SPACE) {
          setState(197);
          match(DataListParser::SPACE);
          setState(198);
          match(DataListParser::STRING);
          setState(203);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- EndListContext ------------------------------------------------------------------

DataListParser::EndListContext::EndListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::EndListContext::END_LIST() {
  return getToken(DataListParser::END_LIST, 0);
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
  enterRule(_localctx, 36, DataListParser::RuleEndList);
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
    setState(206);
    match(DataListParser::END_LIST);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::WS) {
      setState(207);
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
  enterRule(_localctx, 38, DataListParser::RuleUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
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

tree::TerminalNode* DataListParser::UriContext::SCHEME_SEP() {
  return getToken(DataListParser::SCHEME_SEP, 0);
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
  enterRule(_localctx, 40, DataListParser::RuleUri);
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
    setState(212);
    scheme();
    setState(213);
    match(DataListParser::SCHEME_SEP);
    setState(215);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(214);
      login();
      break;
    }

    default:
      break;
    }
    setState(217);
    host();
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(218);
      uriPort();
    }
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::FS) {
      setState(221);
      uriPath();
    }
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::Q) {
      setState(224);
      query();
    }
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::HASH) {
      setState(227);
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
  enterRule(_localctx, 42, DataListParser::RuleUriPort);

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
    match(DataListParser::COL);
    setState(231);
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
  enterRule(_localctx, 44, DataListParser::RuleUriPath);
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
    setState(233);
    match(DataListParser::FS);
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1081472) != 0)) {
      setState(234);
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

DataListParser::StringContext* DataListParser::SchemeContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 46, DataListParser::RuleScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
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
  enterRule(_localctx, 48, DataListParser::RuleHost);
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
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::FS) {
      setState(239);
      match(DataListParser::FS);
    }
    setState(242);
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
  enterRule(_localctx, 50, DataListParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR:
      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(244);
        domainNameOrIpv4Host();
        break;
      }

      case DataListParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(245);
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

DataListParser::StringContext* DataListParser::DomainNameOrIpv4HostContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 52, DataListParser::RuleDomainNameOrIpv4Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(248);
        parameterString();
        break;
      }

      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(249);
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
  enterRule(_localctx, 54, DataListParser::RuleIpv6Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(DataListParser::LBRACKET);
    setState(253);
    v6host();
    setState(254);
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
  enterRule(_localctx, 56, DataListParser::RuleV6host);
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
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::DBL_COL) {
      setState(256);
      match(DataListParser::DBL_COL);
    }
    setState(259);
    v6hostConfigParam();
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::DBL_COL

    || _la == DataListParser::COL) {
      setState(260);
      v6hostSegment();
      setState(265);
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
  enterRule(_localctx, 58, DataListParser::RuleV6hostSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    v6hostSep();
    setState(267);
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
  enterRule(_localctx, 60, DataListParser::RuleV6hostSep);
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
    setState(269);
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
  enterRule(_localctx, 62, DataListParser::RuleV6hostConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
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
  enterRule(_localctx, 64, DataListParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
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

DataListParser::PathStringContext* DataListParser::PathContext::pathString() {
  return getRuleContext<DataListParser::PathStringContext>(0);
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
  enterRule(_localctx, 66, DataListParser::RulePath);
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
    setState(275);
    pathString();
    setState(279);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(276);
        multiPathChunk(); 
      }
      setState(281);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::FS) {
      setState(282);
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

DataListParser::PathStringContext* DataListParser::MultiPathChunkContext::pathString() {
  return getRuleContext<DataListParser::PathStringContext>(0);
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
  enterRule(_localctx, 68, DataListParser::RuleMultiPathChunk);

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
    match(DataListParser::FS);
    setState(286);
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

DataListParser::PathStringContext::PathStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::PathStringContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

DataListParser::StringContext* DataListParser::PathStringContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 70, DataListParser::RulePathString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(288);
        parameterString();
        break;
      }

      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(289);
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

DataListParser::UserContext::UserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::UserContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

DataListParser::StringContext* DataListParser::UserContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 72, DataListParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(292);
        parameterString();
        break;
      }

      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(293);
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
  enterRule(_localctx, 74, DataListParser::RuleLogin);
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
    setState(296);
    user();
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::COL) {
      setState(297);
      loginPassword();
    }
    setState(300);
    match(DataListParser::AT);
   
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
  enterRule(_localctx, 76, DataListParser::RuleLoginPassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(DataListParser::COL);
    setState(303);
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

DataListParser::StringContext* DataListParser::PasswordContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 78, DataListParser::RulePassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(305);
        parameterString();
        break;
      }

      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(306);
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
  enterRule(_localctx, 80, DataListParser::RuleFrag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(DataListParser::HASH);
    setState(310);
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

DataListParser::StringContext* DataListParser::FragStringContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 82, DataListParser::RuleFragString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(312);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(313);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(314);
      match(DataListParser::DIGITS);
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
  enterRule(_localctx, 84, DataListParser::RuleQuery);

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
    match(DataListParser::Q);
    setState(318);
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
  enterRule(_localctx, 86, DataListParser::RuleSearch);
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
    setState(320);
    searchParameter();
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::AMP) {
      setState(321);
      multiSearch();
      setState(326);
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
  enterRule(_localctx, 88, DataListParser::RuleMultiSearch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(DataListParser::AMP);
    setState(328);
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

DataListParser::SearchParameterValueContext* DataListParser::SearchParameterContext::searchParameterValue() {
  return getRuleContext<DataListParser::SearchParameterValueContext>(0);
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
  enterRule(_localctx, 90, DataListParser::RuleSearchParameter);
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
    setState(330);
    searchParameterKey();
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DataListParser::EQ) {
      setState(331);
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

DataListParser::SearchParameterKeyContext::SearchParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::SearchParameterKeyContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

DataListParser::StringContext* DataListParser::SearchParameterKeyContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 92, DataListParser::RuleSearchParameterKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DataListParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(334);
        parameterString();
        break;
      }

      case DataListParser::STRING:
      case DataListParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(335);
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

DataListParser::SearchParameterValueContext::SearchParameterValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::SearchParameterValueContext::EQ() {
  return getToken(DataListParser::EQ, 0);
}

DataListParser::SearchParameterValueStringContext* DataListParser::SearchParameterValueContext::searchParameterValueString() {
  return getRuleContext<DataListParser::SearchParameterValueStringContext>(0);
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
  enterRule(_localctx, 94, DataListParser::RuleSearchParameterValue);
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
    setState(338);
    match(DataListParser::EQ);
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1343616) != 0)) {
      setState(339);
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

DataListParser::SearchParameterValueStringContext::SearchParameterValueStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::SearchParameterValueStringContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

DataListParser::StringContext* DataListParser::SearchParameterValueStringContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
}

tree::TerminalNode* DataListParser::SearchParameterValueStringContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}

tree::TerminalNode* DataListParser::SearchParameterValueStringContext::HEX() {
  return getToken(DataListParser::HEX, 0);
}


size_t DataListParser::SearchParameterValueStringContext::getRuleIndex() const {
  return DataListParser::RuleSearchParameterValueString;
}

void DataListParser::SearchParameterValueStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterValueString(this);
}

void DataListParser::SearchParameterValueStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterValueString(this);
}


std::any DataListParser::SearchParameterValueStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitSearchParameterValueString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::SearchParameterValueStringContext* DataListParser::searchParameterValueString() {
  SearchParameterValueStringContext *_localctx = _tracker.createInstance<SearchParameterValueStringContext>(_ctx, getState());
  enterRule(_localctx, 96, DataListParser::RuleSearchParameterValueString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(342);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(343);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(344);
      match(DataListParser::DIGITS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(345);
      match(DataListParser::HEX);
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
  enterRule(_localctx, 98, DataListParser::RuleParameterString);

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
    match(DataListParser::DBL_DOLLAR);
    setState(349);
    parameterName();
    setState(350);
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

DataListParser::StringContext* DataListParser::ParameterNameContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
}

std::vector<DataListParser::UsStringContext *> DataListParser::ParameterNameContext::usString() {
  return getRuleContexts<DataListParser::UsStringContext>();
}

DataListParser::UsStringContext* DataListParser::ParameterNameContext::usString(size_t i) {
  return getRuleContext<DataListParser::UsStringContext>(i);
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
  enterRule(_localctx, 100, DataListParser::RuleParameterName);
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
    setState(352);
    string();
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DataListParser::US) {
      setState(353);
      usString();
      setState(358);
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

DataListParser::ConfigParamContext::ConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DataListParser::ParameterStringContext* DataListParser::ConfigParamContext::parameterString() {
  return getRuleContext<DataListParser::ParameterStringContext>(0);
}

DataListParser::StringContext* DataListParser::ConfigParamContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
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
  enterRule(_localctx, 102, DataListParser::RuleConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(362);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(359);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(360);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(361);
      match(DataListParser::DIGITS);
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

DataListParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::StringContext::STRING() {
  return getToken(DataListParser::STRING, 0);
}

tree::TerminalNode* DataListParser::StringContext::DIGITS() {
  return getToken(DataListParser::DIGITS, 0);
}


size_t DataListParser::StringContext::getRuleIndex() const {
  return DataListParser::RuleString;
}

void DataListParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void DataListParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


std::any DataListParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::StringContext* DataListParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 104, DataListParser::RuleString);
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
    if (!(_la == DataListParser::STRING

    || _la == DataListParser::DIGITS)) {
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

DataListParser::UsStringContext::UsStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DataListParser::UsStringContext::US() {
  return getToken(DataListParser::US, 0);
}

DataListParser::StringContext* DataListParser::UsStringContext::string() {
  return getRuleContext<DataListParser::StringContext>(0);
}


size_t DataListParser::UsStringContext::getRuleIndex() const {
  return DataListParser::RuleUsString;
}

void DataListParser::UsStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsString(this);
}

void DataListParser::UsStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DataListListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsString(this);
}


std::any DataListParser::UsStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DataListVisitor*>(visitor))
    return parserVisitor->visitUsString(this);
  else
    return visitor->visitChildren(this);
}

DataListParser::UsStringContext* DataListParser::usString() {
  UsStringContext *_localctx = _tracker.createInstance<UsStringContext>(_ctx, getState());
  enterRule(_localctx, 106, DataListParser::RuleUsString);

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
    match(DataListParser::US);
    setState(367);
    string();
   
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
