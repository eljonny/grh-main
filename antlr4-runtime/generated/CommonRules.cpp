
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/CommonRules.g4 by ANTLR 4.13.1


#include "CommonRules.h"


using namespace antlr4;

using namespace antlrcpp;


using namespace antlr4;

namespace {

struct CommonRulesStaticData final {
  CommonRulesStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CommonRulesStaticData(const CommonRulesStaticData&) = delete;
  CommonRulesStaticData(CommonRulesStaticData&&) = delete;
  CommonRulesStaticData& operator=(const CommonRulesStaticData&) = delete;
  CommonRulesStaticData& operator=(CommonRulesStaticData&&) = delete;

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

::antlr4::internal::OnceFlag commonrulesLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CommonRulesStaticData *commonrulesLexerStaticData = nullptr;

void commonrulesLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (commonrulesLexerStaticData != nullptr) {
    return;
  }
#else
  assert(commonrulesLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CommonRulesStaticData>(
    std::vector<std::string>{
      "WS", "BASIC_STRING", "BASIC_STRING_HEAD", "BASIC_STRING_TAIL", "STRING", 
      "STRING_HEAD", "STRING_TAIL", "DIGITS", "ALPHANUM", "ALPHA", "HEX", 
      "HEX_DIGIT", "HEX_ALPHA", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", "EQ", 
      "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", "PERC", 
      "LBRACKET", "RBRACKET", "AMP", "AT", "Q"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "'.'", "'='", "':'", "'#'", 
      "' '", "'$'", "'/'", "'_'", "'+'", "'-'", "'%'", "'['", "']'", "'&'", 
      "'@'", "'\\u003F'"
    },
    std::vector<std::string>{
      "", "WS", "BASIC_STRING", "STRING", "DIGITS", "ALPHANUM", "ALPHA", 
      "HEX", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", "EQ", "COL", "HASH", 
      "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", "PERC", "LBRACKET", 
      "RBRACKET", "AMP", "AT", "Q"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,161,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,1,0,4,0,65,8,0,11,0,12,0,66,1,1,1,1,5,1,71,8,
  	1,10,1,12,1,74,9,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,3,3,83,8,3,1,4,1,4,5,4,
  	87,8,4,10,4,12,4,90,9,4,1,5,1,5,3,5,94,8,5,1,6,1,6,1,6,3,6,99,8,6,1,7,
  	4,7,102,8,7,11,7,12,7,103,1,8,1,8,3,8,108,8,8,1,9,1,9,3,9,112,8,9,1,10,
  	1,10,1,10,1,10,1,11,1,11,3,11,120,8,11,1,12,1,12,1,13,1,13,3,13,126,8,
  	13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,
  	20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,
  	27,1,28,1,28,1,29,1,29,1,30,1,30,0,0,31,1,1,3,2,5,0,7,0,9,3,11,0,13,0,
  	15,4,17,5,19,6,21,7,23,0,25,0,27,8,29,9,31,10,33,11,35,12,37,13,39,14,
  	41,15,43,16,45,17,47,18,49,19,51,20,53,21,55,22,57,23,59,24,61,25,1,0,
  	5,2,0,10,10,13,13,2,0,71,90,103,122,2,0,65,70,97,102,1,0,49,57,1,0,48,
  	48,169,0,1,1,0,0,0,0,3,1,0,0,0,0,9,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,1,64,1,0,0,0,3,68,
  	1,0,0,0,5,75,1,0,0,0,7,82,1,0,0,0,9,84,1,0,0,0,11,93,1,0,0,0,13,98,1,
  	0,0,0,15,101,1,0,0,0,17,107,1,0,0,0,19,111,1,0,0,0,21,113,1,0,0,0,23,
  	119,1,0,0,0,25,121,1,0,0,0,27,125,1,0,0,0,29,127,1,0,0,0,31,129,1,0,0,
  	0,33,131,1,0,0,0,35,133,1,0,0,0,37,135,1,0,0,0,39,137,1,0,0,0,41,139,
  	1,0,0,0,43,141,1,0,0,0,45,143,1,0,0,0,47,145,1,0,0,0,49,147,1,0,0,0,51,
  	149,1,0,0,0,53,151,1,0,0,0,55,153,1,0,0,0,57,155,1,0,0,0,59,157,1,0,0,
  	0,61,159,1,0,0,0,63,65,7,0,0,0,64,63,1,0,0,0,65,66,1,0,0,0,66,64,1,0,
  	0,0,66,67,1,0,0,0,67,2,1,0,0,0,68,72,3,5,2,0,69,71,3,7,3,0,70,69,1,0,
  	0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,4,1,0,0,0,74,72,1,0,
  	0,0,75,76,3,19,9,0,76,6,1,0,0,0,77,83,3,19,9,0,78,83,3,27,13,0,79,83,
  	3,31,15,0,80,83,3,49,24,0,81,83,3,47,23,0,82,77,1,0,0,0,82,78,1,0,0,0,
  	82,79,1,0,0,0,82,80,1,0,0,0,82,81,1,0,0,0,83,8,1,0,0,0,84,88,3,11,5,0,
  	85,87,3,13,6,0,86,85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,
  	0,89,10,1,0,0,0,90,88,1,0,0,0,91,94,3,5,2,0,92,94,3,21,10,0,93,91,1,0,
  	0,0,93,92,1,0,0,0,94,12,1,0,0,0,95,99,3,7,3,0,96,99,3,45,22,0,97,99,3,
  	21,10,0,98,95,1,0,0,0,98,96,1,0,0,0,98,97,1,0,0,0,99,14,1,0,0,0,100,102,
  	3,27,13,0,101,100,1,0,0,0,102,103,1,0,0,0,103,101,1,0,0,0,103,104,1,0,
  	0,0,104,16,1,0,0,0,105,108,3,19,9,0,106,108,3,27,13,0,107,105,1,0,0,0,
  	107,106,1,0,0,0,108,18,1,0,0,0,109,112,3,25,12,0,110,112,7,1,0,0,111,
  	109,1,0,0,0,111,110,1,0,0,0,112,20,1,0,0,0,113,114,3,51,25,0,114,115,
  	3,23,11,0,115,116,3,23,11,0,116,22,1,0,0,0,117,120,3,25,12,0,118,120,
  	3,27,13,0,119,117,1,0,0,0,119,118,1,0,0,0,120,24,1,0,0,0,121,122,7,2,
  	0,0,122,26,1,0,0,0,123,126,7,3,0,0,124,126,3,29,14,0,125,123,1,0,0,0,
  	125,124,1,0,0,0,126,28,1,0,0,0,127,128,7,4,0,0,128,30,1,0,0,0,129,130,
  	5,46,0,0,130,32,1,0,0,0,131,132,5,61,0,0,132,34,1,0,0,0,133,134,5,58,
  	0,0,134,36,1,0,0,0,135,136,5,35,0,0,136,38,1,0,0,0,137,138,5,32,0,0,138,
  	40,1,0,0,0,139,140,5,36,0,0,140,42,1,0,0,0,141,142,5,47,0,0,142,44,1,
  	0,0,0,143,144,5,95,0,0,144,46,1,0,0,0,145,146,5,43,0,0,146,48,1,0,0,0,
  	147,148,5,45,0,0,148,50,1,0,0,0,149,150,5,37,0,0,150,52,1,0,0,0,151,152,
  	5,91,0,0,152,54,1,0,0,0,153,154,5,93,0,0,154,56,1,0,0,0,155,156,5,38,
  	0,0,156,58,1,0,0,0,157,158,5,64,0,0,158,60,1,0,0,0,159,160,5,63,0,0,160,
  	62,1,0,0,0,12,0,66,72,82,88,93,98,103,107,111,119,125,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  commonrulesLexerStaticData = staticData.release();
}

}

CommonRules::CommonRules(CharStream *input) : Lexer(input) {
  CommonRules::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *commonrulesLexerStaticData->atn, commonrulesLexerStaticData->decisionToDFA, commonrulesLexerStaticData->sharedContextCache);
}

CommonRules::~CommonRules() {
  delete _interpreter;
}

std::string CommonRules::getGrammarFileName() const {
  return "CommonRules.g4";
}

const std::vector<std::string>& CommonRules::getRuleNames() const {
  return commonrulesLexerStaticData->ruleNames;
}

const std::vector<std::string>& CommonRules::getChannelNames() const {
  return commonrulesLexerStaticData->channelNames;
}

const std::vector<std::string>& CommonRules::getModeNames() const {
  return commonrulesLexerStaticData->modeNames;
}

const dfa::Vocabulary& CommonRules::getVocabulary() const {
  return commonrulesLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CommonRules::getSerializedATN() const {
  return commonrulesLexerStaticData->serializedATN;
}

const atn::ATN& CommonRules::getATN() const {
  return *commonrulesLexerStaticData->atn;
}




void CommonRules::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  commonrulesLexerInitialize();
#else
  ::antlr4::internal::call_once(commonrulesLexerOnceFlag, commonrulesLexerInitialize);
#endif
}
