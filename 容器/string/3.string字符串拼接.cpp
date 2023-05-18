#include<iostream>
using namespace std;

void test01() {
    string s1 = "我";
    string s2 = s1;
    string s3;
    s3.assign("你你他她它",6);

    string s4 = s1 + s2;
    s4.append(s3);

    cout << s4 << endl;
}

int main () {
    test01();
    return 0;
}