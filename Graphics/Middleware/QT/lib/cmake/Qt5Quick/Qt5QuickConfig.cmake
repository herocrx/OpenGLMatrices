
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5Quick_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

set(Qt5Quick_VERSION_MAJOR 5)
set(Qt5Quick_VERSION_MINOR 0)
set(Qt5Quick_VERSION_PATCH 2)
set(Qt5Quick_VERSION_STRING 5.0.2)

set(Qt5Quick_LIBRARIES Qt5::Quick)

macro(_populate_Quick_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::Quick APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set_target_properties(Qt5::Quick PROPERTIES
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5Quick_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" "${_qt5Quick_install_prefix}/lib/${LIB_LOCATION}"
        "IMPORTED_SONAME_${Configuration}" "libQt5Quick.so.5"
    )
endmacro()

if (NOT TARGET Qt5::Quick)

    set(Qt5Quick_INCLUDE_DIRS "${_qt5Quick_install_prefix}/include/QtQuick")
    set(Qt5Quick_PRIVATE_INCLUDE_DIRS
        "${_qt5Quick_install_prefix}/include/QtQuick/${Qt5Quick_VERSION_STRING}"
        "${_qt5Quick_install_prefix}/include/QtQuick/${Qt5Quick_VERSION_STRING}/QtQuick"
    )

    set(Qt5Quick_DEFINITIONS -DQT_QUICK_LIB)
    set(Qt5Quick_COMPILE_DEFINITIONS QT_QUICK_LIB)

    set(_Qt5Quick_MODULE_DEPENDENCIES "Qml;Gui;Core")

    set(_Qt5Quick_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5Quick_FIND_REQUIRED)
        set(_Qt5Quick_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5Quick_FIND_DEPENDENCIES_QUIET)
    if (Qt5Quick_FIND_QUIETLY)
        set(_Qt5Quick_DEPENDENCIES_FIND_QUIET QUIET)
    endif()

    foreach(_module_dep ${_Qt5Quick_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                ${_Qt5Quick_DEPENDENCIES_FIND_QUIET}
                ${_Qt5Quick_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${_qt5Quick_install_prefix}" NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5Quick_FOUND False)
            return()
        endif()

        list(APPEND Qt5Quick_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5Quick_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5Quick_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5Quick_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5Quick_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5Quick_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5Quick_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5Quick_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5Quick_COMPILE_DEFINITIONS)
    if (Qt5Quick_EXECUTABLE_COMPILE_FLAGS)
      list(REMOVE_DUPLICATES Qt5Quick_EXECUTABLE_COMPILE_FLAGS)
    endif()

    set(_Qt5Quick_LIB_DEPENDENCIES "Qt5::Qml;Qt5::Gui;Qt5::Core")

    add_library(Qt5::Quick SHARED IMPORTED)

    _populate_Quick_target_properties(RELEASE "libQt5Quick.so.5.0.2" "" )






endif()
