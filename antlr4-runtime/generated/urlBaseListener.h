
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "urlListener.h"


namespace antlrcpp {

/**
 * This class provides an empty implementation of urlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  urlBaseListener : public urlListener {
public:

  virtual void enterUrl(urlParser::UrlContext * /*ctx*/) override { }
  virtual void exitUrl(urlParser::UrlContext * /*ctx*/) override { }

  virtual void enterUri(urlParser::UriContext * /*ctx*/) override { }
  virtual void exitUri(urlParser::UriContext * /*ctx*/) override { }

  virtual void enterUriPort(urlParser::UriPortContext * /*ctx*/) override { }
  virtual void exitUriPort(urlParser::UriPortContext * /*ctx*/) override { }

  virtual void enterUriPath(urlParser::UriPathContext * /*ctx*/) override { }
  virtual void exitUriPath(urlParser::UriPathContext * /*ctx*/) override { }

  virtual void enterScheme(urlParser::SchemeContext * /*ctx*/) override { }
  virtual void exitScheme(urlParser::SchemeContext * /*ctx*/) override { }

  virtual void enterSchemeSeparator(urlParser::SchemeSeparatorContext * /*ctx*/) override { }
  virtual void exitSchemeSeparator(urlParser::SchemeSeparatorContext * /*ctx*/) override { }

  virtual void enterUriSchemePrefix(urlParser::UriSchemePrefixContext * /*ctx*/) override { }
  virtual void exitUriSchemePrefix(urlParser::UriSchemePrefixContext * /*ctx*/) override { }

  virtual void enterUriScheme(urlParser::UriSchemeContext * /*ctx*/) override { }
  virtual void exitUriScheme(urlParser::UriSchemeContext * /*ctx*/) override { }

  virtual void enterHost(urlParser::HostContext * /*ctx*/) override { }
  virtual void exitHost(urlParser::HostContext * /*ctx*/) override { }

  virtual void enterHostname(urlParser::HostnameContext * /*ctx*/) override { }
  virtual void exitHostname(urlParser::HostnameContext * /*ctx*/) override { }

  virtual void enterDomainNameOrIpv4Host(urlParser::DomainNameOrIpv4HostContext * /*ctx*/) override { }
  virtual void exitDomainNameOrIpv4Host(urlParser::DomainNameOrIpv4HostContext * /*ctx*/) override { }

  virtual void enterIpv6Host(urlParser::Ipv6HostContext * /*ctx*/) override { }
  virtual void exitIpv6Host(urlParser::Ipv6HostContext * /*ctx*/) override { }

  virtual void enterV6host(urlParser::V6hostContext * /*ctx*/) override { }
  virtual void exitV6host(urlParser::V6hostContext * /*ctx*/) override { }

  virtual void enterV6hostSegment(urlParser::V6hostSegmentContext * /*ctx*/) override { }
  virtual void exitV6hostSegment(urlParser::V6hostSegmentContext * /*ctx*/) override { }

  virtual void enterV6hostSep(urlParser::V6hostSepContext * /*ctx*/) override { }
  virtual void exitV6hostSep(urlParser::V6hostSepContext * /*ctx*/) override { }

  virtual void enterV6hostConfigParam(urlParser::V6hostConfigParamContext * /*ctx*/) override { }
  virtual void exitV6hostConfigParam(urlParser::V6hostConfigParamContext * /*ctx*/) override { }

  virtual void enterPort(urlParser::PortContext * /*ctx*/) override { }
  virtual void exitPort(urlParser::PortContext * /*ctx*/) override { }

  virtual void enterPath(urlParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(urlParser::PathContext * /*ctx*/) override { }

  virtual void enterMultiPathChunk(urlParser::MultiPathChunkContext * /*ctx*/) override { }
  virtual void exitMultiPathChunk(urlParser::MultiPathChunkContext * /*ctx*/) override { }

  virtual void enterPathString(urlParser::PathStringContext * /*ctx*/) override { }
  virtual void exitPathString(urlParser::PathStringContext * /*ctx*/) override { }

  virtual void enterLogin(urlParser::LoginContext * /*ctx*/) override { }
  virtual void exitLogin(urlParser::LoginContext * /*ctx*/) override { }

  virtual void enterUser(urlParser::UserContext * /*ctx*/) override { }
  virtual void exitUser(urlParser::UserContext * /*ctx*/) override { }

  virtual void enterLoginPassword(urlParser::LoginPasswordContext * /*ctx*/) override { }
  virtual void exitLoginPassword(urlParser::LoginPasswordContext * /*ctx*/) override { }

  virtual void enterPassword(urlParser::PasswordContext * /*ctx*/) override { }
  virtual void exitPassword(urlParser::PasswordContext * /*ctx*/) override { }

  virtual void enterFrag(urlParser::FragContext * /*ctx*/) override { }
  virtual void exitFrag(urlParser::FragContext * /*ctx*/) override { }

  virtual void enterFragString(urlParser::FragStringContext * /*ctx*/) override { }
  virtual void exitFragString(urlParser::FragStringContext * /*ctx*/) override { }

  virtual void enterQuery(urlParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(urlParser::QueryContext * /*ctx*/) override { }

  virtual void enterSearch(urlParser::SearchContext * /*ctx*/) override { }
  virtual void exitSearch(urlParser::SearchContext * /*ctx*/) override { }

  virtual void enterMultiSearch(urlParser::MultiSearchContext * /*ctx*/) override { }
  virtual void exitMultiSearch(urlParser::MultiSearchContext * /*ctx*/) override { }

  virtual void enterSearchParameter(urlParser::SearchParameterContext * /*ctx*/) override { }
  virtual void exitSearchParameter(urlParser::SearchParameterContext * /*ctx*/) override { }

  virtual void enterSearchParameterKey(urlParser::SearchParameterKeyContext * /*ctx*/) override { }
  virtual void exitSearchParameterKey(urlParser::SearchParameterKeyContext * /*ctx*/) override { }

  virtual void enterSearchParameterValue(urlParser::SearchParameterValueContext * /*ctx*/) override { }
  virtual void exitSearchParameterValue(urlParser::SearchParameterValueContext * /*ctx*/) override { }

  virtual void enterParameterString(urlParser::ParameterStringContext * /*ctx*/) override { }
  virtual void exitParameterString(urlParser::ParameterStringContext * /*ctx*/) override { }

  virtual void enterParameterName(urlParser::ParameterNameContext * /*ctx*/) override { }
  virtual void exitParameterName(urlParser::ParameterNameContext * /*ctx*/) override { }

  virtual void enterConfigParam(urlParser::ConfigParamContext * /*ctx*/) override { }
  virtual void exitConfigParam(urlParser::ConfigParamContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpp
