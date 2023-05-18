#include<iostream>
using namespace std;
#include<string>
/* Phone类对象，作为Person类成员时，
    先构造Phone，再构造Person
    先析构Person，再析构Phone
*/

class Phone {
public:
    Phone(string pName) {
        phone_Name = pName;
        cout<<"Phone"<<endl;
    }
    ~Phone() {
        cout<<"Phone析构"<<endl;
    }
    string phone_Name;
};
class Person {
public:
    Person(string name, string phone) : m_Name(name), m_Phone(phone) {
        cout<<"Person"<<endl;
    }
    ~Person() {
        cout<<"Person析构"<<endl;
    }
    string m_Name;
    Phone m_Phone;
};

void test01() {
    Person p("张三","apple");
    cout<<p.m_Name<<"拿着"<<p.m_Phone.phone_Name<<endl;
}

int main() {
    test01();
    return 0;
}