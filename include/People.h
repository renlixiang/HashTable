#ifndef PEOPLE_H
#define PEOPLE_H
#include<iostream>
#include<string>
using namespace std;


class People
{
    public:
        // �������������s
        People();
        virtual ~People();

        // set and get
        void setName(string);
        void setAge(int);
        string getName();
        int getAge();

        // �Զ��庯��,�麯��
        virtual void introudce();

        // ���麯��
       // virtual void introudce() = 0;

    protected:

    private: // ��Ա������ this����
        int *arrary;
        string name;
        int age;
};

#endif // PEOPLE_H
