#include<iostream>
using namespace std;
/*
*/

void test01() {
    string s1;
    s1 = "s1-> string& operator=(const char* s)";    

    string s2 = s1;     //string& operator=(const string &s);

    string s3;
    s3.assign("string& assigh(const char* s)");

    string s4;
    s4.assign("abcdefg",3);

    string s5;
    s5.assign(s4);

    string s6;
    s6.assign(3,'a');

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
}

int main() {
    test01();
    return 0;
}