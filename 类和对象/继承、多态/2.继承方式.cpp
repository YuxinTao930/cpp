#include<iostream>
using namespace std;
/*
*/
class Base1 {
public:
    int m_A;
    static int m_static;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Base1 {
public:
    void func() {
        m_A = 10;   //public还是publi, 类内类外均可访问
        m_B = 20;   //protected还是protected，类内可以访问，类外不可以
       // m_C = 30;
    }
    int m_D;
};

class Son2:protected Base1 {
public:
    void func() {
        m_A = 1;
        m_B = 2;
        m_static = 10;
    }
};

void test01() {
    Son1 s1;
    s1.m_A = 100;
    //s1.m_B = 10;      protected, 类外不可访问
}

void test02() {
    cout<<"size of Son = "<<sizeof(Son1)<<endl;     //16  父类所有非静态成员属性都会被继承下去
}

int main() {
    test02();
    return 0;
}