# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/stef4/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/stef4/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MarkovNormalAlgorythm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MarkovNormalAlgorythm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MarkovNormalAlgorythm.dir/flags.make

CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.o: CMakeFiles/MarkovNormalAlgorythm.dir/flags.make
CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.o -c "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/main.cpp"

CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/main.cpp" > CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.i

CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/main.cpp" -o CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.s

# Object files for target MarkovNormalAlgorythm
MarkovNormalAlgorythm_OBJECTS = \
"CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.o"

# External object files for target MarkovNormalAlgorythm
MarkovNormalAlgorythm_EXTERNAL_OBJECTS =

MarkovNormalAlgorythm.exe: CMakeFiles/MarkovNormalAlgorythm.dir/main.cpp.o
MarkovNormalAlgorythm.exe: CMakeFiles/MarkovNormalAlgorythm.dir/build.make
MarkovNormalAlgorythm.exe: CMakeFiles/MarkovNormalAlgorythm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MarkovNormalAlgorythm.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MarkovNormalAlgorythm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MarkovNormalAlgorythm.dir/build: MarkovNormalAlgorythm.exe

.PHONY : CMakeFiles/MarkovNormalAlgorythm.dir/build

CMakeFiles/MarkovNormalAlgorythm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MarkovNormalAlgorythm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MarkovNormalAlgorythm.dir/clean

CMakeFiles/MarkovNormalAlgorythm.dir/depend:
	cd "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm" "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm" "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug" "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug" "/cygdrive/e/STEF/WORKSPACE(For C++)/MarkovNormalAlgorythm/cmake-build-debug/CMakeFiles/MarkovNormalAlgorythm.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MarkovNormalAlgorythm.dir/depend

