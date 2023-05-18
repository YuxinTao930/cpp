#include<iostream>
using namespace std;
/*
int find()           从pos位置开始，找到第一次出现的位置
int rfind()          从pos位置开始，找到最后一次出现的位置
string& replace()    从pos位置开始的n个字符，替换为
*/
void test01() {
    string str1 = "abcdefg";
    int pos = str1.find("de");
    cout << pos << endl;


    string str2 = "abcdabcdab";
    int npos = str2.rfind("ab");
    cout << npos << endl;

    string str3 = "aabbaabbaabb";
    int pos2 = str3.find("baa",1);
    cout << pos2 << endl;
}

void test02() {
    string str1 = "abcdefg";
    str1.replace(2, 3, "nn");
    cout << str1 << endl;
}

int main () {
    //test01();
    test02();
    return 0;
}