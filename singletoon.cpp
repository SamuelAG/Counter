#include "singletoon.h"

Singletoon *Singletoon::instance = nullptr;

Singletoon *Singletoon::getInstance()
{
    if(instance == nullptr) {
        instance = new Singletoon();
    }
    return instance;
}

Singletoon::Singletoon()
{
    qDebug()<<"Um objeto foi criado";
}

void Singletoon::hello()
{
    qDebug()<<"Hello";
}
