#include<iostream>
#include<set>
using namespace std;

class Person {
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class myCompare {
public:
    bool operator() (Person p1, Person p2) {
        return p1.m_Age > p2.m_Age;
    }
};

void test01() {
    set<Person, myCompare> s;
    Person p1("A",32);
    Person p2("B",10);
    Person p3("C",70);
    Person p4("D",50);
    Person p5("E",20);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    s.insert(p5);

    for (set<Person, myCompare>::iterator it = s.begin(); it != s.end(); it++) 
        cout << (*it).m_Name << " " << (*it).m_Age << endl;
    
}

int main() {
    test01();
    return 0;
}