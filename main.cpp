#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Sender a;
    Receiver b;

    QObject::connect(&a, &Sender::signalMethod, &b, &Receiver::slotMethod);

    emit a.signalMethod(20);

    return app.exec();
}
