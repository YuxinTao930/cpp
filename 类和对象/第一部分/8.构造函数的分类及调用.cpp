#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout<<"Person的无参构造函数调用"<<endl;
    }//无参构造/默认构造
    Person(int a){
        age = a;
        cout<<"Person的有参构造函数调用"<<endl;
    }//有参构造

    Person(const Person &p) {  //拷贝构造  +const +&
        age = p.age;
        cout<<"Perosn的拷贝构造函数调用"<<endl;
    }

    ~Person(){
        cout<<"Person的析构函数调用"<<endl;
    }
    int age;
};

void test01() {
    //调用方法：括号法、显示法、隐式转换法
    Person p1;
    Person p2(10);
    Person p3(p2);
    cout<<"p2的年龄为:"<<p2.age<<endl;
    cout<<"p3的年龄为:"<<p3.age<<endl;
    //Person p4();//带括号的是函数的声明

    Person p4;
    Person p5 = Person(10);
    Person p6 = Person(p5);
    Person(10);//匿名对象  当前行执行结束后，系统会立即回收匿名对象
    //Person(p5); 错误

    Person p7 = 10;
    Person p8 = p7; //隐式转换法
}

int main(){
    test01();

    //cin.get();
    return 0;
}