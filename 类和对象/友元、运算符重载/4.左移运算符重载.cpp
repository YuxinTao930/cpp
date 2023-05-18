#include<iostream>
using namespace std;
/* ostream cout

*/

class Person {
    friend ostream& operator<<(ostream &out, Person &p); 
    friend void test01();
public:
    int m_A;
private:
    int m_B;
};

ostream& operator<<(ostream &cout, Person &p) {
    cout<<"m_A = "<<p.m_A<<endl;
    cout<<"m_B = "<<p.m_B<<endl;
    return cout;
}

void test01() {
    Person p;
    p.m_A = 10;
    p.m_B = 10;

    cout<<p;
}

int main() {
    test01();
    return 0;
}