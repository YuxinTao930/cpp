#include<iostream>
using namespace std;
#include<vector>

class Person {
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }
    string m_Name;
    int m_Age;
};

void test01() {
    vector<Person> p;
    Person p1("A",10);
    Person p2("B",10);
    Person p3("C",10);
    Person p4("D",10);
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);

    for(vector<Person>::iterator it = p.begin();it != p.end(); it++) {
        cout << (*it).m_Name << "'s age = " << (*it).m_Age << endl;
        cout << it->m_Name << "'s age = " << it->m_Age << endl;
    }
}

void test02() {
    vector<Person*> p;
    Person p1("A",10);
    Person p2("B",10);
    Person p3("C",10);
    Person p4("D",10);
    p.push_back(&p1);
    p.push_back(&p2);
    p.push_back(&p3);
    p.push_back(&p4);

    for (vector<Person*>::iterator it = p.begin(); it != p.end(); it++) {
        cout << (*it)->m_Name << "'s age = " << (*it)->m_Age << endl;
    }
}

int main() {
    //test01();
    test02();
    return 0;
}