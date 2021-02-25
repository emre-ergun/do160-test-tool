import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id: rect1
        width: 100
        height: 100
        color: "red"
        anchors.centerIn: parent

        MouseArea {
            anchors.fill: parent
            hoverEnabled: true

            onEntered: rect1.color = "green"
            onExited: rect1.color = "red"
        }
    }
}
