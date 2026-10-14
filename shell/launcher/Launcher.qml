// Vitrum launcher — Phase 1a stub.
// Real layout per docs/design-language.md: classic start menu,
// type-to-search, heavy frosted glass.
import QtQuick

Window {
    id: root
    width: 480
    height: 600
    visible: true
    color: "transparent"
    title: "Vitrum Launcher"

    Rectangle {
        anchors.fill: parent
        radius: 18
        // TODO: real frosted-glass blur via the compositor blur protocol.
        color: "#16283f"
        opacity: 0.85

        Text {
            anchors.centerIn: parent
            text: "vitrum-launcher — stub"
            color: "#bfe9ff"
            font.pixelSize: 14
        }
    }
}
