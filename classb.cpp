#include "classb.h"

ClassB::ClassB()
{

}

void ClassB::BSlot(int value)
{
    qDebug()<<"Value: "<<value<<" from slot";
}
