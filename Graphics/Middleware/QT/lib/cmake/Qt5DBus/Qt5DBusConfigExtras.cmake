
if (NOT TARGET Qt5::qdbuscpp2xml)
    add_executable(Qt5::qdbuscpp2xml IMPORTED)

    set_target_properties(Qt5::qdbuscpp2xml PROPERTIES
        IMPORTED_LOCATION "${_qt5DBus_install_prefix}/bin/qdbuscpp2xml"
    )
endif()

if (NOT TARGET Qt5::qdbusxml2cpp)
    add_executable(Qt5::qdbusxml2cpp IMPORTED)

    set_target_properties(Qt5::qdbusxml2cpp PROPERTIES
        IMPORTED_LOCATION "${_qt5DBus_install_prefix}/bin/qdbusxml2cpp"
    )
endif()

set(Qt5DBus_QDBUSCPP2XML_EXECUTABLE Qt5::qdbuscpp2xml)
set(Qt5DBus_QDBUSXML2CPP_EXECUTABLE Qt5::qdbusxml2cpp)
