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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ex_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex_1.dir/flags.make

CMakeFiles/Ex_1.dir/main.c.o: CMakeFiles/Ex_1.dir/flags.make
CMakeFiles/Ex_1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ex_1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Ex_1.dir/main.c.o   -c /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/main.c

CMakeFiles/Ex_1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ex_1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/main.c > CMakeFiles/Ex_1.dir/main.c.i

CMakeFiles/Ex_1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ex_1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/main.c -o CMakeFiles/Ex_1.dir/main.c.s

CMakeFiles/Ex_1.dir/main.c.o.requires:

.PHONY : CMakeFiles/Ex_1.dir/main.c.o.requires

CMakeFiles/Ex_1.dir/main.c.o.provides: CMakeFiles/Ex_1.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Ex_1.dir/build.make CMakeFiles/Ex_1.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Ex_1.dir/main.c.o.provides

CMakeFiles/Ex_1.dir/main.c.o.provides.build: CMakeFiles/Ex_1.dir/main.c.o


# Object files for target Ex_1
Ex_1_OBJECTS = \
"CMakeFiles/Ex_1.dir/main.c.o"

# External object files for target Ex_1
Ex_1_EXTERNAL_OBJECTS =

Ex_1.exe: CMakeFiles/Ex_1.dir/main.c.o
Ex_1.exe: CMakeFiles/Ex_1.dir/build.make
Ex_1.exe: CMakeFiles/Ex_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Ex_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ex_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex_1.dir/build: Ex_1.exe

.PHONY : CMakeFiles/Ex_1.dir/build

CMakeFiles/Ex_1.dir/requires: CMakeFiles/Ex_1.dir/main.c.o.requires

.PHONY : CMakeFiles/Ex_1.dir/requires

CMakeFiles/Ex_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ex_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ex_1.dir/clean

CMakeFiles/Ex_1.dir/depend:
	cd /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1 /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1 /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug /cygdrive/c/Users/ADMIN/Documents/GitHub/Innopolis_OS/week_4/Ex_1/cmake-build-debug/CMakeFiles/Ex_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex_1.dir/depend

