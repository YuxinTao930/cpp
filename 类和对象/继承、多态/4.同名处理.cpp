#include<iostream>
using namespace std;
/*
*/
class Base {
public:
    Base() {
        m_A = 100;
    }
    void func() {
        cout<<"Base's func"<<endl;
    }
    void func(int a) {
        cout<<"Base's func(int a)"<<endl;
    }
    int m_A;
};

class Son: public Base {
public:
    Son() {
        m_A = 200;
    }
    void func() {
        cout<<"Son's func"<<endl;
    }
    int m_A;
};

void test01() {
    Son s1;
    cout<<s1.m_A<<endl;             //直接访问的是子类成员
    cout<<s1.Base::m_A<<endl;       //访问父类需要加作用域
}

void test02() {
    Son s2;
    s2.func();                      //直接访问子类成员函数
    s2.Base::func();                //访问父类成员函数需要加作用域
    s2.Base::func(100);             //父类同名函数重载，加作用域
}

int main() {
    //test01();
    test02();
    return 0;
}