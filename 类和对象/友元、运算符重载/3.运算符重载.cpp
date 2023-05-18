#include<iostream>
using namespace std;
/*      operator
*/
class Person {
public:
    Person() {
        m_A = 10;
        m_B = 20;
    }
    int m_A;
    int m_B;

    /*Person operator+ (Person &p) {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;                            成员函数做运算符重载
    }*/
};
Person operator+ (Person &p1, Person &p2) {
    Person t;
    t.m_A = p1.m_A + p2.m_A;
    t.m_B = p1.m_B + p2.m_B;
    return t;
}                                               //全局函数做运算符重载

Person operator+ (Person &p1, int num) {
    Person t;
    t.m_A = p1.m_A + num;
    t.m_B = p1.m_B + num;
    return t;                                   //函数重载版本
}    

void test01() {
    Person p1;
    Person p2;
    Person p3 = p2 + 10;
    Person p4 = p2 + p1;
    cout<<"p3'A = "<<p3.m_A<<", p3'B == "<<p3.m_B<<endl;
    cout<<"p4'A = "<<p4.m_A<<", p4'B == "<<p4.m_B<<endl;
}


int main() {
    test01();
    return 0;
}