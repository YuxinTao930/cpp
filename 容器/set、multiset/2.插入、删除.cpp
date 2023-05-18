#include<iostream>
#include<set>
using namespace std;

void Printset(set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {
    set<int> s1;
    for (int i = 0; i < 10; i++)
        s1.insert(rand() % 50);
    Printset(s1);
    s1.erase(s1.begin());
    Printset(s1);
    s1.erase(30);
    Printset(s1);
    s1.clear();
    Printset(s1);
}

void PrintMultiset(multiset<int> &s) {
    for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it <<  " ";
    cout << endl;
}

void test02() {
    multiset<int> s1;
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(10);
    s1.insert(10);
    s1.insert(20);
    PrintMultiset(s1);

    multiset<int>::iterator pos = s1.find(20);
    if (pos == s1.end())
        cout << "s1 not have 20" << endl;
    else
        cout << "s1 have 20" << endl;

    cout << s1.count(5) << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}