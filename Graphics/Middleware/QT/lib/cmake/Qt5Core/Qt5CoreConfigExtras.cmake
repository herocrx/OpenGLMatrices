
if (NOT TARGET Qt5::qmake)
    add_executable(Qt5::qmake IMPORTED)

    set_target_properties(Qt5::qmake PROPERTIES
        IMPORTED_LOCATION "${_qt5Core_install_prefix}/bin/qmake"
    )
endif()

if (NOT TARGET Qt5::moc)
    add_executable(Qt5::moc IMPORTED)

    set_target_properties(Qt5::moc PROPERTIES
        IMPORTED_LOCATION "${_qt5Core_install_prefix}/bin/moc"
    )
    # For CMake automoc feature
    get_target_property(QT_MOC_EXECUTABLE Qt5::moc LOCATION)
endif()

if (NOT TARGET Qt5::rcc)
    add_executable(Qt5::rcc IMPORTED)

    set_target_properties(Qt5::rcc PROPERTIES
        IMPORTED_LOCATION "${_qt5Core_install_prefix}/bin/rcc"
    )
endif()

set(Qt5Core_QMAKE_EXECUTABLE Qt5::qmake)
set(Qt5Core_MOC_EXECUTABLE Qt5::moc)
set(Qt5Core_RCC_EXECUTABLE Qt5::rcc)

list(APPEND Qt5Core_INCLUDE_DIRS "${_qt5Core_install_prefix}/include/" "${_qt5Core_install_prefix}//mkspecs/linux-g++-64")

# Targets using Qt need to use the POSITION_INDEPENDENT_CODE property. The
# Qt5_POSITION_INDEPENDENT_CODE variable is used in the # qt5_use_module
# macro to add it.
set(Qt5_POSITION_INDEPENDENT_CODE True)
set(Qt5Core_EXECUTABLE_COMPILE_FLAGS "-fPIE")


set(QT_VISIBILITY_AVAILABLE "True")



get_filename_component(_Qt5CoreConfigDir ${CMAKE_CURRENT_LIST_FILE} PATH)

set(_Qt5CTestMacros "${_Qt5CoreConfigDir}/Qt5CTestMacros.cmake")
