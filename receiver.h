#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QDebug>

class Receiver : public QObject
{
    Q_OBJECT
public:
    Receiver();
public slots:
    void slotMethod(int value);
};

#endif // RECEIVER_H
