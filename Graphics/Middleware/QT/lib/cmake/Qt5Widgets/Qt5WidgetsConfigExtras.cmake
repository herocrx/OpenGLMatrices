
if (NOT TARGET Qt5::uic)
    add_executable(Qt5::uic IMPORTED)

    set_target_properties(Qt5::uic PROPERTIES
        IMPORTED_LOCATION "${_qt5Widgets_install_prefix}/bin/uic"
    )
endif()

set(Qt5Widgets_UIC_EXECUTABLE Qt5::uic)
