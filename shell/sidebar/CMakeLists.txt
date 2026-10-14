qt_add_executable(vitrum-sidebar
    main.cpp
)

qt_add_qml_module(vitrum-sidebar
    URI Vitrum.Sidebar
    VERSION 1.0
    QML_FILES
        Sidebar.qml
)

find_package(LayerShellQt REQUIRED)

target_link_libraries(vitrum-sidebar PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
    LayerShellQt::Interface
)

install(TARGETS vitrum-sidebar RUNTIME DESTINATION bin)
