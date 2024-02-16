lexer grammar CommonRules;

WS : [\r\n]+ ;

BASIC_STRING : BASIC_STRING_HEAD BASIC_STRING_TAIL* ;

fragment BASIC_STRING_HEAD : ALPHA ;

fragment BASIC_STRING_TAIL : ALPHA
                           | SINGLE_DIGIT_INT
                           | PERIOD
                           | HYPH
                           | PLUS
                           ;

STRING : STRING_HEAD STRING_TAIL* ;

fragment STRING_HEAD : BASIC_STRING_HEAD | HEX ;

fragment STRING_TAIL : BASIC_STRING_TAIL
                     | US
                     | HEX
                     ;

DIGITS : SINGLE_DIGIT_INT+ ;

ALPHANUM : ALPHA | SINGLE_DIGIT_INT ;

ALPHA : HEX_ALPHA | [g-zG-Z] ;

HEX : PERC HEX_DIGIT HEX_DIGIT ;

fragment HEX_DIGIT : HEX_ALPHA | SINGLE_DIGIT_INT ;

fragment HEX_ALPHA : [a-fA-F] ;

SINGLE_DIGIT_INT : [1-9] | ZERO ;

ZERO : [0] ;

PERIOD : '.' ;

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

LBRACKET : '[' ;

RBRACKET : ']' ;

AMP : '&' ;

AT : '@' ;

Q : '?' ;
