# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/heroadm/Pobrane/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/heroadm/Pobrane/clion-2017.3/bin/cmake/bin/cmake -E remove -f

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
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/main.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/main.cpp

CMakeFiles/OpenGLTutorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/main.cpp > CMakeFiles/OpenGLTutorial.dir/main.cpp.i

CMakeFiles/OpenGLTutorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/main.cpp -o CMakeFiles/OpenGLTutorial.dir/main.cpp.s

CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/main.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/main.cpp.o


CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o: ../GuiComponents/DebugSlider.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/GuiComponents/DebugSlider.cpp

CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/GuiComponents/DebugSlider.cpp > CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.i

CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/GuiComponents/DebugSlider.cpp -o CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.s

CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o: ../OpenglWindow/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/Window.cpp

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/Window.cpp > CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/Window.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o: ../OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp > CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o: ../OpenglWindow/World/WorldManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/WorldManager.cpp

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/WorldManager.cpp > CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/WorldManager.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o: ../OpenglWindow/World/Camera/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Camera/Camera.cpp

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Camera/Camera.cpp > CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Camera/Camera.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o: ../OpenglWindow/World/Shaders/ShadersManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Shaders/ShadersManager.cpp

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Shaders/ShadersManager.cpp > CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Shaders/ShadersManager.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o


CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o: ../QT/GuiObjectController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/QT/GuiObjectController.cpp

CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/QT/GuiObjectController.cpp > CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.i

CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/QT/GuiObjectController.cpp -o CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.s

CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o


CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o: ../QT/ControlStrip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/QT/ControlStrip.cpp

CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/QT/ControlStrip.cpp > CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.i

CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/QT/ControlStrip.cpp -o CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.s

CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o


CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o: ../QT/ObjectMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/QT/ObjectMatrix.cpp

CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/QT/ObjectMatrix.cpp > CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.i

CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/QT/ObjectMatrix.cpp -o CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.s

CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o


CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o: ../QT/QtMainWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/QT/QtMainWindow.cpp

CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/QT/QtMainWindow.cpp > CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.i

CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/QT/QtMainWindow.cpp -o CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.s

CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o


CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o: CMakeFiles/OpenGLTutorial.dir/flags.make
CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o: OpenGLTutorial_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o -c /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/OpenGLTutorial_autogen/mocs_compilation.cpp

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/OpenGLTutorial_autogen/mocs_compilation.cpp > CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.i

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/OpenGLTutorial_autogen/mocs_compilation.cpp -o CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.s

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpenGLTutorial.dir/build.make CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o


# Object files for target OpenGLTutorial
OpenGLTutorial_OBJECTS = \
"CMakeFiles/OpenGLTutorial.dir/main.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o" \
"CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o"

# External object files for target OpenGLTutorial
OpenGLTutorial_EXTERNAL_OBJECTS =

OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/main.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/build.make
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5OpenGL.so.5.0.2
OpenGLTutorial: ../Graphics/Middleware/ImageLoadingLibrary/stb/stb_image.h
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5Widgets.so.5.0.2
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5Gui.so.5.0.2
OpenGLTutorial: ../Graphics/Middleware/QT/lib/libQt5Core.so.5.0.2
OpenGLTutorial: CMakeFiles/OpenGLTutorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable OpenGLTutorial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGLTutorial.dir/link.txt --verbose=$(VERBOSE)
	/home/heroadm/Pobrane/clion-2017.3/bin/cmake/bin/cmake -E copy /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Shaders/*.glsl /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Shaders
	/home/heroadm/Pobrane/clion-2017.3/bin/cmake/bin/cmake -E copy /home/heroadm/CLionProjects/OpenGLTutorial/OpenglWindow/World/Textures/*.png /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/Textures/

# Rule to build all files generated by this target.
CMakeFiles/OpenGLTutorial.dir/build: OpenGLTutorial

.PHONY : CMakeFiles/OpenGLTutorial.dir/build

CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/main.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/GuiComponents/DebugSlider.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/Window.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/WorldManager.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Camera/Camera.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenglWindow/World/Shaders/ShadersManager.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/QT/GuiObjectController.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/QT/ControlStrip.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/QT/ObjectMatrix.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/QT/QtMainWindow.cpp.o.requires
CMakeFiles/OpenGLTutorial.dir/requires: CMakeFiles/OpenGLTutorial.dir/OpenGLTutorial_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/OpenGLTutorial.dir/requires

CMakeFiles/OpenGLTutorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGLTutorial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGLTutorial.dir/clean

CMakeFiles/OpenGLTutorial.dir/depend:
	cd /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/heroadm/CLionProjects/OpenGLTutorial /home/heroadm/CLionProjects/OpenGLTutorial /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug /home/heroadm/CLionProjects/OpenGLTutorial/cmake-build-debug/CMakeFiles/OpenGLTutorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGLTutorial.dir/depend

