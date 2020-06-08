#include "man.h"

man::man()
{

    //ctor
}

man::~man()
{
    //dtor
}

void man::introudce()
{
    cout << this->getName()+"的年龄是：" << this->getAge()<<"性别是："<< this->sex<<endl;
}

