# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/heroadm/Pobrane/clion-2017.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/heroadm/Pobrane/clion-2017.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/heroadm/CLionProjects/OpenGLTutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OpenGLTutorial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGLTutorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGLTutorial.dir/flags.make

CMakeFiles/OpenGLTutorial.dir/main.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGLTutorial.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/main.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/main.cpp

CMakeFiles/OpenGLTutorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/main.cpp > CMakeFiles/OpenGLTutorial.dir/main.cpp.i

CMakeFiles/OpenGLTutorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/main.cpp -o CMakeFiles/OpenGLTutorial.dir/main.cpp.s

CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/main.cpp.o


CMakeFiles/OpenGLTutorial.dir/Window.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/Window.cpp.o: ../Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenGLTutorial.dir/Window.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/Window.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/Window.cpp

CMakeFiles/OpenGLTutorial.dir/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/Window.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/Window.cpp > CMakeFiles/OpenGLTutorial.dir/Window.cpp.i

CMakeFiles/OpenGLTutorial.dir/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/Window.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/Window.cpp -o CMakeFiles/OpenGLTutorial.dir/Window.cpp.s

CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/Window.cpp.o


CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o: ../ShapeGenerator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/ShapeGenerator.cpp

CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/ShapeGenerator.cpp > CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.i

CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/ShapeGenerator.cpp -o CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.s

CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o: OpenGLTutorial_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/OpenGLTutorial_automoc.cpp

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/OpenGLTutorial_automoc.cpp > CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/OpenGLTutorial_automoc.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o


# Object files for target OpenGLTutorial
OpenGLTutorial_OBJECTS = \
"CMakeFiles/OpenGLTutorial.dir/main.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/Window.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o"

# External object files for target OpenGLTutorial
OpenGLTutorial_EXTERNAL_OBJECTS =

OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/main.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/Window.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/build.make
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5OpenGL.so.5.0.2
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5Widgets.so.5.0.2
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5Gui.so.5.0.2
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5Core.so.5.0.2
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable OpenGLTutorial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGLTutorial.dir/link.txt --verbose=$(VERBOSE)
	/home/heroadm/Pobrane/clion-2017.1.2/bin/cmake/bin/cmake -E copy /home/heroadm/CLionProjects/OpenGLTutorial/VertexShaderCode.glsl /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/VertexShaderCode.glsl
	/home/heroadm/Pobrane/clion-2017.1.2/bin/cmake/bin/cmake -E copy /home/heroadm/CLionProjects/OpenGLTutorial/FragmentShaderCode.glsl /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/FragmentShaderCode.glsl

# Rule to build all files generated by this target.
CMakeFiles/OpenGLTutorial.dir/build: OpenGLTutorial

.PHONY : CMakeFiles/OpenGLTutorial.dir/build

CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/Window.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/ShapeGenerator.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_automoc.cpp.o.requires

.PHONY : CMakeFiles/OpenGLTutorial.dir/requires

CMakeFiles/OpenGLTutorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGLTutorial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGLTutorial.dir/clean

CMakeFiles/OpenGLTutorial.dir/depend:
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/heroadm/CLionProjects/OpenGLTutorial /home/heroadm/CLionProjects/OpenGLTutorial /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles/OpenGLTutorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGLTutorial.dir/depend

