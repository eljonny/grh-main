lexer grammar CommonRules;

WS : [\r\n]+ ;

STRING : (ALPHA | HEX)
         ([.] | PLUS | ALPHA | SINGLE_DIGIT_INT | HYPH | US | HEX)* ;

ALPHANUM : ALPHA | SINGLE_DIGIT_INT ;

ALPHA : HEX_ALPHA | [g-zG-Z] ;

HEX : (PERC (HEX_ALPHA | SINGLE_DIGIT_INT)
      (HEX_ALPHA | SINGLE_DIGIT_INT))+ ;

HEX_ALPHA : [a-fA-F] ;

DIGITS : SINGLE_DIGIT_INT+ ;

SINGLE_DIGIT_INT : [1-9] | ZERO ;

ZERO : [0] ;

EQ : '=' ;

COL : ':' ;

HASH : '#' ;

SPACE : ' ' ;

DOLLAR : '$' ;

FS : '/' ;

US : '_' ;

PLUS : '+' ;

HYPH : '-' ;

PERC : '%' ;
