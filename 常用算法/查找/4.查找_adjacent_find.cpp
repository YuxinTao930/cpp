#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

void test01() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    v.push_back(6);
    v.push_back(6);

    vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
    cout << *pos - 1 << endl;
    cout << *pos << endl;
    
}

int main() {
    test01();
    return 0;
}