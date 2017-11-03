
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5Qml_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

set(Qt5Qml_VERSION_MAJOR 5)
set(Qt5Qml_VERSION_MINOR 0)
set(Qt5Qml_VERSION_PATCH 2)
set(Qt5Qml_VERSION_STRING 5.0.2)

set(Qt5Qml_LIBRARIES Qt5::Qml)

macro(_populate_Qml_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::Qml APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set_target_properties(Qt5::Qml PROPERTIES
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5Qml_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" "${_qt5Qml_install_prefix}/lib/${LIB_LOCATION}"
        "IMPORTED_SONAME_${Configuration}" "libQt5Qml.so.5"
    )
endmacro()

if (NOT TARGET Qt5::Qml)

    set(Qt5Qml_INCLUDE_DIRS "${_qt5Qml_install_prefix}/include/QtQml")
    set(Qt5Qml_PRIVATE_INCLUDE_DIRS
        "${_qt5Qml_install_prefix}/include/QtQml/${Qt5Qml_VERSION_STRING}"
        "${_qt5Qml_install_prefix}/include/QtQml/${Qt5Qml_VERSION_STRING}/QtQml"
    )

    set(Qt5Qml_DEFINITIONS -DQT_QML_LIB)
    set(Qt5Qml_COMPILE_DEFINITIONS QT_QML_LIB)

    set(_Qt5Qml_MODULE_DEPENDENCIES "Network;Core")

    set(_Qt5Qml_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5Qml_FIND_REQUIRED)
        set(_Qt5Qml_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5Qml_FIND_DEPENDENCIES_QUIET)
    if (Qt5Qml_FIND_QUIETLY)
        set(_Qt5Qml_DEPENDENCIES_FIND_QUIET QUIET)
    endif()

    foreach(_module_dep ${_Qt5Qml_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                ${_Qt5Qml_DEPENDENCIES_FIND_QUIET}
                ${_Qt5Qml_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${_qt5Qml_install_prefix}" NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5Qml_FOUND False)
            return()
        endif()

        list(APPEND Qt5Qml_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5Qml_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5Qml_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5Qml_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5Qml_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5Qml_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5Qml_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5Qml_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5Qml_COMPILE_DEFINITIONS)
    if (Qt5Qml_EXECUTABLE_COMPILE_FLAGS)
      list(REMOVE_DUPLICATES Qt5Qml_EXECUTABLE_COMPILE_FLAGS)
    endif()

    set(_Qt5Qml_LIB_DEPENDENCIES "Qt5::Network;Qt5::Core")

    add_library(Qt5::Qml SHARED IMPORTED)

    _populate_Qml_target_properties(RELEASE "libQt5Qml.so.5.0.2" "" )






endif()
