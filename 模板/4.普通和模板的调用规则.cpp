#include<iostream>
using namespace std;
/*
*/
void myPrint (int a, int b) {
    cout << "普通函数" << endl;
}

template<typename T>
void myPrint (T a, T b) {
    cout << "函数模板" << endl;
}

template<typename T>
void myPrint (T a, T b, T c) {
    cout << "函数模板重载" << endl;
}

void test01() {
    char a = 'a', b = 'b', c = 'c';
    myPrint (1, 2);             //普通函数优先
    myPrint(a, b);              //模板更匹配，模板优先
    myPrint<>(1, 2);            //利用空模板调用函数模板
    myPrint(a, b, c);           //函数模板可以重载

}

int main() {
    test01();
    return 0;
}