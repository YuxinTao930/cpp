#include<iostream>
using namespace std;
#include<vector>

void PrintVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    PrintVector(v);
    cout << "==============" << endl;

    v.pop_back();
    PrintVector(v);
    cout << "==============" << endl;

    v.insert(v.begin(), 55);
    PrintVector(v);
    cout << "==============" << endl;

    v.insert(v.end(), 100);
    PrintVector(v);
    cout << "==============" << endl;

    v.erase(v.begin());
    PrintVector(v);
    cout << "==============" << endl;

    v.clear();
    PrintVector(v);
    cout << "==============" << endl;
}

void test02() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << "第3个数字是" << v.at(2) << endl;
    cout << "第5个数字是" << v[4] << endl;
    cout << "第一个数字是" << v.front() << endl;
    cout << "最后一个数字是" << v.back() << endl;

}

int main() {
    //test01();
    test02();
    return 0;
}