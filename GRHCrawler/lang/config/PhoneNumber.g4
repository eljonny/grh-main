grammar PhoneNumber;

import CommonRules;

phone : countryCode SPACE
        areaCode SPACE
        phoneNumber
      ;

countryCode : PLUS? DIGITS ;

phoneSep : SPACE | HYPH ;

areaCode : LPAREN? DIGITS RPAREN?;

phoneNumber : localPhone | dtmf ;

localPhone : localArea phoneSep localizer ;

localArea : DIGITS ;

localizer : DIGITS ;

dtmf : dtmfWithLocal | dtmfAll ;

dtmfWithLocal : localAreaWithDtmf phoneSep? dtmfLocalizer ;

localAreaWithDtmf : ALPHANUM+ ;

dtmfAll : ALPHANUM+ ;

dtmfLocalizer : ALPHANUM+ ;

/* Lexer Rules */

LPAREN : '(' ;

RPAREN : ')' ;
