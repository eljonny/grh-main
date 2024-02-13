grammar PhoneNumber;

import CommonRules;

phone : countryCode phoneSep
        areaCode phoneSep
        phoneNumber
      ;

countryCode : PLUS? DIGITS ;

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

phoneSep : SPACE | HYPH ;

/* Lexer Rules */

LPAREN : '(' ;

RPAREN : ')' ;
