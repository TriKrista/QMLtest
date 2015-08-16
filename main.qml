import QtQuick 2.4
import QtQuick.Controls 1.2

Rectangle {
    color: "lightgreen"

    Rectangle {
        id: rect1
        width: 200
        height: 50
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 50
        color: "#fff"
        TextInput {
            id: tInput
            anchors.fill: parent
            font.pixelSize: height * 0.8
            text: control.data
        }
    }

    Button {
        id: btn

        width: 200
        height: 50
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: rect1.bottom
        anchors.topMargin: 25
        text: "Click"

        onClicked: {
            control.data = tInput.text
            control.apply()
        }
    }

    ListView {
        id: list
        width: 200
        height: 250
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: btn.bottom
        anchors.topMargin: 25

        model: dList.dataList
        delegate: Rectangle {
            width: list.width
            height: 50
            color: "lightblue"
            Text {
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                text: modelData.dataItem
            }
        }
    }
}
