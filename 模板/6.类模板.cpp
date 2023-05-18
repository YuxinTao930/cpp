#include<iostream>
using namespace std;
/*
*/
template<class NameType, class AgeType = int>         //模板参数列表可以有默认
class Person {
public:
    Person(NameType name, AgeType age) {
        m_Name = name;
        m_Age = age;
    }
    NameType m_Name;
    AgeType m_Age;
};

void test01() {
    Person<string> p1("Tom", 18);               //类模板只能用显示指定类型, 若有默认参数，可以省略
    cout << p1.m_Name << " 's age is " << p1.m_Age << endl;
}

int main() {
    test01();
    return 0;
}