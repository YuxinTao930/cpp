#include<iostream>
using namespace std;
/*
*/

class Person {
public:
    Person(int age) {

        this->age = age;   //命名规范的重要性, this指向p1， 解决名称冲突
    }
    Person& addAge(Person &p) {
        this->age += p.age;
        return *this;     //this指针指向 p 这个对象本体，利用 & 返回
    }
    int age;
    
};

void test01() {
    Person p1(18);
    cout<<"p1's age = "<<p1.age<<endl;
}

void test02() {
    Person p1(10);
    Person p2(20);
    Person p3(0);
    p2.addAge(p1).addAge(p1).addAge(p1);
    p3 = p2.addAge(p1).addAge(p1).addAge(p1);   //链式编程思想
    cout<<"p2's age = "<<p2.age<<endl;
    cout<<"p3's age = "<<p3.age<<endl;
}

int main() {
    //test01();
    test02();
    return 0;
}