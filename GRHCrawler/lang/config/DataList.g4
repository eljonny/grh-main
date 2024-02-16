grammar DataList;

import url;

dlist : source+ lastUpdated dataList+ EOF ;

dataList : startList listItem* endList ;

source : SOURCE EQ (STATIC_SOURCE | url) WS ;

lastUpdated : LAST_UPDATED EQ dateTime WS;

dateTime : year HYPH month HYPH day SPACE hour COL minute (COL second)?
           timeZone
         ;

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

startList : START_LIST SPACE+ listId SPACE* WS ;

listId : SOURCE ;

listItem : listItemContent WS;

listItemContent : numericalListItemContent | complexListItemContent ;

numericalListItemContent : DIGITS (SPACE+ DIGITS)* ;

complexListItemContent : dataListString (SPACE+ dataListString)* ;

dataListString : BASIC_STRING | STRING ;

endList : END_LIST SPACE+ listId SPACE* WS? ;

/* Lexer Rules */

SOURCE : 'source' DIGITS? ;

LAST_UPDATED : 'lastUpdated' ;

START_LIST : 'start-list' ;

END_LIST : 'end-list' ;

STATIC_SOURCE : 'static' ;
