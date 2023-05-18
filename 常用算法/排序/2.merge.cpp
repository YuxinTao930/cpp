#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

void test01() {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 20; i++) {
        v1.push_back(i + 1);
        v2.push_back(i - 1);
    }
    for (vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++)
        cout << *it1 << " ";
    cout << endl;

    for (vector<int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++)
        cout << *it2 << " ";
    cout << endl;
    
    vector<int> v3;
    v3.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main() {
    test01();
    return 0;
}