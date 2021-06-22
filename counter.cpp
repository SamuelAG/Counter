#include "counter.h"

Counter* Counter::instance = nullptr;

Counter::Counter()
{
    count = 0;
}

Counter *Counter::getInstance()
{
    if(instance == nullptr) {
        instance = new Counter();
    }
    return instance;
}

QObject *Counter::qmlInstance(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine);
    Q_UNUSED(scriptEngine);
    // C++ and QML instance they are the same instance
    return Counter::getInstance();
}
