
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "DataListParser.h"


namespace antlrcpp {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by DataListParser.
 */
class  DataListVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DataListParser.
   */
    virtual std::any visitDlist(DataListParser::DlistContext *context) = 0;

    virtual std::any visitDataList(DataListParser::DataListContext *context) = 0;

    virtual std::any visitSource(DataListParser::SourceContext *context) = 0;

    virtual std::any visitLastUpdated(DataListParser::LastUpdatedContext *context) = 0;

    virtual std::any visitDateTime(DataListParser::DateTimeContext *context) = 0;

    virtual std::any visitYear(DataListParser::YearContext *context) = 0;

    virtual std::any visitMonth(DataListParser::MonthContext *context) = 0;

    virtual std::any visitDay(DataListParser::DayContext *context) = 0;

    virtual std::any visitHour(DataListParser::HourContext *context) = 0;

    virtual std::any visitMinute(DataListParser::MinuteContext *context) = 0;

    virtual std::any visitSecond(DataListParser::SecondContext *context) = 0;

    virtual std::any visitTimeZone(DataListParser::TimeZoneContext *context) = 0;

    virtual std::any visitTzMod(DataListParser::TzModContext *context) = 0;

    virtual std::any visitTzHour(DataListParser::TzHourContext *context) = 0;

    virtual std::any visitTzMinutes(DataListParser::TzMinutesContext *context) = 0;

    virtual std::any visitStartList(DataListParser::StartListContext *context) = 0;

    virtual std::any visitListId(DataListParser::ListIdContext *context) = 0;

    virtual std::any visitListItem(DataListParser::ListItemContext *context) = 0;

    virtual std::any visitListItemContent(DataListParser::ListItemContentContext *context) = 0;

    virtual std::any visitNumericalListItemContent(DataListParser::NumericalListItemContentContext *context) = 0;

    virtual std::any visitComplexListItemContent(DataListParser::ComplexListItemContentContext *context) = 0;

    virtual std::any visitDataListString(DataListParser::DataListStringContext *context) = 0;

    virtual std::any visitEndList(DataListParser::EndListContext *context) = 0;

    virtual std::any visitUrl(DataListParser::UrlContext *context) = 0;

    virtual std::any visitUri(DataListParser::UriContext *context) = 0;

    virtual std::any visitUriPort(DataListParser::UriPortContext *context) = 0;

    virtual std::any visitUriPath(DataListParser::UriPathContext *context) = 0;

    virtual std::any visitScheme(DataListParser::SchemeContext *context) = 0;

    virtual std::any visitSchemeSeparator(DataListParser::SchemeSeparatorContext *context) = 0;

    virtual std::any visitUriSchemePrefix(DataListParser::UriSchemePrefixContext *context) = 0;

    virtual std::any visitUriScheme(DataListParser::UriSchemeContext *context) = 0;

    virtual std::any visitHost(DataListParser::HostContext *context) = 0;

    virtual std::any visitHostname(DataListParser::HostnameContext *context) = 0;

    virtual std::any visitDomainNameOrIpv4Host(DataListParser::DomainNameOrIpv4HostContext *context) = 0;

    virtual std::any visitIpv6Host(DataListParser::Ipv6HostContext *context) = 0;

    virtual std::any visitV6host(DataListParser::V6hostContext *context) = 0;

    virtual std::any visitV6hostSegment(DataListParser::V6hostSegmentContext *context) = 0;

    virtual std::any visitV6hostSep(DataListParser::V6hostSepContext *context) = 0;

    virtual std::any visitV6hostConfigParam(DataListParser::V6hostConfigParamContext *context) = 0;

    virtual std::any visitPort(DataListParser::PortContext *context) = 0;

    virtual std::any visitPath(DataListParser::PathContext *context) = 0;

    virtual std::any visitMultiPathChunk(DataListParser::MultiPathChunkContext *context) = 0;

    virtual std::any visitPathString(DataListParser::PathStringContext *context) = 0;

    virtual std::any visitLogin(DataListParser::LoginContext *context) = 0;

    virtual std::any visitUser(DataListParser::UserContext *context) = 0;

    virtual std::any visitLoginPassword(DataListParser::LoginPasswordContext *context) = 0;

    virtual std::any visitPassword(DataListParser::PasswordContext *context) = 0;

    virtual std::any visitFrag(DataListParser::FragContext *context) = 0;

    virtual std::any visitFragString(DataListParser::FragStringContext *context) = 0;

    virtual std::any visitQuery(DataListParser::QueryContext *context) = 0;

    virtual std::any visitSearch(DataListParser::SearchContext *context) = 0;

    virtual std::any visitMultiSearch(DataListParser::MultiSearchContext *context) = 0;

    virtual std::any visitSearchParameter(DataListParser::SearchParameterContext *context) = 0;

    virtual std::any visitSearchParameterKey(DataListParser::SearchParameterKeyContext *context) = 0;

    virtual std::any visitSearchParameterValue(DataListParser::SearchParameterValueContext *context) = 0;

    virtual std::any visitParameterString(DataListParser::ParameterStringContext *context) = 0;

    virtual std::any visitParameterName(DataListParser::ParameterNameContext *context) = 0;

    virtual std::any visitConfigParam(DataListParser::ConfigParamContext *context) = 0;


};

}  // namespace antlrcpp
