#include<iostream>
using namespace std;
/*  动态多态满足条件：1.有继承关系。2.子类要重写父类的虚函数=====父类要加virtual，子类要复写。
    动态多态使用方法：父类的指针/引用，指向子类对象
*/
class Animal {
public:
    virtual void speak() {                  //虚函数------动态多态，地址晚绑定
        cout<<"animals are speaking"<<endl;
    }
};
class Cat: public Animal {
public:
    void speak() {
        cout<<"cat is speaking"<<endl;
    }
};
class Dog: public Animal {
public:
    void speak() {
        cout<<"dog is speaking"<<endl;
    }
};

void doSpeak(Animal &animal) {      //地址早绑定====静态多态   //父类的指针/引用 指向子类对象
    animal.speak();     
}

void test01() {
    Cat c1;
    c1.speak();
    doSpeak(c1);        //允许父子之间做转换  父类位置传入了一个子类对象

    Dog d1;
    doSpeak(d1);
}


int main() {
    test01();
    return 0;
}