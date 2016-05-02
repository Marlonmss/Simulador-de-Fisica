##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SimuladorFisica
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Alguem\git\Simulador-de-Fisica\Simulador de Fisica"
ProjectPath            := "C:\Users\Alguem\git\Simulador-de-Fisica\Simulador de Fisica\SimuladorFisica"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Alguem
Date                   :=02/05/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe" -shared -fPIC
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
ObjectsFileList        :="SimuladorFisica.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
CC       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mecanica.cpp$(ObjectSuffix) $(IntermediateDirectory)/UniformementeVariado.cpp$(ObjectSuffix) $(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(ObjectSuffix) $(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(ObjectSuffix) $(IntermediateDirectory)/Matematica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vetor.cpp$(ObjectSuffix) $(IntermediateDirectory)/Forca.cpp$(ObjectSuffix) $(IntermediateDirectory)/ForcaAtrito.cpp$(ObjectSuffix) $(IntermediateDirectory)/ForcaElastica.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/ForcaCentripeda.cpp$(ObjectSuffix) $(IntermediateDirectory)/TrabalhoEnergia.cpp$(ObjectSuffix) $(IntermediateDirectory)/QuantidadeMovimento.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Mecanica.cpp$(ObjectSuffix): Mecanica.cpp $(IntermediateDirectory)/Mecanica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/Mecanica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mecanica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mecanica.cpp$(DependSuffix): Mecanica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mecanica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mecanica.cpp$(DependSuffix) -MM "Mecanica.cpp"

$(IntermediateDirectory)/Mecanica.cpp$(PreprocessSuffix): Mecanica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mecanica.cpp$(PreprocessSuffix) "Mecanica.cpp"

$(IntermediateDirectory)/UniformementeVariado.cpp$(ObjectSuffix): UniformementeVariado.cpp $(IntermediateDirectory)/UniformementeVariado.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/UniformementeVariado.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/UniformementeVariado.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/UniformementeVariado.cpp$(DependSuffix): UniformementeVariado.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/UniformementeVariado.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/UniformementeVariado.cpp$(DependSuffix) -MM "UniformementeVariado.cpp"

$(IntermediateDirectory)/UniformementeVariado.cpp$(PreprocessSuffix): UniformementeVariado.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/UniformementeVariado.cpp$(PreprocessSuffix) "UniformementeVariado.cpp"

$(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(ObjectSuffix): UniformementeVariadoObliquo.cpp $(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/UniformementeVariadoObliquo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(DependSuffix): UniformementeVariadoObliquo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(DependSuffix) -MM "UniformementeVariadoObliquo.cpp"

$(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(PreprocessSuffix): UniformementeVariadoObliquo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/UniformementeVariadoObliquo.cpp$(PreprocessSuffix) "UniformementeVariadoObliquo.cpp"

$(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(ObjectSuffix): UniformementeVariadoCircular.cpp $(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/UniformementeVariadoCircular.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(DependSuffix): UniformementeVariadoCircular.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(DependSuffix) -MM "UniformementeVariadoCircular.cpp"

$(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(PreprocessSuffix): UniformementeVariadoCircular.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/UniformementeVariadoCircular.cpp$(PreprocessSuffix) "UniformementeVariadoCircular.cpp"

$(IntermediateDirectory)/Matematica.cpp$(ObjectSuffix): Matematica.cpp $(IntermediateDirectory)/Matematica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/Matematica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Matematica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Matematica.cpp$(DependSuffix): Matematica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Matematica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Matematica.cpp$(DependSuffix) -MM "Matematica.cpp"

$(IntermediateDirectory)/Matematica.cpp$(PreprocessSuffix): Matematica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Matematica.cpp$(PreprocessSuffix) "Matematica.cpp"

$(IntermediateDirectory)/Vetor.cpp$(ObjectSuffix): Vetor.cpp $(IntermediateDirectory)/Vetor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/Vetor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vetor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vetor.cpp$(DependSuffix): Vetor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vetor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vetor.cpp$(DependSuffix) -MM "Vetor.cpp"

$(IntermediateDirectory)/Vetor.cpp$(PreprocessSuffix): Vetor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vetor.cpp$(PreprocessSuffix) "Vetor.cpp"

$(IntermediateDirectory)/Forca.cpp$(ObjectSuffix): Forca.cpp $(IntermediateDirectory)/Forca.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/Forca.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Forca.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Forca.cpp$(DependSuffix): Forca.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Forca.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Forca.cpp$(DependSuffix) -MM "Forca.cpp"

$(IntermediateDirectory)/Forca.cpp$(PreprocessSuffix): Forca.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Forca.cpp$(PreprocessSuffix) "Forca.cpp"

$(IntermediateDirectory)/ForcaAtrito.cpp$(ObjectSuffix): ForcaAtrito.cpp $(IntermediateDirectory)/ForcaAtrito.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/ForcaAtrito.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ForcaAtrito.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ForcaAtrito.cpp$(DependSuffix): ForcaAtrito.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ForcaAtrito.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ForcaAtrito.cpp$(DependSuffix) -MM "ForcaAtrito.cpp"

$(IntermediateDirectory)/ForcaAtrito.cpp$(PreprocessSuffix): ForcaAtrito.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ForcaAtrito.cpp$(PreprocessSuffix) "ForcaAtrito.cpp"

$(IntermediateDirectory)/ForcaElastica.cpp$(ObjectSuffix): ForcaElastica.cpp $(IntermediateDirectory)/ForcaElastica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/ForcaElastica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ForcaElastica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ForcaElastica.cpp$(DependSuffix): ForcaElastica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ForcaElastica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ForcaElastica.cpp$(DependSuffix) -MM "ForcaElastica.cpp"

$(IntermediateDirectory)/ForcaElastica.cpp$(PreprocessSuffix): ForcaElastica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ForcaElastica.cpp$(PreprocessSuffix) "ForcaElastica.cpp"

$(IntermediateDirectory)/ForcaCentripeda.cpp$(ObjectSuffix): ForcaCentripeda.cpp $(IntermediateDirectory)/ForcaCentripeda.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/ForcaCentripeda.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ForcaCentripeda.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ForcaCentripeda.cpp$(DependSuffix): ForcaCentripeda.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ForcaCentripeda.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ForcaCentripeda.cpp$(DependSuffix) -MM "ForcaCentripeda.cpp"

$(IntermediateDirectory)/ForcaCentripeda.cpp$(PreprocessSuffix): ForcaCentripeda.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ForcaCentripeda.cpp$(PreprocessSuffix) "ForcaCentripeda.cpp"

$(IntermediateDirectory)/TrabalhoEnergia.cpp$(ObjectSuffix): TrabalhoEnergia.cpp $(IntermediateDirectory)/TrabalhoEnergia.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/TrabalhoEnergia.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TrabalhoEnergia.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TrabalhoEnergia.cpp$(DependSuffix): TrabalhoEnergia.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TrabalhoEnergia.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TrabalhoEnergia.cpp$(DependSuffix) -MM "TrabalhoEnergia.cpp"

$(IntermediateDirectory)/TrabalhoEnergia.cpp$(PreprocessSuffix): TrabalhoEnergia.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TrabalhoEnergia.cpp$(PreprocessSuffix) "TrabalhoEnergia.cpp"

$(IntermediateDirectory)/QuantidadeMovimento.cpp$(ObjectSuffix): QuantidadeMovimento.cpp $(IntermediateDirectory)/QuantidadeMovimento.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Simulador-de-Fisica/Simulador de Fisica/SimuladorFisica/QuantidadeMovimento.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/QuantidadeMovimento.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/QuantidadeMovimento.cpp$(DependSuffix): QuantidadeMovimento.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/QuantidadeMovimento.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/QuantidadeMovimento.cpp$(DependSuffix) -MM "QuantidadeMovimento.cpp"

$(IntermediateDirectory)/QuantidadeMovimento.cpp$(PreprocessSuffix): QuantidadeMovimento.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/QuantidadeMovimento.cpp$(PreprocessSuffix) "QuantidadeMovimento.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


