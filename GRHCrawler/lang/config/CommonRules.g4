lexer grammar CommonRules;

PLUS : '+' ;

EQ : '=' ;

HYPH : '-' ;

COL : ':' ;

STRING : (ALPHA | HEX) ([.] | PLUS | ALPHA | SINGLE_DIGIT_INT | HYPH | US | HEX)* ;

ALPHA : HEX_ALPHA | [g-zG-Z] ;

HEX_ALPHA : [a-fA-F] ;

DIGITS : SINGLE_DIGIT_INT+ ;

SINGLE_DIGIT_INT : [1-9] | ZERO ;

ZERO : [0] ;

WS : [\r\n]+ ;
