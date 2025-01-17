# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget LLVMSupport LLVMMSSupport LLVMTableGen llvm-tblgen LLVMCore LLVMIRReader LLVMBitReader LLVMBitWriter LLVMTransformUtils LLVMInstCombine LLVMScalarOpts LLVMipo LLVMVectorize LLVMLinker LLVMAnalysis LLVMipa LLVMOption LLVMTarget LLVMAsmParser LLVMProfileData LLVMPasses LLVMPassPrinters LLVMDxcSupport LLVMHLSL LLVMDXIL LLVMDxilContainer LLVMDxilPdbInfo LLVMDxilPIXPasses LLVMDxilRootSignature LLVMDxcBindingTable LLVMDxrFallback LLVMDxilCompression llvm-config opt llvm-as llvm-dis llvm-link llvm-extract llvm-diff llvm-bcanalyzer llvm-stress verify-uselistorder clang-tblgen)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target LLVMSupport
add_library(LLVMSupport STATIC IMPORTED)

set_target_properties(LLVMSupport PROPERTIES
  INTERFACE_LINK_LIBRARIES "rt;dl;pthread;m;LLVMMSSupport"
)

# Create imported target LLVMMSSupport
add_library(LLVMMSSupport STATIC IMPORTED)

# Create imported target LLVMTableGen
add_library(LLVMTableGen STATIC IMPORTED)

set_target_properties(LLVMTableGen PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMSupport"
)

# Create imported target llvm-tblgen
add_executable(llvm-tblgen IMPORTED)

# Create imported target LLVMCore
add_library(LLVMCore STATIC IMPORTED)

set_target_properties(LLVMCore PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMSupport"
)

# Create imported target LLVMIRReader
add_library(LLVMIRReader STATIC IMPORTED)

set_target_properties(LLVMIRReader PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAsmParser;LLVMBitReader;LLVMCore;LLVMSupport"
)

# Create imported target LLVMBitReader
add_library(LLVMBitReader STATIC IMPORTED)

set_target_properties(LLVMBitReader PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMSupport"
)

# Create imported target LLVMBitWriter
add_library(LLVMBitWriter STATIC IMPORTED)

set_target_properties(LLVMBitWriter PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMSupport"
)

# Create imported target LLVMTransformUtils
add_library(LLVMTransformUtils STATIC IMPORTED)

set_target_properties(LLVMTransformUtils PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMSupport;LLVMipa;LLVMDXIL"
)

# Create imported target LLVMInstCombine
add_library(LLVMInstCombine STATIC IMPORTED)

set_target_properties(LLVMInstCombine PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils;LLVMDXIL"
)

# Create imported target LLVMScalarOpts
add_library(LLVMScalarOpts STATIC IMPORTED)

set_target_properties(LLVMScalarOpts PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMInstCombine;LLVMProfileData;LLVMSupport;LLVMTransformUtils;LLVMDXIL;LLVMHLSL"
)

# Create imported target LLVMipo
add_library(LLVMipo STATIC IMPORTED)

set_target_properties(LLVMipo PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMInstCombine;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMVectorize;LLVMipa;LLVMDXIL;LLVMHLSL"
)

# Create imported target LLVMVectorize
add_library(LLVMVectorize STATIC IMPORTED)

set_target_properties(LLVMVectorize PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils"
)

# Create imported target LLVMLinker
add_library(LLVMLinker STATIC IMPORTED)

set_target_properties(LLVMLinker PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMSupport;LLVMTransformUtils"
)

# Create imported target LLVMAnalysis
add_library(LLVMAnalysis STATIC IMPORTED)

set_target_properties(LLVMAnalysis PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMDXIL;LLVMSupport"
)

# Create imported target LLVMipa
add_library(LLVMipa STATIC IMPORTED)

set_target_properties(LLVMipa PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMSupport"
)

# Create imported target LLVMOption
add_library(LLVMOption STATIC IMPORTED)

set_target_properties(LLVMOption PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMSupport"
)

# Create imported target LLVMTarget
add_library(LLVMTarget STATIC IMPORTED)

set_target_properties(LLVMTarget PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMSupport"
)

# Create imported target LLVMAsmParser
add_library(LLVMAsmParser STATIC IMPORTED)

set_target_properties(LLVMAsmParser PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMSupport"
)

# Create imported target LLVMProfileData
add_library(LLVMProfileData STATIC IMPORTED)

set_target_properties(LLVMProfileData PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMSupport"
)

# Create imported target LLVMPasses
add_library(LLVMPasses STATIC IMPORTED)

set_target_properties(LLVMPasses PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMInstCombine;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMVectorize;LLVMipa;LLVMipo"
)

# Create imported target LLVMPassPrinters
add_library(LLVMPassPrinters STATIC IMPORTED)

set_target_properties(LLVMPassPrinters PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMCore;LLVMInstCombine;LLVMPasses;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMVectorize;LLVMipa;LLVMipo"
)

# Create imported target LLVMDxcSupport
add_library(LLVMDxcSupport STATIC IMPORTED)

set_target_properties(LLVMDxcSupport PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMSupport"
)

# Create imported target LLVMHLSL
add_library(LLVMHLSL STATIC IMPORTED)

set_target_properties(LLVMHLSL PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMBitReader;LLVMCore;LLVMDXIL;LLVMDxcBindingTable;LLVMDxcSupport;LLVMDxilContainer;LLVMSupport;LLVMipa"
)

# Create imported target LLVMDXIL
add_library(LLVMDXIL STATIC IMPORTED)

set_target_properties(LLVMDXIL PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMBitReader;LLVMCore;LLVMDxcSupport;LLVMSupport"
)

# Create imported target LLVMDxilContainer
add_library(LLVMDxilContainer STATIC IMPORTED)

set_target_properties(LLVMDxilContainer PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMDXIL;LLVMDxcSupport;LLVMSupport;LLVMTransformUtils;LLVMipa"
)

# Create imported target LLVMDxilPdbInfo
add_library(LLVMDxilPdbInfo STATIC IMPORTED)

set_target_properties(LLVMDxilPdbInfo PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMDxcSupport;LLVMDxilContainer;LLVMSupport"
)

# Create imported target LLVMDxilPIXPasses
add_library(LLVMDxilPIXPasses STATIC IMPORTED)

set_target_properties(LLVMDxilPIXPasses PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMBitReader;LLVMCore;LLVMDxcSupport;LLVMSupport;LLVMTransformUtils"
)

# Create imported target LLVMDxilRootSignature
add_library(LLVMDxilRootSignature STATIC IMPORTED)

set_target_properties(LLVMDxilRootSignature PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMBitReader;LLVMCore;LLVMDXIL;LLVMDxcSupport;LLVMDxilContainer;LLVMSupport;LLVMipa"
)

# Create imported target LLVMDxcBindingTable
add_library(LLVMDxcBindingTable STATIC IMPORTED)

set_target_properties(LLVMDxcBindingTable PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMDXIL;LLVMDxcSupport;LLVMSupport"
)

# Create imported target LLVMDxrFallback
add_library(LLVMDxrFallback STATIC IMPORTED)

set_target_properties(LLVMDxrFallback PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMSupport;LLVMPassPrinters"
)

# Create imported target LLVMDxilCompression
add_library(LLVMDxilCompression STATIC IMPORTED)

# Create imported target llvm-config
add_executable(llvm-config IMPORTED)

# Create imported target opt
add_executable(opt IMPORTED)
set_property(TARGET opt PROPERTY ENABLE_EXPORTS 1)

set_target_properties(opt PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMAnalysis;LLVMBitWriter;LLVMCore;LLVMDXIL;LLVMDxcBindingTable;LLVMHLSL;LLVMDxilContainer;LLVMDxilRootSignature;LLVMipa;LLVMipo;LLVMIRReader;LLVMInstCombine;LLVMPasses;LLVMPasses;LLVMPassPrinters;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMVectorize;LLVMMSSupport;LLVMDxcBindingTable;LLVMHLSL"
)

# Create imported target llvm-as
add_executable(llvm-as IMPORTED)

# Create imported target llvm-dis
add_executable(llvm-dis IMPORTED)

# Create imported target llvm-link
add_executable(llvm-link IMPORTED)

# Create imported target llvm-extract
add_executable(llvm-extract IMPORTED)

# Create imported target llvm-diff
add_executable(llvm-diff IMPORTED)

# Create imported target llvm-bcanalyzer
add_executable(llvm-bcanalyzer IMPORTED)

# Create imported target llvm-stress
add_executable(llvm-stress IMPORTED)
set_property(TARGET llvm-stress PROPERTY ENABLE_EXPORTS 1)

set_target_properties(llvm-stress PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCore;LLVMipa;LLVMSupport"
)

# Create imported target verify-uselistorder
add_executable(verify-uselistorder IMPORTED)

# Create imported target clang-tblgen
add_executable(clang-tblgen IMPORTED)

# Import target "LLVMSupport" for configuration "Release"
set_property(TARGET LLVMSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMSupport.a"
  )

# Import target "LLVMMSSupport" for configuration "Release"
set_property(TARGET LLVMMSSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMMSSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMMSSupport.a"
  )

# Import target "LLVMTableGen" for configuration "Release"
set_property(TARGET LLVMTableGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMTableGen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMTableGen.a"
  )

# Import target "llvm-tblgen" for configuration "Release"
set_property(TARGET llvm-tblgen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-tblgen PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-tblgen"
  )

# Import target "LLVMCore" for configuration "Release"
set_property(TARGET LLVMCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCore PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMCore.a"
  )

# Import target "LLVMIRReader" for configuration "Release"
set_property(TARGET LLVMIRReader APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMIRReader PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMIRReader.a"
  )

# Import target "LLVMBitReader" for configuration "Release"
set_property(TARGET LLVMBitReader APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMBitReader PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMBitReader.a"
  )

# Import target "LLVMBitWriter" for configuration "Release"
set_property(TARGET LLVMBitWriter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMBitWriter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMBitWriter.a"
  )

# Import target "LLVMTransformUtils" for configuration "Release"
set_property(TARGET LLVMTransformUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMTransformUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMTransformUtils.a"
  )

# Import target "LLVMInstCombine" for configuration "Release"
set_property(TARGET LLVMInstCombine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMInstCombine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMInstCombine.a"
  )

# Import target "LLVMScalarOpts" for configuration "Release"
set_property(TARGET LLVMScalarOpts APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMScalarOpts PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMScalarOpts.a"
  )

# Import target "LLVMipo" for configuration "Release"
set_property(TARGET LLVMipo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMipo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMipo.a"
  )

# Import target "LLVMVectorize" for configuration "Release"
set_property(TARGET LLVMVectorize APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMVectorize PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMVectorize.a"
  )

# Import target "LLVMLinker" for configuration "Release"
set_property(TARGET LLVMLinker APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMLinker PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMLinker.a"
  )

# Import target "LLVMAnalysis" for configuration "Release"
set_property(TARGET LLVMAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMAnalysis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMAnalysis.a"
  )

# Import target "LLVMipa" for configuration "Release"
set_property(TARGET LLVMipa APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMipa PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMipa.a"
  )

# Import target "LLVMOption" for configuration "Release"
set_property(TARGET LLVMOption APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMOption PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMOption.a"
  )

# Import target "LLVMTarget" for configuration "Release"
set_property(TARGET LLVMTarget APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMTarget PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMTarget.a"
  )

# Import target "LLVMAsmParser" for configuration "Release"
set_property(TARGET LLVMAsmParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMAsmParser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMAsmParser.a"
  )

# Import target "LLVMProfileData" for configuration "Release"
set_property(TARGET LLVMProfileData APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMProfileData PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMProfileData.a"
  )

# Import target "LLVMPasses" for configuration "Release"
set_property(TARGET LLVMPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMPasses.a"
  )

# Import target "LLVMPassPrinters" for configuration "Release"
set_property(TARGET LLVMPassPrinters APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMPassPrinters PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMPassPrinters.a"
  )

# Import target "LLVMDxcSupport" for configuration "Release"
set_property(TARGET LLVMDxcSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxcSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxcSupport.a"
  )

# Import target "LLVMHLSL" for configuration "Release"
set_property(TARGET LLVMHLSL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMHLSL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMHLSL.a"
  )

# Import target "LLVMDXIL" for configuration "Release"
set_property(TARGET LLVMDXIL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDXIL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDXIL.a"
  )

# Import target "LLVMDxilContainer" for configuration "Release"
set_property(TARGET LLVMDxilContainer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilContainer PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxilContainer.a"
  )

# Import target "LLVMDxilPdbInfo" for configuration "Release"
set_property(TARGET LLVMDxilPdbInfo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilPdbInfo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxilPdbInfo.a"
  )

# Import target "LLVMDxilPIXPasses" for configuration "Release"
set_property(TARGET LLVMDxilPIXPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilPIXPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxilPIXPasses.a"
  )

# Import target "LLVMDxilRootSignature" for configuration "Release"
set_property(TARGET LLVMDxilRootSignature APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilRootSignature PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxilRootSignature.a"
  )

# Import target "LLVMDxcBindingTable" for configuration "Release"
set_property(TARGET LLVMDxcBindingTable APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxcBindingTable PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxcBindingTable.a"
  )

# Import target "LLVMDxrFallback" for configuration "Release"
set_property(TARGET LLVMDxrFallback APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxrFallback PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxrFallback.a"
  )

# Import target "LLVMDxilCompression" for configuration "Release"
set_property(TARGET LLVMDxilCompression APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilCompression PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/lib/libLLVMDxilCompression.a"
  )

# Import target "llvm-config" for configuration "Release"
set_property(TARGET llvm-config APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-config PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-config"
  )

# Import target "opt" for configuration "Release"
set_property(TARGET opt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opt PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/opt"
  )

# Import target "llvm-as" for configuration "Release"
set_property(TARGET llvm-as APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-as PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-as"
  )

# Import target "llvm-dis" for configuration "Release"
set_property(TARGET llvm-dis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-dis PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-dis"
  )

# Import target "llvm-link" for configuration "Release"
set_property(TARGET llvm-link APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-link PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-link"
  )

# Import target "llvm-extract" for configuration "Release"
set_property(TARGET llvm-extract APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-extract PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-extract"
  )

# Import target "llvm-diff" for configuration "Release"
set_property(TARGET llvm-diff APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-diff PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-diff"
  )

# Import target "llvm-bcanalyzer" for configuration "Release"
set_property(TARGET llvm-bcanalyzer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-bcanalyzer PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-bcanalyzer"
  )

# Import target "llvm-stress" for configuration "Release"
set_property(TARGET llvm-stress APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-stress PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/llvm-stress"
  )

# Import target "verify-uselistorder" for configuration "Release"
set_property(TARGET verify-uselistorder APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(verify-uselistorder PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/verify-uselistorder"
  )

# Import target "clang-tblgen" for configuration "Release"
set_property(TARGET clang-tblgen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-tblgen PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/bin/clang-tblgen"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
