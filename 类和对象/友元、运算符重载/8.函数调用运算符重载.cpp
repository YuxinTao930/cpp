#include<iostream>
using namespace std;
#include<string>
/*
*/
class MyPrint{
public:
    void operator() (string test) {  //()重载
        cout<<test<<endl;
    }
};



void test01() {
    MyPrint my_print;
    my_print("Hello World");     //仿函数
}

int main() {
    test01();
    return 0;
}