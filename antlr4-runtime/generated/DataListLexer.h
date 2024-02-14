
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  DataListLexer : public antlr4::Lexer {
public:
  enum {
    SOURCE = 1, LAST_UPDATED = 2, START_LIST = 3, END_LIST = 4, STATIC_SOURCE = 5, 
    SCHEME_SEP = 6, DBL_DOLLAR = 7, DBL_COL = 8, AMP = 9, AT = 10, LBRACKET = 11, 
    RBRACKET = 12, Q = 13, WS = 14, STRING = 15, ALPHANUM = 16, ALPHA = 17, 
    HEX = 18, HEX_ALPHA = 19, DIGITS = 20, SINGLE_DIGIT_INT = 21, ZERO = 22, 
    EQ = 23, COL = 24, HASH = 25, SPACE = 26, DOLLAR = 27, FS = 28, US = 29, 
    PLUS = 30, HYPH = 31, PERC = 32
  };

  explicit DataListLexer(antlr4::CharStream *input);

  ~DataListLexer() override;


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
