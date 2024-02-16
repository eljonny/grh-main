grammar Sites;

import url, PhoneNumber;

sites : sitesList EOF ;

sitesList : siteListEntry+ ;

siteListEntry : comment | site ;

comment : HASH commentTextFragment* WS ;

commentTextFragment : BASIC_STRING
                    | STRING
                    | SPACE
                    | GRAVE
                    | DOLLAR
                    | DBL_DOLLAR
                    | HYPH
                    | COMMA
                    | COL
                    | DIGITS
                    | FS
                    | DQUOTE
                    | HASH
                    | MEETINGS
                    | FELLOWSHIP
                    | ORGANIZATION
                    | RESOURCE
                    | TEXT
                    | CALL
                    | CHAT
                    | TEST
                    | CALL_LIST
                    | LITERATURE
                    | READING
                    | STORE
                    | BULLETIN
                    | US_IN_PERSON
                    | INTL_IN_PERSON
                    | ALL_IN_PERSON
                    | CA_IN_PERSON
                    | VIRTUAL
                    | PHONE
                    | LBRACKET
                    | RBRACKET
                    | AMP
                    | AT
                    | Q
                    | siteFormat
                    ;

siteFormat : GRAVE siteType GRAVE siteDetailFormat ;

siteType : MEETINGS
         | FELLOWSHIP
         | ORGANIZATION
         | RESOURCE
         ;

siteDetailFormat : siteFormatElement+ optionalDataElement* ;

siteFormatElement : COMMA siteFormatId ;

siteFormatId : BASIC_STRING | STRING ;

optionalDataElement : LBRACKET COMMA optionalSiteFormatId RBRACKET ;

optionalSiteFormatId : siteFormatId ;

site : siteDetail WS ;

siteDetail : meetings
           | fellowship
           | organization
           | resource
           ;

meetings : MEETINGS COMMA
           fellowshipId COMMA
           meetingLocationType COMMA
           meetingsDataUrl
         ;

fellowshipId : entityId ;

meetingLocationType : US_IN_PERSON
                    | INTL_IN_PERSON
                    | ALL_IN_PERSON
                    | CA_IN_PERSON
                    | VIRTUAL
                    | PHONE
                    ;

meetingsDataUrl : url ;

fellowship : FELLOWSHIP COMMA
             fellowshipId COMMA
             fellowshipName COMMA
             fellowshipUrl
           ;

fellowshipName : entityName ;

fellowshipUrl : url ;

organization : ORGANIZATION COMMA
               organizationId COMMA
               organizationName COMMA
               organizationUrl
             ;

organizationId : entityId ;

organizationName : entityName ;

organizationUrl : url ;

resource : RESOURCE COMMA
           resourceEntityId COMMA
           resourceType COMMA
           resourceDataPrimary
           resourceOptional?
         ;

resourceEntityId : fellowshipId | organizationId ;

resourceType : TEXT
             | CALL
             | CHAT
             | TEST
             | CALL_LIST
             | LITERATURE
             | READING
             | STORE
             | BULLETIN
             ;

resourceDataPrimary : resourceTextNumber
                    | resourcePhoneNumber
                    | resourceUrl
                    ;

resourceTextNumber : DIGITS+ BASIC_STRING* ;

resourcePhoneNumber : phone ;

resourceUrl : url ;

resourceOptional : COMMA resourceDataContext ;

resourceDataContext : ANY | resourceDataContextSpecifier;

resourceDataContextSpecifier : BASIC_STRING | STRING ;

entityId : entityIdSegment+ ;

entityIdSegment : BASIC_STRING | STRING | HYPH ;

entityName : (BASIC_STRING | STRING) entityNameSegment* ;

entityNameSegment : SPACE | BASIC_STRING | STRING | HYPH ;

/* Lexer Rules */

ANY : 'any' ;

TEXT : 'text' ;

CALL : 'call' ;

CHAT : 'chat' ;

TEST : 'test' ;

CALL_LIST : 'call-list' ;

LITERATURE : 'program-literature' ;

READING : 'reading' ;

STORE : 'store' ;

BULLETIN : 'bulletin' ;

US_IN_PERSON : 'us-in-person' ;

INTL_IN_PERSON : 'intl-in-person' ;

ALL_IN_PERSON : 'all-in-person' ;

CA_IN_PERSON : 'ca-in-person' ;

VIRTUAL : 'virtual' ;

PHONE : 'phone' ;

MEETINGS : 'meetings' ;

FELLOWSHIP : 'fellowship' ;

ORGANIZATION : 'organization' ;

RESOURCE : 'resource' ;

GRAVE : '`' ;

DQUOTE : '"' ;

COMMA : ',' ;
