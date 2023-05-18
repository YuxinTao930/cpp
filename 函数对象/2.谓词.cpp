#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

class GreaterFive {
public:
    bool operator()(int val) {
        return val > 5;
    }
};

class myCompare {
public:
    bool operator() (int v1, int v2) {
        return v1 > v2;
    }
};

void test01() {
    vector<int>v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
    if (pos != v.end())
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

void test02() {
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);
    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    sort(v.begin(), v.end(), myCompare());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}