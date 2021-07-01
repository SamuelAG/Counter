#include "receiver.h"

Receiver::Receiver()
{

}

void Receiver::slotMethod(int value)
{
    qDebug()<<"Value: "<<value<<" from slot";
}
