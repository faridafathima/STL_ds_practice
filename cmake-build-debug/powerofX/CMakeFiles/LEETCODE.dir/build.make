# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "/Applications/CLion 2021.1 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2021.1 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/faridafathima/Desktop/C++/LEETCODE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug

# Include any dependencies generated for this target.
include powerofX/CMakeFiles/LEETCODE.dir/depend.make

# Include the progress variables for this target.
include powerofX/CMakeFiles/LEETCODE.dir/progress.make

# Include the compile flags for this target's objects.
include powerofX/CMakeFiles/LEETCODE.dir/flags.make

powerofX/CMakeFiles/LEETCODE.dir/main.cpp.o: powerofX/CMakeFiles/LEETCODE.dir/flags.make
powerofX/CMakeFiles/LEETCODE.dir/main.cpp.o: ../powerofX/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object powerofX/CMakeFiles/LEETCODE.dir/main.cpp.o"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LEETCODE.dir/main.cpp.o -c /Users/faridafathima/Desktop/C++/LEETCODE/powerofX/main.cpp

powerofX/CMakeFiles/LEETCODE.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LEETCODE.dir/main.cpp.i"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/faridafathima/Desktop/C++/LEETCODE/powerofX/main.cpp > CMakeFiles/LEETCODE.dir/main.cpp.i

powerofX/CMakeFiles/LEETCODE.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LEETCODE.dir/main.cpp.s"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/faridafathima/Desktop/C++/LEETCODE/powerofX/main.cpp -o CMakeFiles/LEETCODE.dir/main.cpp.s

# Object files for target LEETCODE
LEETCODE_OBJECTS = \
"CMakeFiles/LEETCODE.dir/main.cpp.o"

# External object files for target LEETCODE
LEETCODE_EXTERNAL_OBJECTS =

powerofX/LEETCODE: powerofX/CMakeFiles/LEETCODE.dir/main.cpp.o
powerofX/LEETCODE: powerofX/CMakeFiles/LEETCODE.dir/build.make
powerofX/LEETCODE: powerofX/CMakeFiles/LEETCODE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LEETCODE"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LEETCODE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
powerofX/CMakeFiles/LEETCODE.dir/build: powerofX/LEETCODE

.PHONY : powerofX/CMakeFiles/LEETCODE.dir/build

powerofX/CMakeFiles/LEETCODE.dir/clean:
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX && $(CMAKE_COMMAND) -P CMakeFiles/LEETCODE.dir/cmake_clean.cmake
.PHONY : powerofX/CMakeFiles/LEETCODE.dir/clean

powerofX/CMakeFiles/LEETCODE.dir/depend:
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/faridafathima/Desktop/C++/LEETCODE /Users/faridafathima/Desktop/C++/LEETCODE/powerofX /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/powerofX/CMakeFiles/LEETCODE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : powerofX/CMakeFiles/LEETCODE.dir/depend

