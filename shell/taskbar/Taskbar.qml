// Vitrum taskbar — Phase 1a stub.
// Real layout per docs/design-language.md: bottom bar, classic start menu
// with type-to-search, heavy frosted glass.
import QtQuick

Window {
    id: root
    width: 1920
    height: 56
    visible: true
    color: "transparent"
    title: "Vitrum Taskbar"

    Rectangle {
        anchors.fill: parent
        // TODO: real frosted-glass blur via the compositor blur protocol.
        color: "#16283f"
        opacity: 0.72

        Text {
            anchors.centerIn: parent
            text: "vitrum-taskbar — stub"
            color: "#bfe9ff"
            font.pixelSize: 14
        }
    }
}
