
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1


#include "PhoneNumberLexer.h"


using namespace antlr4;

using namespace antlrcpp;


using namespace antlr4;

namespace {

struct PhoneNumberLexerStaticData final {
  PhoneNumberLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PhoneNumberLexerStaticData(const PhoneNumberLexerStaticData&) = delete;
  PhoneNumberLexerStaticData(PhoneNumberLexerStaticData&&) = delete;
  PhoneNumberLexerStaticData& operator=(const PhoneNumberLexerStaticData&) = delete;
  PhoneNumberLexerStaticData& operator=(PhoneNumberLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag phonenumberlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PhoneNumberLexerStaticData *phonenumberlexerLexerStaticData = nullptr;

void phonenumberlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (phonenumberlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(phonenumberlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PhoneNumberLexerStaticData>(
    std::vector<std::string>{
      "LPAREN", "RPAREN", "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", "HEX_ALPHA", 
      "DIGITS", "SINGLE_DIGIT_INT", "ZERO", "EQ", "COL", "HASH", "SPACE", 
      "DOLLAR", "FS", "US", "PLUS", "HYPH", "PERC"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "", "", "", "", "", "", "", "", "'='", "':'", 
      "'#'", "' '", "'$'", "'/'", "'_'", "'+'", "'-'", "'%'"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "WS", "STRING", "ALPHANUM", "ALPHA", "HEX", 
      "HEX_ALPHA", "DIGITS", "SINGLE_DIGIT_INT", "ZERO", "EQ", "COL", "HASH", 
      "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", "PERC"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,21,122,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,2,4,2,49,8,2,11,2,12,2,50,1,3,1,3,3,3,55,8,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,5,3,64,8,3,10,3,12,3,67,9,3,1,4,1,4,3,4,71,8,4,1,5,
  	1,5,3,5,75,8,5,1,6,1,6,1,6,3,6,80,8,6,1,6,1,6,3,6,84,8,6,4,6,86,8,6,11,
  	6,12,6,87,1,7,1,7,1,8,4,8,93,8,8,11,8,12,8,94,1,9,1,9,3,9,99,8,9,1,10,
  	1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,
  	1,17,1,18,1,18,1,19,1,19,1,20,1,20,0,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,1,0,6,2,0,10,10,13,13,1,0,46,46,2,0,71,90,103,122,2,0,
  	65,70,97,102,1,0,49,57,1,0,48,48,137,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,
  	0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,
  	17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,
  	0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,
  	0,0,39,1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,3,45,1,0,0,0,5,48,1,0,0,0,7,
  	54,1,0,0,0,9,70,1,0,0,0,11,74,1,0,0,0,13,85,1,0,0,0,15,89,1,0,0,0,17,
  	92,1,0,0,0,19,98,1,0,0,0,21,100,1,0,0,0,23,102,1,0,0,0,25,104,1,0,0,0,
  	27,106,1,0,0,0,29,108,1,0,0,0,31,110,1,0,0,0,33,112,1,0,0,0,35,114,1,
  	0,0,0,37,116,1,0,0,0,39,118,1,0,0,0,41,120,1,0,0,0,43,44,5,40,0,0,44,
  	2,1,0,0,0,45,46,5,41,0,0,46,4,1,0,0,0,47,49,7,0,0,0,48,47,1,0,0,0,49,
  	50,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,6,1,0,0,0,52,55,3,11,5,0,53,
  	55,3,13,6,0,54,52,1,0,0,0,54,53,1,0,0,0,55,65,1,0,0,0,56,64,7,1,0,0,57,
  	64,3,37,18,0,58,64,3,11,5,0,59,64,3,19,9,0,60,64,3,39,19,0,61,64,3,35,
  	17,0,62,64,3,13,6,0,63,56,1,0,0,0,63,57,1,0,0,0,63,58,1,0,0,0,63,59,1,
  	0,0,0,63,60,1,0,0,0,63,61,1,0,0,0,63,62,1,0,0,0,64,67,1,0,0,0,65,63,1,
  	0,0,0,65,66,1,0,0,0,66,8,1,0,0,0,67,65,1,0,0,0,68,71,3,11,5,0,69,71,3,
  	19,9,0,70,68,1,0,0,0,70,69,1,0,0,0,71,10,1,0,0,0,72,75,3,15,7,0,73,75,
  	7,2,0,0,74,72,1,0,0,0,74,73,1,0,0,0,75,12,1,0,0,0,76,79,3,41,20,0,77,
  	80,3,15,7,0,78,80,3,19,9,0,79,77,1,0,0,0,79,78,1,0,0,0,80,83,1,0,0,0,
  	81,84,3,15,7,0,82,84,3,19,9,0,83,81,1,0,0,0,83,82,1,0,0,0,84,86,1,0,0,
  	0,85,76,1,0,0,0,86,87,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,14,1,0,0,
  	0,89,90,7,3,0,0,90,16,1,0,0,0,91,93,3,19,9,0,92,91,1,0,0,0,93,94,1,0,
  	0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,18,1,0,0,0,96,99,7,4,0,0,97,99,3,21,
  	10,0,98,96,1,0,0,0,98,97,1,0,0,0,99,20,1,0,0,0,100,101,7,5,0,0,101,22,
  	1,0,0,0,102,103,5,61,0,0,103,24,1,0,0,0,104,105,5,58,0,0,105,26,1,0,0,
  	0,106,107,5,35,0,0,107,28,1,0,0,0,108,109,5,32,0,0,109,30,1,0,0,0,110,
  	111,5,36,0,0,111,32,1,0,0,0,112,113,5,47,0,0,113,34,1,0,0,0,114,115,5,
  	95,0,0,115,36,1,0,0,0,116,117,5,43,0,0,117,38,1,0,0,0,118,119,5,45,0,
  	0,119,40,1,0,0,0,120,121,5,37,0,0,121,42,1,0,0,0,12,0,50,54,63,65,70,
  	74,79,83,87,94,98,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  phonenumberlexerLexerStaticData = staticData.release();
}

}

PhoneNumberLexer::PhoneNumberLexer(CharStream *input) : Lexer(input) {
  PhoneNumberLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *phonenumberlexerLexerStaticData->atn, phonenumberlexerLexerStaticData->decisionToDFA, phonenumberlexerLexerStaticData->sharedContextCache);
}

PhoneNumberLexer::~PhoneNumberLexer() {
  delete _interpreter;
}

std::string PhoneNumberLexer::getGrammarFileName() const {
  return "PhoneNumber.g4";
}

const std::vector<std::string>& PhoneNumberLexer::getRuleNames() const {
  return phonenumberlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PhoneNumberLexer::getChannelNames() const {
  return phonenumberlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PhoneNumberLexer::getModeNames() const {
  return phonenumberlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PhoneNumberLexer::getVocabulary() const {
  return phonenumberlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PhoneNumberLexer::getSerializedATN() const {
  return phonenumberlexerLexerStaticData->serializedATN;
}

const atn::ATN& PhoneNumberLexer::getATN() const {
  return *phonenumberlexerLexerStaticData->atn;
}




void PhoneNumberLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  phonenumberlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(phonenumberlexerLexerOnceFlag, phonenumberlexerLexerInitialize);
#endif
}