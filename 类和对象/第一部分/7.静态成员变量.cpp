#include<iostream>
using namespace std;
/* 所有对象共用一份数据； 编译阶段就分配内存； 类内声明，类外初始化操作（作用域）。------ test01
    静态成员变量有两种访问方式：1.通过对象。 2.通过类名（作用域）             ------- test02
*/

class Person{
public:
    static int m_A;          //类内声明
private:
    static int m_B;
};

int Person::m_A = 100;      //类外初始化
int Person::m_B = 10;       //private 静态成员变量

void test01() {
    Person p;
    cout<<p.m_A<<endl;    //通过对象访问

    cout<<Person::m_A<<endl;  //通过类名访问

    Person p2;
    p2.m_A = 200;
    cout<<p2.m_A<<endl;
    cout<<p.m_A<<endl;  //所有对象共用一份数据。 所以p2修改数据之后，p1的值也发生了改变

    //cout<<Person::m_B<<endl;    静态成员变量的访问权限
}

int main() {
    test01();
    return 0;
}