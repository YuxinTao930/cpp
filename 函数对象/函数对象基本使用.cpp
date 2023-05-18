#include<iostream>
using namespace std;
/*
*/

class myAdd {
public:
    int operator()(int v1, int v2) {
        return v1 + v2;
    }
};

void test01() {
    myAdd test;         //test即为函数对象
    cout << test(10, 100) << endl;
}

int main() {
    test01();
    return 0;
}