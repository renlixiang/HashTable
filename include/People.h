#ifndef PEOPLE_H
#define PEOPLE_H
#include<iostream>
#include<string>
using namespace std;


class People
{
    public:
        // 构造和析构函数s
        People();
        virtual ~People();

        // set and get
        void setName(string);
        void setAge(int);
        string getName();
        int getAge();

        // 自定义函数,虚函数
        virtual void introudce();

        // 纯虚函数
       // virtual void introudce() = 0;

    protected:

    private: // 成员变量， this访问
        int *arrary;
        string name;
        int age;
};

#endif // PEOPLE_H
