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
    cout << this->getName()+"�������ǣ�" << this->getAge()<<"�Ա��ǣ�"<< this->sex<<endl;
}

