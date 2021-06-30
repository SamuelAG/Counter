#ifndef CLASSB_H
#define CLASSB_H

#include <QObject>
#include <QDebug>

class ClassB : public QObject
{
    Q_OBJECT
public:
    ClassB();
public slots:
    void BSlot(int value);
};

#endif // CLASSB_H
