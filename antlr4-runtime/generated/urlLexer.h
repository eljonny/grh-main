
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/url.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  urlLexer : public antlr4::Lexer {
public:
  enum {
    SCHEME_SEP = 1, DBL_DOLLAR = 2, DBL_COL = 3, AMP = 4, AT = 5, LBRACKET = 6, 
    RBRACKET = 7, Q = 8, WS = 9, STRING = 10, ALPHANUM = 11, ALPHA = 12, 
    HEX = 13, HEX_ALPHA = 14, DIGITS = 15, SINGLE_DIGIT_INT = 16, ZERO = 17, 
    EQ = 18, COL = 19, HASH = 20, SPACE = 21, DOLLAR = 22, FS = 23, US = 24, 
    PLUS = 25, HYPH = 26, PERC = 27
  };

  explicit urlLexer(antlr4::CharStream *input);

  ~urlLexer() override;


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
