#include<iostream>
using namespace std;

class Person {
public:
    Person(string name, int age) {
        m_Age = age;
        m_Name = name;
    }
    string m_Name;
    int m_Age;

    bool operator== (Person &p) {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
            return true;
        return false;
    }
};

void test01() {
    Person p1("TT", 18);
    Person p2("TT", 18);
    if (p1 == p2) 
        cout<<"相等"<<endl;
    else
        cout<<"不相等"<<endl;
}

int main() {
    test01();
    return 0;
}