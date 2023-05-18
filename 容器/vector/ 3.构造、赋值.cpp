#include<iostream>
using namespace std;
#include<vector>

void PrintVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {         //构造
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    PrintVector(v1);

    vector<int> v2(v1.begin(),v1.end());
    PrintVector(v2);

    vector<int> v3(10, 100);
    PrintVector(v3);

    vector<int> v4(v3);
    PrintVector(v4);
}

void test02() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    PrintVector(v);
                                            //赋值
    vector<int> v2;
    v2 = v;
    PrintVector(v2);

    vector<int> v3;                         //assign
    v3.assign(v.begin(), v.end());
    PrintVector(v3);
}

int main() {
    //test01();
    test02();
    return 0;
}