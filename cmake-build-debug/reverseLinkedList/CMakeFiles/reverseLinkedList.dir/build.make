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
include reverseLinkedList/CMakeFiles/reverseLinkedList.dir/depend.make

# Include the progress variables for this target.
include reverseLinkedList/CMakeFiles/reverseLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include reverseLinkedList/CMakeFiles/reverseLinkedList.dir/flags.make

reverseLinkedList/CMakeFiles/reverseLinkedList.dir/main.cpp.o: reverseLinkedList/CMakeFiles/reverseLinkedList.dir/flags.make
reverseLinkedList/CMakeFiles/reverseLinkedList.dir/main.cpp.o: ../reverseLinkedList/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object reverseLinkedList/CMakeFiles/reverseLinkedList.dir/main.cpp.o"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reverseLinkedList.dir/main.cpp.o -c /Users/faridafathima/Desktop/C++/LEETCODE/reverseLinkedList/main.cpp

reverseLinkedList/CMakeFiles/reverseLinkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverseLinkedList.dir/main.cpp.i"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/faridafathima/Desktop/C++/LEETCODE/reverseLinkedList/main.cpp > CMakeFiles/reverseLinkedList.dir/main.cpp.i

reverseLinkedList/CMakeFiles/reverseLinkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverseLinkedList.dir/main.cpp.s"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/faridafathima/Desktop/C++/LEETCODE/reverseLinkedList/main.cpp -o CMakeFiles/reverseLinkedList.dir/main.cpp.s

# Object files for target reverseLinkedList
reverseLinkedList_OBJECTS = \
"CMakeFiles/reverseLinkedList.dir/main.cpp.o"

# External object files for target reverseLinkedList
reverseLinkedList_EXTERNAL_OBJECTS =

reverseLinkedList/reverseLinkedList: reverseLinkedList/CMakeFiles/reverseLinkedList.dir/main.cpp.o
reverseLinkedList/reverseLinkedList: reverseLinkedList/CMakeFiles/reverseLinkedList.dir/build.make
reverseLinkedList/reverseLinkedList: reverseLinkedList/CMakeFiles/reverseLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reverseLinkedList"
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reverseLinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
reverseLinkedList/CMakeFiles/reverseLinkedList.dir/build: reverseLinkedList/reverseLinkedList

.PHONY : reverseLinkedList/CMakeFiles/reverseLinkedList.dir/build

reverseLinkedList/CMakeFiles/reverseLinkedList.dir/clean:
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList && $(CMAKE_COMMAND) -P CMakeFiles/reverseLinkedList.dir/cmake_clean.cmake
.PHONY : reverseLinkedList/CMakeFiles/reverseLinkedList.dir/clean

reverseLinkedList/CMakeFiles/reverseLinkedList.dir/depend:
	cd /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/faridafathima/Desktop/C++/LEETCODE /Users/faridafathima/Desktop/C++/LEETCODE/reverseLinkedList /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList /Users/faridafathima/Desktop/C++/LEETCODE/cmake-build-debug/reverseLinkedList/CMakeFiles/reverseLinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : reverseLinkedList/CMakeFiles/reverseLinkedList.dir/depend

