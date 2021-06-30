#include "receiver.h"

Receiver::Receiver()
{

}

void Receiver::BSlot(int value)
{
    qDebug()<<"Value: "<<value<<" from slot";
}
