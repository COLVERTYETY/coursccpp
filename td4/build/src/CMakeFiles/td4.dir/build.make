# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/orca/a3/info/td4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/orca/a3/info/td4/build

# Include any dependencies generated for this target.
include src/CMakeFiles/td4.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/td4.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/td4.dir/flags.make

src/CMakeFiles/td4.dir/main.cpp.o: src/CMakeFiles/td4.dir/flags.make
src/CMakeFiles/td4.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/orca/a3/info/td4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/td4.dir/main.cpp.o"
	cd /home/orca/a3/info/td4/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/td4.dir/main.cpp.o -c /home/orca/a3/info/td4/src/main.cpp

src/CMakeFiles/td4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/td4.dir/main.cpp.i"
	cd /home/orca/a3/info/td4/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orca/a3/info/td4/src/main.cpp > CMakeFiles/td4.dir/main.cpp.i

src/CMakeFiles/td4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/td4.dir/main.cpp.s"
	cd /home/orca/a3/info/td4/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orca/a3/info/td4/src/main.cpp -o CMakeFiles/td4.dir/main.cpp.s

# Object files for target td4
td4_OBJECTS = \
"CMakeFiles/td4.dir/main.cpp.o"

# External object files for target td4
td4_EXTERNAL_OBJECTS =

src/td4: src/CMakeFiles/td4.dir/main.cpp.o
src/td4: src/CMakeFiles/td4.dir/build.make
src/td4: lib/libproject_lib.a
src/td4: src/CMakeFiles/td4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/orca/a3/info/td4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable td4"
	cd /home/orca/a3/info/td4/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/td4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/td4.dir/build: src/td4

.PHONY : src/CMakeFiles/td4.dir/build

src/CMakeFiles/td4.dir/clean:
	cd /home/orca/a3/info/td4/build/src && $(CMAKE_COMMAND) -P CMakeFiles/td4.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/td4.dir/clean

src/CMakeFiles/td4.dir/depend:
	cd /home/orca/a3/info/td4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/orca/a3/info/td4 /home/orca/a3/info/td4/src /home/orca/a3/info/td4/build /home/orca/a3/info/td4/build/src /home/orca/a3/info/td4/build/src/CMakeFiles/td4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/td4.dir/depend
