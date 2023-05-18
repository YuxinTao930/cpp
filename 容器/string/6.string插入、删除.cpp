#include<iostream>
using namespace std;

void test01() {
    string str = "Hello World";
    str.insert(3, "3456");
    cout << str << endl;
    str.erase(1, 3);
    cout << str << endl;
}

void test02() {
    string str = "abcdef";
    string subStr = str.substr(1, 3);
    cout << subStr << endl;
}

void test03() {
    string str = "TaoYuXin@zju.edu.cn";
    int pos = str.find('@');
    string substr = str.substr(0, pos);
    cout << substr << endl;
}

int main() {
    test01();
    //test02();
    //test03();
    return 0;
}