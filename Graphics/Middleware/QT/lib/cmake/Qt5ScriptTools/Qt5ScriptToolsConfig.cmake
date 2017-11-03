
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5ScriptTools_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

set(Qt5ScriptTools_VERSION_MAJOR 5)
set(Qt5ScriptTools_VERSION_MINOR 0)
set(Qt5ScriptTools_VERSION_PATCH 2)
set(Qt5ScriptTools_VERSION_STRING 5.0.2)

set(Qt5ScriptTools_LIBRARIES Qt5::ScriptTools)

macro(_populate_ScriptTools_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::ScriptTools APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set_target_properties(Qt5::ScriptTools PROPERTIES
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5ScriptTools_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" "${_qt5ScriptTools_install_prefix}/lib/${LIB_LOCATION}"
        "IMPORTED_SONAME_${Configuration}" "libQt5ScriptTools.so.5"
    )
endmacro()

if (NOT TARGET Qt5::ScriptTools)

    set(Qt5ScriptTools_INCLUDE_DIRS "${_qt5ScriptTools_install_prefix}/include/QtScriptTools")
    set(Qt5ScriptTools_PRIVATE_INCLUDE_DIRS
        "${_qt5ScriptTools_install_prefix}/include/QtScriptTools/${Qt5ScriptTools_VERSION_STRING}"
        "${_qt5ScriptTools_install_prefix}/include/QtScriptTools/${Qt5ScriptTools_VERSION_STRING}/QtScriptTools"
    )

    set(Qt5ScriptTools_DEFINITIONS -DQT_SCRIPTTOOLS_LIB)
    set(Qt5ScriptTools_COMPILE_DEFINITIONS QT_SCRIPTTOOLS_LIB)

    set(_Qt5ScriptTools_MODULE_DEPENDENCIES "Core")

    set(_Qt5ScriptTools_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5ScriptTools_FIND_REQUIRED)
        set(_Qt5ScriptTools_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5ScriptTools_FIND_DEPENDENCIES_QUIET)
    if (Qt5ScriptTools_FIND_QUIETLY)
        set(_Qt5ScriptTools_DEPENDENCIES_FIND_QUIET QUIET)
    endif()

    foreach(_module_dep ${_Qt5ScriptTools_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                ${_Qt5ScriptTools_DEPENDENCIES_FIND_QUIET}
                ${_Qt5ScriptTools_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${_qt5ScriptTools_install_prefix}" NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5ScriptTools_FOUND False)
            return()
        endif()

        list(APPEND Qt5ScriptTools_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5ScriptTools_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5ScriptTools_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5ScriptTools_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5ScriptTools_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5ScriptTools_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5ScriptTools_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5ScriptTools_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5ScriptTools_COMPILE_DEFINITIONS)
    if (Qt5ScriptTools_EXECUTABLE_COMPILE_FLAGS)
      list(REMOVE_DUPLICATES Qt5ScriptTools_EXECUTABLE_COMPILE_FLAGS)
    endif()

    set(_Qt5ScriptTools_LIB_DEPENDENCIES "Qt5::Core")

    add_library(Qt5::ScriptTools SHARED IMPORTED)

    _populate_ScriptTools_target_properties(RELEASE "libQt5ScriptTools.so.5.0.2" "" )






endif()
