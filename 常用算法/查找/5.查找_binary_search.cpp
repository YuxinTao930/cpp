#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

void test01() {
    vector<int> v;
    for (int i = 0; i < 20; i++)
        v.push_back(i);
    if(binary_search(v.begin(), v.end(), 15))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main() {
    test01();
    return 0;
}