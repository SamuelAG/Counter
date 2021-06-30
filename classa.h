#ifndef CLASSA_H
#define CLASSA_H

#include <QObject>

class ClassA : public QObject
{
    Q_OBJECT
public:
    ClassA();
signals:
    void ASignal(int value);
};

#endif // CLASSA_H
