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
foreach(_expectedTarget spirv-as spirv-dis spirv-val spirv-opt spirv-cfg spirv-link spirv-lint spirv-objdump spirv-reduce)
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


# Create imported target spirv-as
add_executable(spirv-as IMPORTED)

# Create imported target spirv-dis
add_executable(spirv-dis IMPORTED)

# Create imported target spirv-val
add_executable(spirv-val IMPORTED)

# Create imported target spirv-opt
add_executable(spirv-opt IMPORTED)

# Create imported target spirv-cfg
add_executable(spirv-cfg IMPORTED)

# Create imported target spirv-link
add_executable(spirv-link IMPORTED)

# Create imported target spirv-lint
add_executable(spirv-lint IMPORTED)

# Create imported target spirv-objdump
add_executable(spirv-objdump IMPORTED)

# Create imported target spirv-reduce
add_executable(spirv-reduce IMPORTED)

# Import target "spirv-as" for configuration "Release"
set_property(TARGET spirv-as APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-as PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-as"
  )

# Import target "spirv-dis" for configuration "Release"
set_property(TARGET spirv-dis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-dis PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-dis"
  )

# Import target "spirv-val" for configuration "Release"
set_property(TARGET spirv-val APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-val PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-val"
  )

# Import target "spirv-opt" for configuration "Release"
set_property(TARGET spirv-opt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-opt PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-opt"
  )

# Import target "spirv-cfg" for configuration "Release"
set_property(TARGET spirv-cfg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-cfg PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-cfg"
  )

# Import target "spirv-link" for configuration "Release"
set_property(TARGET spirv-link APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-link PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-link"
  )

# Import target "spirv-lint" for configuration "Release"
set_property(TARGET spirv-lint APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-lint PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-lint"
  )

# Import target "spirv-objdump" for configuration "Release"
set_property(TARGET spirv-objdump APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-objdump PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-objdump"
  )

# Import target "spirv-reduce" for configuration "Release"
set_property(TARGET spirv-reduce APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spirv-reduce PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/spirv-reduce"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)