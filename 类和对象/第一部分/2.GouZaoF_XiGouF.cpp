#include<iostream>
#include<stdlib.h>
using namespace std;

//对象的初始化和清理——构造函数初始化；析构函数清理
class Person
{
public:
    //构造函数的函数名与类名相同，无返回值，无void，可以有参数-----初始化
    Person()
    {
        cout<<"Person构造函数的调用"<<endl;
    }
    //析构函数，加～，不能有参数----
    ~Person(){
        cout<<"Person析构函数的调用"<<endl;
    }

};

void test01(){
    Person p;//栈区变量，test01执行完毕后，会释放这个对象，因此调用了析构函数
}

int main() {
    //test01();//编译器自动调用
    //若只在main函数中创建Person类的对象p，return 0之前都不会释放
    Person p;
    cin.get();
    return 0;
}