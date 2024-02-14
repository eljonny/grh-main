
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "PhoneNumberParser.h"


namespace antlrcpp {

/**
 * This interface defines an abstract listener for a parse tree produced by PhoneNumberParser.
 */
class  PhoneNumberListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPhone(PhoneNumberParser::PhoneContext *ctx) = 0;
  virtual void exitPhone(PhoneNumberParser::PhoneContext *ctx) = 0;

  virtual void enterCountryCode(PhoneNumberParser::CountryCodeContext *ctx) = 0;
  virtual void exitCountryCode(PhoneNumberParser::CountryCodeContext *ctx) = 0;

  virtual void enterAreaCode(PhoneNumberParser::AreaCodeContext *ctx) = 0;
  virtual void exitAreaCode(PhoneNumberParser::AreaCodeContext *ctx) = 0;

  virtual void enterPhoneNumber(PhoneNumberParser::PhoneNumberContext *ctx) = 0;
  virtual void exitPhoneNumber(PhoneNumberParser::PhoneNumberContext *ctx) = 0;

  virtual void enterLocalPhone(PhoneNumberParser::LocalPhoneContext *ctx) = 0;
  virtual void exitLocalPhone(PhoneNumberParser::LocalPhoneContext *ctx) = 0;

  virtual void enterLocalArea(PhoneNumberParser::LocalAreaContext *ctx) = 0;
  virtual void exitLocalArea(PhoneNumberParser::LocalAreaContext *ctx) = 0;

  virtual void enterLocalizer(PhoneNumberParser::LocalizerContext *ctx) = 0;
  virtual void exitLocalizer(PhoneNumberParser::LocalizerContext *ctx) = 0;

  virtual void enterDtmf(PhoneNumberParser::DtmfContext *ctx) = 0;
  virtual void exitDtmf(PhoneNumberParser::DtmfContext *ctx) = 0;

  virtual void enterDtmfWithLocal(PhoneNumberParser::DtmfWithLocalContext *ctx) = 0;
  virtual void exitDtmfWithLocal(PhoneNumberParser::DtmfWithLocalContext *ctx) = 0;

  virtual void enterLocalAreaWithDtmf(PhoneNumberParser::LocalAreaWithDtmfContext *ctx) = 0;
  virtual void exitLocalAreaWithDtmf(PhoneNumberParser::LocalAreaWithDtmfContext *ctx) = 0;

  virtual void enterDtmfAll(PhoneNumberParser::DtmfAllContext *ctx) = 0;
  virtual void exitDtmfAll(PhoneNumberParser::DtmfAllContext *ctx) = 0;

  virtual void enterDtmfLocalizer(PhoneNumberParser::DtmfLocalizerContext *ctx) = 0;
  virtual void exitDtmfLocalizer(PhoneNumberParser::DtmfLocalizerContext *ctx) = 0;

  virtual void enterPhoneSep(PhoneNumberParser::PhoneSepContext *ctx) = 0;
  virtual void exitPhoneSep(PhoneNumberParser::PhoneSepContext *ctx) = 0;


};

}  // namespace antlrcpp
