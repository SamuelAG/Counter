#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QQmlEngine>
#include <QDebug>

class Counter : public QObject
{
    Q_OBJECT
public:
    Counter();
    Q_INVOKABLE void increment() {
        count++;
        qDebug()<<"Contador: "<<count;
    }

    Q_INVOKABLE void decrement() {
        count--;
        qDebug()<<"Contador: "<<count;
    }
private:
    int count;
};

#endif // COUNTER_H
