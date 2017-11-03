
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5MultimediaWidgets_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

set(Qt5MultimediaWidgets_VERSION_MAJOR 5)
set(Qt5MultimediaWidgets_VERSION_MINOR 0)
set(Qt5MultimediaWidgets_VERSION_PATCH 2)
set(Qt5MultimediaWidgets_VERSION_STRING 5.0.2)

set(Qt5MultimediaWidgets_LIBRARIES Qt5::MultimediaWidgets)

macro(_populate_MultimediaWidgets_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::MultimediaWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set_target_properties(Qt5::MultimediaWidgets PROPERTIES
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5MultimediaWidgets_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" "${_qt5MultimediaWidgets_install_prefix}/lib/${LIB_LOCATION}"
        "IMPORTED_SONAME_${Configuration}" "libQt5MultimediaWidgets.so.5"
    )
endmacro()

if (NOT TARGET Qt5::MultimediaWidgets)

    set(Qt5MultimediaWidgets_INCLUDE_DIRS "${_qt5MultimediaWidgets_install_prefix}/include/QtMultimediaWidgets")
    set(Qt5MultimediaWidgets_PRIVATE_INCLUDE_DIRS
        "${_qt5MultimediaWidgets_install_prefix}/include/QtMultimediaWidgets/${Qt5MultimediaWidgets_VERSION_STRING}"
        "${_qt5MultimediaWidgets_install_prefix}/include/QtMultimediaWidgets/${Qt5MultimediaWidgets_VERSION_STRING}/QtMultimediaWidgets"
    )

    set(Qt5MultimediaWidgets_DEFINITIONS -DQT_MULTIMEDIAWIDGETS_LIB)
    set(Qt5MultimediaWidgets_COMPILE_DEFINITIONS QT_MULTIMEDIAWIDGETS_LIB)

    set(_Qt5MultimediaWidgets_MODULE_DEPENDENCIES "Multimedia;Widgets;Gui;Core")

    set(_Qt5MultimediaWidgets_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5MultimediaWidgets_FIND_REQUIRED)
        set(_Qt5MultimediaWidgets_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5MultimediaWidgets_FIND_DEPENDENCIES_QUIET)
    if (Qt5MultimediaWidgets_FIND_QUIETLY)
        set(_Qt5MultimediaWidgets_DEPENDENCIES_FIND_QUIET QUIET)
    endif()

    foreach(_module_dep ${_Qt5MultimediaWidgets_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                ${_Qt5MultimediaWidgets_DEPENDENCIES_FIND_QUIET}
                ${_Qt5MultimediaWidgets_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${_qt5MultimediaWidgets_install_prefix}" NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5MultimediaWidgets_FOUND False)
            return()
        endif()

        list(APPEND Qt5MultimediaWidgets_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5MultimediaWidgets_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5MultimediaWidgets_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5MultimediaWidgets_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5MultimediaWidgets_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5MultimediaWidgets_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5MultimediaWidgets_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5MultimediaWidgets_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5MultimediaWidgets_COMPILE_DEFINITIONS)
    if (Qt5MultimediaWidgets_EXECUTABLE_COMPILE_FLAGS)
      list(REMOVE_DUPLICATES Qt5MultimediaWidgets_EXECUTABLE_COMPILE_FLAGS)
    endif()

    set(_Qt5MultimediaWidgets_LIB_DEPENDENCIES "Qt5::Multimedia;Qt5::Widgets;Qt5::Gui;Qt5::Core")

    add_library(Qt5::MultimediaWidgets SHARED IMPORTED)

    _populate_MultimediaWidgets_target_properties(RELEASE "libQt5MultimediaWidgets.so.5.0.2" "" )






endif()
