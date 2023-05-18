#include<iostream>
using namespace std;
#include<set>
#include<ctime>

void PrintSet(set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) 
        cout << *it << " ";
    cout << endl;
}

void PrintMultiset(multiset<int> &s) {
    for (multiset<int>::iterator it = s.begin(); it != s.end(); it++) 
        cout << *it << " ";
    cout << endl;
}

void test01() {
    set<int> s1;
    for (int i = 0; i < 10; i++)
        s1.insert(rand() % 41 + 60);        //插入元素只有insert
    PrintSet(s1);

    multiset<int> s2;
    for (int i = 0; i < 10; i++)
        s2.insert(rand() % 20 + 60);
    PrintMultiset(s2);

    cout << s1.size() << endl;              //获得
    cout << s2.size() << endl;

    set<int> s3;
    for (int i = 0; i < 10; i++)
        s3.insert(rand() % 41 + 60);
    PrintSet(s3);

    s1.swap(s3);                            //交换
    PrintSet(s1);
    PrintSet(s3);
}

int main() {
    test01();
    return 0;
}