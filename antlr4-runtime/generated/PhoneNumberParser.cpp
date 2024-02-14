
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1


#include "PhoneNumberListener.h"
#include "PhoneNumberVisitor.h"

#include "PhoneNumberParser.h"


using namespace antlrcpp;
using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PhoneNumberParserStaticData final {
  PhoneNumberParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PhoneNumberParserStaticData(const PhoneNumberParserStaticData&) = delete;
  PhoneNumberParserStaticData(PhoneNumberParserStaticData&&) = delete;
  PhoneNumberParserStaticData& operator=(const PhoneNumberParserStaticData&) = delete;
  PhoneNumberParserStaticData& operator=(PhoneNumberParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag phonenumberParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PhoneNumberParserStaticData *phonenumberParserStaticData = nullptr;

void phonenumberParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (phonenumberParserStaticData != nullptr) {
    return;
  }
#else
  assert(phonenumberParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PhoneNumberParserStaticData>(
    std::vector<std::string>{
      "phone", "countryCode", "areaCode", "phoneNumber", "localPhone", "localArea", 
      "localizer", "dtmf", "dtmfWithLocal", "localAreaWithDtmf", "dtmfAll", 
      "dtmfLocalizer", "phoneSep"
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
  	4,1,21,84,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,1,3,1,34,8,1,1,1,1,1,1,2,3,2,39,8,2,1,2,1,2,3,2,43,8,2,1,3,1,3,
  	3,3,47,8,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,3,7,59,8,7,1,8,1,8,
  	3,8,63,8,8,1,8,1,8,1,9,4,9,68,8,9,11,9,12,9,69,1,10,4,10,73,8,10,11,10,
  	12,10,74,1,11,4,11,78,8,11,11,11,12,11,79,1,12,1,12,1,12,0,0,13,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,0,1,2,0,15,15,20,20,79,0,26,1,0,0,0,2,33,
  	1,0,0,0,4,38,1,0,0,0,6,46,1,0,0,0,8,48,1,0,0,0,10,52,1,0,0,0,12,54,1,
  	0,0,0,14,58,1,0,0,0,16,60,1,0,0,0,18,67,1,0,0,0,20,72,1,0,0,0,22,77,1,
  	0,0,0,24,81,1,0,0,0,26,27,3,2,1,0,27,28,3,24,12,0,28,29,3,4,2,0,29,30,
  	3,24,12,0,30,31,3,6,3,0,31,1,1,0,0,0,32,34,5,19,0,0,33,32,1,0,0,0,33,
  	34,1,0,0,0,34,35,1,0,0,0,35,36,5,9,0,0,36,3,1,0,0,0,37,39,5,1,0,0,38,
  	37,1,0,0,0,38,39,1,0,0,0,39,40,1,0,0,0,40,42,5,9,0,0,41,43,5,2,0,0,42,
  	41,1,0,0,0,42,43,1,0,0,0,43,5,1,0,0,0,44,47,3,8,4,0,45,47,3,14,7,0,46,
  	44,1,0,0,0,46,45,1,0,0,0,47,7,1,0,0,0,48,49,3,10,5,0,49,50,3,24,12,0,
  	50,51,3,12,6,0,51,9,1,0,0,0,52,53,5,9,0,0,53,11,1,0,0,0,54,55,5,9,0,0,
  	55,13,1,0,0,0,56,59,3,16,8,0,57,59,3,20,10,0,58,56,1,0,0,0,58,57,1,0,
  	0,0,59,15,1,0,0,0,60,62,3,18,9,0,61,63,3,24,12,0,62,61,1,0,0,0,62,63,
  	1,0,0,0,63,64,1,0,0,0,64,65,3,22,11,0,65,17,1,0,0,0,66,68,5,5,0,0,67,
  	66,1,0,0,0,68,69,1,0,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,19,1,0,0,0,71,
  	73,5,5,0,0,72,71,1,0,0,0,73,74,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,
  	21,1,0,0,0,76,78,5,5,0,0,77,76,1,0,0,0,78,79,1,0,0,0,79,77,1,0,0,0,79,
  	80,1,0,0,0,80,23,1,0,0,0,81,82,7,0,0,0,82,25,1,0,0,0,9,33,38,42,46,58,
  	62,69,74,79
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  phonenumberParserStaticData = staticData.release();
}

}

PhoneNumberParser::PhoneNumberParser(TokenStream *input) : PhoneNumberParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PhoneNumberParser::PhoneNumberParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PhoneNumberParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *phonenumberParserStaticData->atn, phonenumberParserStaticData->decisionToDFA, phonenumberParserStaticData->sharedContextCache, options);
}

PhoneNumberParser::~PhoneNumberParser() {
  delete _interpreter;
}

const atn::ATN& PhoneNumberParser::getATN() const {
  return *phonenumberParserStaticData->atn;
}

std::string PhoneNumberParser::getGrammarFileName() const {
  return "PhoneNumber.g4";
}

const std::vector<std::string>& PhoneNumberParser::getRuleNames() const {
  return phonenumberParserStaticData->ruleNames;
}

const dfa::Vocabulary& PhoneNumberParser::getVocabulary() const {
  return phonenumberParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PhoneNumberParser::getSerializedATN() const {
  return phonenumberParserStaticData->serializedATN;
}


//----------------- PhoneContext ------------------------------------------------------------------

PhoneNumberParser::PhoneContext::PhoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PhoneNumberParser::CountryCodeContext* PhoneNumberParser::PhoneContext::countryCode() {
  return getRuleContext<PhoneNumberParser::CountryCodeContext>(0);
}

std::vector<PhoneNumberParser::PhoneSepContext *> PhoneNumberParser::PhoneContext::phoneSep() {
  return getRuleContexts<PhoneNumberParser::PhoneSepContext>();
}

PhoneNumberParser::PhoneSepContext* PhoneNumberParser::PhoneContext::phoneSep(size_t i) {
  return getRuleContext<PhoneNumberParser::PhoneSepContext>(i);
}

PhoneNumberParser::AreaCodeContext* PhoneNumberParser::PhoneContext::areaCode() {
  return getRuleContext<PhoneNumberParser::AreaCodeContext>(0);
}

PhoneNumberParser::PhoneNumberContext* PhoneNumberParser::PhoneContext::phoneNumber() {
  return getRuleContext<PhoneNumberParser::PhoneNumberContext>(0);
}


size_t PhoneNumberParser::PhoneContext::getRuleIndex() const {
  return PhoneNumberParser::RulePhone;
}

void PhoneNumberParser::PhoneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhone(this);
}

void PhoneNumberParser::PhoneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhone(this);
}


std::any PhoneNumberParser::PhoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitPhone(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::PhoneContext* PhoneNumberParser::phone() {
  PhoneContext *_localctx = _tracker.createInstance<PhoneContext>(_ctx, getState());
  enterRule(_localctx, 0, PhoneNumberParser::RulePhone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    countryCode();
    setState(27);
    phoneSep();
    setState(28);
    areaCode();
    setState(29);
    phoneSep();
    setState(30);
    phoneNumber();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CountryCodeContext ------------------------------------------------------------------

PhoneNumberParser::CountryCodeContext::CountryCodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PhoneNumberParser::CountryCodeContext::DIGITS() {
  return getToken(PhoneNumberParser::DIGITS, 0);
}

tree::TerminalNode* PhoneNumberParser::CountryCodeContext::PLUS() {
  return getToken(PhoneNumberParser::PLUS, 0);
}


size_t PhoneNumberParser::CountryCodeContext::getRuleIndex() const {
  return PhoneNumberParser::RuleCountryCode;
}

void PhoneNumberParser::CountryCodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCountryCode(this);
}

void PhoneNumberParser::CountryCodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCountryCode(this);
}


std::any PhoneNumberParser::CountryCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitCountryCode(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::CountryCodeContext* PhoneNumberParser::countryCode() {
  CountryCodeContext *_localctx = _tracker.createInstance<CountryCodeContext>(_ctx, getState());
  enterRule(_localctx, 2, PhoneNumberParser::RuleCountryCode);
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
    setState(33);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PhoneNumberParser::PLUS) {
      setState(32);
      match(PhoneNumberParser::PLUS);
    }
    setState(35);
    match(PhoneNumberParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AreaCodeContext ------------------------------------------------------------------

PhoneNumberParser::AreaCodeContext::AreaCodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PhoneNumberParser::AreaCodeContext::DIGITS() {
  return getToken(PhoneNumberParser::DIGITS, 0);
}

tree::TerminalNode* PhoneNumberParser::AreaCodeContext::LPAREN() {
  return getToken(PhoneNumberParser::LPAREN, 0);
}

tree::TerminalNode* PhoneNumberParser::AreaCodeContext::RPAREN() {
  return getToken(PhoneNumberParser::RPAREN, 0);
}


size_t PhoneNumberParser::AreaCodeContext::getRuleIndex() const {
  return PhoneNumberParser::RuleAreaCode;
}

void PhoneNumberParser::AreaCodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAreaCode(this);
}

void PhoneNumberParser::AreaCodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAreaCode(this);
}


std::any PhoneNumberParser::AreaCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitAreaCode(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::AreaCodeContext* PhoneNumberParser::areaCode() {
  AreaCodeContext *_localctx = _tracker.createInstance<AreaCodeContext>(_ctx, getState());
  enterRule(_localctx, 4, PhoneNumberParser::RuleAreaCode);
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
    setState(38);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PhoneNumberParser::LPAREN) {
      setState(37);
      match(PhoneNumberParser::LPAREN);
    }
    setState(40);
    match(PhoneNumberParser::DIGITS);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PhoneNumberParser::RPAREN) {
      setState(41);
      match(PhoneNumberParser::RPAREN);
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

PhoneNumberParser::PhoneNumberContext::PhoneNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PhoneNumberParser::LocalPhoneContext* PhoneNumberParser::PhoneNumberContext::localPhone() {
  return getRuleContext<PhoneNumberParser::LocalPhoneContext>(0);
}

PhoneNumberParser::DtmfContext* PhoneNumberParser::PhoneNumberContext::dtmf() {
  return getRuleContext<PhoneNumberParser::DtmfContext>(0);
}


size_t PhoneNumberParser::PhoneNumberContext::getRuleIndex() const {
  return PhoneNumberParser::RulePhoneNumber;
}

void PhoneNumberParser::PhoneNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhoneNumber(this);
}

void PhoneNumberParser::PhoneNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhoneNumber(this);
}


std::any PhoneNumberParser::PhoneNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitPhoneNumber(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::PhoneNumberContext* PhoneNumberParser::phoneNumber() {
  PhoneNumberContext *_localctx = _tracker.createInstance<PhoneNumberContext>(_ctx, getState());
  enterRule(_localctx, 6, PhoneNumberParser::RulePhoneNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PhoneNumberParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(44);
        localPhone();
        break;
      }

      case PhoneNumberParser::ALPHANUM: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        dtmf();
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

//----------------- LocalPhoneContext ------------------------------------------------------------------

PhoneNumberParser::LocalPhoneContext::LocalPhoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PhoneNumberParser::LocalAreaContext* PhoneNumberParser::LocalPhoneContext::localArea() {
  return getRuleContext<PhoneNumberParser::LocalAreaContext>(0);
}

PhoneNumberParser::PhoneSepContext* PhoneNumberParser::LocalPhoneContext::phoneSep() {
  return getRuleContext<PhoneNumberParser::PhoneSepContext>(0);
}

PhoneNumberParser::LocalizerContext* PhoneNumberParser::LocalPhoneContext::localizer() {
  return getRuleContext<PhoneNumberParser::LocalizerContext>(0);
}


size_t PhoneNumberParser::LocalPhoneContext::getRuleIndex() const {
  return PhoneNumberParser::RuleLocalPhone;
}

void PhoneNumberParser::LocalPhoneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalPhone(this);
}

void PhoneNumberParser::LocalPhoneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalPhone(this);
}


std::any PhoneNumberParser::LocalPhoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitLocalPhone(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::LocalPhoneContext* PhoneNumberParser::localPhone() {
  LocalPhoneContext *_localctx = _tracker.createInstance<LocalPhoneContext>(_ctx, getState());
  enterRule(_localctx, 8, PhoneNumberParser::RuleLocalPhone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    localArea();
    setState(49);
    phoneSep();
    setState(50);
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

PhoneNumberParser::LocalAreaContext::LocalAreaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PhoneNumberParser::LocalAreaContext::DIGITS() {
  return getToken(PhoneNumberParser::DIGITS, 0);
}


size_t PhoneNumberParser::LocalAreaContext::getRuleIndex() const {
  return PhoneNumberParser::RuleLocalArea;
}

void PhoneNumberParser::LocalAreaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalArea(this);
}

void PhoneNumberParser::LocalAreaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalArea(this);
}


std::any PhoneNumberParser::LocalAreaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitLocalArea(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::LocalAreaContext* PhoneNumberParser::localArea() {
  LocalAreaContext *_localctx = _tracker.createInstance<LocalAreaContext>(_ctx, getState());
  enterRule(_localctx, 10, PhoneNumberParser::RuleLocalArea);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(PhoneNumberParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalizerContext ------------------------------------------------------------------

PhoneNumberParser::LocalizerContext::LocalizerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PhoneNumberParser::LocalizerContext::DIGITS() {
  return getToken(PhoneNumberParser::DIGITS, 0);
}


size_t PhoneNumberParser::LocalizerContext::getRuleIndex() const {
  return PhoneNumberParser::RuleLocalizer;
}

void PhoneNumberParser::LocalizerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalizer(this);
}

void PhoneNumberParser::LocalizerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalizer(this);
}


std::any PhoneNumberParser::LocalizerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitLocalizer(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::LocalizerContext* PhoneNumberParser::localizer() {
  LocalizerContext *_localctx = _tracker.createInstance<LocalizerContext>(_ctx, getState());
  enterRule(_localctx, 12, PhoneNumberParser::RuleLocalizer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(PhoneNumberParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DtmfContext ------------------------------------------------------------------

PhoneNumberParser::DtmfContext::DtmfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PhoneNumberParser::DtmfWithLocalContext* PhoneNumberParser::DtmfContext::dtmfWithLocal() {
  return getRuleContext<PhoneNumberParser::DtmfWithLocalContext>(0);
}

PhoneNumberParser::DtmfAllContext* PhoneNumberParser::DtmfContext::dtmfAll() {
  return getRuleContext<PhoneNumberParser::DtmfAllContext>(0);
}


size_t PhoneNumberParser::DtmfContext::getRuleIndex() const {
  return PhoneNumberParser::RuleDtmf;
}

void PhoneNumberParser::DtmfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmf(this);
}

void PhoneNumberParser::DtmfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmf(this);
}


std::any PhoneNumberParser::DtmfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitDtmf(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::DtmfContext* PhoneNumberParser::dtmf() {
  DtmfContext *_localctx = _tracker.createInstance<DtmfContext>(_ctx, getState());
  enterRule(_localctx, 14, PhoneNumberParser::RuleDtmf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(58);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      dtmfWithLocal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(57);
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

PhoneNumberParser::DtmfWithLocalContext::DtmfWithLocalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PhoneNumberParser::LocalAreaWithDtmfContext* PhoneNumberParser::DtmfWithLocalContext::localAreaWithDtmf() {
  return getRuleContext<PhoneNumberParser::LocalAreaWithDtmfContext>(0);
}

PhoneNumberParser::DtmfLocalizerContext* PhoneNumberParser::DtmfWithLocalContext::dtmfLocalizer() {
  return getRuleContext<PhoneNumberParser::DtmfLocalizerContext>(0);
}

PhoneNumberParser::PhoneSepContext* PhoneNumberParser::DtmfWithLocalContext::phoneSep() {
  return getRuleContext<PhoneNumberParser::PhoneSepContext>(0);
}


size_t PhoneNumberParser::DtmfWithLocalContext::getRuleIndex() const {
  return PhoneNumberParser::RuleDtmfWithLocal;
}

void PhoneNumberParser::DtmfWithLocalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmfWithLocal(this);
}

void PhoneNumberParser::DtmfWithLocalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmfWithLocal(this);
}


std::any PhoneNumberParser::DtmfWithLocalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitDtmfWithLocal(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::DtmfWithLocalContext* PhoneNumberParser::dtmfWithLocal() {
  DtmfWithLocalContext *_localctx = _tracker.createInstance<DtmfWithLocalContext>(_ctx, getState());
  enterRule(_localctx, 16, PhoneNumberParser::RuleDtmfWithLocal);
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
    setState(60);
    localAreaWithDtmf();
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PhoneNumberParser::SPACE

    || _la == PhoneNumberParser::HYPH) {
      setState(61);
      phoneSep();
    }
    setState(64);
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

PhoneNumberParser::LocalAreaWithDtmfContext::LocalAreaWithDtmfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PhoneNumberParser::LocalAreaWithDtmfContext::ALPHANUM() {
  return getTokens(PhoneNumberParser::ALPHANUM);
}

tree::TerminalNode* PhoneNumberParser::LocalAreaWithDtmfContext::ALPHANUM(size_t i) {
  return getToken(PhoneNumberParser::ALPHANUM, i);
}


size_t PhoneNumberParser::LocalAreaWithDtmfContext::getRuleIndex() const {
  return PhoneNumberParser::RuleLocalAreaWithDtmf;
}

void PhoneNumberParser::LocalAreaWithDtmfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalAreaWithDtmf(this);
}

void PhoneNumberParser::LocalAreaWithDtmfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalAreaWithDtmf(this);
}


std::any PhoneNumberParser::LocalAreaWithDtmfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitLocalAreaWithDtmf(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::LocalAreaWithDtmfContext* PhoneNumberParser::localAreaWithDtmf() {
  LocalAreaWithDtmfContext *_localctx = _tracker.createInstance<LocalAreaWithDtmfContext>(_ctx, getState());
  enterRule(_localctx, 18, PhoneNumberParser::RuleLocalAreaWithDtmf);

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
    setState(67); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(66);
              match(PhoneNumberParser::ALPHANUM);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(69); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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

PhoneNumberParser::DtmfAllContext::DtmfAllContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PhoneNumberParser::DtmfAllContext::ALPHANUM() {
  return getTokens(PhoneNumberParser::ALPHANUM);
}

tree::TerminalNode* PhoneNumberParser::DtmfAllContext::ALPHANUM(size_t i) {
  return getToken(PhoneNumberParser::ALPHANUM, i);
}


size_t PhoneNumberParser::DtmfAllContext::getRuleIndex() const {
  return PhoneNumberParser::RuleDtmfAll;
}

void PhoneNumberParser::DtmfAllContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmfAll(this);
}

void PhoneNumberParser::DtmfAllContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmfAll(this);
}


std::any PhoneNumberParser::DtmfAllContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitDtmfAll(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::DtmfAllContext* PhoneNumberParser::dtmfAll() {
  DtmfAllContext *_localctx = _tracker.createInstance<DtmfAllContext>(_ctx, getState());
  enterRule(_localctx, 20, PhoneNumberParser::RuleDtmfAll);
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
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      match(PhoneNumberParser::ALPHANUM);
      setState(74); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PhoneNumberParser::ALPHANUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DtmfLocalizerContext ------------------------------------------------------------------

PhoneNumberParser::DtmfLocalizerContext::DtmfLocalizerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PhoneNumberParser::DtmfLocalizerContext::ALPHANUM() {
  return getTokens(PhoneNumberParser::ALPHANUM);
}

tree::TerminalNode* PhoneNumberParser::DtmfLocalizerContext::ALPHANUM(size_t i) {
  return getToken(PhoneNumberParser::ALPHANUM, i);
}


size_t PhoneNumberParser::DtmfLocalizerContext::getRuleIndex() const {
  return PhoneNumberParser::RuleDtmfLocalizer;
}

void PhoneNumberParser::DtmfLocalizerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDtmfLocalizer(this);
}

void PhoneNumberParser::DtmfLocalizerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDtmfLocalizer(this);
}


std::any PhoneNumberParser::DtmfLocalizerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitDtmfLocalizer(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::DtmfLocalizerContext* PhoneNumberParser::dtmfLocalizer() {
  DtmfLocalizerContext *_localctx = _tracker.createInstance<DtmfLocalizerContext>(_ctx, getState());
  enterRule(_localctx, 22, PhoneNumberParser::RuleDtmfLocalizer);
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
    setState(77); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(76);
      match(PhoneNumberParser::ALPHANUM);
      setState(79); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PhoneNumberParser::ALPHANUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PhoneSepContext ------------------------------------------------------------------

PhoneNumberParser::PhoneSepContext::PhoneSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PhoneNumberParser::PhoneSepContext::SPACE() {
  return getToken(PhoneNumberParser::SPACE, 0);
}

tree::TerminalNode* PhoneNumberParser::PhoneSepContext::HYPH() {
  return getToken(PhoneNumberParser::HYPH, 0);
}


size_t PhoneNumberParser::PhoneSepContext::getRuleIndex() const {
  return PhoneNumberParser::RulePhoneSep;
}

void PhoneNumberParser::PhoneSepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPhoneSep(this);
}

void PhoneNumberParser::PhoneSepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PhoneNumberListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPhoneSep(this);
}


std::any PhoneNumberParser::PhoneSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PhoneNumberVisitor*>(visitor))
    return parserVisitor->visitPhoneSep(this);
  else
    return visitor->visitChildren(this);
}

PhoneNumberParser::PhoneSepContext* PhoneNumberParser::phoneSep() {
  PhoneSepContext *_localctx = _tracker.createInstance<PhoneSepContext>(_ctx, getState());
  enterRule(_localctx, 24, PhoneNumberParser::RulePhoneSep);
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
    setState(81);
    _la = _input->LA(1);
    if (!(_la == PhoneNumberParser::SPACE

    || _la == PhoneNumberParser::HYPH)) {
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

void PhoneNumberParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  phonenumberParserInitialize();
#else
  ::antlr4::internal::call_once(phonenumberParserOnceFlag, phonenumberParserInitialize);
#endif
}
