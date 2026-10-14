// Vitrum lock screen — Phase 1a stub.
// Real layout per docs/design-language.md: XP welcome-screen layout,
// aero'ified. Visual prototype only (see main.cpp note).
import QtQuick

Window {
    id: root
    width: 1920
    height: 1080
    visible: true
    color: "#0b1c33"
    title: "Vitrum Lock Screen"

    Text {
        anchors.centerIn: parent
        text: "vitrum-lockscreen — stub"
        color: "#bfe9ff"
        font.pixelSize: 16
    }
}
