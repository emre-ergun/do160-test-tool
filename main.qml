import QtQuick 2.12
import QtQuick.Window 2.12
import com.Serial.Port 1.0

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ComPort {
        id: comport
    }

    Column {
        id: col
        anchors.centerIn: parent
        spacing: 10

        Rectangle {
            id: rect1
            width: 100
            height: 100
            color: "red"

            MouseArea {
                anchors.fill: parent
                hoverEnabled: true

                onEntered: rect1.color = "green"
                onExited:  {
                    console.log("Rect1 Exited")
                    rect1.color = "red"
                }
            }
        }

        Rectangle {
            id: rect2
            width: 100
            height: 100
            color: "red"
            MouseArea {
                anchors.fill: parent
                hoverEnabled: true

                onEntered: rect2.color = "green"
                onExited:  {
                    console.log("Rect2 Exited")
                    rect2.color = "red"
                }
            }
        }
    }


}
