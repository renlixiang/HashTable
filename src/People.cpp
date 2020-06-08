#include "People.h"

People::People() // new
{
    int a = 5;
    this->arrary = (int *) malloc(4);//主动申请堆空间，必须主动释放。
    cout << "People Constructor\n";
}

People::~People() // deletess
{
    //dtor
    free(this->arrary); //主动释放堆空间,内存泄漏问题。
    cout << "People Destructor\n";
}

void People::setName(string name) // deletess
{
    this->name = name;
}

void People::setAge(int age) // deletess
{
    this->age = age;
}

string People::getName()
{
    return this->name;
}

int People::getAge()
{
    return this->age;
}

void People::introudce()
{
    cout << this->getName()+"的年龄是：" << this->getAge()<<endl;
}
// new 和 delete 是c++的关键字
// malloc() free() 是标准库函数
