
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
      "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", "DIGITS", 
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
      "", "", "", "", "", "", "", "", "", "", "'='", "':'", "'#'", "' '", 
      "'$'", "'/'", "'_'", "'+'", "'-'", "'%'"
    },
    std::vector<std::string>{
      "", "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", "DIGITS", 
      "SINGLE_DIGIT_INT", "ZERO", "EQ", "COL", "HASH", "SPACE", "DOLLAR", 
      "FS", "US", "PLUS", "HYPH", "PERC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,19,114,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,4,0,41,8,0,11,0,12,0,
  	42,1,1,1,1,3,1,47,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,56,8,1,10,1,12,
  	1,59,9,1,1,2,1,2,3,2,63,8,2,1,3,1,3,3,3,67,8,3,1,4,1,4,1,4,3,4,72,8,4,
  	1,4,1,4,3,4,76,8,4,4,4,78,8,4,11,4,12,4,79,1,5,1,5,1,6,4,6,85,8,6,11,
  	6,12,6,86,1,7,1,7,3,7,91,8,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,0,0,
  	19,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,
  	14,29,15,31,16,33,17,35,18,37,19,1,0,6,2,0,10,10,13,13,1,0,46,46,2,0,
  	71,90,103,122,2,0,65,70,97,102,1,0,49,57,1,0,48,48,129,0,1,1,0,0,0,0,
  	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,
  	0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,
  	25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,
  	0,0,0,0,37,1,0,0,0,1,40,1,0,0,0,3,46,1,0,0,0,5,62,1,0,0,0,7,66,1,0,0,
  	0,9,77,1,0,0,0,11,81,1,0,0,0,13,84,1,0,0,0,15,90,1,0,0,0,17,92,1,0,0,
  	0,19,94,1,0,0,0,21,96,1,0,0,0,23,98,1,0,0,0,25,100,1,0,0,0,27,102,1,0,
  	0,0,29,104,1,0,0,0,31,106,1,0,0,0,33,108,1,0,0,0,35,110,1,0,0,0,37,112,
  	1,0,0,0,39,41,7,0,0,0,40,39,1,0,0,0,41,42,1,0,0,0,42,40,1,0,0,0,42,43,
  	1,0,0,0,43,2,1,0,0,0,44,47,3,7,3,0,45,47,3,9,4,0,46,44,1,0,0,0,46,45,
  	1,0,0,0,47,57,1,0,0,0,48,56,7,1,0,0,49,56,3,33,16,0,50,56,3,7,3,0,51,
  	56,3,15,7,0,52,56,3,35,17,0,53,56,3,31,15,0,54,56,3,9,4,0,55,48,1,0,0,
  	0,55,49,1,0,0,0,55,50,1,0,0,0,55,51,1,0,0,0,55,52,1,0,0,0,55,53,1,0,0,
  	0,55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,1,0,0,0,58,4,1,0,0,
  	0,59,57,1,0,0,0,60,63,3,7,3,0,61,63,3,15,7,0,62,60,1,0,0,0,62,61,1,0,
  	0,0,63,6,1,0,0,0,64,67,3,11,5,0,65,67,7,2,0,0,66,64,1,0,0,0,66,65,1,0,
  	0,0,67,8,1,0,0,0,68,71,3,37,18,0,69,72,3,11,5,0,70,72,3,15,7,0,71,69,
  	1,0,0,0,71,70,1,0,0,0,72,75,1,0,0,0,73,76,3,11,5,0,74,76,3,15,7,0,75,
  	73,1,0,0,0,75,74,1,0,0,0,76,78,1,0,0,0,77,68,1,0,0,0,78,79,1,0,0,0,79,
  	77,1,0,0,0,79,80,1,0,0,0,80,10,1,0,0,0,81,82,7,3,0,0,82,12,1,0,0,0,83,
  	85,3,15,7,0,84,83,1,0,0,0,85,86,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,
  	14,1,0,0,0,88,91,7,4,0,0,89,91,3,17,8,0,90,88,1,0,0,0,90,89,1,0,0,0,91,
  	16,1,0,0,0,92,93,7,5,0,0,93,18,1,0,0,0,94,95,5,61,0,0,95,20,1,0,0,0,96,
  	97,5,58,0,0,97,22,1,0,0,0,98,99,5,35,0,0,99,24,1,0,0,0,100,101,5,32,0,
  	0,101,26,1,0,0,0,102,103,5,36,0,0,103,28,1,0,0,0,104,105,5,47,0,0,105,
  	30,1,0,0,0,106,107,5,95,0,0,107,32,1,0,0,0,108,109,5,43,0,0,109,34,1,
  	0,0,0,110,111,5,45,0,0,111,36,1,0,0,0,112,113,5,37,0,0,113,38,1,0,0,0,
  	12,0,42,46,55,57,62,66,71,75,79,86,90,0
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