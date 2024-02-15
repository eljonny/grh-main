
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/Sites.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SitesParser.h"


namespace antlrcpp {

/**
 * This interface defines an abstract listener for a parse tree produced by SitesParser.
 */
class  SitesListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSites(SitesParser::SitesContext *ctx) = 0;
  virtual void exitSites(SitesParser::SitesContext *ctx) = 0;

  virtual void enterSitesList(SitesParser::SitesListContext *ctx) = 0;
  virtual void exitSitesList(SitesParser::SitesListContext *ctx) = 0;

  virtual void enterSiteListEntry(SitesParser::SiteListEntryContext *ctx) = 0;
  virtual void exitSiteListEntry(SitesParser::SiteListEntryContext *ctx) = 0;

  virtual void enterComment(SitesParser::CommentContext *ctx) = 0;
  virtual void exitComment(SitesParser::CommentContext *ctx) = 0;

  virtual void enterCommentTextFragment(SitesParser::CommentTextFragmentContext *ctx) = 0;
  virtual void exitCommentTextFragment(SitesParser::CommentTextFragmentContext *ctx) = 0;

  virtual void enterSiteFormat(SitesParser::SiteFormatContext *ctx) = 0;
  virtual void exitSiteFormat(SitesParser::SiteFormatContext *ctx) = 0;

  virtual void enterSiteType(SitesParser::SiteTypeContext *ctx) = 0;
  virtual void exitSiteType(SitesParser::SiteTypeContext *ctx) = 0;

  virtual void enterSiteDetailFormat(SitesParser::SiteDetailFormatContext *ctx) = 0;
  virtual void exitSiteDetailFormat(SitesParser::SiteDetailFormatContext *ctx) = 0;

  virtual void enterSiteFormatElement(SitesParser::SiteFormatElementContext *ctx) = 0;
  virtual void exitSiteFormatElement(SitesParser::SiteFormatElementContext *ctx) = 0;

  virtual void enterSiteFormatId(SitesParser::SiteFormatIdContext *ctx) = 0;
  virtual void exitSiteFormatId(SitesParser::SiteFormatIdContext *ctx) = 0;

  virtual void enterOptionalDataElement(SitesParser::OptionalDataElementContext *ctx) = 0;
  virtual void exitOptionalDataElement(SitesParser::OptionalDataElementContext *ctx) = 0;

  virtual void enterOptionalSiteFormatId(SitesParser::OptionalSiteFormatIdContext *ctx) = 0;
  virtual void exitOptionalSiteFormatId(SitesParser::OptionalSiteFormatIdContext *ctx) = 0;

  virtual void enterSite(SitesParser::SiteContext *ctx) = 0;
  virtual void exitSite(SitesParser::SiteContext *ctx) = 0;

  virtual void enterSiteDetail(SitesParser::SiteDetailContext *ctx) = 0;
  virtual void exitSiteDetail(SitesParser::SiteDetailContext *ctx) = 0;

  virtual void enterMeetings(SitesParser::MeetingsContext *ctx) = 0;
  virtual void exitMeetings(SitesParser::MeetingsContext *ctx) = 0;

  virtual void enterFellowshipId(SitesParser::FellowshipIdContext *ctx) = 0;
  virtual void exitFellowshipId(SitesParser::FellowshipIdContext *ctx) = 0;

  virtual void enterMeetingLocationType(SitesParser::MeetingLocationTypeContext *ctx) = 0;
  virtual void exitMeetingLocationType(SitesParser::MeetingLocationTypeContext *ctx) = 0;

  virtual void enterMeetingsDataUrl(SitesParser::MeetingsDataUrlContext *ctx) = 0;
  virtual void exitMeetingsDataUrl(SitesParser::MeetingsDataUrlContext *ctx) = 0;

  virtual void enterFellowship(SitesParser::FellowshipContext *ctx) = 0;
  virtual void exitFellowship(SitesParser::FellowshipContext *ctx) = 0;

  virtual void enterFellowshipName(SitesParser::FellowshipNameContext *ctx) = 0;
  virtual void exitFellowshipName(SitesParser::FellowshipNameContext *ctx) = 0;

  virtual void enterFellowshipUrl(SitesParser::FellowshipUrlContext *ctx) = 0;
  virtual void exitFellowshipUrl(SitesParser::FellowshipUrlContext *ctx) = 0;

  virtual void enterOrganization(SitesParser::OrganizationContext *ctx) = 0;
  virtual void exitOrganization(SitesParser::OrganizationContext *ctx) = 0;

  virtual void enterOrganizationId(SitesParser::OrganizationIdContext *ctx) = 0;
  virtual void exitOrganizationId(SitesParser::OrganizationIdContext *ctx) = 0;

  virtual void enterOrganizationName(SitesParser::OrganizationNameContext *ctx) = 0;
  virtual void exitOrganizationName(SitesParser::OrganizationNameContext *ctx) = 0;

  virtual void enterOrganizationUrl(SitesParser::OrganizationUrlContext *ctx) = 0;
  virtual void exitOrganizationUrl(SitesParser::OrganizationUrlContext *ctx) = 0;

  virtual void enterResource(SitesParser::ResourceContext *ctx) = 0;
  virtual void exitResource(SitesParser::ResourceContext *ctx) = 0;

  virtual void enterResourceEntityId(SitesParser::ResourceEntityIdContext *ctx) = 0;
  virtual void exitResourceEntityId(SitesParser::ResourceEntityIdContext *ctx) = 0;

  virtual void enterResourceType(SitesParser::ResourceTypeContext *ctx) = 0;
  virtual void exitResourceType(SitesParser::ResourceTypeContext *ctx) = 0;

  virtual void enterResourceDataPrimary(SitesParser::ResourceDataPrimaryContext *ctx) = 0;
  virtual void exitResourceDataPrimary(SitesParser::ResourceDataPrimaryContext *ctx) = 0;

  virtual void enterResourceTextNumber(SitesParser::ResourceTextNumberContext *ctx) = 0;
  virtual void exitResourceTextNumber(SitesParser::ResourceTextNumberContext *ctx) = 0;

  virtual void enterResourcePhoneNumber(SitesParser::ResourcePhoneNumberContext *ctx) = 0;
  virtual void exitResourcePhoneNumber(SitesParser::ResourcePhoneNumberContext *ctx) = 0;

  virtual void enterResourceUrl(SitesParser::ResourceUrlContext *ctx) = 0;
  virtual void exitResourceUrl(SitesParser::ResourceUrlContext *ctx) = 0;

  virtual void enterResourceOptional(SitesParser::ResourceOptionalContext *ctx) = 0;
  virtual void exitResourceOptional(SitesParser::ResourceOptionalContext *ctx) = 0;

  virtual void enterResourceDataContext(SitesParser::ResourceDataContextContext *ctx) = 0;
  virtual void exitResourceDataContext(SitesParser::ResourceDataContextContext *ctx) = 0;

  virtual void enterResourceDataContextSpecifier(SitesParser::ResourceDataContextSpecifierContext *ctx) = 0;
  virtual void exitResourceDataContextSpecifier(SitesParser::ResourceDataContextSpecifierContext *ctx) = 0;

  virtual void enterEntityId(SitesParser::EntityIdContext *ctx) = 0;
  virtual void exitEntityId(SitesParser::EntityIdContext *ctx) = 0;

  virtual void enterEntityIdSegment(SitesParser::EntityIdSegmentContext *ctx) = 0;
  virtual void exitEntityIdSegment(SitesParser::EntityIdSegmentContext *ctx) = 0;

  virtual void enterEntityName(SitesParser::EntityNameContext *ctx) = 0;
  virtual void exitEntityName(SitesParser::EntityNameContext *ctx) = 0;

  virtual void enterEntityNameSegment(SitesParser::EntityNameSegmentContext *ctx) = 0;
  virtual void exitEntityNameSegment(SitesParser::EntityNameSegmentContext *ctx) = 0;

  virtual void enterUrl(SitesParser::UrlContext *ctx) = 0;
  virtual void exitUrl(SitesParser::UrlContext *ctx) = 0;

  virtual void enterUri(SitesParser::UriContext *ctx) = 0;
  virtual void exitUri(SitesParser::UriContext *ctx) = 0;

  virtual void enterUriPort(SitesParser::UriPortContext *ctx) = 0;
  virtual void exitUriPort(SitesParser::UriPortContext *ctx) = 0;

  virtual void enterUriPath(SitesParser::UriPathContext *ctx) = 0;
  virtual void exitUriPath(SitesParser::UriPathContext *ctx) = 0;

  virtual void enterScheme(SitesParser::SchemeContext *ctx) = 0;
  virtual void exitScheme(SitesParser::SchemeContext *ctx) = 0;

  virtual void enterSchemeSeparator(SitesParser::SchemeSeparatorContext *ctx) = 0;
  virtual void exitSchemeSeparator(SitesParser::SchemeSeparatorContext *ctx) = 0;

  virtual void enterUriSchemePrefix(SitesParser::UriSchemePrefixContext *ctx) = 0;
  virtual void exitUriSchemePrefix(SitesParser::UriSchemePrefixContext *ctx) = 0;

  virtual void enterUriScheme(SitesParser::UriSchemeContext *ctx) = 0;
  virtual void exitUriScheme(SitesParser::UriSchemeContext *ctx) = 0;

  virtual void enterHost(SitesParser::HostContext *ctx) = 0;
  virtual void exitHost(SitesParser::HostContext *ctx) = 0;

  virtual void enterHostname(SitesParser::HostnameContext *ctx) = 0;
  virtual void exitHostname(SitesParser::HostnameContext *ctx) = 0;

  virtual void enterDomainNameOrIpv4Host(SitesParser::DomainNameOrIpv4HostContext *ctx) = 0;
  virtual void exitDomainNameOrIpv4Host(SitesParser::DomainNameOrIpv4HostContext *ctx) = 0;

  virtual void enterIpv6Host(SitesParser::Ipv6HostContext *ctx) = 0;
  virtual void exitIpv6Host(SitesParser::Ipv6HostContext *ctx) = 0;

  virtual void enterV6host(SitesParser::V6hostContext *ctx) = 0;
  virtual void exitV6host(SitesParser::V6hostContext *ctx) = 0;

  virtual void enterV6hostSegment(SitesParser::V6hostSegmentContext *ctx) = 0;
  virtual void exitV6hostSegment(SitesParser::V6hostSegmentContext *ctx) = 0;

  virtual void enterV6hostSep(SitesParser::V6hostSepContext *ctx) = 0;
  virtual void exitV6hostSep(SitesParser::V6hostSepContext *ctx) = 0;

  virtual void enterV6hostConfigParam(SitesParser::V6hostConfigParamContext *ctx) = 0;
  virtual void exitV6hostConfigParam(SitesParser::V6hostConfigParamContext *ctx) = 0;

  virtual void enterPort(SitesParser::PortContext *ctx) = 0;
  virtual void exitPort(SitesParser::PortContext *ctx) = 0;

  virtual void enterPath(SitesParser::PathContext *ctx) = 0;
  virtual void exitPath(SitesParser::PathContext *ctx) = 0;

  virtual void enterMultiPathChunk(SitesParser::MultiPathChunkContext *ctx) = 0;
  virtual void exitMultiPathChunk(SitesParser::MultiPathChunkContext *ctx) = 0;

  virtual void enterPathString(SitesParser::PathStringContext *ctx) = 0;
  virtual void exitPathString(SitesParser::PathStringContext *ctx) = 0;

  virtual void enterLogin(SitesParser::LoginContext *ctx) = 0;
  virtual void exitLogin(SitesParser::LoginContext *ctx) = 0;

  virtual void enterUser(SitesParser::UserContext *ctx) = 0;
  virtual void exitUser(SitesParser::UserContext *ctx) = 0;

  virtual void enterLoginPassword(SitesParser::LoginPasswordContext *ctx) = 0;
  virtual void exitLoginPassword(SitesParser::LoginPasswordContext *ctx) = 0;

  virtual void enterPassword(SitesParser::PasswordContext *ctx) = 0;
  virtual void exitPassword(SitesParser::PasswordContext *ctx) = 0;

  virtual void enterFrag(SitesParser::FragContext *ctx) = 0;
  virtual void exitFrag(SitesParser::FragContext *ctx) = 0;

  virtual void enterFragString(SitesParser::FragStringContext *ctx) = 0;
  virtual void exitFragString(SitesParser::FragStringContext *ctx) = 0;

  virtual void enterQuery(SitesParser::QueryContext *ctx) = 0;
  virtual void exitQuery(SitesParser::QueryContext *ctx) = 0;

  virtual void enterSearch(SitesParser::SearchContext *ctx) = 0;
  virtual void exitSearch(SitesParser::SearchContext *ctx) = 0;

  virtual void enterMultiSearch(SitesParser::MultiSearchContext *ctx) = 0;
  virtual void exitMultiSearch(SitesParser::MultiSearchContext *ctx) = 0;

  virtual void enterSearchParameter(SitesParser::SearchParameterContext *ctx) = 0;
  virtual void exitSearchParameter(SitesParser::SearchParameterContext *ctx) = 0;

  virtual void enterSearchParameterKey(SitesParser::SearchParameterKeyContext *ctx) = 0;
  virtual void exitSearchParameterKey(SitesParser::SearchParameterKeyContext *ctx) = 0;

  virtual void enterSearchParameterValue(SitesParser::SearchParameterValueContext *ctx) = 0;
  virtual void exitSearchParameterValue(SitesParser::SearchParameterValueContext *ctx) = 0;

  virtual void enterParameterString(SitesParser::ParameterStringContext *ctx) = 0;
  virtual void exitParameterString(SitesParser::ParameterStringContext *ctx) = 0;

  virtual void enterParameterName(SitesParser::ParameterNameContext *ctx) = 0;
  virtual void exitParameterName(SitesParser::ParameterNameContext *ctx) = 0;

  virtual void enterConfigParam(SitesParser::ConfigParamContext *ctx) = 0;
  virtual void exitConfigParam(SitesParser::ConfigParamContext *ctx) = 0;

  virtual void enterPhone(SitesParser::PhoneContext *ctx) = 0;
  virtual void exitPhone(SitesParser::PhoneContext *ctx) = 0;

  virtual void enterCountryCode(SitesParser::CountryCodeContext *ctx) = 0;
  virtual void exitCountryCode(SitesParser::CountryCodeContext *ctx) = 0;

  virtual void enterAreaCode(SitesParser::AreaCodeContext *ctx) = 0;
  virtual void exitAreaCode(SitesParser::AreaCodeContext *ctx) = 0;

  virtual void enterPhoneNumber(SitesParser::PhoneNumberContext *ctx) = 0;
  virtual void exitPhoneNumber(SitesParser::PhoneNumberContext *ctx) = 0;

  virtual void enterLocalPhone(SitesParser::LocalPhoneContext *ctx) = 0;
  virtual void exitLocalPhone(SitesParser::LocalPhoneContext *ctx) = 0;

  virtual void enterLocalArea(SitesParser::LocalAreaContext *ctx) = 0;
  virtual void exitLocalArea(SitesParser::LocalAreaContext *ctx) = 0;

  virtual void enterLocalizer(SitesParser::LocalizerContext *ctx) = 0;
  virtual void exitLocalizer(SitesParser::LocalizerContext *ctx) = 0;

  virtual void enterDtmf(SitesParser::DtmfContext *ctx) = 0;
  virtual void exitDtmf(SitesParser::DtmfContext *ctx) = 0;

  virtual void enterDtmfWithLocal(SitesParser::DtmfWithLocalContext *ctx) = 0;
  virtual void exitDtmfWithLocal(SitesParser::DtmfWithLocalContext *ctx) = 0;

  virtual void enterLocalAreaWithDtmf(SitesParser::LocalAreaWithDtmfContext *ctx) = 0;
  virtual void exitLocalAreaWithDtmf(SitesParser::LocalAreaWithDtmfContext *ctx) = 0;

  virtual void enterDtmfAll(SitesParser::DtmfAllContext *ctx) = 0;
  virtual void exitDtmfAll(SitesParser::DtmfAllContext *ctx) = 0;

  virtual void enterDtmfLocalizer(SitesParser::DtmfLocalizerContext *ctx) = 0;
  virtual void exitDtmfLocalizer(SitesParser::DtmfLocalizerContext *ctx) = 0;

  virtual void enterPhoneSep(SitesParser::PhoneSepContext *ctx) = 0;
  virtual void exitPhoneSep(SitesParser::PhoneSepContext *ctx) = 0;


};

}  // namespace antlrcpp
