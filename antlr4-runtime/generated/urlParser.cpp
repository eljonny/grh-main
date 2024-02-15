
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
      "url", "uri", "uriPort", "uriPath", "scheme", "schemeSeparator", "uriSchemePrefix", 
      "uriScheme", "host", "hostname", "domainNameOrIpv4Host", "ipv6Host", 
      "v6host", "v6hostSegment", "v6hostSep", "v6hostConfigParam", "port", 
      "path", "multiPathChunk", "pathString", "login", "user", "loginPassword", 
      "password", "frag", "fragString", "query", "search", "multiSearch", 
      "searchParameter", "searchParameterKey", "searchParameterValue", "parameterString", 
      "parameterName", "configParam"
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
  	4,1,27,262,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,1,
  	0,1,1,1,1,1,1,3,1,76,8,1,1,1,1,1,3,1,80,8,1,1,1,3,1,83,8,1,1,1,3,1,86,
  	8,1,1,1,3,1,89,8,1,1,2,1,2,1,2,1,3,1,3,3,3,96,8,3,1,4,3,4,99,8,4,1,4,
  	1,4,1,5,1,5,3,5,105,8,5,1,5,3,5,108,8,5,1,6,1,6,1,7,1,7,1,8,3,8,115,8,
  	8,1,8,1,8,1,9,1,9,3,9,121,8,9,1,10,1,10,1,10,1,10,3,10,127,8,10,1,11,
  	1,11,1,11,1,11,1,12,3,12,134,8,12,1,12,1,12,5,12,138,8,12,10,12,12,12,
  	141,9,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,4,17,153,8,
  	17,11,17,12,17,154,1,17,5,17,158,8,17,10,17,12,17,161,9,17,1,17,3,17,
  	164,8,17,1,18,1,18,4,18,168,8,18,11,18,12,18,169,1,19,1,19,1,19,1,19,
  	1,19,1,19,3,19,178,8,19,1,20,1,20,3,20,182,8,20,1,20,1,20,1,21,1,21,1,
  	21,1,21,3,21,190,8,21,1,22,1,22,1,22,1,23,1,23,1,23,1,23,3,23,199,8,23,
  	1,24,1,24,1,24,1,25,1,25,1,25,1,25,3,25,208,8,25,1,26,1,26,3,26,212,8,
  	26,1,27,1,27,5,27,216,8,27,10,27,12,27,219,9,27,1,28,1,28,1,28,1,29,1,
  	29,1,29,5,29,227,8,29,10,29,12,29,230,9,29,1,30,1,30,1,30,1,30,3,30,236,
  	8,30,1,31,1,31,1,31,1,31,1,31,4,31,243,8,31,11,31,12,31,244,1,31,3,31,
  	248,8,31,1,32,1,32,1,32,1,32,1,33,1,33,1,34,1,34,1,34,1,34,3,34,260,8,
  	34,1,34,0,0,35,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,0,2,2,0,2,2,14,14,1,0,4,
  	6,276,0,70,1,0,0,0,2,72,1,0,0,0,4,90,1,0,0,0,6,93,1,0,0,0,8,98,1,0,0,
  	0,10,102,1,0,0,0,12,109,1,0,0,0,14,111,1,0,0,0,16,114,1,0,0,0,18,120,
  	1,0,0,0,20,126,1,0,0,0,22,128,1,0,0,0,24,133,1,0,0,0,26,142,1,0,0,0,28,
  	145,1,0,0,0,30,147,1,0,0,0,32,149,1,0,0,0,34,152,1,0,0,0,36,165,1,0,0,
  	0,38,177,1,0,0,0,40,179,1,0,0,0,42,189,1,0,0,0,44,191,1,0,0,0,46,198,
  	1,0,0,0,48,200,1,0,0,0,50,207,1,0,0,0,52,209,1,0,0,0,54,213,1,0,0,0,56,
  	220,1,0,0,0,58,223,1,0,0,0,60,235,1,0,0,0,62,247,1,0,0,0,64,249,1,0,0,
  	0,66,253,1,0,0,0,68,259,1,0,0,0,70,71,3,2,1,0,71,1,1,0,0,0,72,73,3,8,
  	4,0,73,75,3,10,5,0,74,76,3,40,20,0,75,74,1,0,0,0,75,76,1,0,0,0,76,77,
  	1,0,0,0,77,79,3,16,8,0,78,80,3,4,2,0,79,78,1,0,0,0,79,80,1,0,0,0,80,82,
  	1,0,0,0,81,83,3,6,3,0,82,81,1,0,0,0,82,83,1,0,0,0,83,85,1,0,0,0,84,86,
  	3,52,26,0,85,84,1,0,0,0,85,86,1,0,0,0,86,88,1,0,0,0,87,89,3,48,24,0,88,
  	87,1,0,0,0,88,89,1,0,0,0,89,3,1,0,0,0,90,91,5,14,0,0,91,92,3,32,16,0,
  	92,5,1,0,0,0,93,95,5,18,0,0,94,96,3,34,17,0,95,94,1,0,0,0,95,96,1,0,0,
  	0,96,7,1,0,0,0,97,99,3,12,6,0,98,97,1,0,0,0,98,99,1,0,0,0,99,100,1,0,
  	0,0,100,101,3,14,7,0,101,9,1,0,0,0,102,104,5,14,0,0,103,105,5,18,0,0,
  	104,103,1,0,0,0,104,105,1,0,0,0,105,107,1,0,0,0,106,108,5,18,0,0,107,
  	106,1,0,0,0,107,108,1,0,0,0,108,11,1,0,0,0,109,110,5,4,0,0,110,13,1,0,
  	0,0,111,112,5,4,0,0,112,15,1,0,0,0,113,115,5,18,0,0,114,113,1,0,0,0,114,
  	115,1,0,0,0,115,116,1,0,0,0,116,117,3,18,9,0,117,17,1,0,0,0,118,121,3,
  	20,10,0,119,121,3,22,11,0,120,118,1,0,0,0,120,119,1,0,0,0,121,19,1,0,
  	0,0,122,127,3,64,32,0,123,127,5,4,0,0,124,127,5,5,0,0,125,127,5,6,0,0,
  	126,122,1,0,0,0,126,123,1,0,0,0,126,124,1,0,0,0,126,125,1,0,0,0,127,21,
  	1,0,0,0,128,129,5,23,0,0,129,130,3,24,12,0,130,131,5,24,0,0,131,23,1,
  	0,0,0,132,134,5,2,0,0,133,132,1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,
  	135,139,3,30,15,0,136,138,3,26,13,0,137,136,1,0,0,0,138,141,1,0,0,0,139,
  	137,1,0,0,0,139,140,1,0,0,0,140,25,1,0,0,0,141,139,1,0,0,0,142,143,3,
  	28,14,0,143,144,3,30,15,0,144,27,1,0,0,0,145,146,7,0,0,0,146,29,1,0,0,
  	0,147,148,3,68,34,0,148,31,1,0,0,0,149,150,5,6,0,0,150,33,1,0,0,0,151,
  	153,3,38,19,0,152,151,1,0,0,0,153,154,1,0,0,0,154,152,1,0,0,0,154,155,
  	1,0,0,0,155,159,1,0,0,0,156,158,3,36,18,0,157,156,1,0,0,0,158,161,1,0,
  	0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,162,
  	164,5,18,0,0,163,162,1,0,0,0,163,164,1,0,0,0,164,35,1,0,0,0,165,167,5,
  	18,0,0,166,168,3,38,19,0,167,166,1,0,0,0,168,169,1,0,0,0,169,167,1,0,
  	0,0,169,170,1,0,0,0,170,37,1,0,0,0,171,178,3,64,32,0,172,178,5,4,0,0,
  	173,178,5,5,0,0,174,178,5,6,0,0,175,178,5,21,0,0,176,178,5,19,0,0,177,
  	171,1,0,0,0,177,172,1,0,0,0,177,173,1,0,0,0,177,174,1,0,0,0,177,175,1,
  	0,0,0,177,176,1,0,0,0,178,39,1,0,0,0,179,181,3,42,21,0,180,182,3,44,22,
  	0,181,180,1,0,0,0,181,182,1,0,0,0,182,183,1,0,0,0,183,184,5,26,0,0,184,
  	41,1,0,0,0,185,190,3,64,32,0,186,190,5,4,0,0,187,190,5,5,0,0,188,190,
  	5,6,0,0,189,185,1,0,0,0,189,186,1,0,0,0,189,187,1,0,0,0,189,188,1,0,0,
  	0,190,43,1,0,0,0,191,192,5,14,0,0,192,193,3,46,23,0,193,45,1,0,0,0,194,
  	199,3,64,32,0,195,199,5,4,0,0,196,199,5,5,0,0,197,199,5,6,0,0,198,194,
  	1,0,0,0,198,195,1,0,0,0,198,196,1,0,0,0,198,197,1,0,0,0,199,47,1,0,0,
  	0,200,201,5,15,0,0,201,202,3,50,25,0,202,49,1,0,0,0,203,208,3,64,32,0,
  	204,208,5,4,0,0,205,208,5,5,0,0,206,208,5,6,0,0,207,203,1,0,0,0,207,204,
  	1,0,0,0,207,205,1,0,0,0,207,206,1,0,0,0,208,51,1,0,0,0,209,211,5,27,0,
  	0,210,212,3,54,27,0,211,210,1,0,0,0,211,212,1,0,0,0,212,53,1,0,0,0,213,
  	217,3,58,29,0,214,216,3,56,28,0,215,214,1,0,0,0,216,219,1,0,0,0,217,215,
  	1,0,0,0,217,218,1,0,0,0,218,55,1,0,0,0,219,217,1,0,0,0,220,221,5,25,0,
  	0,221,222,3,58,29,0,222,57,1,0,0,0,223,224,3,60,30,0,224,228,5,13,0,0,
  	225,227,3,62,31,0,226,225,1,0,0,0,227,230,1,0,0,0,228,226,1,0,0,0,228,
  	229,1,0,0,0,229,59,1,0,0,0,230,228,1,0,0,0,231,236,3,64,32,0,232,236,
  	5,4,0,0,233,236,5,5,0,0,234,236,5,6,0,0,235,231,1,0,0,0,235,232,1,0,0,
  	0,235,233,1,0,0,0,235,234,1,0,0,0,236,61,1,0,0,0,237,248,3,64,32,0,238,
  	248,5,4,0,0,239,248,5,5,0,0,240,248,5,6,0,0,241,243,5,9,0,0,242,241,1,
  	0,0,0,243,244,1,0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,248,1,0,0,0,
  	246,248,5,14,0,0,247,237,1,0,0,0,247,238,1,0,0,0,247,239,1,0,0,0,247,
  	240,1,0,0,0,247,242,1,0,0,0,247,246,1,0,0,0,248,63,1,0,0,0,249,250,5,
  	1,0,0,250,251,3,66,33,0,251,252,5,1,0,0,252,65,1,0,0,0,253,254,7,1,0,
  	0,254,67,1,0,0,0,255,260,3,64,32,0,256,260,5,4,0,0,257,260,5,5,0,0,258,
  	260,5,6,0,0,259,255,1,0,0,0,259,256,1,0,0,0,259,257,1,0,0,0,259,258,1,
  	0,0,0,260,69,1,0,0,0,30,75,79,82,85,88,95,98,104,107,114,120,126,133,
  	139,154,159,163,169,177,181,189,198,207,211,217,228,235,244,247,259
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

urlParser::SchemeSeparatorContext* urlParser::UriContext::schemeSeparator() {
  return getRuleContext<urlParser::SchemeSeparatorContext>(0);
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
    schemeSeparator();
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
      ((1ULL << _la) & 2621554) != 0)) {
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

urlParser::UriSchemeContext* urlParser::SchemeContext::uriScheme() {
  return getRuleContext<urlParser::UriSchemeContext>(0);
}

urlParser::UriSchemePrefixContext* urlParser::SchemeContext::uriSchemePrefix() {
  return getRuleContext<urlParser::UriSchemePrefixContext>(0);
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
    setState(98);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(97);
      uriSchemePrefix();
      break;
    }

    default:
      break;
    }
    setState(100);
    uriScheme();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeSeparatorContext ------------------------------------------------------------------

urlParser::SchemeSeparatorContext::SchemeSeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::SchemeSeparatorContext::COL() {
  return getToken(urlParser::COL, 0);
}

std::vector<tree::TerminalNode *> urlParser::SchemeSeparatorContext::FS() {
  return getTokens(urlParser::FS);
}

tree::TerminalNode* urlParser::SchemeSeparatorContext::FS(size_t i) {
  return getToken(urlParser::FS, i);
}


size_t urlParser::SchemeSeparatorContext::getRuleIndex() const {
  return urlParser::RuleSchemeSeparator;
}

void urlParser::SchemeSeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeSeparator(this);
}

void urlParser::SchemeSeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeSeparator(this);
}


std::any urlParser::SchemeSeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitSchemeSeparator(this);
  else
    return visitor->visitChildren(this);
}

urlParser::SchemeSeparatorContext* urlParser::schemeSeparator() {
  SchemeSeparatorContext *_localctx = _tracker.createInstance<SchemeSeparatorContext>(_ctx, getState());
  enterRule(_localctx, 10, urlParser::RuleSchemeSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(urlParser::COL);
    setState(104);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(103);
      match(urlParser::FS);
      break;
    }

    default:
      break;
    }
    setState(107);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(106);
      match(urlParser::FS);
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

//----------------- UriSchemePrefixContext ------------------------------------------------------------------

urlParser::UriSchemePrefixContext::UriSchemePrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::UriSchemePrefixContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}


size_t urlParser::UriSchemePrefixContext::getRuleIndex() const {
  return urlParser::RuleUriSchemePrefix;
}

void urlParser::UriSchemePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriSchemePrefix(this);
}

void urlParser::UriSchemePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriSchemePrefix(this);
}


std::any urlParser::UriSchemePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUriSchemePrefix(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UriSchemePrefixContext* urlParser::uriSchemePrefix() {
  UriSchemePrefixContext *_localctx = _tracker.createInstance<UriSchemePrefixContext>(_ctx, getState());
  enterRule(_localctx, 12, urlParser::RuleUriSchemePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(urlParser::BASIC_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UriSchemeContext ------------------------------------------------------------------

urlParser::UriSchemeContext::UriSchemeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* urlParser::UriSchemeContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}


size_t urlParser::UriSchemeContext::getRuleIndex() const {
  return urlParser::RuleUriScheme;
}

void urlParser::UriSchemeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUriScheme(this);
}

void urlParser::UriSchemeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<urlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUriScheme(this);
}


std::any urlParser::UriSchemeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<urlVisitor*>(visitor))
    return parserVisitor->visitUriScheme(this);
  else
    return visitor->visitChildren(this);
}

urlParser::UriSchemeContext* urlParser::uriScheme() {
  UriSchemeContext *_localctx = _tracker.createInstance<UriSchemeContext>(_ctx, getState());
  enterRule(_localctx, 14, urlParser::RuleUriScheme);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(urlParser::BASIC_STRING);
   
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
  enterRule(_localctx, 16, urlParser::RuleHost);
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
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::FS) {
      setState(113);
      match(urlParser::FS);
    }
    setState(116);
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
  enterRule(_localctx, 18, urlParser::RuleHostname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR:
      case urlParser::BASIC_STRING:
      case urlParser::STRING:
      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 1);
        setState(118);
        domainNameOrIpv4Host();
        break;
      }

      case urlParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(119);
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

tree::TerminalNode* urlParser::DomainNameOrIpv4HostContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::DomainNameOrIpv4HostContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::DomainNameOrIpv4HostContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
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
  enterRule(_localctx, 20, urlParser::RuleDomainNameOrIpv4Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(125);
        match(urlParser::DIGITS);
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
  enterRule(_localctx, 22, urlParser::RuleIpv6Host);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(urlParser::LBRACKET);
    setState(129);
    v6host();
    setState(130);
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
  enterRule(_localctx, 24, urlParser::RuleV6host);
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
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::DBL_COL) {
      setState(132);
      match(urlParser::DBL_COL);
    }
    setState(135);
    v6hostConfigParam();
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::DBL_COL

    || _la == urlParser::COL) {
      setState(136);
      v6hostSegment();
      setState(141);
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
  enterRule(_localctx, 26, urlParser::RuleV6hostSegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    v6hostSep();
    setState(143);
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
  enterRule(_localctx, 28, urlParser::RuleV6hostSep);
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
    setState(145);
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
  enterRule(_localctx, 30, urlParser::RuleV6hostConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
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
  enterRule(_localctx, 32, urlParser::RulePort);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
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

std::vector<urlParser::PathStringContext *> urlParser::PathContext::pathString() {
  return getRuleContexts<urlParser::PathStringContext>();
}

urlParser::PathStringContext* urlParser::PathContext::pathString(size_t i) {
  return getRuleContext<urlParser::PathStringContext>(i);
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
  enterRule(_localctx, 34, urlParser::RulePath);
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
    setState(152); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(151);
      pathString();
      setState(154); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2621554) != 0));
    setState(159);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(156);
        multiPathChunk(); 
      }
      setState(161);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::FS) {
      setState(162);
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

std::vector<urlParser::PathStringContext *> urlParser::MultiPathChunkContext::pathString() {
  return getRuleContexts<urlParser::PathStringContext>();
}

urlParser::PathStringContext* urlParser::MultiPathChunkContext::pathString(size_t i) {
  return getRuleContext<urlParser::PathStringContext>(i);
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
  enterRule(_localctx, 36, urlParser::RuleMultiPathChunk);
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
    setState(165);
    match(urlParser::FS);
    setState(167); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(166);
      pathString();
      setState(169); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2621554) != 0));
   
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

tree::TerminalNode* urlParser::PathStringContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::PathStringContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::PathStringContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}

tree::TerminalNode* urlParser::PathStringContext::HYPH() {
  return getToken(urlParser::HYPH, 0);
}

tree::TerminalNode* urlParser::PathStringContext::US() {
  return getToken(urlParser::US, 0);
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
  enterRule(_localctx, 38, urlParser::RulePathString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(177);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(171);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(172);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(173);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(174);
        match(urlParser::DIGITS);
        break;
      }

      case urlParser::HYPH: {
        enterOuterAlt(_localctx, 5);
        setState(175);
        match(urlParser::HYPH);
        break;
      }

      case urlParser::US: {
        enterOuterAlt(_localctx, 6);
        setState(176);
        match(urlParser::US);
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
  enterRule(_localctx, 40, urlParser::RuleLogin);
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
    setState(179);
    user();
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == urlParser::COL) {
      setState(180);
      loginPassword();
    }
    setState(183);
    match(urlParser::AT);
   
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

tree::TerminalNode* urlParser::UserContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::UserContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::UserContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
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
  enterRule(_localctx, 42, urlParser::RuleUser);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(185);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(187);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(188);
        match(urlParser::DIGITS);
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
  enterRule(_localctx, 44, urlParser::RuleLoginPassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(urlParser::COL);
    setState(192);
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

tree::TerminalNode* urlParser::PasswordContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::PasswordContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::PasswordContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
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
  enterRule(_localctx, 46, urlParser::RulePassword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(194);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(195);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(196);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(197);
        match(urlParser::DIGITS);
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
  enterRule(_localctx, 48, urlParser::RuleFrag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(urlParser::HASH);
    setState(201);
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

tree::TerminalNode* urlParser::FragStringContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::FragStringContext::STRING() {
  return getToken(urlParser::STRING, 0);
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
  enterRule(_localctx, 50, urlParser::RuleFragString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(203);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(204);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(205);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(206);
        match(urlParser::DIGITS);
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
  enterRule(_localctx, 52, urlParser::RuleQuery);
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
    setState(209);
    match(urlParser::Q);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 114) != 0)) {
      setState(210);
      search();
    }
   
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
  enterRule(_localctx, 54, urlParser::RuleSearch);
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
    setState(213);
    searchParameter();
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == urlParser::AMP) {
      setState(214);
      multiSearch();
      setState(219);
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
  enterRule(_localctx, 56, urlParser::RuleMultiSearch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(urlParser::AMP);
    setState(221);
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

tree::TerminalNode* urlParser::SearchParameterContext::EQ() {
  return getToken(urlParser::EQ, 0);
}

std::vector<urlParser::SearchParameterValueContext *> urlParser::SearchParameterContext::searchParameterValue() {
  return getRuleContexts<urlParser::SearchParameterValueContext>();
}

urlParser::SearchParameterValueContext* urlParser::SearchParameterContext::searchParameterValue(size_t i) {
  return getRuleContext<urlParser::SearchParameterValueContext>(i);
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
  enterRule(_localctx, 58, urlParser::RuleSearchParameter);
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
    setState(223);
    searchParameterKey();
    setState(224);
    match(urlParser::EQ);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17010) != 0)) {
      setState(225);
      searchParameterValue();
      setState(230);
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

//----------------- SearchParameterKeyContext ------------------------------------------------------------------

urlParser::SearchParameterKeyContext::SearchParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::SearchParameterKeyContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

tree::TerminalNode* urlParser::SearchParameterKeyContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::SearchParameterKeyContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::SearchParameterKeyContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
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
  enterRule(_localctx, 60, urlParser::RuleSearchParameterKey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(231);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(232);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(233);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(234);
        match(urlParser::DIGITS);
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

urlParser::ParameterStringContext* urlParser::SearchParameterValueContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

tree::TerminalNode* urlParser::SearchParameterValueContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::SearchParameterValueContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::SearchParameterValueContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
}

std::vector<tree::TerminalNode *> urlParser::SearchParameterValueContext::HEX() {
  return getTokens(urlParser::HEX);
}

tree::TerminalNode* urlParser::SearchParameterValueContext::HEX(size_t i) {
  return getToken(urlParser::HEX, i);
}

tree::TerminalNode* urlParser::SearchParameterValueContext::COL() {
  return getToken(urlParser::COL, 0);
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
  enterRule(_localctx, 62, urlParser::RuleSearchParameterValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(247);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(237);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(238);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(239);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(240);
        match(urlParser::DIGITS);
        break;
      }

      case urlParser::HEX: {
        enterOuterAlt(_localctx, 5);
        setState(242); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(241);
                  match(urlParser::HEX);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(244); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case urlParser::COL: {
        enterOuterAlt(_localctx, 6);
        setState(246);
        match(urlParser::COL);
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
  enterRule(_localctx, 64, urlParser::RuleParameterString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(urlParser::DBL_DOLLAR);
    setState(250);
    parameterName();
    setState(251);
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

tree::TerminalNode* urlParser::ParameterNameContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::ParameterNameContext::STRING() {
  return getToken(urlParser::STRING, 0);
}

tree::TerminalNode* urlParser::ParameterNameContext::DIGITS() {
  return getToken(urlParser::DIGITS, 0);
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
  enterRule(_localctx, 66, urlParser::RuleParameterName);
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
    setState(253);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 112) != 0))) {
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

//----------------- ConfigParamContext ------------------------------------------------------------------

urlParser::ConfigParamContext::ConfigParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

urlParser::ParameterStringContext* urlParser::ConfigParamContext::parameterString() {
  return getRuleContext<urlParser::ParameterStringContext>(0);
}

tree::TerminalNode* urlParser::ConfigParamContext::BASIC_STRING() {
  return getToken(urlParser::BASIC_STRING, 0);
}

tree::TerminalNode* urlParser::ConfigParamContext::STRING() {
  return getToken(urlParser::STRING, 0);
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
  enterRule(_localctx, 68, urlParser::RuleConfigParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case urlParser::DBL_DOLLAR: {
        enterOuterAlt(_localctx, 1);
        setState(255);
        parameterString();
        break;
      }

      case urlParser::BASIC_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(256);
        match(urlParser::BASIC_STRING);
        break;
      }

      case urlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(257);
        match(urlParser::STRING);
        break;
      }

      case urlParser::DIGITS: {
        enterOuterAlt(_localctx, 4);
        setState(258);
        match(urlParser::DIGITS);
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

void urlParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  urlParserInitialize();
#else
  ::antlr4::internal::call_once(urlParserOnceFlag, urlParserInitialize);
#endif
}
