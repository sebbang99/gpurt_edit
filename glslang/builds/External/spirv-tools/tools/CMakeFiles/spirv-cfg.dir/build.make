# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/grvermeer/seheecho/glslang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/grvermeer/seheecho/glslang/builds

# Include any dependencies generated for this target.
include External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/compiler_depend.make

# Include the progress variables for this target.
include External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/progress.make

# Include the compile flags for this target's objects.
include External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/flags.make

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/flags.make
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o: ../External/spirv-tools/tools/cfg/cfg.cpp
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grvermeer/seheecho/glslang/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o -MF CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o.d -o CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o -c /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/cfg/cfg.cpp

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.i"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/cfg/cfg.cpp > CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.i

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.s"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/cfg/cfg.cpp -o CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.s

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/flags.make
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o: ../External/spirv-tools/tools/cfg/bin_to_dot.cpp
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grvermeer/seheecho/glslang/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o -MF CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o.d -o CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o -c /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/cfg/bin_to_dot.cpp

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.i"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/cfg/bin_to_dot.cpp > CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.i

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.s"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/cfg/bin_to_dot.cpp -o CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.s

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.o: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/flags.make
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.o: ../External/spirv-tools/tools/util/flags.cpp
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.o: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grvermeer/seheecho/glslang/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.o"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.o -MF CMakeFiles/spirv-cfg.dir/util/flags.cpp.o.d -o CMakeFiles/spirv-cfg.dir/util/flags.cpp.o -c /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/util/flags.cpp

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spirv-cfg.dir/util/flags.cpp.i"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/util/flags.cpp > CMakeFiles/spirv-cfg.dir/util/flags.cpp.i

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spirv-cfg.dir/util/flags.cpp.s"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/grvermeer/seheecho/glslang/External/spirv-tools/tools/util/flags.cpp -o CMakeFiles/spirv-cfg.dir/util/flags.cpp.s

# Object files for target spirv-cfg
spirv__cfg_OBJECTS = \
"CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o" \
"CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o" \
"CMakeFiles/spirv-cfg.dir/util/flags.cpp.o"

# External object files for target spirv-cfg
spirv__cfg_EXTERNAL_OBJECTS =

External/spirv-tools/tools/spirv-cfg: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/cfg.cpp.o
External/spirv-tools/tools/spirv-cfg: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/cfg/bin_to_dot.cpp.o
External/spirv-tools/tools/spirv-cfg: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/util/flags.cpp.o
External/spirv-tools/tools/spirv-cfg: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/build.make
External/spirv-tools/tools/spirv-cfg: External/spirv-tools/source/libSPIRV-Tools.a
External/spirv-tools/tools/spirv-cfg: External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/grvermeer/seheecho/glslang/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable spirv-cfg"
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spirv-cfg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/build: External/spirv-tools/tools/spirv-cfg
.PHONY : External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/build

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/clean:
	cd /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools && $(CMAKE_COMMAND) -P CMakeFiles/spirv-cfg.dir/cmake_clean.cmake
.PHONY : External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/clean

External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/depend:
	cd /home/grvermeer/seheecho/glslang/builds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/grvermeer/seheecho/glslang /home/grvermeer/seheecho/glslang/External/spirv-tools/tools /home/grvermeer/seheecho/glslang/builds /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools /home/grvermeer/seheecho/glslang/builds/External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : External/spirv-tools/tools/CMakeFiles/spirv-cfg.dir/depend

