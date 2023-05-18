#include<iostream>
using namespace std;

void test01() {
    pair<string, int> p("A",20);
    cout << p.first << " " << p.second << endl;

    pair<string, int> p2 = make_pair("A", 10);
    cout << p2.first << " " << p2.second << endl;
}

int main() {
    test01();
    return 0;
}