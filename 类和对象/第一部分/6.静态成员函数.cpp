#include<iostream>
using namespace std;
/* 所有对象共用一个函数； 静态成员函数只能访问静态成员变量
*/

class Person {
public:
    static void func(){
        cout<<"static func 调用"<<endl;
        m_A = 10;
        cout<<"func中 m_A的值为 "<<m_A<<endl;
        //m_B = 10;      //无法访问
    }
    Person(int b) {
        m_B = b;
    }
    static int m_A;
    int m_B;
private:
    static void func2() {
        cout<<"func2"<<endl;
    }
};
int Person::m_A = 100;

void test01() {
    cout<<"test中 m_A的值为"<<Person::m_A<<endl;
    //cout<<"test中 m_B的值为"<<Person::m_B<<endl;   //无法访问
    
    Person p(33);
    p.func();         //通过对象
    cout<<"p.B为"<<p.m_B<<endl;             //非静态成员变量必须与特定对象相联系


    Person::func();   //通过类名————说明所有对象共用一个函数
    //Person::func2;  private静态成员函数类外不可访问

}

int main() {
    test01();
    return 0;
}