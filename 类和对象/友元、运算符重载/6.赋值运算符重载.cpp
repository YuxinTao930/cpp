#include<iostream>
using namespace std;
/*
*/

class Person {
public:
    Person(int age) {
        my_Age = new int(age);
    }
    ~Person() {
        if (my_Age != NULL) {
            delete my_Age;
            my_Age = NULL;
        }
    }                           //p1和p2指向同一个my_Age，堆区内存重复释放

    Person operator= (Person &p) {
        if (my_Age != NULL) {
            delete my_Age;
            my_Age = NULL;
        }
        my_Age = new int(*p.my_Age);
        return *this;
    }

    int * my_Age;
};

void test01() {
    Person p1(18);
    cout<<*p1.my_Age<<endl;
    Person p2(20);
    Person p3(30);
    p2 = p1;
    cout<<*p2.my_Age<<endl;
    
}

int main() {
    test01();
    

    return 0;
}