# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/heroadm/Pobrane/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/heroadm/Pobrane/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/heroadm/CLionProjects/OpenGLTutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug

# Include any dependencies generated for this target.
include Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/depend.make

# Include the progress variables for this target.
include Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/progress.make

# Include the compile flags for this target's objects.
include Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/flags.make

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/flags.make
Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o: ../Graphics/Middleware/GLEW/glew-cmake/src/glew.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o"
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libglew_shared.dir/src/glew.c.o   -c /home/heroadm/CLionProjects/OpenGLTutorial/Graphics/Middleware/GLEW/glew-cmake/src/glew.c

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libglew_shared.dir/src/glew.c.i"
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/Graphics/Middleware/GLEW/glew-cmake/src/glew.c > CMakeFiles/libglew_shared.dir/src/glew.c.i

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libglew_shared.dir/src/glew.c.s"
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/Graphics/Middleware/GLEW/glew-cmake/src/glew.c -o CMakeFiles/libglew_shared.dir/src/glew.c.s

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.requires:

.PHONY : Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.requires

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.provides: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.requires
	$(MAKE) -f Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/build.make Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.provides.build
.PHONY : Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.provides

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.provides.build: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o


# Object files for target libglew_shared
libglew_shared_OBJECTS = \
"CMakeFiles/libglew_shared.dir/src/glew.c.o"

# External object files for target libglew_shared
libglew_shared_EXTERNAL_OBJECTS =

lib/libglewd.so: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o
lib/libglewd.so: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/build.make
lib/libglewd.so: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../../../lib/libglewd.so"
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libglew_shared.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/build: lib/libglewd.so

.PHONY : Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/build

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/requires: Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/src/glew.c.o.requires

.PHONY : Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/requires

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/clean:
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake && $(CMAKE_COMMAND) -P CMakeFiles/libglew_shared.dir/cmake_clean.cmake
.PHONY : Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/clean

Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/depend:
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/heroadm/CLionProjects/OpenGLTutorial /home/heroadm/CLionProjects/OpenGLTutorial/Graphics/Middleware/GLEW/glew-cmake /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Graphics/Middleware/GLEW/glew-cmake/CMakeFiles/libglew_shared.dir/depend

