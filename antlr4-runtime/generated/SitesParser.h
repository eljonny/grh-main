
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/Sites.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  SitesParser : public antlr4::Parser {
public:
  enum {
    ANY = 1, TEXT = 2, CALL = 3, CHAT = 4, TEST = 5, CALL_LIST = 6, LITERATURE = 7, 
    READING = 8, STORE = 9, BULLETIN = 10, US_IN_PERSON = 11, INTL_IN_PERSON = 12, 
    ALL_IN_PERSON = 13, CA_IN_PERSON = 14, VIRTUAL = 15, PHONE = 16, MEETINGS = 17, 
    FELLOWSHIP = 18, ORGANIZATION = 19, RESOURCE = 20, GRAVE = 21, DQUOTE = 22, 
    COMMA = 23, DBL_DOLLAR = 24, DBL_COL = 25, WS = 26, BASIC_STRING = 27, 
    STRING = 28, DIGITS = 29, ALPHANUM = 30, ALPHA = 31, HEX = 32, SINGLE_DIGIT_INT = 33, 
    ZERO = 34, PERIOD = 35, EQ = 36, COL = 37, HASH = 38, SPACE = 39, DOLLAR = 40, 
    FS = 41, US = 42, PLUS = 43, HYPH = 44, PERC = 45, LBRACKET = 46, RBRACKET = 47, 
    AMP = 48, AT = 49, Q = 50, LPAREN = 51, RPAREN = 52
  };

  enum {
    RuleSites = 0, RuleSitesList = 1, RuleSiteListEntry = 2, RuleComment = 3, 
    RuleCommentTextFragment = 4, RuleSiteFormat = 5, RuleSiteType = 6, RuleSiteDetailFormat = 7, 
    RuleSiteFormatElement = 8, RuleSiteFormatId = 9, RuleOptionalDataElement = 10, 
    RuleOptionalSiteFormatId = 11, RuleSite = 12, RuleSiteDetail = 13, RuleMeetings = 14, 
    RuleFellowshipId = 15, RuleMeetingLocationType = 16, RuleMeetingsDataUrl = 17, 
    RuleFellowship = 18, RuleFellowshipName = 19, RuleFellowshipUrl = 20, 
    RuleOrganization = 21, RuleOrganizationId = 22, RuleOrganizationName = 23, 
    RuleOrganizationUrl = 24, RuleResource = 25, RuleResourceEntityId = 26, 
    RuleResourceType = 27, RuleResourceDataPrimary = 28, RuleResourceTextNumber = 29, 
    RuleResourcePhoneNumber = 30, RuleResourceUrl = 31, RuleResourceOptional = 32, 
    RuleResourceDataContext = 33, RuleResourceDataContextSpecifier = 34, 
    RuleEntityId = 35, RuleEntityIdSegment = 36, RuleEntityName = 37, RuleEntityNameSegment = 38, 
    RuleUrl = 39, RuleUri = 40, RuleUriPort = 41, RuleUriPath = 42, RuleScheme = 43, 
    RuleSchemeSeparator = 44, RuleUriSchemePrefix = 45, RuleUriScheme = 46, 
    RuleHost = 47, RuleHostname = 48, RuleDomainNameOrIpv4Host = 49, RuleIpv6Host = 50, 
    RuleV6host = 51, RuleV6hostSegment = 52, RuleV6hostSep = 53, RuleV6hostConfigParam = 54, 
    RulePort = 55, RulePath = 56, RuleMultiPathChunk = 57, RulePathString = 58, 
    RuleLogin = 59, RuleUser = 60, RuleLoginPassword = 61, RulePassword = 62, 
    RuleFrag = 63, RuleFragString = 64, RuleQuery = 65, RuleSearch = 66, 
    RuleMultiSearch = 67, RuleSearchParameter = 68, RuleSearchParameterKey = 69, 
    RuleSearchParameterValue = 70, RuleParameterString = 71, RuleParameterName = 72, 
    RuleConfigParam = 73, RulePhone = 74, RuleCountryCode = 75, RuleAreaCode = 76, 
    RulePhoneNumber = 77, RuleLocalPhone = 78, RuleLocalArea = 79, RuleLocalizer = 80, 
    RuleDtmf = 81, RuleDtmfWithLocal = 82, RuleLocalAreaWithDtmf = 83, RuleDtmfAll = 84, 
    RuleDtmfLocalizer = 85, RulePhoneSep = 86
  };

  explicit SitesParser(antlr4::TokenStream *input);

  SitesParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SitesParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SitesContext;
  class SitesListContext;
  class SiteListEntryContext;
  class CommentContext;
  class CommentTextFragmentContext;
  class SiteFormatContext;
  class SiteTypeContext;
  class SiteDetailFormatContext;
  class SiteFormatElementContext;
  class SiteFormatIdContext;
  class OptionalDataElementContext;
  class OptionalSiteFormatIdContext;
  class SiteContext;
  class SiteDetailContext;
  class MeetingsContext;
  class FellowshipIdContext;
  class MeetingLocationTypeContext;
  class MeetingsDataUrlContext;
  class FellowshipContext;
  class FellowshipNameContext;
  class FellowshipUrlContext;
  class OrganizationContext;
  class OrganizationIdContext;
  class OrganizationNameContext;
  class OrganizationUrlContext;
  class ResourceContext;
  class ResourceEntityIdContext;
  class ResourceTypeContext;
  class ResourceDataPrimaryContext;
  class ResourceTextNumberContext;
  class ResourcePhoneNumberContext;
  class ResourceUrlContext;
  class ResourceOptionalContext;
  class ResourceDataContextContext;
  class ResourceDataContextSpecifierContext;
  class EntityIdContext;
  class EntityIdSegmentContext;
  class EntityNameContext;
  class EntityNameSegmentContext;
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
  class PhoneContext;
  class CountryCodeContext;
  class AreaCodeContext;
  class PhoneNumberContext;
  class LocalPhoneContext;
  class LocalAreaContext;
  class LocalizerContext;
  class DtmfContext;
  class DtmfWithLocalContext;
  class LocalAreaWithDtmfContext;
  class DtmfAllContext;
  class DtmfLocalizerContext;
  class PhoneSepContext; 

  class  SitesContext : public antlr4::ParserRuleContext {
  public:
    SitesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SitesListContext *sitesList();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SitesContext* sites();

  class  SitesListContext : public antlr4::ParserRuleContext {
  public:
    SitesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SiteListEntryContext *> siteListEntry();
    SiteListEntryContext* siteListEntry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SitesListContext* sitesList();

  class  SiteListEntryContext : public antlr4::ParserRuleContext {
  public:
    SiteListEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    SiteContext *site();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteListEntryContext* siteListEntry();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *WS();
    std::vector<CommentTextFragmentContext *> commentTextFragment();
    CommentTextFragmentContext* commentTextFragment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  CommentTextFragmentContext : public antlr4::ParserRuleContext {
  public:
    CommentTextFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *GRAVE();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *DBL_DOLLAR();
    antlr4::tree::TerminalNode *HYPH();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *COL();
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *FS();
    antlr4::tree::TerminalNode *DQUOTE();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *MEETINGS();
    antlr4::tree::TerminalNode *FELLOWSHIP();
    antlr4::tree::TerminalNode *ORGANIZATION();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CHAT();
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *CALL_LIST();
    antlr4::tree::TerminalNode *LITERATURE();
    antlr4::tree::TerminalNode *READING();
    antlr4::tree::TerminalNode *STORE();
    antlr4::tree::TerminalNode *BULLETIN();
    antlr4::tree::TerminalNode *US_IN_PERSON();
    antlr4::tree::TerminalNode *INTL_IN_PERSON();
    antlr4::tree::TerminalNode *ALL_IN_PERSON();
    antlr4::tree::TerminalNode *CA_IN_PERSON();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *PHONE();
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *Q();
    SiteFormatContext *siteFormat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentTextFragmentContext* commentTextFragment();

  class  SiteFormatContext : public antlr4::ParserRuleContext {
  public:
    SiteFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRAVE();
    antlr4::tree::TerminalNode* GRAVE(size_t i);
    SiteTypeContext *siteType();
    SiteDetailFormatContext *siteDetailFormat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteFormatContext* siteFormat();

  class  SiteTypeContext : public antlr4::ParserRuleContext {
  public:
    SiteTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MEETINGS();
    antlr4::tree::TerminalNode *FELLOWSHIP();
    antlr4::tree::TerminalNode *ORGANIZATION();
    antlr4::tree::TerminalNode *RESOURCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteTypeContext* siteType();

  class  SiteDetailFormatContext : public antlr4::ParserRuleContext {
  public:
    SiteDetailFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SiteFormatElementContext *> siteFormatElement();
    SiteFormatElementContext* siteFormatElement(size_t i);
    std::vector<OptionalDataElementContext *> optionalDataElement();
    OptionalDataElementContext* optionalDataElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteDetailFormatContext* siteDetailFormat();

  class  SiteFormatElementContext : public antlr4::ParserRuleContext {
  public:
    SiteFormatElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    SiteFormatIdContext *siteFormatId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteFormatElementContext* siteFormatElement();

  class  SiteFormatIdContext : public antlr4::ParserRuleContext {
  public:
    SiteFormatIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteFormatIdContext* siteFormatId();

  class  OptionalDataElementContext : public antlr4::ParserRuleContext {
  public:
    OptionalDataElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *COMMA();
    OptionalSiteFormatIdContext *optionalSiteFormatId();
    antlr4::tree::TerminalNode *RBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalDataElementContext* optionalDataElement();

  class  OptionalSiteFormatIdContext : public antlr4::ParserRuleContext {
  public:
    OptionalSiteFormatIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SiteFormatIdContext *siteFormatId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalSiteFormatIdContext* optionalSiteFormatId();

  class  SiteContext : public antlr4::ParserRuleContext {
  public:
    SiteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SiteDetailContext *siteDetail();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteContext* site();

  class  SiteDetailContext : public antlr4::ParserRuleContext {
  public:
    SiteDetailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeetingsContext *meetings();
    FellowshipContext *fellowship();
    OrganizationContext *organization();
    ResourceContext *resource();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiteDetailContext* siteDetail();

  class  MeetingsContext : public antlr4::ParserRuleContext {
  public:
    MeetingsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MEETINGS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    FellowshipIdContext *fellowshipId();
    MeetingLocationTypeContext *meetingLocationType();
    MeetingsDataUrlContext *meetingsDataUrl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeetingsContext* meetings();

  class  FellowshipIdContext : public antlr4::ParserRuleContext {
  public:
    FellowshipIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EntityIdContext *entityId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FellowshipIdContext* fellowshipId();

  class  MeetingLocationTypeContext : public antlr4::ParserRuleContext {
  public:
    MeetingLocationTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *US_IN_PERSON();
    antlr4::tree::TerminalNode *INTL_IN_PERSON();
    antlr4::tree::TerminalNode *ALL_IN_PERSON();
    antlr4::tree::TerminalNode *CA_IN_PERSON();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *PHONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeetingLocationTypeContext* meetingLocationType();

  class  MeetingsDataUrlContext : public antlr4::ParserRuleContext {
  public:
    MeetingsDataUrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeetingsDataUrlContext* meetingsDataUrl();

  class  FellowshipContext : public antlr4::ParserRuleContext {
  public:
    FellowshipContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FELLOWSHIP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    FellowshipIdContext *fellowshipId();
    FellowshipNameContext *fellowshipName();
    FellowshipUrlContext *fellowshipUrl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FellowshipContext* fellowship();

  class  FellowshipNameContext : public antlr4::ParserRuleContext {
  public:
    FellowshipNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EntityNameContext *entityName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FellowshipNameContext* fellowshipName();

  class  FellowshipUrlContext : public antlr4::ParserRuleContext {
  public:
    FellowshipUrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FellowshipUrlContext* fellowshipUrl();

  class  OrganizationContext : public antlr4::ParserRuleContext {
  public:
    OrganizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORGANIZATION();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    OrganizationIdContext *organizationId();
    OrganizationNameContext *organizationName();
    OrganizationUrlContext *organizationUrl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrganizationContext* organization();

  class  OrganizationIdContext : public antlr4::ParserRuleContext {
  public:
    OrganizationIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EntityIdContext *entityId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrganizationIdContext* organizationId();

  class  OrganizationNameContext : public antlr4::ParserRuleContext {
  public:
    OrganizationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EntityNameContext *entityName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrganizationNameContext* organizationName();

  class  OrganizationUrlContext : public antlr4::ParserRuleContext {
  public:
    OrganizationUrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrganizationUrlContext* organizationUrl();

  class  ResourceContext : public antlr4::ParserRuleContext {
  public:
    ResourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESOURCE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ResourceEntityIdContext *resourceEntityId();
    ResourceTypeContext *resourceType();
    ResourceDataPrimaryContext *resourceDataPrimary();
    ResourceOptionalContext *resourceOptional();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceContext* resource();

  class  ResourceEntityIdContext : public antlr4::ParserRuleContext {
  public:
    ResourceEntityIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FellowshipIdContext *fellowshipId();
    OrganizationIdContext *organizationId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceEntityIdContext* resourceEntityId();

  class  ResourceTypeContext : public antlr4::ParserRuleContext {
  public:
    ResourceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CHAT();
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *CALL_LIST();
    antlr4::tree::TerminalNode *LITERATURE();
    antlr4::tree::TerminalNode *READING();
    antlr4::tree::TerminalNode *STORE();
    antlr4::tree::TerminalNode *BULLETIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceTypeContext* resourceType();

  class  ResourceDataPrimaryContext : public antlr4::ParserRuleContext {
  public:
    ResourceDataPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResourceTextNumberContext *resourceTextNumber();
    ResourcePhoneNumberContext *resourcePhoneNumber();
    ResourceUrlContext *resourceUrl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceDataPrimaryContext* resourceDataPrimary();

  class  ResourceTextNumberContext : public antlr4::ParserRuleContext {
  public:
    ResourceTextNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGITS();
    antlr4::tree::TerminalNode* DIGITS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASIC_STRING();
    antlr4::tree::TerminalNode* BASIC_STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceTextNumberContext* resourceTextNumber();

  class  ResourcePhoneNumberContext : public antlr4::ParserRuleContext {
  public:
    ResourcePhoneNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PhoneContext *phone();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourcePhoneNumberContext* resourcePhoneNumber();

  class  ResourceUrlContext : public antlr4::ParserRuleContext {
  public:
    ResourceUrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UrlContext *url();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceUrlContext* resourceUrl();

  class  ResourceOptionalContext : public antlr4::ParserRuleContext {
  public:
    ResourceOptionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ResourceDataContextContext *resourceDataContext();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceOptionalContext* resourceOptional();

  class  ResourceDataContextContext : public antlr4::ParserRuleContext {
  public:
    ResourceDataContextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANY();
    ResourceDataContextSpecifierContext *resourceDataContextSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceDataContextContext* resourceDataContext();

  class  ResourceDataContextSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ResourceDataContextSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceDataContextSpecifierContext* resourceDataContextSpecifier();

  class  EntityIdContext : public antlr4::ParserRuleContext {
  public:
    EntityIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EntityIdSegmentContext *> entityIdSegment();
    EntityIdSegmentContext* entityIdSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntityIdContext* entityId();

  class  EntityIdSegmentContext : public antlr4::ParserRuleContext {
  public:
    EntityIdSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *HYPH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntityIdSegmentContext* entityIdSegment();

  class  EntityNameContext : public antlr4::ParserRuleContext {
  public:
    EntityNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    std::vector<EntityNameSegmentContext *> entityNameSegment();
    EntityNameSegmentContext* entityNameSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntityNameContext* entityName();

  class  EntityNameSegmentContext : public antlr4::ParserRuleContext {
  public:
    EntityNameSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *BASIC_STRING();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *HYPH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntityNameSegmentContext* entityNameSegment();

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

  class  PhoneContext : public antlr4::ParserRuleContext {
  public:
    PhoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CountryCodeContext *countryCode();
    std::vector<PhoneSepContext *> phoneSep();
    PhoneSepContext* phoneSep(size_t i);
    AreaCodeContext *areaCode();
    PhoneNumberContext *phoneNumber();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhoneContext* phone();

  class  CountryCodeContext : public antlr4::ParserRuleContext {
  public:
    CountryCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CountryCodeContext* countryCode();

  class  AreaCodeContext : public antlr4::ParserRuleContext {
  public:
    AreaCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AreaCodeContext* areaCode();

  class  PhoneNumberContext : public antlr4::ParserRuleContext {
  public:
    PhoneNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalPhoneContext *localPhone();
    DtmfContext *dtmf();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhoneNumberContext* phoneNumber();

  class  LocalPhoneContext : public antlr4::ParserRuleContext {
  public:
    LocalPhoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalAreaContext *localArea();
    PhoneSepContext *phoneSep();
    LocalizerContext *localizer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalPhoneContext* localPhone();

  class  LocalAreaContext : public antlr4::ParserRuleContext {
  public:
    LocalAreaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalAreaContext* localArea();

  class  LocalizerContext : public antlr4::ParserRuleContext {
  public:
    LocalizerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalizerContext* localizer();

  class  DtmfContext : public antlr4::ParserRuleContext {
  public:
    DtmfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DtmfWithLocalContext *dtmfWithLocal();
    DtmfAllContext *dtmfAll();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfContext* dtmf();

  class  DtmfWithLocalContext : public antlr4::ParserRuleContext {
  public:
    DtmfWithLocalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalAreaWithDtmfContext *localAreaWithDtmf();
    DtmfLocalizerContext *dtmfLocalizer();
    PhoneSepContext *phoneSep();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfWithLocalContext* dtmfWithLocal();

  class  LocalAreaWithDtmfContext : public antlr4::ParserRuleContext {
  public:
    LocalAreaWithDtmfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGITS();
    antlr4::tree::TerminalNode* DIGITS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASIC_STRING();
    antlr4::tree::TerminalNode* BASIC_STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalAreaWithDtmfContext* localAreaWithDtmf();

  class  DtmfAllContext : public antlr4::ParserRuleContext {
  public:
    DtmfAllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfAllContext* dtmfAll();

  class  DtmfLocalizerContext : public antlr4::ParserRuleContext {
  public:
    DtmfLocalizerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfLocalizerContext* dtmfLocalizer();

  class  PhoneSepContext : public antlr4::ParserRuleContext {
  public:
    PhoneSepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *HYPH();
    antlr4::tree::TerminalNode *PERIOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhoneSepContext* phoneSep();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpp
