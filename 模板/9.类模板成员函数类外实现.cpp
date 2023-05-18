#include<iostream>
using namespace std;
/*
*/
template<class T1, class T2>
class Person {                  //类模板
public:
    Person(T1 name, T2 age);
    void showPerson();
    T1 m_Name;
    T2 m_Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {   //类外实现构造函数
    m_Name = name;
    m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson () {        //类外实现成员函数
    cout << this->m_Name << " 's age is " << this->m_Age << endl;
}

void test01() {
    Person <string, int> p("Tom", 18);
    p.showPerson();
}

int main() {
    test01();
    return 0;
}