# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /snap/cmake/1441/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1441/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/sf_win-lin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_win-lin/build

# Include any dependencies generated for this target.
include programm_1/CMakeFiles/app1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include programm_1/CMakeFiles/app1.dir/compiler_depend.make

# Include the progress variables for this target.
include programm_1/CMakeFiles/app1.dir/progress.make

# Include the compile flags for this target's objects.
include programm_1/CMakeFiles/app1.dir/flags.make

programm_1/CMakeFiles/app1.dir/codegen:
.PHONY : programm_1/CMakeFiles/app1.dir/codegen

programm_1/CMakeFiles/app1.dir/Program_1.cpp.o: programm_1/CMakeFiles/app1.dir/flags.make
programm_1/CMakeFiles/app1.dir/Program_1.cpp.o: /media/sf_win-lin/programm_1/Program_1.cpp
programm_1/CMakeFiles/app1.dir/Program_1.cpp.o: programm_1/CMakeFiles/app1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/media/sf_win-lin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object programm_1/CMakeFiles/app1.dir/Program_1.cpp.o"
	cd /media/sf_win-lin/build/programm_1 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT programm_1/CMakeFiles/app1.dir/Program_1.cpp.o -MF CMakeFiles/app1.dir/Program_1.cpp.o.d -o CMakeFiles/app1.dir/Program_1.cpp.o -c /media/sf_win-lin/programm_1/Program_1.cpp

programm_1/CMakeFiles/app1.dir/Program_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app1.dir/Program_1.cpp.i"
	cd /media/sf_win-lin/build/programm_1 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_win-lin/programm_1/Program_1.cpp > CMakeFiles/app1.dir/Program_1.cpp.i

programm_1/CMakeFiles/app1.dir/Program_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app1.dir/Program_1.cpp.s"
	cd /media/sf_win-lin/build/programm_1 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_win-lin/programm_1/Program_1.cpp -o CMakeFiles/app1.dir/Program_1.cpp.s

# Object files for target app1
app1_OBJECTS = \
"CMakeFiles/app1.dir/Program_1.cpp.o"

# External object files for target app1
app1_EXTERNAL_OBJECTS =

programm_1/app1: programm_1/CMakeFiles/app1.dir/Program_1.cpp.o
programm_1/app1: programm_1/CMakeFiles/app1.dir/build.make
programm_1/app1: programm_1/CMakeFiles/app1.dir/compiler_depend.ts
programm_1/app1: lib/liblib.so
programm_1/app1: programm_1/CMakeFiles/app1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/media/sf_win-lin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable app1"
	cd /media/sf_win-lin/build/programm_1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
programm_1/CMakeFiles/app1.dir/build: programm_1/app1
.PHONY : programm_1/CMakeFiles/app1.dir/build

programm_1/CMakeFiles/app1.dir/clean:
	cd /media/sf_win-lin/build/programm_1 && $(CMAKE_COMMAND) -P CMakeFiles/app1.dir/cmake_clean.cmake
.PHONY : programm_1/CMakeFiles/app1.dir/clean

programm_1/CMakeFiles/app1.dir/depend:
	cd /media/sf_win-lin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_win-lin /media/sf_win-lin/programm_1 /media/sf_win-lin/build /media/sf_win-lin/build/programm_1 /media/sf_win-lin/build/programm_1/CMakeFiles/app1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : programm_1/CMakeFiles/app1.dir/depend

