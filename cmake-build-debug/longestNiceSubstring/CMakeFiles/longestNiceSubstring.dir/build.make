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
include longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/depend.make

# Include the progress variables for this target.
include longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/progress.make

# Include the compile flags for this target's objects.
include longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/flags.make

longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/main.cpp.o: longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/flags.make
longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/main.cpp.o: ../longestNiceSubstring/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/main.cpp.o"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/longestNiceSubstring.dir/main.cpp.o -c /Users/faridafathima/Desktop/C++/LEETCODE/longestNiceSubstring/main.cpp

longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/longestNiceSubstring.dir/main.cpp.i"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/faridafathima/Desktop/C++/LEETCODE/longestNiceSubstring/main.cpp > CMakeFiles/longestNiceSubstring.dir/main.cpp.i

longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/longestNiceSubstring.dir/main.cpp.s"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/faridafathima/Desktop/C++/LEETCODE/longestNiceSubstring/main.cpp -o CMakeFiles/longestNiceSubstring.dir/main.cpp.s

# Object files for target longestNiceSubstring
longestNiceSubstring_OBJECTS = \
"CMakeFiles/longestNiceSubstring.dir/main.cpp.o"

# External object files for target longestNiceSubstring
longestNiceSubstring_EXTERNAL_OBJECTS =

longestNiceSubstring/longestNiceSubstring: longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/main.cpp.o
longestNiceSubstring/longestNiceSubstring: longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/build.make
longestNiceSubstring/longestNiceSubstring: longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable longestNiceSubstring"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/longestNiceSubstring.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/build: longestNiceSubstring/longestNiceSubstring

.PHONY : longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/build

longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/clean:
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring && $(CMAKE_COMMAND) -P CMakeFiles/longestNiceSubstring.dir/cmake_clean.cmake
.PHONY : longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/clean

longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/depend:
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/faridafathima/Desktop/C++/LEETCODE /Users/faridafathima/Desktop/C++/LEETCODE/longestNiceSubstring /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : longestNiceSubstring/CMakeFiles/longestNiceSubstring.dir/depend

