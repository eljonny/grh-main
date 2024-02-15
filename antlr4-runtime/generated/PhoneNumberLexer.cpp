
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
      "LPAREN", "RPAREN", "WS", "BASIC_STRING", "BASIC_STRING_HEAD", "BASIC_STRING_TAIL", 
      "STRING", "STRING_HEAD", "STRING_TAIL", "DIGITS", "ALPHANUM", "ALPHA", 
      "HEX", "HEX_DIGIT", "HEX_ALPHA", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", 
      "EQ", "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", 
      "PERC", "LBRACKET", "RBRACKET", "AMP", "AT", "Q"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "", "", "", "", "", "", "", "", "'.'", "'='", 
      "':'", "'#'", "' '", "'$'", "'/'", "'_'", "'+'", "'-'", "'%'", "'['", 
      "']'", "'&'", "'@'", "'\\u003F'"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "WS", "BASIC_STRING", "STRING", "DIGITS", 
      "ALPHANUM", "ALPHA", "HEX", "SINGLE_DIGIT_INT", "ZERO", "PERIOD", 
      "EQ", "COL", "HASH", "SPACE", "DOLLAR", "FS", "US", "PLUS", "HYPH", 
      "PERC", "LBRACKET", "RBRACKET", "AMP", "AT", "Q"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,27,169,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,1,1,1,1,2,4,2,
  	73,8,2,11,2,12,2,74,1,3,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,5,3,5,91,8,5,1,6,1,6,5,6,95,8,6,10,6,12,6,98,9,6,1,7,1,7,
  	3,7,102,8,7,1,8,1,8,1,8,3,8,107,8,8,1,9,4,9,110,8,9,11,9,12,9,111,1,10,
  	1,10,3,10,116,8,10,1,11,1,11,3,11,120,8,11,1,12,1,12,1,12,1,12,1,13,1,
  	13,3,13,128,8,13,1,14,1,14,1,15,1,15,3,15,134,8,15,1,16,1,16,1,17,1,17,
  	1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,
  	1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,
  	1,32,1,32,0,0,33,1,1,3,2,5,3,7,4,9,0,11,0,13,5,15,0,17,0,19,6,21,7,23,
  	8,25,9,27,0,29,0,31,10,33,11,35,12,37,13,39,14,41,15,43,16,45,17,47,18,
  	49,19,51,20,53,21,55,22,57,23,59,24,61,25,63,26,65,27,1,0,5,2,0,10,10,
  	13,13,2,0,71,90,103,122,2,0,65,70,97,102,1,0,49,57,1,0,48,48,177,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,13,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,
  	0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,1,67,
  	1,0,0,0,3,69,1,0,0,0,5,72,1,0,0,0,7,76,1,0,0,0,9,83,1,0,0,0,11,90,1,0,
  	0,0,13,92,1,0,0,0,15,101,1,0,0,0,17,106,1,0,0,0,19,109,1,0,0,0,21,115,
  	1,0,0,0,23,119,1,0,0,0,25,121,1,0,0,0,27,127,1,0,0,0,29,129,1,0,0,0,31,
  	133,1,0,0,0,33,135,1,0,0,0,35,137,1,0,0,0,37,139,1,0,0,0,39,141,1,0,0,
  	0,41,143,1,0,0,0,43,145,1,0,0,0,45,147,1,0,0,0,47,149,1,0,0,0,49,151,
  	1,0,0,0,51,153,1,0,0,0,53,155,1,0,0,0,55,157,1,0,0,0,57,159,1,0,0,0,59,
  	161,1,0,0,0,61,163,1,0,0,0,63,165,1,0,0,0,65,167,1,0,0,0,67,68,5,40,0,
  	0,68,2,1,0,0,0,69,70,5,41,0,0,70,4,1,0,0,0,71,73,7,0,0,0,72,71,1,0,0,
  	0,73,74,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,6,1,0,0,0,76,80,3,9,4,
  	0,77,79,3,11,5,0,78,77,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,
  	0,0,81,8,1,0,0,0,82,80,1,0,0,0,83,84,3,23,11,0,84,10,1,0,0,0,85,91,3,
  	23,11,0,86,91,3,31,15,0,87,91,3,35,17,0,88,91,3,53,26,0,89,91,3,51,25,
  	0,90,85,1,0,0,0,90,86,1,0,0,0,90,87,1,0,0,0,90,88,1,0,0,0,90,89,1,0,0,
  	0,91,12,1,0,0,0,92,96,3,15,7,0,93,95,3,17,8,0,94,93,1,0,0,0,95,98,1,0,
  	0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,14,1,0,0,0,98,96,1,0,0,0,99,102,3,
  	9,4,0,100,102,3,25,12,0,101,99,1,0,0,0,101,100,1,0,0,0,102,16,1,0,0,0,
  	103,107,3,11,5,0,104,107,3,49,24,0,105,107,3,25,12,0,106,103,1,0,0,0,
  	106,104,1,0,0,0,106,105,1,0,0,0,107,18,1,0,0,0,108,110,3,31,15,0,109,
  	108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,20,1,
  	0,0,0,113,116,3,23,11,0,114,116,3,31,15,0,115,113,1,0,0,0,115,114,1,0,
  	0,0,116,22,1,0,0,0,117,120,3,29,14,0,118,120,7,1,0,0,119,117,1,0,0,0,
  	119,118,1,0,0,0,120,24,1,0,0,0,121,122,3,55,27,0,122,123,3,27,13,0,123,
  	124,3,27,13,0,124,26,1,0,0,0,125,128,3,29,14,0,126,128,3,31,15,0,127,
  	125,1,0,0,0,127,126,1,0,0,0,128,28,1,0,0,0,129,130,7,2,0,0,130,30,1,0,
  	0,0,131,134,7,3,0,0,132,134,3,33,16,0,133,131,1,0,0,0,133,132,1,0,0,0,
  	134,32,1,0,0,0,135,136,7,4,0,0,136,34,1,0,0,0,137,138,5,46,0,0,138,36,
  	1,0,0,0,139,140,5,61,0,0,140,38,1,0,0,0,141,142,5,58,0,0,142,40,1,0,0,
  	0,143,144,5,35,0,0,144,42,1,0,0,0,145,146,5,32,0,0,146,44,1,0,0,0,147,
  	148,5,36,0,0,148,46,1,0,0,0,149,150,5,47,0,0,150,48,1,0,0,0,151,152,5,
  	95,0,0,152,50,1,0,0,0,153,154,5,43,0,0,154,52,1,0,0,0,155,156,5,45,0,
  	0,156,54,1,0,0,0,157,158,5,37,0,0,158,56,1,0,0,0,159,160,5,91,0,0,160,
  	58,1,0,0,0,161,162,5,93,0,0,162,60,1,0,0,0,163,164,5,38,0,0,164,62,1,
  	0,0,0,165,166,5,64,0,0,166,64,1,0,0,0,167,168,5,63,0,0,168,66,1,0,0,0,
  	12,0,74,80,90,96,101,106,111,115,119,127,133,0
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
