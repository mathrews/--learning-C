# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dedsec/projects/--learning-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dedsec/projects/--learning-C/build

# Include any dependencies generated for this target.
include CMakeFiles/learning_by_c_programimg_language.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/learning_by_c_programimg_language.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/learning_by_c_programimg_language.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learning_by_c_programimg_language.dir/flags.make

CMakeFiles/learning_by_c_programimg_language.dir/main.c.o: CMakeFiles/learning_by_c_programimg_language.dir/flags.make
CMakeFiles/learning_by_c_programimg_language.dir/main.c.o: /home/dedsec/projects/--learning-C/main.c
CMakeFiles/learning_by_c_programimg_language.dir/main.c.o: CMakeFiles/learning_by_c_programimg_language.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dedsec/projects/--learning-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/learning_by_c_programimg_language.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/learning_by_c_programimg_language.dir/main.c.o -MF CMakeFiles/learning_by_c_programimg_language.dir/main.c.o.d -o CMakeFiles/learning_by_c_programimg_language.dir/main.c.o -c /home/dedsec/projects/--learning-C/main.c

CMakeFiles/learning_by_c_programimg_language.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/learning_by_c_programimg_language.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/dedsec/projects/--learning-C/main.c > CMakeFiles/learning_by_c_programimg_language.dir/main.c.i

CMakeFiles/learning_by_c_programimg_language.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/learning_by_c_programimg_language.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/dedsec/projects/--learning-C/main.c -o CMakeFiles/learning_by_c_programimg_language.dir/main.c.s

# Object files for target learning_by_c_programimg_language
learning_by_c_programimg_language_OBJECTS = \
"CMakeFiles/learning_by_c_programimg_language.dir/main.c.o"

# External object files for target learning_by_c_programimg_language
learning_by_c_programimg_language_EXTERNAL_OBJECTS =

learning_by_c_programimg_language: CMakeFiles/learning_by_c_programimg_language.dir/main.c.o
learning_by_c_programimg_language: CMakeFiles/learning_by_c_programimg_language.dir/build.make
learning_by_c_programimg_language: CMakeFiles/learning_by_c_programimg_language.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dedsec/projects/--learning-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable learning_by_c_programimg_language"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learning_by_c_programimg_language.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learning_by_c_programimg_language.dir/build: learning_by_c_programimg_language
.PHONY : CMakeFiles/learning_by_c_programimg_language.dir/build

CMakeFiles/learning_by_c_programimg_language.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learning_by_c_programimg_language.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learning_by_c_programimg_language.dir/clean

CMakeFiles/learning_by_c_programimg_language.dir/depend:
	cd /home/dedsec/projects/--learning-C/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dedsec/projects/--learning-C /home/dedsec/projects/--learning-C /home/dedsec/projects/--learning-C/build /home/dedsec/projects/--learning-C/build /home/dedsec/projects/--learning-C/build/CMakeFiles/learning_by_c_programimg_language.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/learning_by_c_programimg_language.dir/depend

