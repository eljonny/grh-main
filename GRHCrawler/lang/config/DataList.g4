grammar DataList;

import url;

dlist : source+ lastUpdated dataList+ EOF ;

dataList : startList listItem* endList ;

source : SOURCE EQ (STATIC_SOURCE | url) WS ;

lastUpdated : LAST_UPDATED EQ dateTime WS;

dateTime : year HYPH month HYPH day SPACE hour COL minute (COL second)? timeZone ;

year : DIGITS ;

month : DIGITS ;

day : DIGITS ;

hour : DIGITS ;

minute : DIGITS ;

second : DIGITS ;

timeZone : tzMod tzHour (COL tzMinutes)? ;

tzMod : PLUS | HYPH ;

tzHour : DIGITS ;

tzMinutes : DIGITS ;

startList : START_LIST WS ;

listItem : listItemContent WS;

listItemContent : DIGITS (SPACE DIGITS)* | STRING (SPACE STRING)*;

endList : END_LIST WS? ;

/* Lexer Rules */

SOURCE : 'source' DIGITS? ;

LAST_UPDATED : 'lastUpdated' ;

START_LIST : 'start-list' ;

END_LIST : 'end-list' ;

STATIC_SOURCE : 'static' ;

SPACE : ' ' ;
