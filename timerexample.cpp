#include "timerexample.h"

TimerExample::TimerExample()
{
    connect(&timer, &QTimer::timeout, this, &TimerExample::doSomething);
    timer.start(1000);
}

void TimerExample::doSomething()
{
    qDebug()<<"Esse slot esta sendo chamado a cada 1 segundo";
}
