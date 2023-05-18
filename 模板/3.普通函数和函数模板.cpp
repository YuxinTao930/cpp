#include<iostream>
using namespace std;
/*
*/
int myAdd01(int a, int b) {
    return a+b;
}

template<typename T>
void myAdd02(T a, T b) {
    cout << a+b << endl;
}

void test01() {
    int a = 10, b = 10;
    cout << myAdd01(a, b) << endl;
    char ch = 'c';
    cout << myAdd01(a, ch) << endl;         //普通函数调用时可以隐式类型转换

    myAdd02(a, b); 
    //myAdd02(a, c);                        //自动类型推导 不可以
    myAdd02<int>(a, ch);                    //显示指定类型 可以
}

int main() {
    test01();
    return 0;
}