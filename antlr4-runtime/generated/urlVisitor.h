
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "urlParser.h"


namespace antlrcpp {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by urlParser.
 */
class  urlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by urlParser.
   */
    virtual std::any visitUrl(urlParser::UrlContext *context) = 0;

    virtual std::any visitUri(urlParser::UriContext *context) = 0;

    virtual std::any visitUriPort(urlParser::UriPortContext *context) = 0;

    virtual std::any visitUriPath(urlParser::UriPathContext *context) = 0;

    virtual std::any visitScheme(urlParser::SchemeContext *context) = 0;

    virtual std::any visitSchemeSeparator(urlParser::SchemeSeparatorContext *context) = 0;

    virtual std::any visitUriSchemePrefix(urlParser::UriSchemePrefixContext *context) = 0;

    virtual std::any visitUriScheme(urlParser::UriSchemeContext *context) = 0;

    virtual std::any visitHost(urlParser::HostContext *context) = 0;

    virtual std::any visitHostname(urlParser::HostnameContext *context) = 0;

    virtual std::any visitDomainNameOrIpv4Host(urlParser::DomainNameOrIpv4HostContext *context) = 0;

    virtual std::any visitIpv6Host(urlParser::Ipv6HostContext *context) = 0;

    virtual std::any visitV6host(urlParser::V6hostContext *context) = 0;

    virtual std::any visitV6hostSegment(urlParser::V6hostSegmentContext *context) = 0;

    virtual std::any visitV6hostSep(urlParser::V6hostSepContext *context) = 0;

    virtual std::any visitV6hostConfigParam(urlParser::V6hostConfigParamContext *context) = 0;

    virtual std::any visitPort(urlParser::PortContext *context) = 0;

    virtual std::any visitPath(urlParser::PathContext *context) = 0;

    virtual std::any visitMultiPathChunk(urlParser::MultiPathChunkContext *context) = 0;

    virtual std::any visitPathString(urlParser::PathStringContext *context) = 0;

    virtual std::any visitLogin(urlParser::LoginContext *context) = 0;

    virtual std::any visitUser(urlParser::UserContext *context) = 0;

    virtual std::any visitLoginPassword(urlParser::LoginPasswordContext *context) = 0;

    virtual std::any visitPassword(urlParser::PasswordContext *context) = 0;

    virtual std::any visitFrag(urlParser::FragContext *context) = 0;

    virtual std::any visitFragString(urlParser::FragStringContext *context) = 0;

    virtual std::any visitQuery(urlParser::QueryContext *context) = 0;

    virtual std::any visitSearch(urlParser::SearchContext *context) = 0;

    virtual std::any visitMultiSearch(urlParser::MultiSearchContext *context) = 0;

    virtual std::any visitSearchParameter(urlParser::SearchParameterContext *context) = 0;

    virtual std::any visitSearchParameterKey(urlParser::SearchParameterKeyContext *context) = 0;

    virtual std::any visitSearchParameterValue(urlParser::SearchParameterValueContext *context) = 0;

    virtual std::any visitParameterString(urlParser::ParameterStringContext *context) = 0;

    virtual std::any visitParameterName(urlParser::ParameterNameContext *context) = 0;

    virtual std::any visitConfigParam(urlParser::ConfigParamContext *context) = 0;


};

}  // namespace antlrcpp
