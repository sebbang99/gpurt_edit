# Install script for directory: /home/grvermeer/seheecho/DirectXShaderCompiler/external/SPIRV-Tools

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/external/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/source/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/tools/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/test/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/examples/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/spirv-tools" TYPE FILE FILES
    "/home/grvermeer/seheecho/DirectXShaderCompiler/external/SPIRV-Tools/include/spirv-tools/libspirv.h"
    "/home/grvermeer/seheecho/DirectXShaderCompiler/external/SPIRV-Tools/include/spirv-tools/libspirv.hpp"
    "/home/grvermeer/seheecho/DirectXShaderCompiler/external/SPIRV-Tools/include/spirv-tools/optimizer.hpp"
    "/home/grvermeer/seheecho/DirectXShaderCompiler/external/SPIRV-Tools/include/spirv-tools/linker.hpp"
    "/home/grvermeer/seheecho/DirectXShaderCompiler/external/SPIRV-Tools/include/spirv-tools/instrument.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES
    "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/SPIRV-Tools.pc"
    "/home/grvermeer/seheecho/DirectXShaderCompiler/builds/external/SPIRV-Tools/SPIRV-Tools-shared.pc"
    )
endif()

