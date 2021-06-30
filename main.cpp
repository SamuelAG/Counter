#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "classa.h"
#include "classb.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    ClassA a;
    ClassB b;
    QObject::connect(&a, &ClassA::ASignal, &b, &ClassB::BSlot);
    emit a.ASignal(20);

    return app.exec();
}
