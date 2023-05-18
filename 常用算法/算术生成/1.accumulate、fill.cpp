#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
/*
*/

void test01() {
    vector<int> v;
    for (int i = 0; i < 20; i++)
        v.push_back(i);

    int total = accumulate(v.begin(), v.end(), 0);
    cout << total << endl;

    vector<int> ve;
    ve.resize(v.size());
    fill(ve.begin(), ve.end(), 10);
    int totalve = accumulate(ve.begin(), ve.end(), 0);
    cout << totalve << endl;
}

int main() {
    test01();
    return 0;
}