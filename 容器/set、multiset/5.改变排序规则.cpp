#include<iostream>
#include<set>
using namespace std;

class myCompare {           //仿函数
public:
    bool operator() (int v1, int v2) {
        return v1 > v2;
    }
};

void test01() {
    set<int,myCompare> s;
    s.insert(10);
    s.insert(4);
    s.insert(24);
    s.insert(34);
    s.insert(100);
    s.insert(1);

    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main() {
    test01();
    return 0;
}