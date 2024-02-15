
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1


#include "urlLexer.h"


using namespace antlr4;

using namespace antlrcpp;


using namespace antlr4;

namespace {

struct UrlLexerStaticData final {
  UrlLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UrlLexerStaticData(const UrlLexerStaticData&) = delete;
  UrlLexerStaticData(UrlLexerStaticData&&) = delete;
  UrlLexerStaticData& operator=(const UrlLexerStaticData&) = delete;
  UrlLexerStaticData& operator=(UrlLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag urllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
UrlLexerStaticData *urllexerLexerStaticData = nullptr;

void urllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (urllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(urllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UrlLexerStaticData>(
    std::vector<std::string>{
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
      "", "", "", "", "", "", "", "", "", "", "", "", "'.'", "'='", "':'", 
      "'#'", "' '", "'$'", "'/'", "'_'", "'+'", "'-'", "'%'", "'['", "']'", 
      "'&'", "'@'", "'\\u003F'"
    },
    std::vector<std::string>{
      "", "DBL_DOLLAR", "DBL_COL", "WS", "BASIC_STRING", "STRING", "DIGITS", 
      "ALPHANUM", "ALPHA", "HEX", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", 
      "EQ", "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", 
      "PERC", "LBRACKET", "RBRACKET", "AMP", "AT", "Q"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,171,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,0,1,1,1,1,1,1,
  	1,2,4,2,75,8,2,11,2,12,2,76,1,3,1,3,5,3,81,8,3,10,3,12,3,84,9,3,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,3,5,93,8,5,1,6,1,6,5,6,97,8,6,10,6,12,6,100,9,6,
  	1,7,1,7,3,7,104,8,7,1,8,1,8,1,8,3,8,109,8,8,1,9,4,9,112,8,9,11,9,12,9,
  	113,1,10,1,10,3,10,118,8,10,1,11,1,11,3,11,122,8,11,1,12,1,12,1,12,1,
  	12,1,13,1,13,3,13,130,8,13,1,14,1,14,1,15,1,15,3,15,136,8,15,1,16,1,16,
  	1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,
  	1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,
  	1,31,1,31,1,32,1,32,0,0,33,1,1,3,2,5,3,7,4,9,0,11,0,13,5,15,0,17,0,19,
  	6,21,7,23,8,25,9,27,0,29,0,31,10,33,11,35,12,37,13,39,14,41,15,43,16,
  	45,17,47,18,49,19,51,20,53,21,55,22,57,23,59,24,61,25,63,26,65,27,1,0,
  	5,2,0,10,10,13,13,2,0,71,90,103,122,2,0,65,70,97,102,1,0,49,57,1,0,48,
  	48,179,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,13,1,0,0,0,0,
  	19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,1,67,1,0,0,0,3,70,1,0,0,0,5,74,1,0,0,0,7,78,1,0,0,0,9,85,1,0,0,
  	0,11,92,1,0,0,0,13,94,1,0,0,0,15,103,1,0,0,0,17,108,1,0,0,0,19,111,1,
  	0,0,0,21,117,1,0,0,0,23,121,1,0,0,0,25,123,1,0,0,0,27,129,1,0,0,0,29,
  	131,1,0,0,0,31,135,1,0,0,0,33,137,1,0,0,0,35,139,1,0,0,0,37,141,1,0,0,
  	0,39,143,1,0,0,0,41,145,1,0,0,0,43,147,1,0,0,0,45,149,1,0,0,0,47,151,
  	1,0,0,0,49,153,1,0,0,0,51,155,1,0,0,0,53,157,1,0,0,0,55,159,1,0,0,0,57,
  	161,1,0,0,0,59,163,1,0,0,0,61,165,1,0,0,0,63,167,1,0,0,0,65,169,1,0,0,
  	0,67,68,3,45,22,0,68,69,3,45,22,0,69,2,1,0,0,0,70,71,3,39,19,0,71,72,
  	3,39,19,0,72,4,1,0,0,0,73,75,7,0,0,0,74,73,1,0,0,0,75,76,1,0,0,0,76,74,
  	1,0,0,0,76,77,1,0,0,0,77,6,1,0,0,0,78,82,3,9,4,0,79,81,3,11,5,0,80,79,
  	1,0,0,0,81,84,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,8,1,0,0,0,84,82,
  	1,0,0,0,85,86,3,23,11,0,86,10,1,0,0,0,87,93,3,23,11,0,88,93,3,31,15,0,
  	89,93,3,35,17,0,90,93,3,53,26,0,91,93,3,51,25,0,92,87,1,0,0,0,92,88,1,
  	0,0,0,92,89,1,0,0,0,92,90,1,0,0,0,92,91,1,0,0,0,93,12,1,0,0,0,94,98,3,
  	15,7,0,95,97,3,17,8,0,96,95,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,
  	1,0,0,0,99,14,1,0,0,0,100,98,1,0,0,0,101,104,3,9,4,0,102,104,3,25,12,
  	0,103,101,1,0,0,0,103,102,1,0,0,0,104,16,1,0,0,0,105,109,3,11,5,0,106,
  	109,3,49,24,0,107,109,3,25,12,0,108,105,1,0,0,0,108,106,1,0,0,0,108,107,
  	1,0,0,0,109,18,1,0,0,0,110,112,3,31,15,0,111,110,1,0,0,0,112,113,1,0,
  	0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,20,1,0,0,0,115,118,3,23,11,0,
  	116,118,3,31,15,0,117,115,1,0,0,0,117,116,1,0,0,0,118,22,1,0,0,0,119,
  	122,3,29,14,0,120,122,7,1,0,0,121,119,1,0,0,0,121,120,1,0,0,0,122,24,
  	1,0,0,0,123,124,3,55,27,0,124,125,3,27,13,0,125,126,3,27,13,0,126,26,
  	1,0,0,0,127,130,3,29,14,0,128,130,3,31,15,0,129,127,1,0,0,0,129,128,1,
  	0,0,0,130,28,1,0,0,0,131,132,7,2,0,0,132,30,1,0,0,0,133,136,7,3,0,0,134,
  	136,3,33,16,0,135,133,1,0,0,0,135,134,1,0,0,0,136,32,1,0,0,0,137,138,
  	7,4,0,0,138,34,1,0,0,0,139,140,5,46,0,0,140,36,1,0,0,0,141,142,5,61,0,
  	0,142,38,1,0,0,0,143,144,5,58,0,0,144,40,1,0,0,0,145,146,5,35,0,0,146,
  	42,1,0,0,0,147,148,5,32,0,0,148,44,1,0,0,0,149,150,5,36,0,0,150,46,1,
  	0,0,0,151,152,5,47,0,0,152,48,1,0,0,0,153,154,5,95,0,0,154,50,1,0,0,0,
  	155,156,5,43,0,0,156,52,1,0,0,0,157,158,5,45,0,0,158,54,1,0,0,0,159,160,
  	5,37,0,0,160,56,1,0,0,0,161,162,5,91,0,0,162,58,1,0,0,0,163,164,5,93,
  	0,0,164,60,1,0,0,0,165,166,5,38,0,0,166,62,1,0,0,0,167,168,5,64,0,0,168,
  	64,1,0,0,0,169,170,5,63,0,0,170,66,1,0,0,0,12,0,76,82,92,98,103,108,113,
  	117,121,129,135,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  urllexerLexerStaticData = staticData.release();
}

}

urlLexer::urlLexer(CharStream *input) : Lexer(input) {
  urlLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *urllexerLexerStaticData->atn, urllexerLexerStaticData->decisionToDFA, urllexerLexerStaticData->sharedContextCache);
}

urlLexer::~urlLexer() {
  delete _interpreter;
}

std::string urlLexer::getGrammarFileName() const {
  return "url.g4";
}

const std::vector<std::string>& urlLexer::getRuleNames() const {
  return urllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& urlLexer::getChannelNames() const {
  return urllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& urlLexer::getModeNames() const {
  return urllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& urlLexer::getVocabulary() const {
  return urllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView urlLexer::getSerializedATN() const {
  return urllexerLexerStaticData->serializedATN;
}

const atn::ATN& urlLexer::getATN() const {
  return *urllexerLexerStaticData->atn;
}




void urlLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  urllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(urllexerLexerOnceFlag, urllexerLexerInitialize);
#endif
}
