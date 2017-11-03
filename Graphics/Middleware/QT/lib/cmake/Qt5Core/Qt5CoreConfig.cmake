
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5Core_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

set(Qt5Core_VERSION_MAJOR 5)
set(Qt5Core_VERSION_MINOR 0)
set(Qt5Core_VERSION_PATCH 2)
set(Qt5Core_VERSION_STRING 5.0.2)

set(Qt5Core_LIBRARIES Qt5::Core)

macro(_populate_Core_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::Core APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set_target_properties(Qt5::Core PROPERTIES
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5Core_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" "${_qt5Core_install_prefix}/lib/${LIB_LOCATION}"
        "IMPORTED_SONAME_${Configuration}" "libQt5Core.so.5"
    )
endmacro()

if (NOT TARGET Qt5::Core)

    set(Qt5Core_INCLUDE_DIRS "${_qt5Core_install_prefix}/include/QtCore")
    set(Qt5Core_PRIVATE_INCLUDE_DIRS
        "${_qt5Core_install_prefix}/include/QtCore/${Qt5Core_VERSION_STRING}"
        "${_qt5Core_install_prefix}/include/QtCore/${Qt5Core_VERSION_STRING}/QtCore"
    )

    set(Qt5Core_DEFINITIONS -DQT_CORE_LIB)
    set(Qt5Core_COMPILE_DEFINITIONS QT_CORE_LIB)

    set(_Qt5Core_MODULE_DEPENDENCIES "")

    set(_Qt5Core_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5Core_FIND_REQUIRED)
        set(_Qt5Core_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5Core_FIND_DEPENDENCIES_QUIET)
    if (Qt5Core_FIND_QUIETLY)
        set(_Qt5Core_DEPENDENCIES_FIND_QUIET QUIET)
    endif()

    foreach(_module_dep ${_Qt5Core_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                ${_Qt5Core_DEPENDENCIES_FIND_QUIET}
                ${_Qt5Core_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${_qt5Core_install_prefix}" NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5Core_FOUND False)
            return()
        endif()

        list(APPEND Qt5Core_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5Core_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5Core_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5Core_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5Core_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5Core_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5Core_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5Core_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5Core_COMPILE_DEFINITIONS)
    if (Qt5Core_EXECUTABLE_COMPILE_FLAGS)
      list(REMOVE_DUPLICATES Qt5Core_EXECUTABLE_COMPILE_FLAGS)
    endif()

    set(_Qt5Core_LIB_DEPENDENCIES "")

    add_library(Qt5::Core SHARED IMPORTED)

    _populate_Core_target_properties(RELEASE "libQt5Core.so.5.0.2" "" )




    include("${CMAKE_CURRENT_LIST_DIR}/Qt5CoreConfigExtras.cmake")

    include("${CMAKE_CURRENT_LIST_DIR}/Qt5CoreMacros.cmake")

endif()
