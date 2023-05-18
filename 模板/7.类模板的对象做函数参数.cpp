#include<iostream>
using namespace std;
/*
1.指定传入类型
2.参数模板化
3.类模板化
*/
template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) {
        m_name = name;
        m_age = age;
    }
    void showPerson() {
        cout << m_name << " 's age is " << m_age << endl;
    }
    T1 m_name;
    T2 m_age;
};
void PrintPerson01 (Person<string, int> &p) {                 //指定传入类型， 一般用这种就可以了
    p.showPerson();
}

template<class T1, class T2>
void PrintPerson02 (Person<T1, T2> &p) {                 //参数模板化
    p.showPerson();
    cout << "T1's type is " << typeid(T1).name() << endl;      //查看数据类型
    cout << "T2's type is " << typeid(T2).name() << endl;
}


void test01() {
    Person<string, int> p1 ("Tom", 18);
    PrintPerson01(p1);
    PrintPerson02(p1);
}

int main() {
    test01();
    return 0;
}