qt_add_executable(vitrum-topbar
    main.cpp
)

qt_add_qml_module(vitrum-topbar
    URI Vitrum.TopBar
    VERSION 1.0
    QML_FILES
        TopBar.qml
)

find_package(LayerShellQt REQUIRED)

target_link_libraries(vitrum-topbar PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
    LayerShellQt::Interface
)

install(TARGETS vitrum-topbar RUNTIME DESTINATION bin)
