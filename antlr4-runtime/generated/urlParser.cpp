
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1


#include "urlListener.h"
#include "urlVisitor.h"

#include "urlParser.h"


using namespace antlrcpp;
using namespace antlrcpp;

using namespace antlr4;

namespace {

struct UrlParserStaticData final {
  UrlParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UrlParserStaticData(const UrlParserStaticData&) = delete;
  UrlParserStaticData(UrlParserStaticData&&) = delete;
  UrlParserStaticData& operator=(const UrlParserStaticData&) = delete;
  UrlParserStaticData& operator=(UrlParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag urlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
UrlParserStaticData *urlParserStaticData = nullptr;

void urlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (urlParserStaticData != nullptr) {
    return;
  }
#else
  assert(urlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UrlParserStaticData>(
    std::vector<std::string>{
      "url", "uri", "uriPort", "uriPath", "scheme", "host", "hostname", 
      "domainNameOrIpv4Host", "ipv6Host", "v6host", "v6hostSegment", "v6hostSep", 
      "v6hostConfigParam", "port", "path", "multiPathChunk", "pathString", 
      "user", "login", "loginPassword", "password", "frag", "fragString", 
      "query", "search", "multiSearch", "searchParameter", "searchParameterKey", 
      "searchParameterValue", "searchParameterValueString", "parameterString", 
      "parameterName", "configParam", "string", "usString"
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
  	4,1,27,230,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,1,
  	0,1,1,1,1,1,1,3,1,76,8,1,1,1,1,1,3,1,80,8,1,1,1,3,1,83,8,1,1,1,3,1,86,
  	8,1,1,1,3,1,89,8,1,1,2,1,2,1,2,1,3,1,3,3,3,96,8,3,1,4,1,4,1,5,3,5,101,
  	8,5,1,5,1,5,1,6,1,6,3,6,107,8,6,1,7,1,7,3,7,111,8,7,1,8,1,8,1,8,1,8,1,
  	9,3,9,118,8,9,1,9,1,9,5,9,122,8,9,10,9,12,9,125,9,9,1,10,1,10,1,10,1,
  	11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,5,14,138,8,14,10,14,12,14,141,9,
  	14,1,14,3,14,144,8,14,1,15,1,15,1,15,1,16,1,16,3,16,151,8,16,1,17,1,17,
  	3,17,155,8,17,1,18,1,18,3,18,159,8,18,1,18,1,18,1,19,1,19,1,19,1,20,1,
  	20,3,20,168,8,20,1,21,1,21,1,21,1,22,1,22,1,22,3,22,176,8,22,1,23,1,23,
  	1,23,1,24,1,24,5,24,183,8,24,10,24,12,24,186,9,24,1,25,1,25,1,25,1,26,
  	1,26,3,26,193,8,26,1,27,1,27,3,27,197,8,27,1,28,1,28,3,28,201,8,28,1,
  	29,1,29,1,29,1,29,3,29,207,8,29,1,30,1,30,1,30,1,30,1,31,1,31,5,31,215,
  	8,31,10,31,12,31,218,9,31,1,32,1,32,1,32,3,32,223,8,32,1,33,1,33,1,34,
  	1,34,1,34,1,34,0,0,35,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,0,2,2,0,3,3,19,19,
  	2,0,10,10,15,15,223,0,70,1,0,0,0,2,72,1,0,0,0,4,90,1,0,0,0,6,93,1,0,0,
  	0,8,97,1,0,0,0,10,100,1,0,0,0,12,106,1,0,0,0,14,110,1,0,0,0,16,112,1,
  	0,0,0,18,117,1,0,0,0,20,126,1,0,0,0,22,129,1,0,0,0,24,131,1,0,0,0,26,
  	133,1,0,0,0,28,135,1,0,0,0,30,145,1,0,0,0,32,150,1,0,0,0,34,154,1,0,0,
  	0,36,156,1,0,0,0,38,162,1,0,0,0,40,167,1,0,0,0,42,169,1,0,0,0,44,175,
  	1,0,0,0,46,177,1,0,0,0,48,180,1,0,0,0,50,187,1,0,0,0,52,190,1,0,0,0,54,
  	196,1,0,0,0,56,198,1,0,0,0,58,206,1,0,0,0,60,208,1,0,0,0,62,212,1,0,0,
  	0,64,222,1,0,0,0,66,224,1,0,0,0,68,226,1,0,0,0,70,71,3,2,1,0,71,1,1,0,
  	0,0,72,73,3,8,4,0,73,75,5,1,0,0,74,76,3,36,18,0,75,74,1,0,0,0,75,76,1,
  	0,0,0,76,77,1,0,0,0,77,79,3,10,5,0,78,80,3,4,2,0,79,78,1,0,0,0,79,80,
  	1,0,0,0,80,82,1,0,0,0,81,83,3,6,3,0,82,81,1,0,0,0,82,83,1,0,0,0,83,85,
  	1,0,0,0,84,86,3,46,23,0,85,84,1,0,0,0,85,86,1,0,0,0,86,88,1,0,0,0,87,
  	89,3,42,21,0,88,87,1,0,0,0,88,89,1,0,0,0,89,3,1,0,0,0,90,91,5,19,0,0,
  	91,92,3,26,13,0,92,5,1,0,0,0,93,95,5,23,0,0,94,96,3,28,14,0,95,94,1,0,
  	0,0,95,96,1,0,0,0,96,7,1,0,0,0,97,98,3,66,33,0,98,9,1,0,0,0,99,101,5,
  	23,0,0,100,99,1,0,0,0,100,101,1,0,0,0,101,102,1,0,0,0,102,103,3,12,6,
  	0,103,11,1,0,0,0,104,107,3,14,7,0,105,107,3,16,8,0,106,104,1,0,0,0,106,
  	105,1,0,0,0,107,13,1,0,0,0,108,111,3,60,30,0,109,111,3,66,33,0,110,108,
  	1,0,0,0,110,109,1,0,0,0,111,15,1,0,0,0,112,113,5,6,0,0,113,114,3,18,9,
  	0,114,115,5,7,0,0,115,17,1,0,0,0,116,118,5,3,0,0,117,116,1,0,0,0,117,
  	118,1,0,0,0,118,119,1,0,0,0,119,123,3,24,12,0,120,122,3,20,10,0,121,120,
  	1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,19,1,0,0,
  	0,125,123,1,0,0,0,126,127,3,22,11,0,127,128,3,24,12,0,128,21,1,0,0,0,
  	129,130,7,0,0,0,130,23,1,0,0,0,131,132,3,64,32,0,132,25,1,0,0,0,133,134,
  	5,15,0,0,134,27,1,0,0,0,135,139,3,32,16,0,136,138,3,30,15,0,137,136,1,
  	0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,143,1,0,0,0,
  	141,139,1,0,0,0,142,144,5,23,0,0,143,142,1,0,0,0,143,144,1,0,0,0,144,
  	29,1,0,0,0,145,146,5,23,0,0,146,147,3,32,16,0,147,31,1,0,0,0,148,151,
  	3,60,30,0,149,151,3,66,33,0,150,148,1,0,0,0,150,149,1,0,0,0,151,33,1,
  	0,0,0,152,155,3,60,30,0,153,155,3,66,33,0,154,152,1,0,0,0,154,153,1,0,
  	0,0,155,35,1,0,0,0,156,158,3,34,17,0,157,159,3,38,19,0,158,157,1,0,0,
  	0,158,159,1,0,0,0,159,160,1,0,0,0,160,161,5,5,0,0,161,37,1,0,0,0,162,
  	163,5,19,0,0,163,164,3,40,20,0,164,39,1,0,0,0,165,168,3,60,30,0,166,168,
  	3,66,33,0,167,165,1,0,0,0,167,166,1,0,0,0,168,41,1,0,0,0,169,170,5,20,
  	0,0,170,171,3,44,22,0,171,43,1,0,0,0,172,176,3,60,30,0,173,176,3,66,33,
  	0,174,176,5,15,0,0,175,172,1,0,0,0,175,173,1,0,0,0,175,174,1,0,0,0,176,
  	45,1,0,0,0,177,178,5,8,0,0,178,179,3,48,24,0,179,47,1,0,0,0,180,184,3,
  	52,26,0,181,183,3,50,25,0,182,181,1,0,0,0,183,186,1,0,0,0,184,182,1,0,
  	0,0,184,185,1,0,0,0,185,49,1,0,0,0,186,184,1,0,0,0,187,188,5,4,0,0,188,
  	189,3,52,26,0,189,51,1,0,0,0,190,192,3,54,27,0,191,193,3,56,28,0,192,
  	191,1,0,0,0,192,193,1,0,0,0,193,53,1,0,0,0,194,197,3,60,30,0,195,197,
  	3,66,33,0,196,194,1,0,0,0,196,195,1,0,0,0,197,55,1,0,0,0,198,200,5,18,
  	0,0,199,201,3,58,29,0,200,199,1,0,0,0,200,201,1,0,0,0,201,57,1,0,0,0,
  	202,207,3,60,30,0,203,207,3,66,33,0,204,207,5,15,0,0,205,207,5,13,0,0,
  	206,202,1,0,0,0,206,203,1,0,0,0,206,204,1,0,0,0,206,205,1,0,0,0,207,59,
  	1,0,0,0,208,209,5,2,0,0,209,210,3,62,31,0,210,211,5,2,0,0,211,61,1,0,
  	0,0,212,216,3,66,33,0,213,215,3,68,34,0,214,213,1,0,0,0,215,218,1,0,0,
  	0,216,214,1,0,0,0,216,217,1,0,0,0,217,63,1,0,0,0,218,216,1,0,0,0,219,
  	223,3,60,30,0,220,223,3,66,33,0,221,223,5,15,0,0,222,219,1,0,0,0,222,
  	220,1,0,0,0,222,221,1,0,0,0,223,65,1,0,0,0,224,225,7,1,0,0,225,67,1,0,
  	0,0,226,227,5,24,0,0,227,228,3,66,33,0,228,69,1,0,0,0,25,75,79,82,85,
  	88,95,100,106,110,117,123,139,143,150,154,158,167,175,184,192,196,200,
  	206,216,222
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  urlParserStaticData = staticData.release();
}

}

urlParser::urlParser(TokenStream *input) : urlParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

urlParser::urlParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  urlParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *urlParserStaticData->atn, urlParserStaticData->decisionToDFA, urlParserStaticData->sharedContextCache, options);
}

urlParser::~urlParser() {
  delete _interpreter;
}

const atn::ATN& urlParser::getATN() const {
  return *urlParserStaticData->atn;
}

std::string urlParser::getGrammarFileName() const {
  return "url.g4";
}

const std::vector<std::string>& urlParser::getRuleNames() const {
  return urlParserStaticData->ruleNames;
}

const dfa::Vocabulary& urlParser::getVocabulary() const {
  return urlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView urlParser::getSerializedATN() const {
  return urlParserStaticData->serializedATN;
}


//----------------- UrlContext ------------------------------------------------------------------

urlParser::UrlContext::UrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::UriContext* urlParser::UrlContext::uri() {
  return getRuleContext<urlParser::UriContext>(0);
}


size_t urlParser::UrlContext::getRuleIndex() const {
  return urlParser::RuleUrl;
}

void urlParser::UrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUrl(this);
}

void urlParser::UrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUrl(this);
}


std::any urlParser::UrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUrl(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UrlContext* urlParser::url() {
  UrlContext *_localctx = _tracker.createInstance<UrlContext>(_ctx, getState());
  enterRule(_localctx, 0, urlParser::RuleUrl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
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

urlParser::UriContext::UriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::SchemeContext* urlParser::UriContext::scheme() {
  return getRuleContext<urlParser::SchemeContext>(0);
}

tree::TerminalNode* urlParser::UriContext::SCHEME_SEP() {
  return getToken(urlParser::SCHEME_SEP, 0);
}

urlParser::HostContext* urlParser::UriContext::host() {
  return getRuleContext<urlParser::HostContext>(0);
}

urlParser::LoginContext* urlParser::UriContext::login() {
  return getRuleContext<urlParser::LoginContext>(0);
}

urlParser::UriPortContext* urlParser::UriContext::uriPort() {
  return getRuleContext<urlParser::UriPortContext>(0);
}

urlParser::UriPathContext* urlParser::UriContext::uriPath() {
  return getRuleContext<urlParser::UriPathContext>(0);
}

urlParser::QueryContext* urlParser::UriContext::query() {
  return getRuleContext<urlParser::QueryContext>(0);
}

urlParser::FragContext* urlParser::UriContext::frag() {
  return getRuleContext<urlParser::FragContext>(0);
}


size_t urlParser::UriContext::getRuleIndex() const {
  return urlParser::RuleUri;
}

void urlParser::UriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUri(this);
}

void urlParser::UriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUri(this);
}


std::any urlParser::UriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUri(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UriContext* urlParser::uri() {
  UriContext *_localctx = _tracker.createInstance<UriContext>(_ctx, getState());
  enterRule(_localctx, 2, urlParser::RuleUri);
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
    scheme();
    setState(73);
    match(urlParser::SCHEME_SEP);
    setState(75);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(74);
      login();
      break;
    }

    default:
      break;
    }
    setState(77);
    host();
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::COL) {
      setState(78);
      uriPort();
    }
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::FS) {
      setState(81);
      uriPath();
    }
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::Q) {
      setState(84);
      query();
    }
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::HASH) {
      setState(87);
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

urlParser::UriPortContext::UriPortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::UriPortContext::COL() {
  return getToken(urlParser::COL, 0);
}

urlParser::PortContext* urlParser::UriPortContext::port() {
  return getRuleContext<urlParser::PortContext>(0);
}


size_t urlParser::UriPortContext::getRuleIndex() const {
  return urlParser::RuleUriPort;
}

void urlParser::UriPortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriPort(this);
}

void urlParser::UriPortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriPort(this);
}


std::any urlParser::UriPortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUriPort(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UriPortContext* urlParser::uriPort() {
  UriPortContext *_localctx = _tracker.createInstance<UriPortContext>(_ctx, getState());
  enterRule(_localctx, 4, urlParser::RuleUriPort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(urlParser::COL);
    setState(91);
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

urlParser::UriPathContext::UriPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::UriPathContext::FS() {
  return getToken(urlParser::FS, 0);
}

urlParser::PathContext* urlParser::UriPathContext::path() {
  return getRuleContext<urlParser::PathContext>(0);
}


size_t urlParser::UriPathContext::getRuleIndex() const {
  return urlParser::RuleUriPath;
}

void urlParser::UriPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriPath(this);
}

void urlParser::UriPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriPath(this);
}


std::any urlParser::UriPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUriPath(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UriPathContext* urlParser::uriPath() {
  UriPathContext *_localctx = _tracker.createInstance<UriPathContext>(_ctx, getState());
  enterRule(_localctx, 6, urlParser::RuleUriPath);
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
    setState(93);
    match(urlParser::FS);
    setState(95);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33796) != 0)) {
      setState(94);
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

urlParser::SchemeContext::SchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::StringContext* urlParser::SchemeContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::SchemeContext::getRuleIndex() const {
  return urlParser::RuleScheme;
}

void urlParser::SchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScheme(this);
}

void urlParser::SchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScheme(this);
}


std::any urlParser::SchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitScheme(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SchemeContext* urlParser::scheme() {
  SchemeContext *_localctx = _tracker.createInstance<SchemeContext>(_ctx, getState());
  enterRule(_localctx, 8, urlParser::RuleScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
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

urlParser::HostContext::HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::HostnameContext* urlParser::HostContext::hostname() {
  return getRuleContext<urlParser::HostnameContext>(0);
}

tree::TerminalNode* urlParser::HostContext::FS() {
  return getToken(urlParser::FS, 0);
}


size_t urlParser::HostContext::getRuleIndex() const {
  return urlParser::RuleHost;
}

void urlParser::HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHost(this);
}

void urlParser::HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHost(this);
}


std::any urlParser::HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitHost(this);
  else
    return visitor->visitChildren(this);
}

urlParser::HostContext* urlParser::host() {
  HostContext *_localctx = _tracker.createInstance<HostContext>(_ctx, getState());
  enterRule(_localctx, 10, urlParser::RuleHost);
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
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::FS) {
      setState(99);
      match(urlParser::FS);
    }
    setState(102);
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

urlParser::HostnameContext::HostnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::DomainNameOrIpv4HostContext* urlParser::HostnameContext::domainNameOrIpv4Host() {
  return getRuleContext<urlParser::DomainNameOrIpv4HostContext>(0);
}

urlParser::Ipv6HostContext* urlParser::HostnameContext::ipv6Host() {
  return getRuleContext<urlParser::Ipv6HostContext>(0);
}


size_t urlParser::HostnameContext::getRuleIndex() const {
  return urlParser::RuleHostname;
}

void urlParser::HostnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHostname(this);
}

void urlParser::HostnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHostname(this);
}


std::any urlParser::HostnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitHostname(this);
  else
    return visitor->visitChildren(this);
}

urlParser::HostnameContext* urlParser::hostname() {
  HostnameContext *_localctx = _tracker.createInstance<HostnameContext>(_ctx, getState());
  enterRule(_localctx, 12, urlParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR:
      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        domainNameOrIpv4Host();
        break;
      }

      case urlParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(105);
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

urlParser::DomainNameOrIpv4HostContext::DomainNameOrIpv4HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::DomainNameOrIpv4HostContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::DomainNameOrIpv4HostContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::DomainNameOrIpv4HostContext::getRuleIndex() const {
  return urlParser::RuleDomainNameOrIpv4Host;
}

void urlParser::DomainNameOrIpv4HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDomainNameOrIpv4Host(this);
}

void urlParser::DomainNameOrIpv4HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDomainNameOrIpv4Host(this);
}


std::any urlParser::DomainNameOrIpv4HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitDomainNameOrIpv4Host(this);
  else
    return visitor->visitChildren(this);
}

urlParser::DomainNameOrIpv4HostContext* urlParser::domainNameOrIpv4Host() {
  DomainNameOrIpv4HostContext *_localctx = _tracker.createInstance<DomainNameOrIpv4HostContext>(_ctx, getState());
  enterRule(_localctx, 14, urlParser::RuleDomainNameOrIpv4Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(108);
        parameterString();
        break;
      }

      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(109);
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

urlParser::Ipv6HostContext::Ipv6HostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::Ipv6HostContext::LBRACKET() {
  return getToken(urlParser::LBRACKET, 0);
}

urlParser::V6hostContext* urlParser::Ipv6HostContext::v6host() {
  return getRuleContext<urlParser::V6hostContext>(0);
}

tree::TerminalNode* urlParser::Ipv6HostContext::RBRACKET() {
  return getToken(urlParser::RBRACKET, 0);
}


size_t urlParser::Ipv6HostContext::getRuleIndex() const {
  return urlParser::RuleIpv6Host;
}

void urlParser::Ipv6HostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIpv6Host(this);
}

void urlParser::Ipv6HostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIpv6Host(this);
}


std::any urlParser::Ipv6HostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitIpv6Host(this);
  else
    return visitor->visitChildren(this);
}

urlParser::Ipv6HostContext* urlParser::ipv6Host() {
  Ipv6HostContext *_localctx = _tracker.createInstance<Ipv6HostContext>(_ctx, getState());
  enterRule(_localctx, 16, urlParser::RuleIpv6Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(urlParser::LBRACKET);
    setState(113);
    v6host();
    setState(114);
    match(urlParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- V6hostContext ------------------------------------------------------------------

urlParser::V6hostContext::V6hostContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::V6hostConfigParamContext* urlParser::V6hostContext::v6hostConfigParam() {
  return getRuleContext<urlParser::V6hostConfigParamContext>(0);
}

tree::TerminalNode* urlParser::V6hostContext::DBL_COL() {
  return getToken(urlParser::DBL_COL, 0);
}

std::vector<urlParser::V6hostSegmentContext *> urlParser::V6hostContext::v6hostSegment() {
  return getRuleContexts<urlParser::V6hostSegmentContext>();
}

urlParser::V6hostSegmentContext* urlParser::V6hostContext::v6hostSegment(size_t i) {
  return getRuleContext<urlParser::V6hostSegmentContext>(i);
}


size_t urlParser::V6hostContext::getRuleIndex() const {
  return urlParser::RuleV6host;
}

void urlParser::V6hostContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6host(this);
}

void urlParser::V6hostContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6host(this);
}


std::any urlParser::V6hostContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitV6host(this);
  else
    return visitor->visitChildren(this);
}

urlParser::V6hostContext* urlParser::v6host() {
  V6hostContext *_localctx = _tracker.createInstance<V6hostContext>(_ctx, getState());
  enterRule(_localctx, 18, urlParser::RuleV6host);
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
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::DBL_COL) {
      setState(116);
      match(urlParser::DBL_COL);
    }
    setState(119);
    v6hostConfigParam();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::DBL_COL

    || _la == urlParser::COL) {
      setState(120);
      v6hostSegment();
      setState(125);
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

urlParser::V6hostSegmentContext::V6hostSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::V6hostSepContext* urlParser::V6hostSegmentContext::v6hostSep() {
  return getRuleContext<urlParser::V6hostSepContext>(0);
}

urlParser::V6hostConfigParamContext* urlParser::V6hostSegmentContext::v6hostConfigParam() {
  return getRuleContext<urlParser::V6hostConfigParamContext>(0);
}


size_t urlParser::V6hostSegmentContext::getRuleIndex() const {
  return urlParser::RuleV6hostSegment;
}

void urlParser::V6hostSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostSegment(this);
}

void urlParser::V6hostSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostSegment(this);
}


std::any urlParser::V6hostSegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitV6hostSegment(this);
  else
    return visitor->visitChildren(this);
}

urlParser::V6hostSegmentContext* urlParser::v6hostSegment() {
  V6hostSegmentContext *_localctx = _tracker.createInstance<V6hostSegmentContext>(_ctx, getState());
  enterRule(_localctx, 20, urlParser::RuleV6hostSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    v6hostSep();
    setState(127);
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

urlParser::V6hostSepContext::V6hostSepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::V6hostSepContext::COL() {
  return getToken(urlParser::COL, 0);
}

tree::TerminalNode* urlParser::V6hostSepContext::DBL_COL() {
  return getToken(urlParser::DBL_COL, 0);
}


size_t urlParser::V6hostSepContext::getRuleIndex() const {
  return urlParser::RuleV6hostSep;
}

void urlParser::V6hostSepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostSep(this);
}

void urlParser::V6hostSepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostSep(this);
}


std::any urlParser::V6hostSepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitV6hostSep(this);
  else
    return visitor->visitChildren(this);
}

urlParser::V6hostSepContext* urlParser::v6hostSep() {
  V6hostSepContext *_localctx = _tracker.createInstance<V6hostSepContext>(_ctx, getState());
  enterRule(_localctx, 22, urlParser::RuleV6hostSep);
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
    setState(129);
    _la = _input->LA(1);
    if (!(_la == urlParser::DBL_COL

    || _la == urlParser::COL)) {
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

urlParser::V6hostConfigParamContext::V6hostConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ConfigParamContext* urlParser::V6hostConfigParamContext::configParam() {
  return getRuleContext<urlParser::ConfigParamContext>(0);
}


size_t urlParser::V6hostConfigParamContext::getRuleIndex() const {
  return urlParser::RuleV6hostConfigParam;
}

void urlParser::V6hostConfigParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV6hostConfigParam(this);
}

void urlParser::V6hostConfigParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV6hostConfigParam(this);
}


std::any urlParser::V6hostConfigParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitV6hostConfigParam(this);
  else
    return visitor->visitChildren(this);
}

urlParser::V6hostConfigParamContext* urlParser::v6hostConfigParam() {
  V6hostConfigParamContext *_localctx = _tracker.createInstance<V6hostConfigParamContext>(_ctx, getState());
  enterRule(_localctx, 24, urlParser::RuleV6hostConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
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

urlParser::PortContext::PortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::PortContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::PortContext::getRuleIndex() const {
  return urlParser::RulePort;
}

void urlParser::PortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPort(this);
}

void urlParser::PortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPort(this);
}


std::any urlParser::PortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPort(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PortContext* urlParser::port() {
  PortContext *_localctx = _tracker.createInstance<PortContext>(_ctx, getState());
  enterRule(_localctx, 26, urlParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(urlParser::DIGITS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

urlParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::PathStringContext* urlParser::PathContext::pathString() {
  return getRuleContext<urlParser::PathStringContext>(0);
}

std::vector<urlParser::MultiPathChunkContext *> urlParser::PathContext::multiPathChunk() {
  return getRuleContexts<urlParser::MultiPathChunkContext>();
}

urlParser::MultiPathChunkContext* urlParser::PathContext::multiPathChunk(size_t i) {
  return getRuleContext<urlParser::MultiPathChunkContext>(i);
}

tree::TerminalNode* urlParser::PathContext::FS() {
  return getToken(urlParser::FS, 0);
}


size_t urlParser::PathContext::getRuleIndex() const {
  return urlParser::RulePath;
}

void urlParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void urlParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


std::any urlParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PathContext* urlParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 28, urlParser::RulePath);
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
    setState(135);
    pathString();
    setState(139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(136);
        multiPathChunk(); 
      }
      setState(141);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::FS) {
      setState(142);
      match(urlParser::FS);
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

urlParser::MultiPathChunkContext::MultiPathChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::MultiPathChunkContext::FS() {
  return getToken(urlParser::FS, 0);
}

urlParser::PathStringContext* urlParser::MultiPathChunkContext::pathString() {
  return getRuleContext<urlParser::PathStringContext>(0);
}


size_t urlParser::MultiPathChunkContext::getRuleIndex() const {
  return urlParser::RuleMultiPathChunk;
}

void urlParser::MultiPathChunkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiPathChunk(this);
}

void urlParser::MultiPathChunkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiPathChunk(this);
}


std::any urlParser::MultiPathChunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitMultiPathChunk(this);
  else
    return visitor->visitChildren(this);
}

urlParser::MultiPathChunkContext* urlParser::multiPathChunk() {
  MultiPathChunkContext *_localctx = _tracker.createInstance<MultiPathChunkContext>(_ctx, getState());
  enterRule(_localctx, 30, urlParser::RuleMultiPathChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(urlParser::FS);
    setState(146);
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

urlParser::PathStringContext::PathStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::PathStringContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::PathStringContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::PathStringContext::getRuleIndex() const {
  return urlParser::RulePathString;
}

void urlParser::PathStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathString(this);
}

void urlParser::PathStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathString(this);
}


std::any urlParser::PathStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPathString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PathStringContext* urlParser::pathString() {
  PathStringContext *_localctx = _tracker.createInstance<PathStringContext>(_ctx, getState());
  enterRule(_localctx, 32, urlParser::RulePathString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(148);
        parameterString();
        break;
      }

      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(149);
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

urlParser::UserContext::UserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::UserContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::UserContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::UserContext::getRuleIndex() const {
  return urlParser::RuleUser;
}

void urlParser::UserContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser(this);
}

void urlParser::UserContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser(this);
}


std::any urlParser::UserContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUser(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UserContext* urlParser::user() {
  UserContext *_localctx = _tracker.createInstance<UserContext>(_ctx, getState());
  enterRule(_localctx, 34, urlParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(152);
        parameterString();
        break;
      }

      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(153);
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

urlParser::LoginContext::LoginContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::UserContext* urlParser::LoginContext::user() {
  return getRuleContext<urlParser::UserContext>(0);
}

tree::TerminalNode* urlParser::LoginContext::AT() {
  return getToken(urlParser::AT, 0);
}

urlParser::LoginPasswordContext* urlParser::LoginContext::loginPassword() {
  return getRuleContext<urlParser::LoginPasswordContext>(0);
}


size_t urlParser::LoginContext::getRuleIndex() const {
  return urlParser::RuleLogin;
}

void urlParser::LoginContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogin(this);
}

void urlParser::LoginContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogin(this);
}


std::any urlParser::LoginContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitLogin(this);
  else
    return visitor->visitChildren(this);
}

urlParser::LoginContext* urlParser::login() {
  LoginContext *_localctx = _tracker.createInstance<LoginContext>(_ctx, getState());
  enterRule(_localctx, 36, urlParser::RuleLogin);
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
    setState(156);
    user();
    setState(158);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::COL) {
      setState(157);
      loginPassword();
    }
    setState(160);
    match(urlParser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoginPasswordContext ------------------------------------------------------------------

urlParser::LoginPasswordContext::LoginPasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::LoginPasswordContext::COL() {
  return getToken(urlParser::COL, 0);
}

urlParser::PasswordContext* urlParser::LoginPasswordContext::password() {
  return getRuleContext<urlParser::PasswordContext>(0);
}


size_t urlParser::LoginPasswordContext::getRuleIndex() const {
  return urlParser::RuleLoginPassword;
}

void urlParser::LoginPasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoginPassword(this);
}

void urlParser::LoginPasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoginPassword(this);
}


std::any urlParser::LoginPasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitLoginPassword(this);
  else
    return visitor->visitChildren(this);
}

urlParser::LoginPasswordContext* urlParser::loginPassword() {
  LoginPasswordContext *_localctx = _tracker.createInstance<LoginPasswordContext>(_ctx, getState());
  enterRule(_localctx, 38, urlParser::RuleLoginPassword);

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
    match(urlParser::COL);
    setState(163);
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

urlParser::PasswordContext::PasswordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::PasswordContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::PasswordContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::PasswordContext::getRuleIndex() const {
  return urlParser::RulePassword;
}

void urlParser::PasswordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPassword(this);
}

void urlParser::PasswordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPassword(this);
}


std::any urlParser::PasswordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitPassword(this);
  else
    return visitor->visitChildren(this);
}

urlParser::PasswordContext* urlParser::password() {
  PasswordContext *_localctx = _tracker.createInstance<PasswordContext>(_ctx, getState());
  enterRule(_localctx, 40, urlParser::RulePassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(165);
        parameterString();
        break;
      }

      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(166);
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

urlParser::FragContext::FragContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::FragContext::HASH() {
  return getToken(urlParser::HASH, 0);
}

urlParser::FragStringContext* urlParser::FragContext::fragString() {
  return getRuleContext<urlParser::FragStringContext>(0);
}


size_t urlParser::FragContext::getRuleIndex() const {
  return urlParser::RuleFrag;
}

void urlParser::FragContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrag(this);
}

void urlParser::FragContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrag(this);
}


std::any urlParser::FragContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitFrag(this);
  else
    return visitor->visitChildren(this);
}

urlParser::FragContext* urlParser::frag() {
  FragContext *_localctx = _tracker.createInstance<FragContext>(_ctx, getState());
  enterRule(_localctx, 42, urlParser::RuleFrag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(urlParser::HASH);
    setState(170);
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

urlParser::FragStringContext::FragStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::FragStringContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::FragStringContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}

tree::TerminalNode* urlParser::FragStringContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::FragStringContext::getRuleIndex() const {
  return urlParser::RuleFragString;
}

void urlParser::FragStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFragString(this);
}

void urlParser::FragStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFragString(this);
}


std::any urlParser::FragStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitFragString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::FragStringContext* urlParser::fragString() {
  FragStringContext *_localctx = _tracker.createInstance<FragStringContext>(_ctx, getState());
  enterRule(_localctx, 44, urlParser::RuleFragString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(173);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(174);
      match(urlParser::DIGITS);
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

urlParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::QueryContext::Q() {
  return getToken(urlParser::Q, 0);
}

urlParser::SearchContext* urlParser::QueryContext::search() {
  return getRuleContext<urlParser::SearchContext>(0);
}


size_t urlParser::QueryContext::getRuleIndex() const {
  return urlParser::RuleQuery;
}

void urlParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void urlParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


std::any urlParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

urlParser::QueryContext* urlParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 46, urlParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(urlParser::Q);
    setState(178);
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

urlParser::SearchContext::SearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::SearchParameterContext* urlParser::SearchContext::searchParameter() {
  return getRuleContext<urlParser::SearchParameterContext>(0);
}

std::vector<urlParser::MultiSearchContext *> urlParser::SearchContext::multiSearch() {
  return getRuleContexts<urlParser::MultiSearchContext>();
}

urlParser::MultiSearchContext* urlParser::SearchContext::multiSearch(size_t i) {
  return getRuleContext<urlParser::MultiSearchContext>(i);
}


size_t urlParser::SearchContext::getRuleIndex() const {
  return urlParser::RuleSearch;
}

void urlParser::SearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearch(this);
}

void urlParser::SearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearch(this);
}


std::any urlParser::SearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearch(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchContext* urlParser::search() {
  SearchContext *_localctx = _tracker.createInstance<SearchContext>(_ctx, getState());
  enterRule(_localctx, 48, urlParser::RuleSearch);
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
    setState(180);
    searchParameter();
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::AMP) {
      setState(181);
      multiSearch();
      setState(186);
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

urlParser::MultiSearchContext::MultiSearchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::MultiSearchContext::AMP() {
  return getToken(urlParser::AMP, 0);
}

urlParser::SearchParameterContext* urlParser::MultiSearchContext::searchParameter() {
  return getRuleContext<urlParser::SearchParameterContext>(0);
}


size_t urlParser::MultiSearchContext::getRuleIndex() const {
  return urlParser::RuleMultiSearch;
}

void urlParser::MultiSearchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiSearch(this);
}

void urlParser::MultiSearchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiSearch(this);
}


std::any urlParser::MultiSearchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitMultiSearch(this);
  else
    return visitor->visitChildren(this);
}

urlParser::MultiSearchContext* urlParser::multiSearch() {
  MultiSearchContext *_localctx = _tracker.createInstance<MultiSearchContext>(_ctx, getState());
  enterRule(_localctx, 50, urlParser::RuleMultiSearch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(urlParser::AMP);
    setState(188);
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

urlParser::SearchParameterContext::SearchParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::SearchParameterKeyContext* urlParser::SearchParameterContext::searchParameterKey() {
  return getRuleContext<urlParser::SearchParameterKeyContext>(0);
}

urlParser::SearchParameterValueContext* urlParser::SearchParameterContext::searchParameterValue() {
  return getRuleContext<urlParser::SearchParameterValueContext>(0);
}


size_t urlParser::SearchParameterContext::getRuleIndex() const {
  return urlParser::RuleSearchParameter;
}

void urlParser::SearchParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameter(this);
}

void urlParser::SearchParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameter(this);
}


std::any urlParser::SearchParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearchParameter(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchParameterContext* urlParser::searchParameter() {
  SearchParameterContext *_localctx = _tracker.createInstance<SearchParameterContext>(_ctx, getState());
  enterRule(_localctx, 52, urlParser::RuleSearchParameter);
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
    setState(190);
    searchParameterKey();
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::EQ) {
      setState(191);
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

urlParser::SearchParameterKeyContext::SearchParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::SearchParameterKeyContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::SearchParameterKeyContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::SearchParameterKeyContext::getRuleIndex() const {
  return urlParser::RuleSearchParameterKey;
}

void urlParser::SearchParameterKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterKey(this);
}

void urlParser::SearchParameterKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterKey(this);
}


std::any urlParser::SearchParameterKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearchParameterKey(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchParameterKeyContext* urlParser::searchParameterKey() {
  SearchParameterKeyContext *_localctx = _tracker.createInstance<SearchParameterKeyContext>(_ctx, getState());
  enterRule(_localctx, 54, urlParser::RuleSearchParameterKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(194);
        parameterString();
        break;
      }

      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 2);
        setState(195);
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

urlParser::SearchParameterValueContext::SearchParameterValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::SearchParameterValueContext::EQ() {
  return getToken(urlParser::EQ, 0);
}

urlParser::SearchParameterValueStringContext* urlParser::SearchParameterValueContext::searchParameterValueString() {
  return getRuleContext<urlParser::SearchParameterValueStringContext>(0);
}


size_t urlParser::SearchParameterValueContext::getRuleIndex() const {
  return urlParser::RuleSearchParameterValue;
}

void urlParser::SearchParameterValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterValue(this);
}

void urlParser::SearchParameterValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterValue(this);
}


std::any urlParser::SearchParameterValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearchParameterValue(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchParameterValueContext* urlParser::searchParameterValue() {
  SearchParameterValueContext *_localctx = _tracker.createInstance<SearchParameterValueContext>(_ctx, getState());
  enterRule(_localctx, 56, urlParser::RuleSearchParameterValue);
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
    setState(198);
    match(urlParser::EQ);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 41988) != 0)) {
      setState(199);
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

urlParser::SearchParameterValueStringContext::SearchParameterValueStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::SearchParameterValueStringContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::SearchParameterValueStringContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}

tree::TerminalNode* urlParser::SearchParameterValueStringContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}

tree::TerminalNode* urlParser::SearchParameterValueStringContext::HEX() {
  return getToken(urlParser::HEX, 0);
}


size_t urlParser::SearchParameterValueStringContext::getRuleIndex() const {
  return urlParser::RuleSearchParameterValueString;
}

void urlParser::SearchParameterValueStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchParameterValueString(this);
}

void urlParser::SearchParameterValueStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchParameterValueString(this);
}


std::any urlParser::SearchParameterValueStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSearchParameterValueString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SearchParameterValueStringContext* urlParser::searchParameterValueString() {
  SearchParameterValueStringContext *_localctx = _tracker.createInstance<SearchParameterValueStringContext>(_ctx, getState());
  enterRule(_localctx, 58, urlParser::RuleSearchParameterValueString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(202);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(203);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(204);
      match(urlParser::DIGITS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(205);
      match(urlParser::HEX);
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

urlParser::ParameterStringContext::ParameterStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> urlParser::ParameterStringContext::DBL_DOLLAR() {
  return getTokens(urlParser::DBL_DOLLAR);
}

tree::TerminalNode* urlParser::ParameterStringContext::DBL_DOLLAR(size_t i) {
  return getToken(urlParser::DBL_DOLLAR, i);
}

urlParser::ParameterNameContext* urlParser::ParameterStringContext::parameterName() {
  return getRuleContext<urlParser::ParameterNameContext>(0);
}


size_t urlParser::ParameterStringContext::getRuleIndex() const {
  return urlParser::RuleParameterString;
}

void urlParser::ParameterStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterString(this);
}

void urlParser::ParameterStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterString(this);
}


std::any urlParser::ParameterStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitParameterString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::ParameterStringContext* urlParser::parameterString() {
  ParameterStringContext *_localctx = _tracker.createInstance<ParameterStringContext>(_ctx, getState());
  enterRule(_localctx, 60, urlParser::RuleParameterString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(urlParser::DBL_DOLLAR);
    setState(209);
    parameterName();
    setState(210);
    match(urlParser::DBL_DOLLAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterNameContext ------------------------------------------------------------------

urlParser::ParameterNameContext::ParameterNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::StringContext* urlParser::ParameterNameContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}

std::vector<urlParser::UsStringContext *> urlParser::ParameterNameContext::usString() {
  return getRuleContexts<urlParser::UsStringContext>();
}

urlParser::UsStringContext* urlParser::ParameterNameContext::usString(size_t i) {
  return getRuleContext<urlParser::UsStringContext>(i);
}


size_t urlParser::ParameterNameContext::getRuleIndex() const {
  return urlParser::RuleParameterName;
}

void urlParser::ParameterNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterName(this);
}

void urlParser::ParameterNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterName(this);
}


std::any urlParser::ParameterNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitParameterName(this);
  else
    return visitor->visitChildren(this);
}

urlParser::ParameterNameContext* urlParser::parameterName() {
  ParameterNameContext *_localctx = _tracker.createInstance<ParameterNameContext>(_ctx, getState());
  enterRule(_localctx, 62, urlParser::RuleParameterName);
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
    string();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::US) {
      setState(213);
      usString();
      setState(218);
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

urlParser::ConfigParamContext::ConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::ConfigParamContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

urlParser::StringContext* urlParser::ConfigParamContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}

tree::TerminalNode* urlParser::ConfigParamContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::ConfigParamContext::getRuleIndex() const {
  return urlParser::RuleConfigParam;
}

void urlParser::ConfigParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConfigParam(this);
}

void urlParser::ConfigParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConfigParam(this);
}


std::any urlParser::ConfigParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitConfigParam(this);
  else
    return visitor->visitChildren(this);
}

urlParser::ConfigParamContext* urlParser::configParam() {
  ConfigParamContext *_localctx = _tracker.createInstance<ConfigParamContext>(_ctx, getState());
  enterRule(_localctx, 64, urlParser::RuleConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(222);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(219);
      parameterString();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(220);
      string();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(221);
      match(urlParser::DIGITS);
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

urlParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::StringContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::StringContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}


size_t urlParser::StringContext::getRuleIndex() const {
  return urlParser::RuleString;
}

void urlParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void urlParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


std::any urlParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::StringContext* urlParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 66, urlParser::RuleString);
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
    setState(224);
    _la = _input->LA(1);
    if (!(_la == urlParser::STRING

    || _la == urlParser::DIGITS)) {
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

urlParser::UsStringContext::UsStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::UsStringContext::US() {
  return getToken(urlParser::US, 0);
}

urlParser::StringContext* urlParser::UsStringContext::string() {
  return getRuleContext<urlParser::StringContext>(0);
}


size_t urlParser::UsStringContext::getRuleIndex() const {
  return urlParser::RuleUsString;
}

void urlParser::UsStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsString(this);
}

void urlParser::UsStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsString(this);
}


std::any urlParser::UsStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUsString(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UsStringContext* urlParser::usString() {
  UsStringContext *_localctx = _tracker.createInstance<UsStringContext>(_ctx, getState());
  enterRule(_localctx, 68, urlParser::RuleUsString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(urlParser::US);
    setState(227);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void urlParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  urlParserInitialize();
#else
  ::antlr4::internal::call_once(urlParserOnceFlag, urlParserInitialize);
#endif
}
