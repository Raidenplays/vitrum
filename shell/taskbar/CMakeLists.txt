qt_add_executable(vitrum-taskbar
    main.cpp
)

qt_add_qml_module(vitrum-taskbar
    URI Vitrum.Taskbar
    VERSION 1.0
    QML_FILES
        Taskbar.qml
)

find_package(LayerShellQt REQUIRED)

target_link_libraries(vitrum-taskbar PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
    LayerShellQt::Interface
)

install(TARGETS vitrum-taskbar RUNTIME DESTINATION bin)
