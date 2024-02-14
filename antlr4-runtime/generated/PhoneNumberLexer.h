
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/PhoneNumber.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  PhoneNumberLexer : public antlr4::Lexer {
public:
  enum {
    LPAREN = 1, RPAREN = 2, WS = 3, STRING = 4, ALPHANUM = 5, ALPHA = 6, 
    HEX = 7, HEX_ALPHA = 8, DIGITS = 9, SINGLE_DIGIT_INT = 10, ZERO = 11, 
    EQ = 12, COL = 13, HASH = 14, SPACE = 15, DOLLAR = 16, FS = 17, US = 18, 
    PLUS = 19, HYPH = 20, PERC = 21
  };

  explicit PhoneNumberLexer(antlr4::CharStream *input);

  ~PhoneNumberLexer() override;


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
