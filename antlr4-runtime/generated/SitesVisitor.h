
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/Sites.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SitesParser.h"


namespace antlrcpp {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SitesParser.
 */
class  SitesVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SitesParser.
   */
    virtual std::any visitSites(SitesParser::SitesContext *context) = 0;

    virtual std::any visitSitesList(SitesParser::SitesListContext *context) = 0;

    virtual std::any visitSiteListEntry(SitesParser::SiteListEntryContext *context) = 0;

    virtual std::any visitComment(SitesParser::CommentContext *context) = 0;

    virtual std::any visitCommentTextFragment(SitesParser::CommentTextFragmentContext *context) = 0;

    virtual std::any visitSiteFormat(SitesParser::SiteFormatContext *context) = 0;

    virtual std::any visitSiteType(SitesParser::SiteTypeContext *context) = 0;

    virtual std::any visitSiteDetailFormat(SitesParser::SiteDetailFormatContext *context) = 0;

    virtual std::any visitSiteFormatElement(SitesParser::SiteFormatElementContext *context) = 0;

    virtual std::any visitSiteFormatId(SitesParser::SiteFormatIdContext *context) = 0;

    virtual std::any visitOptionalDataElement(SitesParser::OptionalDataElementContext *context) = 0;

    virtual std::any visitOptionalSiteFormatId(SitesParser::OptionalSiteFormatIdContext *context) = 0;

    virtual std::any visitSite(SitesParser::SiteContext *context) = 0;

    virtual std::any visitSiteDetail(SitesParser::SiteDetailContext *context) = 0;

    virtual std::any visitMeetings(SitesParser::MeetingsContext *context) = 0;

    virtual std::any visitFellowshipId(SitesParser::FellowshipIdContext *context) = 0;

    virtual std::any visitMeetingLocationType(SitesParser::MeetingLocationTypeContext *context) = 0;

    virtual std::any visitMeetingsDataUrl(SitesParser::MeetingsDataUrlContext *context) = 0;

    virtual std::any visitFellowship(SitesParser::FellowshipContext *context) = 0;

    virtual std::any visitFellowshipName(SitesParser::FellowshipNameContext *context) = 0;

    virtual std::any visitFellowshipUrl(SitesParser::FellowshipUrlContext *context) = 0;

    virtual std::any visitOrganization(SitesParser::OrganizationContext *context) = 0;

    virtual std::any visitOrganizationId(SitesParser::OrganizationIdContext *context) = 0;

    virtual std::any visitOrganizationName(SitesParser::OrganizationNameContext *context) = 0;

    virtual std::any visitOrganizationUrl(SitesParser::OrganizationUrlContext *context) = 0;

    virtual std::any visitResource(SitesParser::ResourceContext *context) = 0;

    virtual std::any visitResourceEntityId(SitesParser::ResourceEntityIdContext *context) = 0;

    virtual std::any visitResourceType(SitesParser::ResourceTypeContext *context) = 0;

    virtual std::any visitResourceDataPrimary(SitesParser::ResourceDataPrimaryContext *context) = 0;

    virtual std::any visitResourceTextNumber(SitesParser::ResourceTextNumberContext *context) = 0;

    virtual std::any visitResourcePhoneNumber(SitesParser::ResourcePhoneNumberContext *context) = 0;

    virtual std::any visitResourceUrl(SitesParser::ResourceUrlContext *context) = 0;

    virtual std::any visitResourceOptional(SitesParser::ResourceOptionalContext *context) = 0;

    virtual std::any visitResourceDataContext(SitesParser::ResourceDataContextContext *context) = 0;

    virtual std::any visitResourceDataContextSpecifier(SitesParser::ResourceDataContextSpecifierContext *context) = 0;

    virtual std::any visitEntityId(SitesParser::EntityIdContext *context) = 0;

    virtual std::any visitEntityIdSegment(SitesParser::EntityIdSegmentContext *context) = 0;

    virtual std::any visitEntityName(SitesParser::EntityNameContext *context) = 0;

    virtual std::any visitEntityNameSegment(SitesParser::EntityNameSegmentContext *context) = 0;

    virtual std::any visitUrl(SitesParser::UrlContext *context) = 0;

    virtual std::any visitUri(SitesParser::UriContext *context) = 0;

    virtual std::any visitUriPort(SitesParser::UriPortContext *context) = 0;

    virtual std::any visitUriPath(SitesParser::UriPathContext *context) = 0;

    virtual std::any visitScheme(SitesParser::SchemeContext *context) = 0;

    virtual std::any visitSchemeSeparator(SitesParser::SchemeSeparatorContext *context) = 0;

    virtual std::any visitUriSchemePrefix(SitesParser::UriSchemePrefixContext *context) = 0;

    virtual std::any visitUriScheme(SitesParser::UriSchemeContext *context) = 0;

    virtual std::any visitHost(SitesParser::HostContext *context) = 0;

    virtual std::any visitHostname(SitesParser::HostnameContext *context) = 0;

    virtual std::any visitDomainNameOrIpv4Host(SitesParser::DomainNameOrIpv4HostContext *context) = 0;

    virtual std::any visitIpv6Host(SitesParser::Ipv6HostContext *context) = 0;

    virtual std::any visitV6host(SitesParser::V6hostContext *context) = 0;

    virtual std::any visitV6hostSegment(SitesParser::V6hostSegmentContext *context) = 0;

    virtual std::any visitV6hostSep(SitesParser::V6hostSepContext *context) = 0;

    virtual std::any visitV6hostConfigParam(SitesParser::V6hostConfigParamContext *context) = 0;

    virtual std::any visitPort(SitesParser::PortContext *context) = 0;

    virtual std::any visitPath(SitesParser::PathContext *context) = 0;

    virtual std::any visitMultiPathChunk(SitesParser::MultiPathChunkContext *context) = 0;

    virtual std::any visitPathString(SitesParser::PathStringContext *context) = 0;

    virtual std::any visitLogin(SitesParser::LoginContext *context) = 0;

    virtual std::any visitUser(SitesParser::UserContext *context) = 0;

    virtual std::any visitLoginPassword(SitesParser::LoginPasswordContext *context) = 0;

    virtual std::any visitPassword(SitesParser::PasswordContext *context) = 0;

    virtual std::any visitFrag(SitesParser::FragContext *context) = 0;

    virtual std::any visitFragString(SitesParser::FragStringContext *context) = 0;

    virtual std::any visitQuery(SitesParser::QueryContext *context) = 0;

    virtual std::any visitSearch(SitesParser::SearchContext *context) = 0;

    virtual std::any visitMultiSearch(SitesParser::MultiSearchContext *context) = 0;

    virtual std::any visitSearchParameter(SitesParser::SearchParameterContext *context) = 0;

    virtual std::any visitSearchParameterKey(SitesParser::SearchParameterKeyContext *context) = 0;

    virtual std::any visitSearchParameterValue(SitesParser::SearchParameterValueContext *context) = 0;

    virtual std::any visitParameterString(SitesParser::ParameterStringContext *context) = 0;

    virtual std::any visitParameterName(SitesParser::ParameterNameContext *context) = 0;

    virtual std::any visitConfigParam(SitesParser::ConfigParamContext *context) = 0;

    virtual std::any visitPhone(SitesParser::PhoneContext *context) = 0;

    virtual std::any visitCountryCode(SitesParser::CountryCodeContext *context) = 0;

    virtual std::any visitAreaCode(SitesParser::AreaCodeContext *context) = 0;

    virtual std::any visitPhoneNumber(SitesParser::PhoneNumberContext *context) = 0;

    virtual std::any visitLocalPhone(SitesParser::LocalPhoneContext *context) = 0;

    virtual std::any visitLocalArea(SitesParser::LocalAreaContext *context) = 0;

    virtual std::any visitLocalizer(SitesParser::LocalizerContext *context) = 0;

    virtual std::any visitDtmf(SitesParser::DtmfContext *context) = 0;

    virtual std::any visitDtmfWithLocal(SitesParser::DtmfWithLocalContext *context) = 0;

    virtual std::any visitLocalAreaWithDtmf(SitesParser::LocalAreaWithDtmfContext *context) = 0;

    virtual std::any visitDtmfAll(SitesParser::DtmfAllContext *context) = 0;

    virtual std::any visitDtmfLocalizer(SitesParser::DtmfLocalizerContext *context) = 0;

    virtual std::any visitPhoneSep(SitesParser::PhoneSepContext *context) = 0;


};

}  // namespace antlrcpp
