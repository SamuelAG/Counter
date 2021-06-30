#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "timerexample.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    TimerExample t;
    return app.exec();
}
