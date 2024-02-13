##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=GRHCrawler
ConfigurationName      :=Debug
WorkspacePath          :=/home/jhyry/Code/GamblingRecoveryHelp
ProjectPath            :=/home/jhyry/Code/GamblingRecoveryHelp/GRHCrawler
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan Hyry
Date                   :=10/02/24
CodeLitePath           :=/home/jhyry/.codelite
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="GRHCrawler.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)./include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/llvm-ar rcu
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/llvm-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/grh_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/grh_main.cpp$(ObjectSuffix): grh_main.cpp $(IntermediateDirectory)/grh_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jhyry/Code/GamblingRecoveryHelp/GRHCrawler/grh_main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/grh_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/grh_main.cpp$(DependSuffix): grh_main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/grh_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/grh_main.cpp$(DependSuffix) -MM grh_main.cpp

$(IntermediateDirectory)/grh_main.cpp$(PreprocessSuffix): grh_main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/grh_main.cpp$(PreprocessSuffix) grh_main.cpp

$(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(ObjectSuffix): src/crawler/grh_crawler.cpp $(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jhyry/Code/GamblingRecoveryHelp/GRHCrawler/src/crawler/grh_crawler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(DependSuffix): src/crawler/grh_crawler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(DependSuffix) -MM src/crawler/grh_crawler.cpp

$(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(PreprocessSuffix): src/crawler/grh_crawler.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_crawler_grh_crawler.cpp$(PreprocessSuffix) src/crawler/grh_crawler.cpp

$(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(ObjectSuffix): src/crawler/db/grh_crawler_db.cpp $(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jhyry/Code/GamblingRecoveryHelp/GRHCrawler/src/crawler/db/grh_crawler_db.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(DependSuffix): src/crawler/db/grh_crawler_db.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(DependSuffix) -MM src/crawler/db/grh_crawler_db.cpp

$(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(PreprocessSuffix): src/crawler/db/grh_crawler_db.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_crawler_db_grh_crawler_db.cpp$(PreprocessSuffix) src/crawler/db/grh_crawler_db.cpp

$(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(ObjectSuffix): src/crawler/config/grh_crawler_config.cpp $(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jhyry/Code/GamblingRecoveryHelp/GRHCrawler/src/crawler/config/grh_crawler_config.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(DependSuffix): src/crawler/config/grh_crawler_config.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(DependSuffix) -MM src/crawler/config/grh_crawler_config.cpp

$(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(PreprocessSuffix): src/crawler/config/grh_crawler_config.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_crawler_config_grh_crawler_config.cpp$(PreprocessSuffix) src/crawler/config/grh_crawler_config.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


