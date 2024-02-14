
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/CommonRules.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  CommonRules : public antlr4::Lexer {
public:
  enum {
    WS = 1, STRING = 2, ALPHANUM = 3, ALPHA = 4, HEX = 5, HEX_ALPHA = 6, 
    DIGITS = 7, SINGLE_DIGIT_INT = 8, ZERO = 9, EQ = 10, COL = 11, HASH = 12, 
    SPACE = 13, DOLLAR = 14, FS = 15, US = 16, PLUS = 17, HYPH = 18, PERC = 19
  };

  explicit CommonRules(antlr4::CharStream *input);

  ~CommonRules() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlrcpp
