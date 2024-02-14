
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  urlParser : public antlr4::Parser {
public:
  enum {
    SCHEME_SEP = 1, DBL_DOLLAR = 2, DBL_COL = 3, AMP = 4, AT = 5, LBRACKET = 6, 
    RBRACKET = 7, Q = 8, WS = 9, STRING = 10, ALPHANUM = 11, ALPHA = 12, 
    HEX = 13, HEX_ALPHA = 14, DIGITS = 15, SINGLE_DIGIT_INT = 16, ZERO = 17, 
    EQ = 18, COL = 19, HASH = 20, SPACE = 21, DOLLAR = 22, FS = 23, US = 24, 
    PLUS = 25, HYPH = 26, PERC = 27
  };

  enum {
    RuleUrl = 0, RuleUri = 1, RuleUriPort = 2, RuleUriPath = 3, RuleScheme = 4, 
    RuleHost = 5, RuleHostname = 6, RuleDomainNameOrIpv4Host = 7, RuleIpv6Host = 8, 
    RuleV6host = 9, RuleV6hostSegment = 10, RuleV6hostSep = 11, RuleV6hostConfigParam = 12, 
    RulePort = 13, RulePath = 14, RuleMultiPathChunk = 15, RulePathString = 16, 
    RuleUser = 17, RuleLogin = 18, RuleLoginPassword = 19, RulePassword = 20, 
    RuleFrag = 21, RuleFragString = 22, RuleQuery = 23, RuleSearch = 24, 
    RuleMultiSearch = 25, RuleSearchParameter = 26, RuleSearchParameterKey = 27, 
    RuleSearchParameterValue = 28, RuleSearchParameterValueString = 29, 
    RuleParameterString = 30, RuleParameterName = 31, RuleConfigParam = 32, 
    RuleString = 33, RuleUsString = 34
  };

  explicit urlParser(antlr4::TokenStream *input);

  urlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~urlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class UrlContext;
  class UriContext;
  class UriPortContext;
  class UriPathContext;
  class SchemeContext;
  class HostContext;
  class HostnameContext;
  class DomainNameOrIpv4HostContext;
  class Ipv6HostContext;
  class V6hostContext;
  class V6hostSegmentContext;
  class V6hostSepContext;
  class V6hostConfigParamContext;
  class PortContext;
  class PathContext;
  class MultiPathChunkContext;
  class PathStringContext;
  class UserContext;
  class LoginContext;
  class LoginPasswordContext;
  class PasswordContext;
  class FragContext;
  class FragStringContext;
  class QueryContext;
  class SearchContext;
  class MultiSearchContext;
  class SearchParameterContext;
  class SearchParameterKeyContext;
  class SearchParameterValueContext;
  class SearchParameterValueStringContext;
  class ParameterStringContext;
  class ParameterNameContext;
  class ConfigParamContext;
  class StringContext;
  class UsStringContext; 

  class  UrlContext : public antlr4::ParserRuleContext {
  public:
    UrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UriContext *uri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UrlContext* url();

  class  UriContext : public antlr4::ParserRuleContext {
  public:
    UriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeContext *scheme();
    antlr4::tree::TerminalNode *SCHEME_SEP();
    HostContext *host();
    LoginContext *login();
    UriPortContext *uriPort();
    UriPathContext *uriPath();
    QueryContext *query();
    FragContext *frag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UriContext* uri();

  class  UriPortContext : public antlr4::ParserRuleContext {
  public:
    UriPortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COL();
    PortContext *port();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UriPortContext* uriPort();

  class  UriPathContext : public antlr4::ParserRuleContext {
  public:
    UriPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FS();
    PathContext *path();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UriPathContext* uriPath();

  class  SchemeContext : public antlr4::ParserRuleContext {
  public:
    SchemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemeContext* scheme();

  class  HostContext : public antlr4::ParserRuleContext {
  public:
    HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HostnameContext *hostname();
    antlr4::tree::TerminalNode *FS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HostContext* host();

  class  HostnameContext : public antlr4::ParserRuleContext {
  public:
    HostnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DomainNameOrIpv4HostContext *domainNameOrIpv4Host();
    Ipv6HostContext *ipv6Host();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HostnameContext* hostname();

  class  DomainNameOrIpv4HostContext : public antlr4::ParserRuleContext {
  public:
    DomainNameOrIpv4HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DomainNameOrIpv4HostContext* domainNameOrIpv4Host();

  class  Ipv6HostContext : public antlr4::ParserRuleContext {
  public:
    Ipv6HostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    V6hostContext *v6host();
    antlr4::tree::TerminalNode *RBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ipv6HostContext* ipv6Host();

  class  V6hostContext : public antlr4::ParserRuleContext {
  public:
    V6hostContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    V6hostConfigParamContext *v6hostConfigParam();
    antlr4::tree::TerminalNode *DBL_COL();
    std::vector<V6hostSegmentContext *> v6hostSegment();
    V6hostSegmentContext* v6hostSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  V6hostContext* v6host();

  class  V6hostSegmentContext : public antlr4::ParserRuleContext {
  public:
    V6hostSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    V6hostSepContext *v6hostSep();
    V6hostConfigParamContext *v6hostConfigParam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  V6hostSegmentContext* v6hostSegment();

  class  V6hostSepContext : public antlr4::ParserRuleContext {
  public:
    V6hostSepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COL();
    antlr4::tree::TerminalNode *DBL_COL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  V6hostSepContext* v6hostSep();

  class  V6hostConfigParamContext : public antlr4::ParserRuleContext {
  public:
    V6hostConfigParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConfigParamContext *configParam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  V6hostConfigParamContext* v6hostConfigParam();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  PathContext : public antlr4::ParserRuleContext {
  public:
    PathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathStringContext *pathString();
    std::vector<MultiPathChunkContext *> multiPathChunk();
    MultiPathChunkContext* multiPathChunk(size_t i);
    antlr4::tree::TerminalNode *FS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathContext* path();

  class  MultiPathChunkContext : public antlr4::ParserRuleContext {
  public:
    MultiPathChunkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FS();
    PathStringContext *pathString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiPathChunkContext* multiPathChunk();

  class  PathStringContext : public antlr4::ParserRuleContext {
  public:
    PathStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathStringContext* pathString();

  class  UserContext : public antlr4::ParserRuleContext {
  public:
    UserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserContext* user();

  class  LoginContext : public antlr4::ParserRuleContext {
  public:
    LoginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserContext *user();
    antlr4::tree::TerminalNode *AT();
    LoginPasswordContext *loginPassword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoginContext* login();

  class  LoginPasswordContext : public antlr4::ParserRuleContext {
  public:
    LoginPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COL();
    PasswordContext *password();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoginPasswordContext* loginPassword();

  class  PasswordContext : public antlr4::ParserRuleContext {
  public:
    PasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PasswordContext* password();

  class  FragContext : public antlr4::ParserRuleContext {
  public:
    FragContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    FragStringContext *fragString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FragContext* frag();

  class  FragStringContext : public antlr4::ParserRuleContext {
  public:
    FragStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FragStringContext* fragString();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Q();
    SearchContext *search();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  SearchContext : public antlr4::ParserRuleContext {
  public:
    SearchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SearchParameterContext *searchParameter();
    std::vector<MultiSearchContext *> multiSearch();
    MultiSearchContext* multiSearch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchContext* search();

  class  MultiSearchContext : public antlr4::ParserRuleContext {
  public:
    MultiSearchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMP();
    SearchParameterContext *searchParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiSearchContext* multiSearch();

  class  SearchParameterContext : public antlr4::ParserRuleContext {
  public:
    SearchParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SearchParameterKeyContext *searchParameterKey();
    SearchParameterValueContext *searchParameterValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchParameterContext* searchParameter();

  class  SearchParameterKeyContext : public antlr4::ParserRuleContext {
  public:
    SearchParameterKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchParameterKeyContext* searchParameterKey();

  class  SearchParameterValueContext : public antlr4::ParserRuleContext {
  public:
    SearchParameterValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    SearchParameterValueStringContext *searchParameterValueString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchParameterValueContext* searchParameterValue();

  class  SearchParameterValueStringContext : public antlr4::ParserRuleContext {
  public:
    SearchParameterValueStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *HEX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchParameterValueStringContext* searchParameterValueString();

  class  ParameterStringContext : public antlr4::ParserRuleContext {
  public:
    ParameterStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DBL_DOLLAR();
    antlr4::tree::TerminalNode* DBL_DOLLAR(size_t i);
    ParameterNameContext *parameterName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterStringContext* parameterString();

  class  ParameterNameContext : public antlr4::ParserRuleContext {
  public:
    ParameterNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    std::vector<UsStringContext *> usString();
    UsStringContext* usString(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterNameContext* parameterName();

  class  ConfigParamContext : public antlr4::ParserRuleContext {
  public:
    ConfigParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    StringContext *string();
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConfigParamContext* configParam();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  UsStringContext : public antlr4::ParserRuleContext {
  public:
    UsStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *US();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsStringContext* usString();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpp
