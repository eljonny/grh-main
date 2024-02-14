
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "PhoneNumberListener.h"


namespace antlrcpp {

/**
 * This class provides an empty implementation of PhoneNumberListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PhoneNumberBaseListener : public PhoneNumberListener {
public:

  virtual void enterPhone(PhoneNumberParser::PhoneContext * /*ctx*/) override { }
  virtual void exitPhone(PhoneNumberParser::PhoneContext * /*ctx*/) override { }

  virtual void enterCountryCode(PhoneNumberParser::CountryCodeContext * /*ctx*/) override { }
  virtual void exitCountryCode(PhoneNumberParser::CountryCodeContext * /*ctx*/) override { }

  virtual void enterAreaCode(PhoneNumberParser::AreaCodeContext * /*ctx*/) override { }
  virtual void exitAreaCode(PhoneNumberParser::AreaCodeContext * /*ctx*/) override { }

  virtual void enterPhoneNumber(PhoneNumberParser::PhoneNumberContext * /*ctx*/) override { }
  virtual void exitPhoneNumber(PhoneNumberParser::PhoneNumberContext * /*ctx*/) override { }

  virtual void enterLocalPhone(PhoneNumberParser::LocalPhoneContext * /*ctx*/) override { }
  virtual void exitLocalPhone(PhoneNumberParser::LocalPhoneContext * /*ctx*/) override { }

  virtual void enterLocalArea(PhoneNumberParser::LocalAreaContext * /*ctx*/) override { }
  virtual void exitLocalArea(PhoneNumberParser::LocalAreaContext * /*ctx*/) override { }

  virtual void enterLocalizer(PhoneNumberParser::LocalizerContext * /*ctx*/) override { }
  virtual void exitLocalizer(PhoneNumberParser::LocalizerContext * /*ctx*/) override { }

  virtual void enterDtmf(PhoneNumberParser::DtmfContext * /*ctx*/) override { }
  virtual void exitDtmf(PhoneNumberParser::DtmfContext * /*ctx*/) override { }

  virtual void enterDtmfWithLocal(PhoneNumberParser::DtmfWithLocalContext * /*ctx*/) override { }
  virtual void exitDtmfWithLocal(PhoneNumberParser::DtmfWithLocalContext * /*ctx*/) override { }

  virtual void enterLocalAreaWithDtmf(PhoneNumberParser::LocalAreaWithDtmfContext * /*ctx*/) override { }
  virtual void exitLocalAreaWithDtmf(PhoneNumberParser::LocalAreaWithDtmfContext * /*ctx*/) override { }

  virtual void enterDtmfAll(PhoneNumberParser::DtmfAllContext * /*ctx*/) override { }
  virtual void exitDtmfAll(PhoneNumberParser::DtmfAllContext * /*ctx*/) override { }

  virtual void enterDtmfLocalizer(PhoneNumberParser::DtmfLocalizerContext * /*ctx*/) override { }
  virtual void exitDtmfLocalizer(PhoneNumberParser::DtmfLocalizerContext * /*ctx*/) override { }

  virtual void enterPhoneSep(PhoneNumberParser::PhoneSepContext * /*ctx*/) override { }
  virtual void exitPhoneSep(PhoneNumberParser::PhoneSepContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpp
