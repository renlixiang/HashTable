#include "People.h"

People::People() // new
{
    int a = 5;
    this->arrary = (int *) malloc(4);//��������ѿռ䣬���������ͷš�
    cout << "People Constructor\n";
}

People::~People() // deletess
{
    //dtor
    free(this->arrary); //�����ͷŶѿռ�,�ڴ�й©���⡣
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
    cout << this->getName()+"�������ǣ�" << this->getAge()<<endl;
}
// new �� delete ��c++�Ĺؼ���
// malloc() free() �Ǳ�׼�⺯��
