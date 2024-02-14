
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "PhoneNumberVisitor.h"


namespace antlrcpp {

/**
 * This class provides an empty implementation of PhoneNumberVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PhoneNumberBaseVisitor : public PhoneNumberVisitor {
public:

  virtual std::any visitPhone(PhoneNumberParser::PhoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCountryCode(PhoneNumberParser::CountryCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAreaCode(PhoneNumberParser::AreaCodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPhoneNumber(PhoneNumberParser::PhoneNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalPhone(PhoneNumberParser::LocalPhoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalArea(PhoneNumberParser::LocalAreaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalizer(PhoneNumberParser::LocalizerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDtmf(PhoneNumberParser::DtmfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDtmfWithLocal(PhoneNumberParser::DtmfWithLocalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalAreaWithDtmf(PhoneNumberParser::LocalAreaWithDtmfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDtmfAll(PhoneNumberParser::DtmfAllContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDtmfLocalizer(PhoneNumberParser::DtmfLocalizerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPhoneSep(PhoneNumberParser::PhoneSepContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpp
