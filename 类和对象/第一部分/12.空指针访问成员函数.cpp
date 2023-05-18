#include<iostream>
using namespace std;
/*
*/

class Person{
public:
    void showClassName() {
        cout<<"this is Person"<<endl;
    }
    void showPersonAge() {
        if (this == NULL) return;    //预防传入空指针
        cout<<"age is "<<m_Age<<endl;
    }
    int m_Age;
};
void test01() {
    Person* p = NULL;
    p->showClassName(); //空指针可以访问成员
    p->showPersonAge(); //不可以  this->m_Age this指向对象（空指针）
}


int main() {
    test01();
    return 0;
}