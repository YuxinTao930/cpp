#include<iostream>
using namespace std;

void test01() {
    string str1 = "abcdefg";
    int comp = str1.compare("abccefg");
    cout << comp << endl;

    string str3 = "abceefg";
    int com = str1.compare(str3);
    cout << com << endl;
}

void test02() {
    string str = "Hello world";
    for (int i = 0; str[i] != '\0'; i++) 
        cout << str[i] << " ";
    cout << endl;
    
    for (int i = 0; i < str.size(); i++) 
        cout << str.at(i) << "  ";
    cout << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}