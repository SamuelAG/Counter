import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15
import Counter 1.0

Window {
    width: 240
    height: 180
    visible: true
    title: qsTr("Contador")
    color: "green"

    Counter {
        id: counter
    }

    Text {
        id: count
        x: 120
        y: 60
        text: counter.count
    }

    Button {
        text: "+1"
        width: 70
        x: 40
        y: 120
        onClicked: counter.increment()
    }
    Button {
        text: "-1"
        width: 70
        x: 130
        y: 120
        onClicked: counter.decrement()
    }
}
