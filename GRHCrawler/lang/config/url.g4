/*
BSD License

Copyright (c) 2016, Tom Everett
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. Neither the name of Tom Everett nor the names of its contributors
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 * scheme:[//[user:password@]host[:port]][/]path[?query][#fragment]
 */

// $antlr-format alignTrailingComments true, columnLimit 150, minEmptyLines 1, maxEmptyLinesToKeep 1, reflowComments false, useTab false
// $antlr-format allowShortRulesOnASingleLine false, allowShortBlocksOnASingleLine true, alignSemicolons hanging, alignColons hanging

grammar url;

import CommonRules;

url
    : uri
    ;

uri
    : scheme schemeSeparator login? host uriPort? uriPath? query? frag?
    ;

uriPort
    : COL port
    ;

uriPath
    : FS path?
    ;

scheme
    : uriSchemePrefix? uriScheme
    ;

schemeSeparator
    : COL FS? FS?
    ;

uriSchemePrefix
    : BASIC_STRING
    ;

uriScheme
    : BASIC_STRING
    ;

host
    : FS? hostname
    ;

hostname
    : domainNameOrIpv4Host | ipv6Host
    ;

domainNameOrIpv4Host
    : parameterString | BASIC_STRING | STRING | DIGITS
    ;

ipv6Host
    : LBRACKET v6host RBRACKET
    ;

v6host
    : DBL_COL? v6hostConfigParam v6hostSegment*
    ;

v6hostSegment
    : v6hostSep v6hostConfigParam
    ;

v6hostSep
    : COL | DBL_COL
    ;

v6hostConfigParam
    : configParam
    ;

port
    : DIGITS
    ;

path
    : pathString+ multiPathChunk* FS?
    ;

multiPathChunk
    : FS pathString+
    ;

pathString
    : parameterString | BASIC_STRING | STRING | DIGITS | HYPH | US
    ;

login
    : user loginPassword? AT
    ;

user
    : parameterString | BASIC_STRING | STRING | DIGITS
    ;

loginPassword
    : COL password
    ;

password
    : parameterString | BASIC_STRING | STRING | DIGITS
    ;

frag
    : HASH fragString
    ;

fragString
    : parameterString | BASIC_STRING | STRING | DIGITS
    ;

query
    : Q search?
    ;

search
    : searchParameter multiSearch*
    ;

multiSearch
    : AMP searchParameter
    ;

searchParameter
    : searchParameterKey EQ searchParameterValue*
    ;

searchParameterKey
    : parameterString | BASIC_STRING | STRING | DIGITS
    ;

searchParameterValue
    : parameterString | BASIC_STRING | STRING | DIGITS | HEX+ | COL
    ;

parameterString
    : DBL_DOLLAR parameterName DBL_DOLLAR
    ;

parameterName
    : BASIC_STRING | STRING | DIGITS
    ;

configParam
    : parameterString | BASIC_STRING | STRING | DIGITS
    ;

/* Lexer Rules */

DBL_DOLLAR
    : DOLLAR DOLLAR
    ;

DBL_COL
    : COL COL
    ;
