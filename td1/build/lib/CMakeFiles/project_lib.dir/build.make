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
CMAKE_SOURCE_DIR = /home/orca/a3/info/td1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/orca/a3/info/td1/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/project_lib.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/project_lib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/project_lib.dir/flags.make

lib/CMakeFiles/project_lib.dir/functions.cpp.o: lib/CMakeFiles/project_lib.dir/flags.make
lib/CMakeFiles/project_lib.dir/functions.cpp.o: ../lib/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/orca/a3/info/td1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/project_lib.dir/functions.cpp.o"
	cd /home/orca/a3/info/td1/build/lib && /bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_lib.dir/functions.cpp.o -c /home/orca/a3/info/td1/lib/functions.cpp

lib/CMakeFiles/project_lib.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_lib.dir/functions.cpp.i"
	cd /home/orca/a3/info/td1/build/lib && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orca/a3/info/td1/lib/functions.cpp > CMakeFiles/project_lib.dir/functions.cpp.i

lib/CMakeFiles/project_lib.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_lib.dir/functions.cpp.s"
	cd /home/orca/a3/info/td1/build/lib && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orca/a3/info/td1/lib/functions.cpp -o CMakeFiles/project_lib.dir/functions.cpp.s

# Object files for target project_lib
project_lib_OBJECTS = \
"CMakeFiles/project_lib.dir/functions.cpp.o"

# External object files for target project_lib
project_lib_EXTERNAL_OBJECTS =

lib/libproject_lib.a: lib/CMakeFiles/project_lib.dir/functions.cpp.o
lib/libproject_lib.a: lib/CMakeFiles/project_lib.dir/build.make
lib/libproject_lib.a: lib/CMakeFiles/project_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/orca/a3/info/td1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libproject_lib.a"
	cd /home/orca/a3/info/td1/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/project_lib.dir/cmake_clean_target.cmake
	cd /home/orca/a3/info/td1/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/project_lib.dir/build: lib/libproject_lib.a

.PHONY : lib/CMakeFiles/project_lib.dir/build

lib/CMakeFiles/project_lib.dir/clean:
	cd /home/orca/a3/info/td1/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/project_lib.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/project_lib.dir/clean

lib/CMakeFiles/project_lib.dir/depend:
	cd /home/orca/a3/info/td1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/orca/a3/info/td1 /home/orca/a3/info/td1/lib /home/orca/a3/info/td1/build /home/orca/a3/info/td1/build/lib /home/orca/a3/info/td1/build/lib/CMakeFiles/project_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/project_lib.dir/depend

