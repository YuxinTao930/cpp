/*
Person：姓名，年龄，身高
年龄升序，年龄相同，身高降序。
*/

#include<iostream>
#include<list>
#include<algorithm>
#include<ctime>
using namespace std;

class Person {
public:
    Person(string name, int height, int age) {
        m_Name = name;
        m_Height = height;
        m_Age = age;
    }
    string m_Name;
    int m_Height;
    int m_Age;
};

bool Compare(Person &p1, Person &p2) {
    if (p1.m_Age == p2.m_Age)
        return p1.m_Height > p2.m_Height;           //降序（前一个 > 后一个）
    else
        return p1.m_Age < p2.m_Age;                 //升序（前一个 < 后一个）
}

int main() {
    list<Person> lst;
    Person p1("A", 160, 20);
    Person p2("B", 190, 20);
    Person p3("C", 150, 20);
    Person p4("D", 170, 30);
    Person p5("E", 160, 40);
    lst.push_back(p1);
    lst.push_back(p2);
    lst.push_back(p3);
    lst.push_back(p4);
    lst.push_back(p5);

    lst.sort(Compare);                  //排序函数
    for (list<Person>::iterator it = lst.begin(); it != lst.end(); it++)
        cout << (*it).m_Name << " " << (*it).m_Age << " " << (*it).m_Height << endl;

    return 0;
}