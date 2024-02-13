grammar Sites;

import url, PhoneNumber;

sites : sitesList EOF ;

sitesList : siteListEntry+ ;

siteListEntry : comment | site ;

comment : HASH commentTextFragment* WS ;

commentTextFragment : STRING
                    | SPACE
                    | GRAVE
                    | DOLLAR
                    | COMMA
                    | COL
                    | DIGITS
                    | FS
                    ;

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

resourceTextNumber : ALPHANUM+ ;

resourcePhoneNumber : phone ;

resourceUrl : url ;

resourceOptional : COMMA resourceDataContext ;

resourceDataContext : ANY | resourceDataContextSpecifier;

resourceDataContextSpecifier : STRING ;

entityId : entityIdSegment+ ;

entityIdSegment : ALPHA | HYPH ;

entityName : ALPHA entityNameSegment* ;

entityNameSegment : SPACE | ALPHA | HYPH ;

/* Lexer Rules */

ANY : 'any' ;

TEXT : 'text' ;

CALL : 'call' ;

CHAT : 'chat' ;

TEST : 'test' ;

CALL_LIST : 'call-list' ;

LITERATURE : 'literature' ;

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

DOLLAR : '$' ;

COMMA : ',' ;
