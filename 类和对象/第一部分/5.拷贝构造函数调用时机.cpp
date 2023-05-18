#include<iostream>
using namespace std;

class Person {
public:
    Person() {
        cout<<"Person默认构造函数调用"<<endl;
    }
    Person(int a) {
        m_Age = a;
        cout<<"Person有参构造函数调用"<<endl;
    }
    Person(const Person &p) {
        m_Age = p.m_Age;
        cout<<"Person拷贝构造函数调用"<<endl;
    }
    ~Person() {
        cout<<"Person析构函数调用"<<endl;
    }

    int m_Age;
};
void test01() {
    Person p1(20);
    Person p2(p1);
    cout<<"p2的年龄为"<<p2.m_Age<<endl;
}
void doWork2(Person p) {

}
void test02() {
    Person p; //调用默认构造函数
    doWork2(p);//值传递，调用拷贝构造函数
}

Person doWork3() {
    Person p;
    cout<<(int*)&p<<endl;//输出p的地址
    return p;
}
void test03() {
    Person p = doWork3();
    cout<<(int*)&p<<endl;//输出p的地址
}

int main() {
    //test01();
    //test02();
    test03();
    return 0;
}