#include<iostream>
using namespace std;
#include<vector>

void PrintVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    PrintVector(v1);

    vector<int> v2;
    for (int i = 10; i < 20; i++)
        v2.push_back(i);
    PrintVector(v2);
    v1.swap(v2);
    PrintVector(v1);
}

void test02() {
    vector<int> v1;
    int *p = NULL;
    int count = 0;
    for (int i = 0; i < 100000; i++) {
        v1.push_back(i);
        if (p != &v1[0]) {
            p = &v1[0];
            count++;
        }
    }
    cout << count << endl;

    vector<int> v2;
    int *t = NULL;
    int count2 = 0;
    v2.reserve(100000);
    for (int i = 0; i < 100000; i++) {
        v2.push_back(i);
        if (t != &v2[0]) {
            t = &v2[0];
            count2++;
        }
    }
    cout << count2 << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}