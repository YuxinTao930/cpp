#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
*/

void print01(int val) {
    cout << val << " ";
}

class Print {
public:
    void operator() (int val) {
        cout << val << " ";
    }
};

void test01() {                                 //for_each
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print01);      //普通函数
    cout << endl;

    for_each(v.begin(), v.end(), Print());      //仿函数
    cout << endl;
}

class Transform {                   //提供对数进行操作的接口
public:
    int operator()(int val) {
        return val + 1;
    }
};

void test02() {                     //transform
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int> v1;
    v1.resize(v.size());            //目标容器需要提前开拓空间
    transform(v.begin(), v.end(), v1.begin(), Transform());
    for_each(v1.begin(), v1.end(),Print());
    cout << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}