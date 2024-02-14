
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
    FELLOWSHIP = 18, ORGANIZATION = 19, RESOURCE = 20, GRAVE = 21, COMMA = 22, 
    SCHEME_SEP = 23, DBL_DOLLAR = 24, DBL_COL = 25, AMP = 26, AT = 27, LBRACKET = 28, 
    RBRACKET = 29, Q = 30, WS = 31, STRING = 32, ALPHANUM = 33, ALPHA = 34, 
    HEX = 35, HEX_ALPHA = 36, DIGITS = 37, SINGLE_DIGIT_INT = 38, ZERO = 39, 
    EQ = 40, COL = 41, HASH = 42, SPACE = 43, DOLLAR = 44, FS = 45, US = 46, 
    PLUS = 47, HYPH = 48, PERC = 49, LPAREN = 50, RPAREN = 51
  };

  enum {
    RuleSites = 0, RuleSitesList = 1, RuleSiteListEntry = 2, RuleComment = 3, 
    RuleCommentTextFragment = 4, RuleSite = 5, RuleSiteDetail = 6, RuleMeetings = 7, 
    RuleFellowshipId = 8, RuleMeetingLocationType = 9, RuleMeetingsDataUrl = 10, 
    RuleFellowship = 11, RuleFellowshipName = 12, RuleFellowshipUrl = 13, 
    RuleOrganization = 14, RuleOrganizationId = 15, RuleOrganizationName = 16, 
    RuleOrganizationUrl = 17, RuleResource = 18, RuleResourceEntityId = 19, 
    RuleResourceType = 20, RuleResourceDataPrimary = 21, RuleResourceTextNumber = 22, 
    RuleResourcePhoneNumber = 23, RuleResourceUrl = 24, RuleResourceOptional = 25, 
    RuleResourceDataContext = 26, RuleResourceDataContextSpecifier = 27, 
    RuleEntityId = 28, RuleEntityIdSegment = 29, RuleEntityName = 30, RuleEntityNameSegment = 31, 
    RuleUrl = 32, RuleUri = 33, RuleUriPort = 34, RuleUriPath = 35, RuleScheme = 36, 
    RuleHost = 37, RuleHostname = 38, RuleDomainNameOrIpv4Host = 39, RuleIpv6Host = 40, 
    RuleV6host = 41, RuleV6hostSegment = 42, RuleV6hostSep = 43, RuleV6hostConfigParam = 44, 
    RulePort = 45, RulePath = 46, RuleMultiPathChunk = 47, RulePathString = 48, 
    RuleUser = 49, RuleLogin = 50, RuleLoginPassword = 51, RulePassword = 52, 
    RuleFrag = 53, RuleFragString = 54, RuleQuery = 55, RuleSearch = 56, 
    RuleMultiSearch = 57, RuleSearchParameter = 58, RuleSearchParameterKey = 59, 
    RuleSearchParameterValue = 60, RuleSearchParameterValueString = 61, 
    RuleParameterString = 62, RuleParameterName = 63, RuleConfigParam = 64, 
    RuleString = 65, RuleUsString = 66, RulePhone = 67, RuleCountryCode = 68, 
    RuleAreaCode = 69, RulePhoneNumber = 70, RuleLocalPhone = 71, RuleLocalArea = 72, 
    RuleLocalizer = 73, RuleDtmf = 74, RuleDtmfWithLocal = 75, RuleLocalAreaWithDtmf = 76, 
    RuleDtmfAll = 77, RuleDtmfLocalizer = 78, RulePhoneSep = 79
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
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *GRAVE();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *COL();
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *FS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentTextFragmentContext* commentTextFragment();

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
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

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
    antlr4::tree::TerminalNode *ALPHA();
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
    antlr4::tree::TerminalNode *ALPHA();
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
    antlr4::tree::TerminalNode *ALPHA();
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

  class  PhoneContext : public antlr4::ParserRuleContext {
  public:
    PhoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CountryCodeContext *countryCode();
    std::vector<PhoneSepContext *> phoneSep();
    PhoneSepContext* phoneSep(size_t i);
    AreaCodeContext *areaCode();
    PhoneNumberContext *phoneNumber();

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
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalAreaWithDtmfContext* localAreaWithDtmf();

  class  DtmfAllContext : public antlr4::ParserRuleContext {
  public:
    DtmfAllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfAllContext* dtmfAll();

  class  DtmfLocalizerContext : public antlr4::ParserRuleContext {
  public:
    DtmfLocalizerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

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
