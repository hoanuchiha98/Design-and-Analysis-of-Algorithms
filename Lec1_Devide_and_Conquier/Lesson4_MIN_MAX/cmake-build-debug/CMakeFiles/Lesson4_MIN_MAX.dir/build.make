# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "/Users/hoanitmta/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/hoanitmta/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lesson4_MIN_MAX.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lesson4_MIN_MAX.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lesson4_MIN_MAX.dir/flags.make

CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.o: CMakeFiles/Lesson4_MIN_MAX.dir/flags.make
CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.o -c /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/main.cpp

CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/main.cpp > CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.i

CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/main.cpp -o CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.s

# Object files for target Lesson4_MIN_MAX
Lesson4_MIN_MAX_OBJECTS = \
"CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.o"

# External object files for target Lesson4_MIN_MAX
Lesson4_MIN_MAX_EXTERNAL_OBJECTS =

Lesson4_MIN_MAX: CMakeFiles/Lesson4_MIN_MAX.dir/main.cpp.o
Lesson4_MIN_MAX: CMakeFiles/Lesson4_MIN_MAX.dir/build.make
Lesson4_MIN_MAX: CMakeFiles/Lesson4_MIN_MAX.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lesson4_MIN_MAX"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lesson4_MIN_MAX.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lesson4_MIN_MAX.dir/build: Lesson4_MIN_MAX

.PHONY : CMakeFiles/Lesson4_MIN_MAX.dir/build

CMakeFiles/Lesson4_MIN_MAX.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lesson4_MIN_MAX.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lesson4_MIN_MAX.dir/clean

CMakeFiles/Lesson4_MIN_MAX.dir/depend:
	cd /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug /Users/hoanitmta/Desktop/Design-and-Analysis-of-Algorithms/Lec1_Devide_and_Conquier/Lesson4_MIN_MAX/cmake-build-debug/CMakeFiles/Lesson4_MIN_MAX.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lesson4_MIN_MAX.dir/depend

