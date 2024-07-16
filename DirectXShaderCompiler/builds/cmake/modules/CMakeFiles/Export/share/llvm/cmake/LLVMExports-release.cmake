#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "LLVMSupport" for configuration "Release"
set_property(TARGET LLVMSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMSupport.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMSupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMSupport "${_IMPORT_PREFIX}/lib/libLLVMSupport.a" )

# Import target "LLVMMSSupport" for configuration "Release"
set_property(TARGET LLVMMSSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMMSSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMMSSupport.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMMSSupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMMSSupport "${_IMPORT_PREFIX}/lib/libLLVMMSSupport.a" )

# Import target "LLVMTableGen" for configuration "Release"
set_property(TARGET LLVMTableGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMTableGen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMTableGen.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMTableGen )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMTableGen "${_IMPORT_PREFIX}/lib/libLLVMTableGen.a" )

# Import target "llvm-tblgen" for configuration "Release"
set_property(TARGET llvm-tblgen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-tblgen PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-tblgen"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-tblgen )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-tblgen "${_IMPORT_PREFIX}/bin/llvm-tblgen" )

# Import target "LLVMCore" for configuration "Release"
set_property(TARGET LLVMCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCore PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMCore.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMCore "${_IMPORT_PREFIX}/lib/libLLVMCore.a" )

# Import target "LLVMIRReader" for configuration "Release"
set_property(TARGET LLVMIRReader APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMIRReader PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMIRReader.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMIRReader )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMIRReader "${_IMPORT_PREFIX}/lib/libLLVMIRReader.a" )

# Import target "LLVMBitReader" for configuration "Release"
set_property(TARGET LLVMBitReader APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMBitReader PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMBitReader.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMBitReader )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMBitReader "${_IMPORT_PREFIX}/lib/libLLVMBitReader.a" )

# Import target "LLVMBitWriter" for configuration "Release"
set_property(TARGET LLVMBitWriter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMBitWriter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMBitWriter.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMBitWriter )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMBitWriter "${_IMPORT_PREFIX}/lib/libLLVMBitWriter.a" )

# Import target "LLVMTransformUtils" for configuration "Release"
set_property(TARGET LLVMTransformUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMTransformUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMTransformUtils.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMTransformUtils )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMTransformUtils "${_IMPORT_PREFIX}/lib/libLLVMTransformUtils.a" )

# Import target "LLVMInstCombine" for configuration "Release"
set_property(TARGET LLVMInstCombine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMInstCombine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMInstCombine.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMInstCombine )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMInstCombine "${_IMPORT_PREFIX}/lib/libLLVMInstCombine.a" )

# Import target "LLVMScalarOpts" for configuration "Release"
set_property(TARGET LLVMScalarOpts APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMScalarOpts PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMScalarOpts.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMScalarOpts )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMScalarOpts "${_IMPORT_PREFIX}/lib/libLLVMScalarOpts.a" )

# Import target "LLVMipo" for configuration "Release"
set_property(TARGET LLVMipo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMipo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMipo.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMipo )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMipo "${_IMPORT_PREFIX}/lib/libLLVMipo.a" )

# Import target "LLVMVectorize" for configuration "Release"
set_property(TARGET LLVMVectorize APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMVectorize PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMVectorize.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMVectorize )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMVectorize "${_IMPORT_PREFIX}/lib/libLLVMVectorize.a" )

# Import target "LLVMLinker" for configuration "Release"
set_property(TARGET LLVMLinker APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMLinker PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMLinker.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMLinker )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMLinker "${_IMPORT_PREFIX}/lib/libLLVMLinker.a" )

# Import target "LLVMAnalysis" for configuration "Release"
set_property(TARGET LLVMAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMAnalysis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMAnalysis.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMAnalysis )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMAnalysis "${_IMPORT_PREFIX}/lib/libLLVMAnalysis.a" )

# Import target "LLVMipa" for configuration "Release"
set_property(TARGET LLVMipa APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMipa PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMipa.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMipa )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMipa "${_IMPORT_PREFIX}/lib/libLLVMipa.a" )

# Import target "LLVMOption" for configuration "Release"
set_property(TARGET LLVMOption APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMOption PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMOption.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMOption )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMOption "${_IMPORT_PREFIX}/lib/libLLVMOption.a" )

# Import target "LLVMTarget" for configuration "Release"
set_property(TARGET LLVMTarget APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMTarget PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMTarget.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMTarget )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMTarget "${_IMPORT_PREFIX}/lib/libLLVMTarget.a" )

# Import target "LLVMAsmParser" for configuration "Release"
set_property(TARGET LLVMAsmParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMAsmParser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMAsmParser.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMAsmParser )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMAsmParser "${_IMPORT_PREFIX}/lib/libLLVMAsmParser.a" )

# Import target "LLVMProfileData" for configuration "Release"
set_property(TARGET LLVMProfileData APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMProfileData PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMProfileData.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMProfileData )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMProfileData "${_IMPORT_PREFIX}/lib/libLLVMProfileData.a" )

# Import target "LLVMPasses" for configuration "Release"
set_property(TARGET LLVMPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMPasses.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMPasses )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMPasses "${_IMPORT_PREFIX}/lib/libLLVMPasses.a" )

# Import target "LLVMPassPrinters" for configuration "Release"
set_property(TARGET LLVMPassPrinters APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMPassPrinters PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMPassPrinters.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMPassPrinters )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMPassPrinters "${_IMPORT_PREFIX}/lib/libLLVMPassPrinters.a" )

# Import target "LLVMDxcSupport" for configuration "Release"
set_property(TARGET LLVMDxcSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxcSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxcSupport.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxcSupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxcSupport "${_IMPORT_PREFIX}/lib/libLLVMDxcSupport.a" )

# Import target "LLVMHLSL" for configuration "Release"
set_property(TARGET LLVMHLSL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMHLSL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMHLSL.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMHLSL )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMHLSL "${_IMPORT_PREFIX}/lib/libLLVMHLSL.a" )

# Import target "LLVMDXIL" for configuration "Release"
set_property(TARGET LLVMDXIL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDXIL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDXIL.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDXIL )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDXIL "${_IMPORT_PREFIX}/lib/libLLVMDXIL.a" )

# Import target "LLVMDxilContainer" for configuration "Release"
set_property(TARGET LLVMDxilContainer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilContainer PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxilContainer.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxilContainer )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxilContainer "${_IMPORT_PREFIX}/lib/libLLVMDxilContainer.a" )

# Import target "LLVMDxilPdbInfo" for configuration "Release"
set_property(TARGET LLVMDxilPdbInfo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilPdbInfo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxilPdbInfo.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxilPdbInfo )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxilPdbInfo "${_IMPORT_PREFIX}/lib/libLLVMDxilPdbInfo.a" )

# Import target "LLVMDxilPIXPasses" for configuration "Release"
set_property(TARGET LLVMDxilPIXPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilPIXPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxilPIXPasses.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxilPIXPasses )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxilPIXPasses "${_IMPORT_PREFIX}/lib/libLLVMDxilPIXPasses.a" )

# Import target "LLVMDxilRootSignature" for configuration "Release"
set_property(TARGET LLVMDxilRootSignature APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilRootSignature PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxilRootSignature.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxilRootSignature )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxilRootSignature "${_IMPORT_PREFIX}/lib/libLLVMDxilRootSignature.a" )

# Import target "LLVMDxcBindingTable" for configuration "Release"
set_property(TARGET LLVMDxcBindingTable APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxcBindingTable PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxcBindingTable.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxcBindingTable )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxcBindingTable "${_IMPORT_PREFIX}/lib/libLLVMDxcBindingTable.a" )

# Import target "LLVMDxrFallback" for configuration "Release"
set_property(TARGET LLVMDxrFallback APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxrFallback PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxrFallback.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxrFallback )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxrFallback "${_IMPORT_PREFIX}/lib/libLLVMDxrFallback.a" )

# Import target "LLVMDxilCompression" for configuration "Release"
set_property(TARGET LLVMDxilCompression APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMDxilCompression PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libLLVMDxilCompression.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS LLVMDxilCompression )
list(APPEND _IMPORT_CHECK_FILES_FOR_LLVMDxilCompression "${_IMPORT_PREFIX}/lib/libLLVMDxilCompression.a" )

# Import target "llvm-config" for configuration "Release"
set_property(TARGET llvm-config APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-config PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-config"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-config )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-config "${_IMPORT_PREFIX}/bin/llvm-config" )

# Import target "opt" for configuration "Release"
set_property(TARGET opt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opt PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/opt"
  )

list(APPEND _IMPORT_CHECK_TARGETS opt )
list(APPEND _IMPORT_CHECK_FILES_FOR_opt "${_IMPORT_PREFIX}/bin/opt" )

# Import target "llvm-as" for configuration "Release"
set_property(TARGET llvm-as APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-as PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-as"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-as )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-as "${_IMPORT_PREFIX}/bin/llvm-as" )

# Import target "llvm-dis" for configuration "Release"
set_property(TARGET llvm-dis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-dis PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-dis"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-dis )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-dis "${_IMPORT_PREFIX}/bin/llvm-dis" )

# Import target "llvm-link" for configuration "Release"
set_property(TARGET llvm-link APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-link PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-link"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-link )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-link "${_IMPORT_PREFIX}/bin/llvm-link" )

# Import target "llvm-extract" for configuration "Release"
set_property(TARGET llvm-extract APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-extract PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-extract"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-extract )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-extract "${_IMPORT_PREFIX}/bin/llvm-extract" )

# Import target "llvm-diff" for configuration "Release"
set_property(TARGET llvm-diff APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-diff PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-diff"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-diff )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-diff "${_IMPORT_PREFIX}/bin/llvm-diff" )

# Import target "llvm-bcanalyzer" for configuration "Release"
set_property(TARGET llvm-bcanalyzer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-bcanalyzer PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-bcanalyzer"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-bcanalyzer )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-bcanalyzer "${_IMPORT_PREFIX}/bin/llvm-bcanalyzer" )

# Import target "llvm-stress" for configuration "Release"
set_property(TARGET llvm-stress APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-stress PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/llvm-stress"
  )

list(APPEND _IMPORT_CHECK_TARGETS llvm-stress )
list(APPEND _IMPORT_CHECK_FILES_FOR_llvm-stress "${_IMPORT_PREFIX}/bin/llvm-stress" )

# Import target "verify-uselistorder" for configuration "Release"
set_property(TARGET verify-uselistorder APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(verify-uselistorder PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/verify-uselistorder"
  )

list(APPEND _IMPORT_CHECK_TARGETS verify-uselistorder )
list(APPEND _IMPORT_CHECK_FILES_FOR_verify-uselistorder "${_IMPORT_PREFIX}/bin/verify-uselistorder" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
