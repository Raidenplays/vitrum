qt_add_executable(vitrum-lockscreen
    main.cpp
)

qt_add_qml_module(vitrum-lockscreen
    URI Vitrum.LockScreen
    VERSION 1.0
    QML_FILES
        LockScreen.qml
)

find_package(LayerShellQt REQUIRED)

target_link_libraries(vitrum-lockscreen PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
    LayerShellQt::Interface
)

install(TARGETS vitrum-lockscreen RUNTIME DESTINATION bin)
