#ifndef TIMEREXAMPLE_H
#define TIMEREXAMPLE_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class TimerExample : public QObject
{
    Q_OBJECT
public:
    TimerExample();
    QTimer timer;
public slots:
    void doSomething();
};

#endif // TIMEREXAMPLE_H
