# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /cygdrive/c/Users/ADMIN/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/ADMIN/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/exercise_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise_2.dir/flags.make

CMakeFiles/exercise_2.dir/main.c.o: CMakeFiles/exercise_2.dir/flags.make
CMakeFiles/exercise_2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercise_2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/exercise_2.dir/main.c.o   -c "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/main.c"

CMakeFiles/exercise_2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercise_2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/main.c" > CMakeFiles/exercise_2.dir/main.c.i

CMakeFiles/exercise_2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercise_2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/main.c" -o CMakeFiles/exercise_2.dir/main.c.s

CMakeFiles/exercise_2.dir/main.c.o.requires:

.PHONY : CMakeFiles/exercise_2.dir/main.c.o.requires

CMakeFiles/exercise_2.dir/main.c.o.provides: CMakeFiles/exercise_2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/exercise_2.dir/build.make CMakeFiles/exercise_2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/exercise_2.dir/main.c.o.provides

CMakeFiles/exercise_2.dir/main.c.o.provides.build: CMakeFiles/exercise_2.dir/main.c.o


# Object files for target exercise_2
exercise_2_OBJECTS = \
"CMakeFiles/exercise_2.dir/main.c.o"

# External object files for target exercise_2
exercise_2_EXTERNAL_OBJECTS =

exercise_2.exe: CMakeFiles/exercise_2.dir/main.c.o
exercise_2.exe: CMakeFiles/exercise_2.dir/build.make
exercise_2.exe: CMakeFiles/exercise_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercise_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise_2.dir/build: exercise_2.exe

.PHONY : CMakeFiles/exercise_2.dir/build

CMakeFiles/exercise_2.dir/requires: CMakeFiles/exercise_2.dir/main.c.o.requires

.PHONY : CMakeFiles/exercise_2.dir/requires

CMakeFiles/exercise_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise_2.dir/clean

CMakeFiles/exercise_2.dir/depend:
	cd "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2" "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2" "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug" "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug" "/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_2/exercise 2/cmake-build-debug/CMakeFiles/exercise_2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/exercise_2.dir/depend

