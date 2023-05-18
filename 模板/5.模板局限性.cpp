#include<iostream>
using namespace std;
/*   有问题
*/
class Person {
public:
    Person(string name, int age) {
        m_Age = age;
        m_Name = name;
    }
    string m_Name;
    int m_Age;
};

template<typename T>
bool myCompare (T a, T b) {
    if (a == b) 
        return true;
    else 
        return false;
}

template<> bool myCompare(Person &a, Person &b) {
    if (a.m_Age == b.m_Age && a.m_Name == b.m_Name)
        return true;
    else
        return false;
}

void test01() {
    Person p1("TT", 10);
    Person p2("TT", 10);
    bool ret = myCompare(p1, p2);
    if (ret)
        cout << "==" << endl;
    else
        cout << "!=" << endl;
}

int main() {
    test01();
    return 0;
}