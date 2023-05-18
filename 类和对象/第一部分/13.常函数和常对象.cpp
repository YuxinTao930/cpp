#include<iostream>
using namespace std;
/*
*/

class Person {
public:
    void showPerson() const{  //const修饰的是this指针，使得this指向的值也不能修改
        //m_A =100;   //this指针的本质是“指针常亮”，指向不能修改，值可以修改
        m_B =100;   //mutable
        
    }
    void func() {}
    Person() {}
    int m_A;
    mutable int m_B;
};
void test01() {
    Person p;
    p.showPerson();
}

void test02() {
    const Person p;
    //p.m_A = 100;      不能修改
    p.m_B = 100;
    p.showPerson();
    //p.func();         常对象只能调用常函数

}

int main() {
    test01();
    test02();
    return 0;
}