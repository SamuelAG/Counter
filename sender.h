#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT
public:
    Sender();
signals:
    void signalMethod(int value);
};

#endif // SENDER_H
