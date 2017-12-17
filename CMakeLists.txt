cmake_minimum_required(VERSION 3.7)
project(OpenGLTutorial)

set(CMAKE_CXX_STANDARD 11)



add_subdirectory(Graphics/Middleware/GLEW/glew-cmake/)

set(SOURCE_FILES
        main.cpp
        GuiComponents/DebugSlider.cpp
        GuiComponents/DebugSlider.h
        OpenglWindow/Window.cpp
        OpenglWindow/Window.h
        OpenglWindow/World/WorldPrmitives/Vertex.h
        OpenglWindow/World/WorldPrmitives/ShapeGenerator.cpp
        OpenglWindow/World/WorldPrmitives/ShapeData.h
        OpenglWindow/World/WorldManager.cpp
        OpenglWindow/World/WorldManager.h
        OpenglWindow/World/Camera/Camera.cpp
        OpenglWindow/World/Camera/Camera.h
        OpenglWindow/World/WorldManager.h
        OpenglWindow/World/Shaders/ShadersManager.cpp
        OpenglWindow/World/Shaders/ShadersManager.h
        Graphics/Middleware/ImageLoadingLibrary/stb/
        QT/GuiObjectController.cpp
        QT/GuiObjectController.h
        QT/ControlStrip.cpp
        QT/ControlStrip.h
        QT/ObjectMatrix.cpp
        OpenglWindow/World/helpers.h QT/QtMainWindow.cpp QT/QtMainWindow.h)

set(
        CMAKE_PREFIX_PATH "${PROJECT_SOURCE_DIR}/Graphics/Middleware/QT/lib/cmake/"
        CMAKE_PREFIX_PATH "${PROJECT_SOURCE_DIR}//Graphics/Middleware/GLM/glm/lib/x86_64-linux-gnu/cmake/glm/"
)


#### Qt5
find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )
find_package( Qt5OpenGL REQUIRED)
find_package( GLEW REQUIRED)
find_package( glm REQUIRED)
set( CMAKE_AUTOMOC ON )  # to automoc remove the need to wrap by hand


include_directories(
        ${PROJECT_SOURCE_DIR}/Graphics/Middleware/QT/include
        ${PROJECT_SOURCE_DIR}/Graphics/Middleware/GLEW/glew-cmake/include/
        ${PROJECT_SOURCE_DIR}/GuiComponents/
        ${PROJECT_SOURCE_DIR}/Graphics/Middleware/ImageLoadingLibrary/stb/
        )

if (Qt5_POSITION_INDEPENDENT_CODE)
       add_definitions(-fPIC)
       SET(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()


add_executable(OpenGLTutorial
        ${SOURCE_FILES}
        )



add_custom_command(
        TARGET OpenGLTutorial POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/OpenglWindow/World/Shaders/*.glsl
        ${CMAKE_CURRENT_BINARY_DIR}/Shaders
)


file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/Textures)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/Shaders)

add_custom_command(
        TARGET OpenGLTutorial POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/OpenglWindow/World/Textures/*.png
        ${CMAKE_CURRENT_BINARY_DIR}/Textures/
)



target_link_libraries(
        OpenGLTutorial
        Qt5::Widgets
        Qt5::Gui
        Qt5::Core
        Qt5::OpenGL
        GLEW
        GL
        glm
        ${PROJECT_SOURCE_DIR}/Graphics/Middleware/ImageLoadingLibrary/stb/stb_image.h
)


