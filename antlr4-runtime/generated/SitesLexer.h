
// Generated from /home/jhyry/Code/GamblingRecoveryHelp/antlr4-runtime/../GRHCrawler/lang/config/Sites.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp {


class  SitesLexer : public antlr4::Lexer {
public:
  enum {
    ANY = 1, TEXT = 2, CALL = 3, CHAT = 4, TEST = 5, CALL_LIST = 6, LITERATURE = 7, 
    READING = 8, STORE = 9, BULLETIN = 10, US_IN_PERSON = 11, INTL_IN_PERSON = 12, 
    ALL_IN_PERSON = 13, CA_IN_PERSON = 14, VIRTUAL = 15, PHONE = 16, MEETINGS = 17, 
    FELLOWSHIP = 18, ORGANIZATION = 19, RESOURCE = 20, GRAVE = 21, COMMA = 22, 
    SCHEME_SEP = 23, DBL_DOLLAR = 24, DBL_COL = 25, AMP = 26, AT = 27, LBRACKET = 28, 
    RBRACKET = 29, Q = 30, WS = 31, STRING = 32, ALPHANUM = 33, ALPHA = 34, 
    HEX = 35, HEX_ALPHA = 36, DIGITS = 37, SINGLE_DIGIT_INT = 38, ZERO = 39, 
    EQ = 40, COL = 41, HASH = 42, SPACE = 43, DOLLAR = 44, FS = 45, US = 46, 
    PLUS = 47, HYPH = 48, PERC = 49, LPAREN = 50, RPAREN = 51
  };

  explicit SitesLexer(antlr4::CharStream *input);

  ~SitesLexer() override;


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
