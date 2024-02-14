
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "urlParser.h"


namespace antlrcpp {

/**
 * This interface defines an abstract listener for a parse tree produced by urlParser.
 */
class  urlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterUrl(urlParser::UrlContext *ctx) = 0;
  virtual void exitUrl(urlParser::UrlContext *ctx) = 0;

  virtual void enterUri(urlParser::UriContext *ctx) = 0;
  virtual void exitUri(urlParser::UriContext *ctx) = 0;

  virtual void enterUriPort(urlParser::UriPortContext *ctx) = 0;
  virtual void exitUriPort(urlParser::UriPortContext *ctx) = 0;

  virtual void enterUriPath(urlParser::UriPathContext *ctx) = 0;
  virtual void exitUriPath(urlParser::UriPathContext *ctx) = 0;

  virtual void enterScheme(urlParser::SchemeContext *ctx) = 0;
  virtual void exitScheme(urlParser::SchemeContext *ctx) = 0;

  virtual void enterHost(urlParser::HostContext *ctx) = 0;
  virtual void exitHost(urlParser::HostContext *ctx) = 0;

  virtual void enterHostname(urlParser::HostnameContext *ctx) = 0;
  virtual void exitHostname(urlParser::HostnameContext *ctx) = 0;

  virtual void enterDomainNameOrIpv4Host(urlParser::DomainNameOrIpv4HostContext *ctx) = 0;
  virtual void exitDomainNameOrIpv4Host(urlParser::DomainNameOrIpv4HostContext *ctx) = 0;

  virtual void enterIpv6Host(urlParser::Ipv6HostContext *ctx) = 0;
  virtual void exitIpv6Host(urlParser::Ipv6HostContext *ctx) = 0;

  virtual void enterV6host(urlParser::V6hostContext *ctx) = 0;
  virtual void exitV6host(urlParser::V6hostContext *ctx) = 0;

  virtual void enterV6hostSegment(urlParser::V6hostSegmentContext *ctx) = 0;
  virtual void exitV6hostSegment(urlParser::V6hostSegmentContext *ctx) = 0;

  virtual void enterV6hostSep(urlParser::V6hostSepContext *ctx) = 0;
  virtual void exitV6hostSep(urlParser::V6hostSepContext *ctx) = 0;

  virtual void enterV6hostConfigParam(urlParser::V6hostConfigParamContext *ctx) = 0;
  virtual void exitV6hostConfigParam(urlParser::V6hostConfigParamContext *ctx) = 0;

  virtual void enterPort(urlParser::PortContext *ctx) = 0;
  virtual void exitPort(urlParser::PortContext *ctx) = 0;

  virtual void enterPath(urlParser::PathContext *ctx) = 0;
  virtual void exitPath(urlParser::PathContext *ctx) = 0;

  virtual void enterMultiPathChunk(urlParser::MultiPathChunkContext *ctx) = 0;
  virtual void exitMultiPathChunk(urlParser::MultiPathChunkContext *ctx) = 0;

  virtual void enterPathString(urlParser::PathStringContext *ctx) = 0;
  virtual void exitPathString(urlParser::PathStringContext *ctx) = 0;

  virtual void enterUser(urlParser::UserContext *ctx) = 0;
  virtual void exitUser(urlParser::UserContext *ctx) = 0;

  virtual void enterLogin(urlParser::LoginContext *ctx) = 0;
  virtual void exitLogin(urlParser::LoginContext *ctx) = 0;

  virtual void enterLoginPassword(urlParser::LoginPasswordContext *ctx) = 0;
  virtual void exitLoginPassword(urlParser::LoginPasswordContext *ctx) = 0;

  virtual void enterPassword(urlParser::PasswordContext *ctx) = 0;
  virtual void exitPassword(urlParser::PasswordContext *ctx) = 0;

  virtual void enterFrag(urlParser::FragContext *ctx) = 0;
  virtual void exitFrag(urlParser::FragContext *ctx) = 0;

  virtual void enterFragString(urlParser::FragStringContext *ctx) = 0;
  virtual void exitFragString(urlParser::FragStringContext *ctx) = 0;

  virtual void enterQuery(urlParser::QueryContext *ctx) = 0;
  virtual void exitQuery(urlParser::QueryContext *ctx) = 0;

  virtual void enterSearch(urlParser::SearchContext *ctx) = 0;
  virtual void exitSearch(urlParser::SearchContext *ctx) = 0;

  virtual void enterMultiSearch(urlParser::MultiSearchContext *ctx) = 0;
  virtual void exitMultiSearch(urlParser::MultiSearchContext *ctx) = 0;

  virtual void enterSearchParameter(urlParser::SearchParameterContext *ctx) = 0;
  virtual void exitSearchParameter(urlParser::SearchParameterContext *ctx) = 0;

  virtual void enterSearchParameterKey(urlParser::SearchParameterKeyContext *ctx) = 0;
  virtual void exitSearchParameterKey(urlParser::SearchParameterKeyContext *ctx) = 0;

  virtual void enterSearchParameterValue(urlParser::SearchParameterValueContext *ctx) = 0;
  virtual void exitSearchParameterValue(urlParser::SearchParameterValueContext *ctx) = 0;

  virtual void enterSearchParameterValueString(urlParser::SearchParameterValueStringContext *ctx) = 0;
  virtual void exitSearchParameterValueString(urlParser::SearchParameterValueStringContext *ctx) = 0;

  virtual void enterParameterString(urlParser::ParameterStringContext *ctx) = 0;
  virtual void exitParameterString(urlParser::ParameterStringContext *ctx) = 0;

  virtual void enterParameterName(urlParser::ParameterNameContext *ctx) = 0;
  virtual void exitParameterName(urlParser::ParameterNameContext *ctx) = 0;

  virtual void enterConfigParam(urlParser::ConfigParamContext *ctx) = 0;
  virtual void exitConfigParam(urlParser::ConfigParamContext *ctx) = 0;

  virtual void enterString(urlParser::StringContext *ctx) = 0;
  virtual void exitString(urlParser::StringContext *ctx) = 0;

  virtual void enterUsString(urlParser::UsStringContext *ctx) = 0;
  virtual void exitUsString(urlParser::UsStringContext *ctx) = 0;


};

}  // namespace antlrcpp
