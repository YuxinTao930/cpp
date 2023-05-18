#include<iostream>
using namespace std;
/*
*/

class Person {
public:
    Person(int a, int b, int c) {
        A = a;
        B = b;
        C = c;
    }                                   //传统初始化操作

    Person() : A(10), B(20), C(30) {}     //初始化列表
    //Person(int a, int b, int c) : A(a), B(b), C(c) {}   //更灵活的初始化列表

    int A, B, C;
};

void test01() {
    //Person p(10,20,30);
    Person p;
    cout<<"A="<<p.A<<endl;
    cout<<"B="<<p.B<<endl;
    cout<<"C="<<p.C<<endl;
}

int main() {
    test01();

    return 0;
}