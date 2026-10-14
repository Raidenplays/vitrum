// Vitrum top bar — Phase 1a stub.
// Real layout per docs/design-language.md: universal menu bar, top edge,
// heavy frosted glass.
import QtQuick

Window {
    id: root
    width: 1920
    height: 32
    visible: true
    color: "transparent"
    title: "Vitrum Top Bar"

    Rectangle {
        anchors.fill: parent
        // TODO: real frosted-glass blur via the compositor blur protocol.
        color: "#16283f"
        opacity: 0.72

        Text {
            anchors.centerIn: parent
            text: "vitrum-topbar — stub"
            color: "#bfe9ff"
            font.pixelSize: 13
        }
    }
}
