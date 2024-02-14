# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

## Use the variable PROJECT_NAME for changing the target name
set(PROJECT_NAME "ANTLR4_CPP_Runtime")

## Set our project name
project(${PROJECT_NAME})

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

set(ANTLR4_TAG 7ed420ff2c78d62883875c442d75f32e73bc86c8)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)

# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr-4.13.1-complete.jar)
set(ANTLR_VERSION 4.13.1)

# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# Call macro to add lexer and grammar to your build dependencies.
# NOTE: Here, we define "antlr4cpp" as our project's namespace
antlr_target(CommonRulesLexer ${PROJECT_SOURCE_DIR}/../GRHCrawler/lang/config/CommonRules.g4
             PACKAGE antlrcpp
             OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/generated
             LEXER)
antlr_target(UrlParser ${PROJECT_SOURCE_DIR}/../GRHCrawler/lang/config/url.g4
             PACKAGE antlrcpp
             OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/generated
             DEPENDS_ANTLR CommonRulesLexer
             COMPILE_FLAGS -lib ${PROJECT_SOURCE_DIR}/generated
             LEXER
             PARSER
             LISTENER
             VISITOR)
antlr_target(PhoneNumberParser ${PROJECT_SOURCE_DIR}/../GRHCrawler/lang/config/PhoneNumber.g4
             PACKAGE antlrcpp
             OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/generated
             DEPENDS_ANTLR CommonRulesLexer
             COMPILE_FLAGS -lib ${PROJECT_SOURCE_DIR}/generated
             LEXER
             PARSER
             LISTENER
             VISITOR)
antlr_target(DataListParser ${PROJECT_SOURCE_DIR}/../GRHCrawler/lang/config/DataList.g4
             PACKAGE antlrcpp
             OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/generated
             DEPENDS_ANTLR UrlParser
             COMPILE_FLAGS -lib ${PROJECT_SOURCE_DIR}/generated
             LEXER
             PARSER
             LISTENER
             VISITOR)
antlr_target(SitesParser ${PROJECT_SOURCE_DIR}/../GRHCrawler/lang/config/Sites.g4
             PACKAGE antlrcpp
             OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/generated
             DEPENDS_ANTLR UrlParser PhoneNumberParser
             COMPILE_FLAGS -lib ${PROJECT_SOURCE_DIR}/generated
             LEXER
             PARSER
             LISTENER
             VISITOR)

# include generated files in project environment
include_directories(${PROJECT_SOURCE_DIR}/generated)

# add generated grammar to binary target
add_library(grh_lang_proc STATIC
             ${ANTLR_CommonRulesLexer_CXX_OUTPUTS}
             ${ANTLR_UrlParser_CXX_OUTPUTS}
             ${ANTLR_PhoneNumberParser_CXX_OUTPUTS}
             ${ANTLR_DataListParser_CXX_OUTPUTS}
             ${ANTLR_SitesParser_CXX_OUTPUTS})

target_link_libraries(grh_lang_proc antlr4_static)
