# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.8/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.8/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1"

# Include any dependencies generated for this target.
include CMakeFiles/GreetingApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GreetingApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GreetingApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GreetingApp.dir/flags.make

CMakeFiles/GreetingApp.dir/src/main.cpp.o: CMakeFiles/GreetingApp.dir/flags.make
CMakeFiles/GreetingApp.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/GreetingApp.dir/src/main.cpp.o: CMakeFiles/GreetingApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/andreymenshikov/Desktop/Netology HW/Task_11_1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GreetingApp.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GreetingApp.dir/src/main.cpp.o -MF CMakeFiles/GreetingApp.dir/src/main.cpp.o.d -o CMakeFiles/GreetingApp.dir/src/main.cpp.o -c "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1/src/main.cpp"

CMakeFiles/GreetingApp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GreetingApp.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1/src/main.cpp" > CMakeFiles/GreetingApp.dir/src/main.cpp.i

CMakeFiles/GreetingApp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GreetingApp.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1/src/main.cpp" -o CMakeFiles/GreetingApp.dir/src/main.cpp.s

# Object files for target GreetingApp
GreetingApp_OBJECTS = \
"CMakeFiles/GreetingApp.dir/src/main.cpp.o"

# External object files for target GreetingApp
GreetingApp_EXTERNAL_OBJECTS =

GreetingApp: CMakeFiles/GreetingApp.dir/src/main.cpp.o
GreetingApp: CMakeFiles/GreetingApp.dir/build.make
GreetingApp: libGreetLib.a
GreetingApp: CMakeFiles/GreetingApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/andreymenshikov/Desktop/Netology HW/Task_11_1/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GreetingApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GreetingApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GreetingApp.dir/build: GreetingApp
.PHONY : CMakeFiles/GreetingApp.dir/build

CMakeFiles/GreetingApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GreetingApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GreetingApp.dir/clean

CMakeFiles/GreetingApp.dir/depend:
	cd "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1" "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1" "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1" "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1" "/Users/andreymenshikov/Desktop/Netology HW/Task_11_1/CMakeFiles/GreetingApp.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/GreetingApp.dir/depend

