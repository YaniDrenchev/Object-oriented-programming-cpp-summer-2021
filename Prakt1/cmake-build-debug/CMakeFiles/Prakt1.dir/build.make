# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Prakt1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Prakt1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Prakt1.dir/flags.make

CMakeFiles/Prakt1.dir/main.cpp.o: CMakeFiles/Prakt1.dir/flags.make
CMakeFiles/Prakt1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Prakt1.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Prakt1.dir/main.cpp.o -c /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/main.cpp

CMakeFiles/Prakt1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Prakt1.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/main.cpp > CMakeFiles/Prakt1.dir/main.cpp.i

CMakeFiles/Prakt1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Prakt1.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/main.cpp -o CMakeFiles/Prakt1.dir/main.cpp.s

# Object files for target Prakt1
Prakt1_OBJECTS = \
"CMakeFiles/Prakt1.dir/main.cpp.o"

# External object files for target Prakt1
Prakt1_EXTERNAL_OBJECTS =

Prakt1: CMakeFiles/Prakt1.dir/main.cpp.o
Prakt1: CMakeFiles/Prakt1.dir/build.make
Prakt1: CMakeFiles/Prakt1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Prakt1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Prakt1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Prakt1.dir/build: Prakt1

.PHONY : CMakeFiles/Prakt1.dir/build

CMakeFiles/Prakt1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Prakt1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Prakt1.dir/clean

CMakeFiles/Prakt1.dir/depend:
	cd /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1 /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1 /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug /Users/yanidrenchev/Desktop/UNI/OOP/Object-oriented-programming-cpp-summer-2021/Prakt1/cmake-build-debug/CMakeFiles/Prakt1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Prakt1.dir/depend

