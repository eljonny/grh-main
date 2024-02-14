
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "PhoneNumberParser.h"


namespace antlrcpp {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PhoneNumberParser.
 */
class  PhoneNumberVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PhoneNumberParser.
   */
    virtual std::any visitPhone(PhoneNumberParser::PhoneContext *context) = 0;

    virtual std::any visitCountryCode(PhoneNumberParser::CountryCodeContext *context) = 0;

    virtual std::any visitAreaCode(PhoneNumberParser::AreaCodeContext *context) = 0;

    virtual std::any visitPhoneNumber(PhoneNumberParser::PhoneNumberContext *context) = 0;

    virtual std::any visitLocalPhone(PhoneNumberParser::LocalPhoneContext *context) = 0;

    virtual std::any visitLocalArea(PhoneNumberParser::LocalAreaContext *context) = 0;

    virtual std::any visitLocalizer(PhoneNumberParser::LocalizerContext *context) = 0;

    virtual std::any visitDtmf(PhoneNumberParser::DtmfContext *context) = 0;

    virtual std::any visitDtmfWithLocal(PhoneNumberParser::DtmfWithLocalContext *context) = 0;

    virtual std::any visitLocalAreaWithDtmf(PhoneNumberParser::LocalAreaWithDtmfContext *context) = 0;

    virtual std::any visitDtmfAll(PhoneNumberParser::DtmfAllContext *context) = 0;

    virtual std::any visitDtmfLocalizer(PhoneNumberParser::DtmfLocalizerContext *context) = 0;

    virtual std::any visitPhoneSep(PhoneNumberParser::PhoneSepContext *context) = 0;


};

}  // namespace antlrcpp
