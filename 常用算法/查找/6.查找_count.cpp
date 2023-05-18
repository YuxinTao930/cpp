#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

void test01() {
    vector<int> v;
    for (int i = 0; i < 3; i++)
        v.push_back(3);
    for (int i = 0; i < 5; i++)
        v.push_back(5);
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    cout << "3 出现了 " << count(v.begin(), v.end(), 3) << "次" << endl;
    cout << "5 出现了 " << count(v.begin(), v.end(), 5) << "次" << endl;    
}

int main() {
    test01();
    return 0;
}