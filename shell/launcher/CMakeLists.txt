qt_add_executable(vitrum-launcher
    main.cpp
)

qt_add_qml_module(vitrum-launcher
    URI Vitrum.Launcher
    VERSION 1.0
    QML_FILES
        Launcher.qml
)

find_package(LayerShellQt REQUIRED)

target_link_libraries(vitrum-launcher PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
    LayerShellQt::Interface
)

install(TARGETS vitrum-launcher RUNTIME DESTINATION bin)
