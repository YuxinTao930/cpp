#include<iostream>
using namespace std;
#include<vector>

/*
*/

void test01() {
    negate<int>n;               //negate<>
    cout << n(50) << endl;
}

void test02() {
    plus<int> n;                //plus<>
    cout << n(10,30) << endl;
}

void test03() {
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);
    sort(v.begin(), v.end(), greater<int>());           //greater<>
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

}

int main() {
    test01();
    test02();
    test03();
    return 0;
}