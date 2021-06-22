#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QQmlEngine>

class Counter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int count READ getCount WRITE setCount NOTIFY updateCount)
public:
    Q_INVOKABLE void increment() {
        count++;
        emit updateCount();
    }

    Q_INVOKABLE void decrement() {
        count--;
        emit updateCount();
    }

    int getCount() { return count; }
    void setCount(int count) { this->count = count; }
    static Counter *getInstance();
    static QObject *qmlInstance(QQmlEngine *engine, QJSEngine *scriptEngine);
private:
    int count;
    static Counter* instance;
    Counter();
signals:
    void updateCount();
};

#endif // COUNTER_H
