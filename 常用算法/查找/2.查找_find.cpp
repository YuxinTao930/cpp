#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int>::iterator pos = find(v.begin(), v.end(), 50);
    if (pos == v.end())
        cout << 0 << " " << *pos << endl;
    else
        cout << 1 << " " << *pos << endl;

}

class Person {
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }
    bool operator==(const Person &p) {      //自定义数据类型的比较需要重载==
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
            return true;
        else
            return false;
    }

    string m_Name;
    int m_Age;
};

void test02() {
    vector<Person> v;
    Person p1("A", 10);
    Person p2("B", 20);
    Person p3("C", 30);
    Person p4("D", 40);
    Person p5("E", 50);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator pos = find(v.begin(), v.end(),p1);     //自定义数据类型的比较需要重载==
    if (pos == v.end())                                             //find返回一个迭代器
        cout << 0 << endl;
    else
        cout << 1 << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}