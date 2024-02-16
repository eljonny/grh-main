grammar PhoneNumber;

import CommonRules;

phone : countryCode phoneSep
        areaCode phoneSep
        phoneNumber EOF?
      ;

countryCode : PLUS? DIGITS ;

areaCode : LPAREN? DIGITS RPAREN?;

phoneNumber : localPhone | dtmf ;

localPhone : localArea phoneSep localizer ;

localArea : DIGITS ;

localizer : DIGITS ;

dtmf : dtmfWithLocal | dtmfAll ;

dtmfWithLocal : localAreaWithDtmf phoneSep? dtmfLocalizer ;

localAreaWithDtmf : (DIGITS | BASIC_STRING)+ ;

dtmfAll : BASIC_STRING ;

dtmfLocalizer : BASIC_STRING ;

phoneSep : SPACE | HYPH | PERIOD ;

/* Lexer Rules */

LPAREN : '(' ;

RPAREN : ')' ;
