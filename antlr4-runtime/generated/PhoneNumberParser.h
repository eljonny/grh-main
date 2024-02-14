
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  PhoneNumberParser : public antlr4::Parser {
public:
  enum {
    LPAREN = 1, RPAREN = 2, WS = 3, STRING = 4, ALPHANUM = 5, ALPHA = 6, 
    HEX = 7, HEX_ALPHA = 8, DIGITS = 9, SINGLE_DIGIT_INT = 10, ZERO = 11, 
    EQ = 12, COL = 13, HASH = 14, SPACE = 15, DOLLAR = 16, FS = 17, US = 18, 
    PLUS = 19, HYPH = 20, PERC = 21
  };

  enum {
    RulePhone = 0, RuleCountryCode = 1, RuleAreaCode = 2, RulePhoneNumber = 3, 
    RuleLocalPhone = 4, RuleLocalArea = 5, RuleLocalizer = 6, RuleDtmf = 7, 
    RuleDtmfWithLocal = 8, RuleLocalAreaWithDtmf = 9, RuleDtmfAll = 10, 
    RuleDtmfLocalizer = 11, RulePhoneSep = 12
  };

  explicit PhoneNumberParser(antlr4::TokenStream *input);

  PhoneNumberParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PhoneNumberParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class PhoneContext;
  class CountryCodeContext;
  class AreaCodeContext;
  class PhoneNumberContext;
  class LocalPhoneContext;
  class LocalAreaContext;
  class LocalizerContext;
  class DtmfContext;
  class DtmfWithLocalContext;
  class LocalAreaWithDtmfContext;
  class DtmfAllContext;
  class DtmfLocalizerContext;
  class PhoneSepContext; 

  class  PhoneContext : public antlr4::ParserRuleContext {
  public:
    PhoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CountryCodeContext *countryCode();
    std::vector<PhoneSepContext *> phoneSep();
    PhoneSepContext* phoneSep(size_t i);
    AreaCodeContext *areaCode();
    PhoneNumberContext *phoneNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhoneContext* phone();

  class  CountryCodeContext : public antlr4::ParserRuleContext {
  public:
    CountryCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CountryCodeContext* countryCode();

  class  AreaCodeContext : public antlr4::ParserRuleContext {
  public:
    AreaCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AreaCodeContext* areaCode();

  class  PhoneNumberContext : public antlr4::ParserRuleContext {
  public:
    PhoneNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalPhoneContext *localPhone();
    DtmfContext *dtmf();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhoneNumberContext* phoneNumber();

  class  LocalPhoneContext : public antlr4::ParserRuleContext {
  public:
    LocalPhoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalAreaContext *localArea();
    PhoneSepContext *phoneSep();
    LocalizerContext *localizer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalPhoneContext* localPhone();

  class  LocalAreaContext : public antlr4::ParserRuleContext {
  public:
    LocalAreaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalAreaContext* localArea();

  class  LocalizerContext : public antlr4::ParserRuleContext {
  public:
    LocalizerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGITS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalizerContext* localizer();

  class  DtmfContext : public antlr4::ParserRuleContext {
  public:
    DtmfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DtmfWithLocalContext *dtmfWithLocal();
    DtmfAllContext *dtmfAll();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfContext* dtmf();

  class  DtmfWithLocalContext : public antlr4::ParserRuleContext {
  public:
    DtmfWithLocalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalAreaWithDtmfContext *localAreaWithDtmf();
    DtmfLocalizerContext *dtmfLocalizer();
    PhoneSepContext *phoneSep();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfWithLocalContext* dtmfWithLocal();

  class  LocalAreaWithDtmfContext : public antlr4::ParserRuleContext {
  public:
    LocalAreaWithDtmfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalAreaWithDtmfContext* localAreaWithDtmf();

  class  DtmfAllContext : public antlr4::ParserRuleContext {
  public:
    DtmfAllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfAllContext* dtmfAll();

  class  DtmfLocalizerContext : public antlr4::ParserRuleContext {
  public:
    DtmfLocalizerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALPHANUM();
    antlr4::tree::TerminalNode* ALPHANUM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DtmfLocalizerContext* dtmfLocalizer();

  class  PhoneSepContext : public antlr4::ParserRuleContext {
  public:
    PhoneSepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *HYPH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PhoneSepContext* phoneSep();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpp
