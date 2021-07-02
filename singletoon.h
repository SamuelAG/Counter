#ifndef SINGLETOON_H
#define SINGLETOON_H

#include <QDebug>

class Singletoon
{
public:
    static Singletoon* getInstance();
    void hello();
private:
    static Singletoon *instance;
    Singletoon();
};

#endif // SINGLETOON_H
