
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "DataListListener.h"


namespace antlrcpp {

/**
 * This class provides an empty implementation of DataListListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  DataListBaseListener : public DataListListener {
public:

  virtual void enterDlist(DataListParser::DlistContext * /*ctx*/) override { }
  virtual void exitDlist(DataListParser::DlistContext * /*ctx*/) override { }

  virtual void enterDataList(DataListParser::DataListContext * /*ctx*/) override { }
  virtual void exitDataList(DataListParser::DataListContext * /*ctx*/) override { }

  virtual void enterSource(DataListParser::SourceContext * /*ctx*/) override { }
  virtual void exitSource(DataListParser::SourceContext * /*ctx*/) override { }

  virtual void enterLastUpdated(DataListParser::LastUpdatedContext * /*ctx*/) override { }
  virtual void exitLastUpdated(DataListParser::LastUpdatedContext * /*ctx*/) override { }

  virtual void enterDateTime(DataListParser::DateTimeContext * /*ctx*/) override { }
  virtual void exitDateTime(DataListParser::DateTimeContext * /*ctx*/) override { }

  virtual void enterYear(DataListParser::YearContext * /*ctx*/) override { }
  virtual void exitYear(DataListParser::YearContext * /*ctx*/) override { }

  virtual void enterMonth(DataListParser::MonthContext * /*ctx*/) override { }
  virtual void exitMonth(DataListParser::MonthContext * /*ctx*/) override { }

  virtual void enterDay(DataListParser::DayContext * /*ctx*/) override { }
  virtual void exitDay(DataListParser::DayContext * /*ctx*/) override { }

  virtual void enterHour(DataListParser::HourContext * /*ctx*/) override { }
  virtual void exitHour(DataListParser::HourContext * /*ctx*/) override { }

  virtual void enterMinute(DataListParser::MinuteContext * /*ctx*/) override { }
  virtual void exitMinute(DataListParser::MinuteContext * /*ctx*/) override { }

  virtual void enterSecond(DataListParser::SecondContext * /*ctx*/) override { }
  virtual void exitSecond(DataListParser::SecondContext * /*ctx*/) override { }

  virtual void enterTimeZone(DataListParser::TimeZoneContext * /*ctx*/) override { }
  virtual void exitTimeZone(DataListParser::TimeZoneContext * /*ctx*/) override { }

  virtual void enterTzMod(DataListParser::TzModContext * /*ctx*/) override { }
  virtual void exitTzMod(DataListParser::TzModContext * /*ctx*/) override { }

  virtual void enterTzHour(DataListParser::TzHourContext * /*ctx*/) override { }
  virtual void exitTzHour(DataListParser::TzHourContext * /*ctx*/) override { }

  virtual void enterTzMinutes(DataListParser::TzMinutesContext * /*ctx*/) override { }
  virtual void exitTzMinutes(DataListParser::TzMinutesContext * /*ctx*/) override { }

  virtual void enterStartList(DataListParser::StartListContext * /*ctx*/) override { }
  virtual void exitStartList(DataListParser::StartListContext * /*ctx*/) override { }

  virtual void enterListItem(DataListParser::ListItemContext * /*ctx*/) override { }
  virtual void exitListItem(DataListParser::ListItemContext * /*ctx*/) override { }

  virtual void enterListItemContent(DataListParser::ListItemContentContext * /*ctx*/) override { }
  virtual void exitListItemContent(DataListParser::ListItemContentContext * /*ctx*/) override { }

  virtual void enterEndList(DataListParser::EndListContext * /*ctx*/) override { }
  virtual void exitEndList(DataListParser::EndListContext * /*ctx*/) override { }

  virtual void enterUrl(DataListParser::UrlContext * /*ctx*/) override { }
  virtual void exitUrl(DataListParser::UrlContext * /*ctx*/) override { }

  virtual void enterUri(DataListParser::UriContext * /*ctx*/) override { }
  virtual void exitUri(DataListParser::UriContext * /*ctx*/) override { }

  virtual void enterUriPort(DataListParser::UriPortContext * /*ctx*/) override { }
  virtual void exitUriPort(DataListParser::UriPortContext * /*ctx*/) override { }

  virtual void enterUriPath(DataListParser::UriPathContext * /*ctx*/) override { }
  virtual void exitUriPath(DataListParser::UriPathContext * /*ctx*/) override { }

  virtual void enterScheme(DataListParser::SchemeContext * /*ctx*/) override { }
  virtual void exitScheme(DataListParser::SchemeContext * /*ctx*/) override { }

  virtual void enterHost(DataListParser::HostContext * /*ctx*/) override { }
  virtual void exitHost(DataListParser::HostContext * /*ctx*/) override { }

  virtual void enterHostname(DataListParser::HostnameContext * /*ctx*/) override { }
  virtual void exitHostname(DataListParser::HostnameContext * /*ctx*/) override { }

  virtual void enterDomainNameOrIpv4Host(DataListParser::DomainNameOrIpv4HostContext * /*ctx*/) override { }
  virtual void exitDomainNameOrIpv4Host(DataListParser::DomainNameOrIpv4HostContext * /*ctx*/) override { }

  virtual void enterIpv6Host(DataListParser::Ipv6HostContext * /*ctx*/) override { }
  virtual void exitIpv6Host(DataListParser::Ipv6HostContext * /*ctx*/) override { }

  virtual void enterV6host(DataListParser::V6hostContext * /*ctx*/) override { }
  virtual void exitV6host(DataListParser::V6hostContext * /*ctx*/) override { }

  virtual void enterV6hostSegment(DataListParser::V6hostSegmentContext * /*ctx*/) override { }
  virtual void exitV6hostSegment(DataListParser::V6hostSegmentContext * /*ctx*/) override { }

  virtual void enterV6hostSep(DataListParser::V6hostSepContext * /*ctx*/) override { }
  virtual void exitV6hostSep(DataListParser::V6hostSepContext * /*ctx*/) override { }

  virtual void enterV6hostConfigParam(DataListParser::V6hostConfigParamContext * /*ctx*/) override { }
  virtual void exitV6hostConfigParam(DataListParser::V6hostConfigParamContext * /*ctx*/) override { }

  virtual void enterPort(DataListParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(DataListParser::PortContext * /*ctx*/) override { }

  virtual void enterPath(DataListParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(DataListParser::PathContext * /*ctx*/) override { }

  virtual void enterMultiPathChunk(DataListParser::MultiPathChunkContext * /*ctx*/) override { }
  virtual void exitMultiPathChunk(DataListParser::MultiPathChunkContext * /*ctx*/) override { }

  virtual void enterPathString(DataListParser::PathStringContext * /*ctx*/) override { }
  virtual void exitPathString(DataListParser::PathStringContext * /*ctx*/) override { }

  virtual void enterUser(DataListParser::UserContext * /*ctx*/) override { }
  virtual void exitUser(DataListParser::UserContext * /*ctx*/) override { }

  virtual void enterLogin(DataListParser::LoginContext * /*ctx*/) override { }
  virtual void exitLogin(DataListParser::LoginContext * /*ctx*/) override { }

  virtual void enterLoginPassword(DataListParser::LoginPasswordContext * /*ctx*/) override { }
  virtual void exitLoginPassword(DataListParser::LoginPasswordContext * /*ctx*/) override { }

  virtual void enterPassword(DataListParser::PasswordContext * /*ctx*/) override { }
  virtual void exitPassword(DataListParser::PasswordContext * /*ctx*/) override { }

  virtual void enterFrag(DataListParser::FragContext * /*ctx*/) override { }
  virtual void exitFrag(DataListParser::FragContext * /*ctx*/) override { }

  virtual void enterFragString(DataListParser::FragStringContext * /*ctx*/) override { }
  virtual void exitFragString(DataListParser::FragStringContext * /*ctx*/) override { }

  virtual void enterQuery(DataListParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(DataListParser::QueryContext * /*ctx*/) override { }

  virtual void enterSearch(DataListParser::SearchContext * /*ctx*/) override { }
  virtual void exitSearch(DataListParser::SearchContext * /*ctx*/) override { }

  virtual void enterMultiSearch(DataListParser::MultiSearchContext * /*ctx*/) override { }
  virtual void exitMultiSearch(DataListParser::MultiSearchContext * /*ctx*/) override { }

  virtual void enterSearchParameter(DataListParser::SearchParameterContext * /*ctx*/) override { }
  virtual void exitSearchParameter(DataListParser::SearchParameterContext * /*ctx*/) override { }

  virtual void enterSearchParameterKey(DataListParser::SearchParameterKeyContext * /*ctx*/) override { }
  virtual void exitSearchParameterKey(DataListParser::SearchParameterKeyContext * /*ctx*/) override { }

  virtual void enterSearchParameterValue(DataListParser::SearchParameterValueContext * /*ctx*/) override { }
  virtual void exitSearchParameterValue(DataListParser::SearchParameterValueContext * /*ctx*/) override { }

  virtual void enterSearchParameterValueString(DataListParser::SearchParameterValueStringContext * /*ctx*/) override { }
  virtual void exitSearchParameterValueString(DataListParser::SearchParameterValueStringContext * /*ctx*/) override { }

  virtual void enterParameterString(DataListParser::ParameterStringContext * /*ctx*/) override { }
  virtual void exitParameterString(DataListParser::ParameterStringContext * /*ctx*/) override { }

  virtual void enterParameterName(DataListParser::ParameterNameContext * /*ctx*/) override { }
  virtual void exitParameterName(DataListParser::ParameterNameContext * /*ctx*/) override { }

  virtual void enterConfigParam(DataListParser::ConfigParamContext * /*ctx*/) override { }
  virtual void exitConfigParam(DataListParser::ConfigParamContext * /*ctx*/) override { }

  virtual void enterString(DataListParser::StringContext * /*ctx*/) override { }
  virtual void exitString(DataListParser::StringContext * /*ctx*/) override { }

  virtual void enterUsString(DataListParser::UsStringContext * /*ctx*/) override { }
  virtual void exitUsString(DataListParser::UsStringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpp
