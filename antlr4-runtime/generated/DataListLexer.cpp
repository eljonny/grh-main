
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1


#include "DataListLexer.h"


using namespace antlr4;

using namespace antlrcpp;


using namespace antlr4;

namespace {

struct DataListLexerStaticData final {
  DataListLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DataListLexerStaticData(const DataListLexerStaticData&) = delete;
  DataListLexerStaticData(DataListLexerStaticData&&) = delete;
  DataListLexerStaticData& operator=(const DataListLexerStaticData&) = delete;
  DataListLexerStaticData& operator=(DataListLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag datalistlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
DataListLexerStaticData *datalistlexerLexerStaticData = nullptr;

void datalistlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (datalistlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(datalistlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<DataListLexerStaticData>(
    std::vector<std::string>{
      "SOURCE", "LAST_UPDATED", "START_LIST", "END_LIST", "STATIC_SOURCE", 
      "DBL_DOLLAR", "DBL_COL", "WS", "BASIC_STRING", "BASIC_STRING_HEAD", 
      "BASIC_STRING_TAIL", "STRING", "STRING_HEAD", "STRING_TAIL", "DIGITS", 
      "ALPHANUM", "ALPHA", "HEX", "HEX_DIGIT", "HEX_ALPHA", "SINGLE_DIGIT_INT", 
      "ZERO", "PERIOD", "EQ", "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", 
      "PLUS", "HYPH", "PERC", "LBRACKET", "RBRACKET", "AMP", "AT", "Q"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,32,230,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,86,8,0,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,4,7,134,8,7,11,7,12,7,135,1,
  	8,1,8,5,8,140,8,8,10,8,12,8,143,9,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	3,10,152,8,10,1,11,1,11,5,11,156,8,11,10,11,12,11,159,9,11,1,12,1,12,
  	3,12,163,8,12,1,13,1,13,1,13,3,13,168,8,13,1,14,4,14,171,8,14,11,14,12,
  	14,172,1,15,1,15,3,15,177,8,15,1,16,1,16,3,16,181,8,16,1,17,1,17,1,17,
  	1,17,1,18,1,18,3,18,189,8,18,1,19,1,19,1,20,1,20,3,20,195,8,20,1,21,1,
  	21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,
  	28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,
  	35,1,36,1,36,1,37,1,37,0,0,38,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,
  	19,0,21,0,23,10,25,0,27,0,29,11,31,12,33,13,35,14,37,0,39,0,41,15,43,
  	16,45,17,47,18,49,19,51,20,53,21,55,22,57,23,59,24,61,25,63,26,65,27,
  	67,28,69,29,71,30,73,31,75,32,1,0,5,2,0,10,10,13,13,2,0,71,90,103,122,
  	2,0,65,70,97,102,1,0,49,57,1,0,48,48,239,0,1,1,0,0,0,0,3,1,0,0,0,0,5,
  	1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,
  	0,0,17,1,0,0,0,0,23,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,
  	35,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,1,77,1,0,0,0,3,87,1,0,0,0,5,99,1,
  	0,0,0,7,110,1,0,0,0,9,119,1,0,0,0,11,126,1,0,0,0,13,129,1,0,0,0,15,133,
  	1,0,0,0,17,137,1,0,0,0,19,144,1,0,0,0,21,151,1,0,0,0,23,153,1,0,0,0,25,
  	162,1,0,0,0,27,167,1,0,0,0,29,170,1,0,0,0,31,176,1,0,0,0,33,180,1,0,0,
  	0,35,182,1,0,0,0,37,188,1,0,0,0,39,190,1,0,0,0,41,194,1,0,0,0,43,196,
  	1,0,0,0,45,198,1,0,0,0,47,200,1,0,0,0,49,202,1,0,0,0,51,204,1,0,0,0,53,
  	206,1,0,0,0,55,208,1,0,0,0,57,210,1,0,0,0,59,212,1,0,0,0,61,214,1,0,0,
  	0,63,216,1,0,0,0,65,218,1,0,0,0,67,220,1,0,0,0,69,222,1,0,0,0,71,224,
  	1,0,0,0,73,226,1,0,0,0,75,228,1,0,0,0,77,78,5,115,0,0,78,79,5,111,0,0,
  	79,80,5,117,0,0,80,81,5,114,0,0,81,82,5,99,0,0,82,83,5,101,0,0,83,85,
  	1,0,0,0,84,86,3,29,14,0,85,84,1,0,0,0,85,86,1,0,0,0,86,2,1,0,0,0,87,88,
  	5,108,0,0,88,89,5,97,0,0,89,90,5,115,0,0,90,91,5,116,0,0,91,92,5,85,0,
  	0,92,93,5,112,0,0,93,94,5,100,0,0,94,95,5,97,0,0,95,96,5,116,0,0,96,97,
  	5,101,0,0,97,98,5,100,0,0,98,4,1,0,0,0,99,100,5,115,0,0,100,101,5,116,
  	0,0,101,102,5,97,0,0,102,103,5,114,0,0,103,104,5,116,0,0,104,105,5,45,
  	0,0,105,106,5,108,0,0,106,107,5,105,0,0,107,108,5,115,0,0,108,109,5,116,
  	0,0,109,6,1,0,0,0,110,111,5,101,0,0,111,112,5,110,0,0,112,113,5,100,0,
  	0,113,114,5,45,0,0,114,115,5,108,0,0,115,116,5,105,0,0,116,117,5,115,
  	0,0,117,118,5,116,0,0,118,8,1,0,0,0,119,120,5,115,0,0,120,121,5,116,0,
  	0,121,122,5,97,0,0,122,123,5,116,0,0,123,124,5,105,0,0,124,125,5,99,0,
  	0,125,10,1,0,0,0,126,127,3,55,27,0,127,128,3,55,27,0,128,12,1,0,0,0,129,
  	130,3,49,24,0,130,131,3,49,24,0,131,14,1,0,0,0,132,134,7,0,0,0,133,132,
  	1,0,0,0,134,135,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,16,1,0,0,
  	0,137,141,3,19,9,0,138,140,3,21,10,0,139,138,1,0,0,0,140,143,1,0,0,0,
  	141,139,1,0,0,0,141,142,1,0,0,0,142,18,1,0,0,0,143,141,1,0,0,0,144,145,
  	3,33,16,0,145,20,1,0,0,0,146,152,3,33,16,0,147,152,3,41,20,0,148,152,
  	3,45,22,0,149,152,3,63,31,0,150,152,3,61,30,0,151,146,1,0,0,0,151,147,
  	1,0,0,0,151,148,1,0,0,0,151,149,1,0,0,0,151,150,1,0,0,0,152,22,1,0,0,
  	0,153,157,3,25,12,0,154,156,3,27,13,0,155,154,1,0,0,0,156,159,1,0,0,0,
  	157,155,1,0,0,0,157,158,1,0,0,0,158,24,1,0,0,0,159,157,1,0,0,0,160,163,
  	3,19,9,0,161,163,3,35,17,0,162,160,1,0,0,0,162,161,1,0,0,0,163,26,1,0,
  	0,0,164,168,3,21,10,0,165,168,3,59,29,0,166,168,3,35,17,0,167,164,1,0,
  	0,0,167,165,1,0,0,0,167,166,1,0,0,0,168,28,1,0,0,0,169,171,3,41,20,0,
  	170,169,1,0,0,0,171,172,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,30,
  	1,0,0,0,174,177,3,33,16,0,175,177,3,41,20,0,176,174,1,0,0,0,176,175,1,
  	0,0,0,177,32,1,0,0,0,178,181,3,39,19,0,179,181,7,1,0,0,180,178,1,0,0,
  	0,180,179,1,0,0,0,181,34,1,0,0,0,182,183,3,65,32,0,183,184,3,37,18,0,
  	184,185,3,37,18,0,185,36,1,0,0,0,186,189,3,39,19,0,187,189,3,41,20,0,
  	188,186,1,0,0,0,188,187,1,0,0,0,189,38,1,0,0,0,190,191,7,2,0,0,191,40,
  	1,0,0,0,192,195,7,3,0,0,193,195,3,43,21,0,194,192,1,0,0,0,194,193,1,0,
  	0,0,195,42,1,0,0,0,196,197,7,4,0,0,197,44,1,0,0,0,198,199,5,46,0,0,199,
  	46,1,0,0,0,200,201,5,61,0,0,201,48,1,0,0,0,202,203,5,58,0,0,203,50,1,
  	0,0,0,204,205,5,35,0,0,205,52,1,0,0,0,206,207,5,32,0,0,207,54,1,0,0,0,
  	208,209,5,36,0,0,209,56,1,0,0,0,210,211,5,47,0,0,211,58,1,0,0,0,212,213,
  	5,95,0,0,213,60,1,0,0,0,214,215,5,43,0,0,215,62,1,0,0,0,216,217,5,45,
  	0,0,217,64,1,0,0,0,218,219,5,37,0,0,219,66,1,0,0,0,220,221,5,91,0,0,221,
  	68,1,0,0,0,222,223,5,93,0,0,223,70,1,0,0,0,224,225,5,38,0,0,225,72,1,
  	0,0,0,226,227,5,64,0,0,227,74,1,0,0,0,228,229,5,63,0,0,229,76,1,0,0,0,
  	13,0,85,135,141,151,157,162,167,172,176,180,188,194,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  datalistlexerLexerStaticData = staticData.release();
}

}

DataListLexer::DataListLexer(CharStream *input) : Lexer(input) {
  DataListLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *datalistlexerLexerStaticData->atn, datalistlexerLexerStaticData->decisionToDFA, datalistlexerLexerStaticData->sharedContextCache);
}

DataListLexer::~DataListLexer() {
  delete _interpreter;
}

std::string DataListLexer::getGrammarFileName() const {
  return "DataList.g4";
}

const std::vector<std::string>& DataListLexer::getRuleNames() const {
  return datalistlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& DataListLexer::getChannelNames() const {
  return datalistlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& DataListLexer::getModeNames() const {
  return datalistlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& DataListLexer::getVocabulary() const {
  return datalistlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DataListLexer::getSerializedATN() const {
  return datalistlexerLexerStaticData->serializedATN;
}

const atn::ATN& DataListLexer::getATN() const {
  return *datalistlexerLexerStaticData->atn;
}




void DataListLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  datalistlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(datalistlexerLexerOnceFlag, datalistlexerLexerInitialize);
#endif
}
