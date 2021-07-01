#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QQmlEngine>

class Counter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int count READ getCount WRITE setCount NOTIFY updateCount)
public:
    Counter();
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
private:
    int count;
signals:
    void updateCount();
};

#endif // COUNTER_H
