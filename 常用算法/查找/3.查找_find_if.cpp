#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

class greater_Five {
public:
    bool operator() (int val) {
        return val > 5;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    vector<int>::iterator pos = find_if(v.begin(), v.end(), greater_Five());
    if (pos == v.end())
        cout << 0 << endl;
    else
        cout << 1 << " " << *pos << endl;
}

class Person {
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class greater_20 {
public:
    bool operator()(const Person &p) {
        return p.m_Age > 20;
    }
};

void test02() {
    vector<Person> v;
    Person p1("A",10);
    Person p2("B",15);
    Person p3("C",20);
    Person p4("D",30);
    Person p5("E",40);    
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator pos = find_if(v.begin(), v.end(), greater_20());
    if (pos == v.end())
        cout << 0 << endl;
    else
        cout << (*pos).m_Name << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}