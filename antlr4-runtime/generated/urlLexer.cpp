
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
      "", "", "", "", "'&'", "'@'", "'['", "']'", "'\\u003F'", "", "", "", 
      "", "", "", "", "", "", "'='", "':'", "'#'", "' '", "'$'", "'/'", 
      "'_'", "'+'", "'-'", "'%'"
    },
    std::vector<std::string>{
      "", "SCHEME_SEP", "DBL_DOLLAR", "DBL_COL", "AMP", "AT", "LBRACKET", 
      "RBRACKET", "Q", "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", 
      "DIGITS", "SINGLE_DIGIT_INT", "ZERO", "EQ", "COL", "HASH", "SPACE", 
      "DOLLAR", "FS", "US", "PLUS", "HYPH", "PERC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,150,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,1,
  	0,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,
  	4,8,77,8,8,11,8,12,8,78,1,9,1,9,3,9,83,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,5,9,92,8,9,10,9,12,9,95,9,9,1,10,1,10,3,10,99,8,10,1,11,1,11,3,11,103,
  	8,11,1,12,1,12,1,12,3,12,108,8,12,1,12,1,12,3,12,112,8,12,4,12,114,8,
  	12,11,12,12,12,115,1,13,1,13,1,14,4,14,121,8,14,11,14,12,14,122,1,15,
  	1,15,3,15,127,8,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,
  	1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,0,0,27,1,
  	1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,1,0,6,2,0,10,10,13,13,1,0,46,46,2,0,71,90,103,122,2,0,65,70,97,
  	102,1,0,49,57,1,0,48,48,165,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,
  	0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,
  	0,51,1,0,0,0,0,53,1,0,0,0,1,55,1,0,0,0,3,59,1,0,0,0,5,62,1,0,0,0,7,65,
  	1,0,0,0,9,67,1,0,0,0,11,69,1,0,0,0,13,71,1,0,0,0,15,73,1,0,0,0,17,76,
  	1,0,0,0,19,82,1,0,0,0,21,98,1,0,0,0,23,102,1,0,0,0,25,113,1,0,0,0,27,
  	117,1,0,0,0,29,120,1,0,0,0,31,126,1,0,0,0,33,128,1,0,0,0,35,130,1,0,0,
  	0,37,132,1,0,0,0,39,134,1,0,0,0,41,136,1,0,0,0,43,138,1,0,0,0,45,140,
  	1,0,0,0,47,142,1,0,0,0,49,144,1,0,0,0,51,146,1,0,0,0,53,148,1,0,0,0,55,
  	56,3,37,18,0,56,57,3,45,22,0,57,58,3,45,22,0,58,2,1,0,0,0,59,60,3,43,
  	21,0,60,61,3,43,21,0,61,4,1,0,0,0,62,63,3,37,18,0,63,64,3,37,18,0,64,
  	6,1,0,0,0,65,66,5,38,0,0,66,8,1,0,0,0,67,68,5,64,0,0,68,10,1,0,0,0,69,
  	70,5,91,0,0,70,12,1,0,0,0,71,72,5,93,0,0,72,14,1,0,0,0,73,74,5,63,0,0,
  	74,16,1,0,0,0,75,77,7,0,0,0,76,75,1,0,0,0,77,78,1,0,0,0,78,76,1,0,0,0,
  	78,79,1,0,0,0,79,18,1,0,0,0,80,83,3,23,11,0,81,83,3,25,12,0,82,80,1,0,
  	0,0,82,81,1,0,0,0,83,93,1,0,0,0,84,92,7,1,0,0,85,92,3,49,24,0,86,92,3,
  	23,11,0,87,92,3,31,15,0,88,92,3,51,25,0,89,92,3,47,23,0,90,92,3,25,12,
  	0,91,84,1,0,0,0,91,85,1,0,0,0,91,86,1,0,0,0,91,87,1,0,0,0,91,88,1,0,0,
  	0,91,89,1,0,0,0,91,90,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,
  	0,94,20,1,0,0,0,95,93,1,0,0,0,96,99,3,23,11,0,97,99,3,31,15,0,98,96,1,
  	0,0,0,98,97,1,0,0,0,99,22,1,0,0,0,100,103,3,27,13,0,101,103,7,2,0,0,102,
  	100,1,0,0,0,102,101,1,0,0,0,103,24,1,0,0,0,104,107,3,53,26,0,105,108,
  	3,27,13,0,106,108,3,31,15,0,107,105,1,0,0,0,107,106,1,0,0,0,108,111,1,
  	0,0,0,109,112,3,27,13,0,110,112,3,31,15,0,111,109,1,0,0,0,111,110,1,0,
  	0,0,112,114,1,0,0,0,113,104,1,0,0,0,114,115,1,0,0,0,115,113,1,0,0,0,115,
  	116,1,0,0,0,116,26,1,0,0,0,117,118,7,3,0,0,118,28,1,0,0,0,119,121,3,31,
  	15,0,120,119,1,0,0,0,121,122,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,
  	123,30,1,0,0,0,124,127,7,4,0,0,125,127,3,33,16,0,126,124,1,0,0,0,126,
  	125,1,0,0,0,127,32,1,0,0,0,128,129,7,5,0,0,129,34,1,0,0,0,130,131,5,61,
  	0,0,131,36,1,0,0,0,132,133,5,58,0,0,133,38,1,0,0,0,134,135,5,35,0,0,135,
  	40,1,0,0,0,136,137,5,32,0,0,137,42,1,0,0,0,138,139,5,36,0,0,139,44,1,
  	0,0,0,140,141,5,47,0,0,141,46,1,0,0,0,142,143,5,95,0,0,143,48,1,0,0,0,
  	144,145,5,43,0,0,145,50,1,0,0,0,146,147,5,45,0,0,147,52,1,0,0,0,148,149,
  	5,37,0,0,149,54,1,0,0,0,12,0,78,82,91,93,98,102,107,111,115,122,126,0
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
