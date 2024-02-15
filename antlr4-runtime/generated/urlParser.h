
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  urlParser : public antlr4::Parser {
public:
  enum {
    DBL_DOLLAR = 1, DBL_COL = 2, WS = 3, BASIC_STRING = 4, STRING = 5, DIGITS = 6, 
    ALPHANUM = 7, ALPHA = 8, HEX = 9, SINGLE_DIGIT_INT = 10, ZERO = 11, 
    PERIOD = 12, EQ = 13, COL = 14, HASH = 15, SPACE = 16, DOLLAR = 17, 
    FS = 18, US = 19, PLUS = 20, HYPH = 21, PERC = 22, LBRACKET = 23, RBRACKET = 24, 
    AMP = 25, AT = 26, Q = 27
  };

  enum {
    RuleUrl = 0, RuleUri = 1, RuleUriPort = 2, RuleUriPath = 3, RuleScheme = 4, 
    RuleSchemeSeparator = 5, RuleUriSchemePrefix = 6, RuleUriScheme = 7, 
    RuleHost = 8, RuleHostname = 9, RuleDomainNameOrIpv4Host = 10, RuleIpv6Host = 11, 
    RuleV6host = 12, RuleV6hostSegment = 13, RuleV6hostSep = 14, RuleV6hostConfigParam = 15, 
    RulePort = 16, RulePath = 17, RuleMultiPathChunk = 18, RulePathString = 19, 
    RuleLogin = 20, RuleUser = 21, RuleLoginPassword = 22, RulePassword = 23, 
    RuleFrag = 24, RuleFragString = 25, RuleQuery = 26, RuleSearch = 27, 
    RuleMultiSearch = 28, RuleSearchParameter = 29, RuleSearchParameterKey = 30, 
    RuleSearchParameterValue = 31, RuleParameterString = 32, RuleParameterName = 33, 
    RuleConfigParam = 34
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
  class SchemeSeparatorContext;
  class UriSchemePrefixContext;
  class UriSchemeContext;
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
  class LoginContext;
  class UserContext;
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
  class ParameterStringContext;
  class ParameterNameContext;
  class ConfigParamContext; 

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
    SchemeSeparatorContext *schemeSeparator();
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
    UriSchemeContext *uriScheme();
    UriSchemePrefixContext *uriSchemePrefix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemeContext* scheme();

  class  SchemeSeparatorContext : public antlr4::ParserRuleContext {
  public:
    SchemeSeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COL();
    std::vector<antlr4::tree::TerminalNode *> FS();
    antlr4::tree::TerminalNode* FS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemeSeparatorContext* schemeSeparator();

  class  UriSchemePrefixContext : public antlr4::ParserRuleContext {
  public:
    UriSchemePrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UriSchemePrefixContext* uriSchemePrefix();

  class  UriSchemeContext : public antlr4::ParserRuleContext {
  public:
    UriSchemeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UriSchemeContext* uriScheme();

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

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
    std::vector<PathStringContext *> pathString();
    PathStringContext* pathString(size_t i);
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
    std::vector<PathStringContext *> pathString();
    PathStringContext* pathString(size_t i);

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *HYPH();
    antlr4::tree::TerminalNode *US();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathStringContext* pathString();

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

  class  UserContext : public antlr4::ParserRuleContext {
  public:
    UserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserContext* user();

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
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
    antlr4::tree::TerminalNode *EQ();
    std::vector<SearchParameterValueContext *> searchParameterValue();
    SearchParameterValueContext* searchParameterValue(size_t i);

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchParameterKeyContext* searchParameterKey();

  class  SearchParameterValueContext : public antlr4::ParserRuleContext {
  public:
    SearchParameterValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterStringContext *parameterString();
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();
    std::vector<antlr4::tree::TerminalNode *> HEX();
    antlr4::tree::TerminalNode* HEX(size_t i);
    antlr4::tree::TerminalNode *COL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchParameterValueContext* searchParameterValue();

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

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
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConfigParamContext* configParam();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpp
