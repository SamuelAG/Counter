#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "counter.h"

int main(int argc, char *argv[])
{


    QGuiApplication app(argc, argv);

    // Registrando objeto para que possa ser usado no QML
    qmlRegisterType<Counter>("Counter", 1, 0, "Counter");


    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
