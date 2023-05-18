#include<iostream>
using namespace std;
/*
string();                       创建一个空字符串
string(const char* s);          利用字符串s初始化
string(const string &str);      利用一个string对象初始化另一个string对象
string(int n, char c);          利用n个字符c初始化
*/

void test01() {
    string s1;
    cout << s1 << endl;

    const char* s = "Hello World";
    string s2(s);
    cout << s2 << endl;

    string s3(s2);
    cout << s3 << endl;

    char c = 'a';
    string s4(5, c);
    string s5(10, 'a');
    cout << "s4 = " << s4 << endl;
    cout << s5 << endl;
}

int main() {
    test01();
    return 0;
}