
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/DataList.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  DataListLexer : public antlr4::Lexer {
public:
  enum {
    SOURCE = 1, LAST_UPDATED = 2, START_LIST = 3, END_LIST = 4, STATIC_SOURCE = 5, 
    DBL_DOLLAR = 6, DBL_COL = 7, WS = 8, BASIC_STRING = 9, STRING = 10, 
    DIGITS = 11, ALPHANUM = 12, ALPHA = 13, HEX = 14, SINGLE_DIGIT_INT = 15, 
    ZERO = 16, PERIOD = 17, EQ = 18, COL = 19, HASH = 20, SPACE = 21, DOLLAR = 22, 
    FS = 23, US = 24, PLUS = 25, HYPH = 26, PERC = 27, LBRACKET = 28, RBRACKET = 29, 
    AMP = 30, AT = 31, Q = 32
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
