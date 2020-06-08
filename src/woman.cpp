#include "woman.h"

woman::woman()
{
    //ctor
}

woman::~woman()
{
    //dtor
}

void woman::introudce()
{
    cout << this->getName()+"的年龄是：" << this->getAge()<<"性别是："<< this->sex<<endl;
}
