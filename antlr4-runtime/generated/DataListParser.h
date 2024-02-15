
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  DataListParser : public antlr4::Parser {
public:
  enum {
    SOURCE = 1, LAST_UPDATED = 2, START_LIST = 3, END_LIST = 4, STATIC_SOURCE = 5, 
    DBL_DOLLAR = 6, DBL_COL = 7, WS = 8, BASIC_STRING = 9, STRING = 10, 
    DIGITS = 11, ALPHANUM = 12, ALPHA = 13, HEX = 14, SINGLE_DIGIT_INT = 15, 
    ZERO = 16, PERIOD = 17, EQ = 18, COL = 19, HASH = 20, SPACE = 21, DOLLAR = 22, 
    FS = 23, US = 24, PLUS = 25, HYPH = 26, PERC = 27, LBRACKET = 28, RBRACKET = 29, 
    AMP = 30, AT = 31, Q = 32
  };

  enum {
    RuleDlist = 0, RuleDataList = 1, RuleSource = 2, RuleLastUpdated = 3, 
    RuleDateTime = 4, RuleYear = 5, RuleMonth = 6, RuleDay = 7, RuleHour = 8, 
    RuleMinute = 9, RuleSecond = 10, RuleTimeZone = 11, RuleTzMod = 12, 
    RuleTzHour = 13, RuleTzMinutes = 14, RuleStartList = 15, RuleListId = 16, 
    RuleListItem = 17, RuleListItemContent = 18, RuleNumericalListItemContent = 19, 
    RuleComplexListItemContent = 20, RuleDataListString = 21, RuleEndList = 22, 
    RuleUrl = 23, RuleUri = 24, RuleUriPort = 25, RuleUriPath = 26, RuleScheme = 27, 
    RuleSchemeSeparator = 28, RuleUriSchemePrefix = 29, RuleUriScheme = 30, 
    RuleHost = 31, RuleHostname = 32, RuleDomainNameOrIpv4Host = 33, RuleIpv6Host = 34, 
    RuleV6host = 35, RuleV6hostSegment = 36, RuleV6hostSep = 37, RuleV6hostConfigParam = 38, 
    RulePort = 39, RulePath = 40, RuleMultiPathChunk = 41, RulePathString = 42, 
    RuleLogin = 43, RuleUser = 44, RuleLoginPassword = 45, RulePassword = 46, 
    RuleFrag = 47, RuleFragString = 48, RuleQuery = 49, RuleSearch = 50, 
    RuleMultiSearch = 51, RuleSearchParameter = 52, RuleSearchParameterKey = 53, 
    RuleSearchParameterValue = 54, RuleParameterString = 55, RuleParameterName = 56, 
    RuleConfigParam = 57
  };

  explicit DataListParser(antlr4::TokenStream *input);

  DataListParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~DataListParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class DlistContext;
  class DataListContext;
  class SourceContext;
  class LastUpdatedContext;
  class DateTimeContext;
  class YearContext;
  class MonthContext;
  class DayContext;
  class HourContext;
  class MinuteContext;
  class SecondContext;
  class TimeZoneContext;
  class TzModContext;
  class TzHourContext;
  class TzMinutesContext;
  class StartListContext;
  class ListIdContext;
  class ListItemContext;
  class ListItemContentContext;
  class NumericalListItemContentContext;
  class ComplexListItemContentContext;
  class DataListStringContext;
  class EndListContext;
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

  class  DlistContext : public antlr4::ParserRuleContext {
  public:
    DlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LastUpdatedContext *lastUpdated();
    antlr4::tree::TerminalNode *EOF();
    std::vector<SourceContext *> source();
    SourceContext* source(size_t i);
    std::vector<DataListContext *> dataList();
    DataListContext* dataList(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DlistContext* dlist();

  class  DataListContext : public antlr4::ParserRuleContext {
  public:
    DataListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartListContext *startList();
    EndListContext *endList();
    std::vector<ListItemContext *> listItem();
    ListItemContext* listItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataListContext* dataList();

  class  SourceContext : public antlr4::ParserRuleContext {
  public:
    SourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *STATIC_SOURCE();
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceContext* source();

  class  LastUpdatedContext : public antlr4::ParserRuleContext {
  public:
    LastUpdatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAST_UPDATED();
    antlr4::tree::TerminalNode *EQ();
    DateTimeContext *dateTime();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LastUpdatedContext* lastUpdated();

  class  DateTimeContext : public antlr4::ParserRuleContext {
  public:
    DateTimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    YearContext *year();
    std::vector<antlr4::tree::TerminalNode *> HYPH();
    antlr4::tree::TerminalNode* HYPH(size_t i);
    MonthContext *month();
    DayContext *day();
    antlr4::tree::TerminalNode *SPACE();
    HourContext *hour();
    std::vector<antlr4::tree::TerminalNode *> COL();
    antlr4::tree::TerminalNode* COL(size_t i);
    MinuteContext *minute();
    TimeZoneContext *timeZone();
    SecondContext *second();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateTimeContext* dateTime();

  class  YearContext : public antlr4::ParserRuleContext {
  public:
    YearContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  YearContext* year();

  class  MonthContext : public antlr4::ParserRuleContext {
  public:
    MonthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MonthContext* month();

  class  DayContext : public antlr4::ParserRuleContext {
  public:
    DayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DayContext* day();

  class  HourContext : public antlr4::ParserRuleContext {
  public:
    HourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HourContext* hour();

  class  MinuteContext : public antlr4::ParserRuleContext {
  public:
    MinuteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MinuteContext* minute();

  class  SecondContext : public antlr4::ParserRuleContext {
  public:
    SecondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SecondContext* second();

  class  TimeZoneContext : public antlr4::ParserRuleContext {
  public:
    TimeZoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TzModContext *tzMod();
    TzHourContext *tzHour();
    antlr4::tree::TerminalNode *COL();
    TzMinutesContext *tzMinutes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeZoneContext* timeZone();

  class  TzModContext : public antlr4::ParserRuleContext {
  public:
    TzModContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *HYPH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TzModContext* tzMod();

  class  TzHourContext : public antlr4::ParserRuleContext {
  public:
    TzHourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TzHourContext* tzHour();

  class  TzMinutesContext : public antlr4::ParserRuleContext {
  public:
    TzMinutesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TzMinutesContext* tzMinutes();

  class  StartListContext : public antlr4::ParserRuleContext {
  public:
    StartListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_LIST();
    ListIdContext *listId();
    antlr4::tree::TerminalNode *WS();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartListContext* startList();

  class  ListIdContext : public antlr4::ParserRuleContext {
  public:
    ListIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOURCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListIdContext* listId();

  class  ListItemContext : public antlr4::ParserRuleContext {
  public:
    ListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ListItemContentContext *listItemContent();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListItemContext* listItem();

  class  ListItemContentContext : public antlr4::ParserRuleContext {
  public:
    ListItemContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericalListItemContentContext *numericalListItemContent();
    ComplexListItemContentContext *complexListItemContent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListItemContentContext* listItemContent();

  class  NumericalListItemContentContext : public antlr4::ParserRuleContext {
  public:
    NumericalListItemContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGITS();
    antlr4::tree::TerminalNode* DIGITS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericalListItemContentContext* numericalListItemContent();

  class  ComplexListItemContentContext : public antlr4::ParserRuleContext {
  public:
    ComplexListItemContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DataListStringContext *> dataListString();
    DataListStringContext* dataListString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexListItemContentContext* complexListItemContent();

  class  DataListStringContext : public antlr4::ParserRuleContext {
  public:
    DataListStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataListStringContext* dataListString();

  class  EndListContext : public antlr4::ParserRuleContext {
  public:
    EndListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END_LIST();
    ListIdContext *listId();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndListContext* endList();

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
