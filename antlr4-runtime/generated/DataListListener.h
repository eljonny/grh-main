
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "DataListParser.h"


namespace antlrcpp {

/**
 * This interface defines an abstract listener for a parse tree produced by DataListParser.
 */
class  DataListListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDlist(DataListParser::DlistContext *ctx) = 0;
  virtual void exitDlist(DataListParser::DlistContext *ctx) = 0;

  virtual void enterDataList(DataListParser::DataListContext *ctx) = 0;
  virtual void exitDataList(DataListParser::DataListContext *ctx) = 0;

  virtual void enterSource(DataListParser::SourceContext *ctx) = 0;
  virtual void exitSource(DataListParser::SourceContext *ctx) = 0;

  virtual void enterLastUpdated(DataListParser::LastUpdatedContext *ctx) = 0;
  virtual void exitLastUpdated(DataListParser::LastUpdatedContext *ctx) = 0;

  virtual void enterDateTime(DataListParser::DateTimeContext *ctx) = 0;
  virtual void exitDateTime(DataListParser::DateTimeContext *ctx) = 0;

  virtual void enterYear(DataListParser::YearContext *ctx) = 0;
  virtual void exitYear(DataListParser::YearContext *ctx) = 0;

  virtual void enterMonth(DataListParser::MonthContext *ctx) = 0;
  virtual void exitMonth(DataListParser::MonthContext *ctx) = 0;

  virtual void enterDay(DataListParser::DayContext *ctx) = 0;
  virtual void exitDay(DataListParser::DayContext *ctx) = 0;

  virtual void enterHour(DataListParser::HourContext *ctx) = 0;
  virtual void exitHour(DataListParser::HourContext *ctx) = 0;

  virtual void enterMinute(DataListParser::MinuteContext *ctx) = 0;
  virtual void exitMinute(DataListParser::MinuteContext *ctx) = 0;

  virtual void enterSecond(DataListParser::SecondContext *ctx) = 0;
  virtual void exitSecond(DataListParser::SecondContext *ctx) = 0;

  virtual void enterTimeZone(DataListParser::TimeZoneContext *ctx) = 0;
  virtual void exitTimeZone(DataListParser::TimeZoneContext *ctx) = 0;

  virtual void enterTzMod(DataListParser::TzModContext *ctx) = 0;
  virtual void exitTzMod(DataListParser::TzModContext *ctx) = 0;

  virtual void enterTzHour(DataListParser::TzHourContext *ctx) = 0;
  virtual void exitTzHour(DataListParser::TzHourContext *ctx) = 0;

  virtual void enterTzMinutes(DataListParser::TzMinutesContext *ctx) = 0;
  virtual void exitTzMinutes(DataListParser::TzMinutesContext *ctx) = 0;

  virtual void enterStartList(DataListParser::StartListContext *ctx) = 0;
  virtual void exitStartList(DataListParser::StartListContext *ctx) = 0;

  virtual void enterListId(DataListParser::ListIdContext *ctx) = 0;
  virtual void exitListId(DataListParser::ListIdContext *ctx) = 0;

  virtual void enterListItem(DataListParser::ListItemContext *ctx) = 0;
  virtual void exitListItem(DataListParser::ListItemContext *ctx) = 0;

  virtual void enterListItemContent(DataListParser::ListItemContentContext *ctx) = 0;
  virtual void exitListItemContent(DataListParser::ListItemContentContext *ctx) = 0;

  virtual void enterNumericalListItemContent(DataListParser::NumericalListItemContentContext *ctx) = 0;
  virtual void exitNumericalListItemContent(DataListParser::NumericalListItemContentContext *ctx) = 0;

  virtual void enterComplexListItemContent(DataListParser::ComplexListItemContentContext *ctx) = 0;
  virtual void exitComplexListItemContent(DataListParser::ComplexListItemContentContext *ctx) = 0;

  virtual void enterDataListString(DataListParser::DataListStringContext *ctx) = 0;
  virtual void exitDataListString(DataListParser::DataListStringContext *ctx) = 0;

  virtual void enterEndList(DataListParser::EndListContext *ctx) = 0;
  virtual void exitEndList(DataListParser::EndListContext *ctx) = 0;

  virtual void enterUrl(DataListParser::UrlContext *ctx) = 0;
  virtual void exitUrl(DataListParser::UrlContext *ctx) = 0;

  virtual void enterUri(DataListParser::UriContext *ctx) = 0;
  virtual void exitUri(DataListParser::UriContext *ctx) = 0;

  virtual void enterUriPort(DataListParser::UriPortContext *ctx) = 0;
  virtual void exitUriPort(DataListParser::UriPortContext *ctx) = 0;

  virtual void enterUriPath(DataListParser::UriPathContext *ctx) = 0;
  virtual void exitUriPath(DataListParser::UriPathContext *ctx) = 0;

  virtual void enterScheme(DataListParser::SchemeContext *ctx) = 0;
  virtual void exitScheme(DataListParser::SchemeContext *ctx) = 0;

  virtual void enterSchemeSeparator(DataListParser::SchemeSeparatorContext *ctx) = 0;
  virtual void exitSchemeSeparator(DataListParser::SchemeSeparatorContext *ctx) = 0;

  virtual void enterUriSchemePrefix(DataListParser::UriSchemePrefixContext *ctx) = 0;
  virtual void exitUriSchemePrefix(DataListParser::UriSchemePrefixContext *ctx) = 0;

  virtual void enterUriScheme(DataListParser::UriSchemeContext *ctx) = 0;
  virtual void exitUriScheme(DataListParser::UriSchemeContext *ctx) = 0;

  virtual void enterHost(DataListParser::HostContext *ctx) = 0;
  virtual void exitHost(DataListParser::HostContext *ctx) = 0;

  virtual void enterHostname(DataListParser::HostnameContext *ctx) = 0;
  virtual void exitHostname(DataListParser::HostnameContext *ctx) = 0;

  virtual void enterDomainNameOrIpv4Host(DataListParser::DomainNameOrIpv4HostContext *ctx) = 0;
  virtual void exitDomainNameOrIpv4Host(DataListParser::DomainNameOrIpv4HostContext *ctx) = 0;

  virtual void enterIpv6Host(DataListParser::Ipv6HostContext *ctx) = 0;
  virtual void exitIpv6Host(DataListParser::Ipv6HostContext *ctx) = 0;

  virtual void enterV6host(DataListParser::V6hostContext *ctx) = 0;
  virtual void exitV6host(DataListParser::V6hostContext *ctx) = 0;

  virtual void enterV6hostSegment(DataListParser::V6hostSegmentContext *ctx) = 0;
  virtual void exitV6hostSegment(DataListParser::V6hostSegmentContext *ctx) = 0;

  virtual void enterV6hostSep(DataListParser::V6hostSepContext *ctx) = 0;
  virtual void exitV6hostSep(DataListParser::V6hostSepContext *ctx) = 0;

  virtual void enterV6hostConfigParam(DataListParser::V6hostConfigParamContext *ctx) = 0;
  virtual void exitV6hostConfigParam(DataListParser::V6hostConfigParamContext *ctx) = 0;

  virtual void enterPort(DataListParser::PortContext *ctx) = 0;
  virtual void exitPort(DataListParser::PortContext *ctx) = 0;

  virtual void enterPath(DataListParser::PathContext *ctx) = 0;
  virtual void exitPath(DataListParser::PathContext *ctx) = 0;

  virtual void enterMultiPathChunk(DataListParser::MultiPathChunkContext *ctx) = 0;
  virtual void exitMultiPathChunk(DataListParser::MultiPathChunkContext *ctx) = 0;

  virtual void enterPathString(DataListParser::PathStringContext *ctx) = 0;
  virtual void exitPathString(DataListParser::PathStringContext *ctx) = 0;

  virtual void enterLogin(DataListParser::LoginContext *ctx) = 0;
  virtual void exitLogin(DataListParser::LoginContext *ctx) = 0;

  virtual void enterUser(DataListParser::UserContext *ctx) = 0;
  virtual void exitUser(DataListParser::UserContext *ctx) = 0;

  virtual void enterLoginPassword(DataListParser::LoginPasswordContext *ctx) = 0;
  virtual void exitLoginPassword(DataListParser::LoginPasswordContext *ctx) = 0;

  virtual void enterPassword(DataListParser::PasswordContext *ctx) = 0;
  virtual void exitPassword(DataListParser::PasswordContext *ctx) = 0;

  virtual void enterFrag(DataListParser::FragContext *ctx) = 0;
  virtual void exitFrag(DataListParser::FragContext *ctx) = 0;

  virtual void enterFragString(DataListParser::FragStringContext *ctx) = 0;
  virtual void exitFragString(DataListParser::FragStringContext *ctx) = 0;

  virtual void enterQuery(DataListParser::QueryContext *ctx) = 0;
  virtual void exitQuery(DataListParser::QueryContext *ctx) = 0;

  virtual void enterSearch(DataListParser::SearchContext *ctx) = 0;
  virtual void exitSearch(DataListParser::SearchContext *ctx) = 0;

  virtual void enterMultiSearch(DataListParser::MultiSearchContext *ctx) = 0;
  virtual void exitMultiSearch(DataListParser::MultiSearchContext *ctx) = 0;

  virtual void enterSearchParameter(DataListParser::SearchParameterContext *ctx) = 0;
  virtual void exitSearchParameter(DataListParser::SearchParameterContext *ctx) = 0;

  virtual void enterSearchParameterKey(DataListParser::SearchParameterKeyContext *ctx) = 0;
  virtual void exitSearchParameterKey(DataListParser::SearchParameterKeyContext *ctx) = 0;

  virtual void enterSearchParameterValue(DataListParser::SearchParameterValueContext *ctx) = 0;
  virtual void exitSearchParameterValue(DataListParser::SearchParameterValueContext *ctx) = 0;

  virtual void enterParameterString(DataListParser::ParameterStringContext *ctx) = 0;
  virtual void exitParameterString(DataListParser::ParameterStringContext *ctx) = 0;

  virtual void enterParameterName(DataListParser::ParameterNameContext *ctx) = 0;
  virtual void exitParameterName(DataListParser::ParameterNameContext *ctx) = 0;

  virtual void enterConfigParam(DataListParser::ConfigParamContext *ctx) = 0;
  virtual void exitConfigParam(DataListParser::ConfigParamContext *ctx) = 0;


};

}  // namespace antlrcpp
