
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "urlVisitor.h"


namespace antlrcpp {

/**
 * This class provides an empty implementation of urlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  urlBaseVisitor : public urlVisitor {
public:

  virtual std::any visitUrl(urlParser::UrlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUri(urlParser::UriContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUriPort(urlParser::UriPortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUriPath(urlParser::UriPathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScheme(urlParser::SchemeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost(urlParser::HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHostname(urlParser::HostnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDomainNameOrIpv4Host(urlParser::DomainNameOrIpv4HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIpv6Host(urlParser::Ipv6HostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitV6host(urlParser::V6hostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitV6hostSegment(urlParser::V6hostSegmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitV6hostSep(urlParser::V6hostSepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitV6hostConfigParam(urlParser::V6hostConfigParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPort(urlParser::PortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPath(urlParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiPathChunk(urlParser::MultiPathChunkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPathString(urlParser::PathStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser(urlParser::UserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogin(urlParser::LoginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoginPassword(urlParser::LoginPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPassword(urlParser::PasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrag(urlParser::FragContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFragString(urlParser::FragStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(urlParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch(urlParser::SearchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiSearch(urlParser::MultiSearchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchParameter(urlParser::SearchParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchParameterKey(urlParser::SearchParameterKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchParameterValue(urlParser::SearchParameterValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchParameterValueString(urlParser::SearchParameterValueStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterString(urlParser::ParameterStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterName(urlParser::ParameterNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConfigParam(urlParser::ConfigParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(urlParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsString(urlParser::UsStringContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpp
