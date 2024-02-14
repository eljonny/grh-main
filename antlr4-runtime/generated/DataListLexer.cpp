
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
      "SCHEME_SEP", "DBL_DOLLAR", "DBL_COL", "AMP", "AT", "LBRACKET", "RBRACKET", 
      "Q", "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", "DIGITS", 
      "SINGLE_DIGIT_INT", "ZERO", "EQ", "COL", "HASH", "SPACE", "DOLLAR", 
      "FS", "US", "PLUS", "HYPH", "PERC"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,32,209,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,
  	0,74,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,8,
  	1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,4,13,136,8,13,11,13,12,
  	13,137,1,14,1,14,3,14,142,8,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,
  	151,8,14,10,14,12,14,154,9,14,1,15,1,15,3,15,158,8,15,1,16,1,16,3,16,
  	162,8,16,1,17,1,17,1,17,3,17,167,8,17,1,17,1,17,3,17,171,8,17,4,17,173,
  	8,17,11,17,12,17,174,1,18,1,18,1,19,4,19,180,8,19,11,19,12,19,181,1,20,
  	1,20,3,20,186,8,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,
  	1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,0,0,32,1,
  	1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,57,29,59,30,61,31,63,32,1,0,6,2,0,10,10,13,13,1,0,46,46,2,
  	0,71,90,103,122,2,0,65,70,97,102,1,0,49,57,1,0,48,48,225,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,
  	0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,75,
  	1,0,0,0,5,87,1,0,0,0,7,98,1,0,0,0,9,107,1,0,0,0,11,114,1,0,0,0,13,118,
  	1,0,0,0,15,121,1,0,0,0,17,124,1,0,0,0,19,126,1,0,0,0,21,128,1,0,0,0,23,
  	130,1,0,0,0,25,132,1,0,0,0,27,135,1,0,0,0,29,141,1,0,0,0,31,157,1,0,0,
  	0,33,161,1,0,0,0,35,172,1,0,0,0,37,176,1,0,0,0,39,179,1,0,0,0,41,185,
  	1,0,0,0,43,187,1,0,0,0,45,189,1,0,0,0,47,191,1,0,0,0,49,193,1,0,0,0,51,
  	195,1,0,0,0,53,197,1,0,0,0,55,199,1,0,0,0,57,201,1,0,0,0,59,203,1,0,0,
  	0,61,205,1,0,0,0,63,207,1,0,0,0,65,66,5,115,0,0,66,67,5,111,0,0,67,68,
  	5,117,0,0,68,69,5,114,0,0,69,70,5,99,0,0,70,71,5,101,0,0,71,73,1,0,0,
  	0,72,74,3,39,19,0,73,72,1,0,0,0,73,74,1,0,0,0,74,2,1,0,0,0,75,76,5,108,
  	0,0,76,77,5,97,0,0,77,78,5,115,0,0,78,79,5,116,0,0,79,80,5,85,0,0,80,
  	81,5,112,0,0,81,82,5,100,0,0,82,83,5,97,0,0,83,84,5,116,0,0,84,85,5,101,
  	0,0,85,86,5,100,0,0,86,4,1,0,0,0,87,88,5,115,0,0,88,89,5,116,0,0,89,90,
  	5,97,0,0,90,91,5,114,0,0,91,92,5,116,0,0,92,93,5,45,0,0,93,94,5,108,0,
  	0,94,95,5,105,0,0,95,96,5,115,0,0,96,97,5,116,0,0,97,6,1,0,0,0,98,99,
  	5,101,0,0,99,100,5,110,0,0,100,101,5,100,0,0,101,102,5,45,0,0,102,103,
  	5,108,0,0,103,104,5,105,0,0,104,105,5,115,0,0,105,106,5,116,0,0,106,8,
  	1,0,0,0,107,108,5,115,0,0,108,109,5,116,0,0,109,110,5,97,0,0,110,111,
  	5,116,0,0,111,112,5,105,0,0,112,113,5,99,0,0,113,10,1,0,0,0,114,115,3,
  	47,23,0,115,116,3,55,27,0,116,117,3,55,27,0,117,12,1,0,0,0,118,119,3,
  	53,26,0,119,120,3,53,26,0,120,14,1,0,0,0,121,122,3,47,23,0,122,123,3,
  	47,23,0,123,16,1,0,0,0,124,125,5,38,0,0,125,18,1,0,0,0,126,127,5,64,0,
  	0,127,20,1,0,0,0,128,129,5,91,0,0,129,22,1,0,0,0,130,131,5,93,0,0,131,
  	24,1,0,0,0,132,133,5,63,0,0,133,26,1,0,0,0,134,136,7,0,0,0,135,134,1,
  	0,0,0,136,137,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,28,1,0,0,0,
  	139,142,3,33,16,0,140,142,3,35,17,0,141,139,1,0,0,0,141,140,1,0,0,0,142,
  	152,1,0,0,0,143,151,7,1,0,0,144,151,3,59,29,0,145,151,3,33,16,0,146,151,
  	3,41,20,0,147,151,3,61,30,0,148,151,3,57,28,0,149,151,3,35,17,0,150,143,
  	1,0,0,0,150,144,1,0,0,0,150,145,1,0,0,0,150,146,1,0,0,0,150,147,1,0,0,
  	0,150,148,1,0,0,0,150,149,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,
  	153,1,0,0,0,153,30,1,0,0,0,154,152,1,0,0,0,155,158,3,33,16,0,156,158,
  	3,41,20,0,157,155,1,0,0,0,157,156,1,0,0,0,158,32,1,0,0,0,159,162,3,37,
  	18,0,160,162,7,2,0,0,161,159,1,0,0,0,161,160,1,0,0,0,162,34,1,0,0,0,163,
  	166,3,63,31,0,164,167,3,37,18,0,165,167,3,41,20,0,166,164,1,0,0,0,166,
  	165,1,0,0,0,167,170,1,0,0,0,168,171,3,37,18,0,169,171,3,41,20,0,170,168,
  	1,0,0,0,170,169,1,0,0,0,171,173,1,0,0,0,172,163,1,0,0,0,173,174,1,0,0,
  	0,174,172,1,0,0,0,174,175,1,0,0,0,175,36,1,0,0,0,176,177,7,3,0,0,177,
  	38,1,0,0,0,178,180,3,41,20,0,179,178,1,0,0,0,180,181,1,0,0,0,181,179,
  	1,0,0,0,181,182,1,0,0,0,182,40,1,0,0,0,183,186,7,4,0,0,184,186,3,43,21,
  	0,185,183,1,0,0,0,185,184,1,0,0,0,186,42,1,0,0,0,187,188,7,5,0,0,188,
  	44,1,0,0,0,189,190,5,61,0,0,190,46,1,0,0,0,191,192,5,58,0,0,192,48,1,
  	0,0,0,193,194,5,35,0,0,194,50,1,0,0,0,195,196,5,32,0,0,196,52,1,0,0,0,
  	197,198,5,36,0,0,198,54,1,0,0,0,199,200,5,47,0,0,200,56,1,0,0,0,201,202,
  	5,95,0,0,202,58,1,0,0,0,203,204,5,43,0,0,204,60,1,0,0,0,205,206,5,45,
  	0,0,206,62,1,0,0,0,207,208,5,37,0,0,208,64,1,0,0,0,13,0,73,137,141,150,
  	152,157,161,166,170,174,181,185,0
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