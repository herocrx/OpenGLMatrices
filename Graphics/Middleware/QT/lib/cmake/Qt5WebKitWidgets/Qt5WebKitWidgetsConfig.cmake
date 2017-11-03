
if (CMAKE_VERSION VERSION_LESS 2.8.3)
    message(FATAL_ERROR "Qt 5 requires at least CMake version 2.8.3")
endif()

get_filename_component(_qt5WebKitWidgets_install_prefix "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

set(Qt5WebKitWidgets_VERSION_MAJOR 5)
set(Qt5WebKitWidgets_VERSION_MINOR 0)
set(Qt5WebKitWidgets_VERSION_PATCH 2)
set(Qt5WebKitWidgets_VERSION_STRING 5.0.2)

set(Qt5WebKitWidgets_LIBRARIES Qt5::WebKitWidgets)

macro(_populate_WebKitWidgets_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)
    set_property(TARGET Qt5::WebKitWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})

    set_target_properties(Qt5::WebKitWidgets PROPERTIES
        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_Qt5WebKitWidgets_LIB_DEPENDENCIES}"
        "IMPORTED_LOCATION_${Configuration}" "${_qt5WebKitWidgets_install_prefix}/lib/${LIB_LOCATION}"
        "IMPORTED_SONAME_${Configuration}" "libQt5WebKitWidgets.so.5"
    )
endmacro()

if (NOT TARGET Qt5::WebKitWidgets)

    set(Qt5WebKitWidgets_INCLUDE_DIRS "${_qt5WebKitWidgets_install_prefix}/include/QtWebKitWidgets")
    set(Qt5WebKitWidgets_PRIVATE_INCLUDE_DIRS
        "${_qt5WebKitWidgets_install_prefix}/include/QtWebKitWidgets/${Qt5WebKitWidgets_VERSION_STRING}"
        "${_qt5WebKitWidgets_install_prefix}/include/QtWebKitWidgets/${Qt5WebKitWidgets_VERSION_STRING}/QtWebKitWidgets"
    )

    set(Qt5WebKitWidgets_DEFINITIONS -DQT_WEBKITWIDGETS_LIB)
    set(Qt5WebKitWidgets_COMPILE_DEFINITIONS QT_WEBKITWIDGETS_LIB)

    set(_Qt5WebKitWidgets_MODULE_DEPENDENCIES "Quick;OpenGL;PrintSupport;WebKit;Widgets;Network;Gui;Core")

    set(_Qt5WebKitWidgets_FIND_DEPENDENCIES_REQUIRED)
    if (Qt5WebKitWidgets_FIND_REQUIRED)
        set(_Qt5WebKitWidgets_FIND_DEPENDENCIES_REQUIRED REQUIRED)
    endif()
    set(_Qt5WebKitWidgets_FIND_DEPENDENCIES_QUIET)
    if (Qt5WebKitWidgets_FIND_QUIETLY)
        set(_Qt5WebKitWidgets_DEPENDENCIES_FIND_QUIET QUIET)
    endif()

    foreach(_module_dep ${_Qt5WebKitWidgets_MODULE_DEPENDENCIES})
        if (NOT Qt5${_module_dep}_FOUND)
            find_package(Qt5${_module_dep}
                ${_Qt5WebKitWidgets_DEPENDENCIES_FIND_QUIET}
                ${_Qt5WebKitWidgets_FIND_DEPENDENCIES_REQUIRED}
                PATHS "${_qt5WebKitWidgets_install_prefix}" NO_DEFAULT_PATH
            )
        endif()

        if (NOT Qt5${_module_dep}_FOUND)
            set(Qt5WebKitWidgets_FOUND False)
            return()
        endif()

        list(APPEND Qt5WebKitWidgets_INCLUDE_DIRS "${Qt5${_module_dep}_INCLUDE_DIRS}")
        list(APPEND Qt5WebKitWidgets_PRIVATE_INCLUDE_DIRS "${Qt5${_module_dep}_PRIVATE_INCLUDE_DIRS}")
        list(APPEND Qt5WebKitWidgets_DEFINITIONS ${Qt5${_module_dep}_DEFINITIONS})
        list(APPEND Qt5WebKitWidgets_COMPILE_DEFINITIONS ${Qt5${_module_dep}_COMPILE_DEFINITIONS})
        list(APPEND Qt5WebKitWidgets_EXECUTABLE_COMPILE_FLAGS ${Qt5${_module_dep}_EXECUTABLE_COMPILE_FLAGS})
    endforeach()
    list(REMOVE_DUPLICATES Qt5WebKitWidgets_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5WebKitWidgets_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt5WebKitWidgets_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt5WebKitWidgets_COMPILE_DEFINITIONS)
    if (Qt5WebKitWidgets_EXECUTABLE_COMPILE_FLAGS)
      list(REMOVE_DUPLICATES Qt5WebKitWidgets_EXECUTABLE_COMPILE_FLAGS)
    endif()

    set(_Qt5WebKitWidgets_LIB_DEPENDENCIES "Qt5::Quick;Qt5::OpenGL;Qt5::PrintSupport;Qt5::WebKit;Qt5::Widgets;Qt5::Network;Qt5::Gui;Qt5::Core")

    add_library(Qt5::WebKitWidgets SHARED IMPORTED)

    _populate_WebKitWidgets_target_properties(RELEASE "libQt5WebKitWidgets.so.5.0.2" "" )






endif()
