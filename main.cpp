#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "counter.h"
#include "singletoon.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);


    Singletoon::getInstance()->hello();
    Singletoon::getInstance()->hello();
    return app.exec();
}
