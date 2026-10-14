// Vitrum sidebar — Phase 1a stub.
// Real layout per docs/design-language.md: widgets + notifications hub,
// heavy frosted glass, right edge.
import QtQuick

Window {
    id: root
    width: 340
    height: 1080
    visible: true
    color: "transparent"
    title: "Vitrum Sidebar"

    Rectangle {
        anchors.fill: parent
        // TODO: real frosted-glass blur via the compositor blur protocol.
        color: "#16283f"
        opacity: 0.72

        Text {
            anchors.centerIn: parent
            text: "vitrum-sidebar — stub"
            color: "#bfe9ff"
            font.pixelSize: 14
        }
    }
}
