#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
*/

class GreaterFive {
public:
    bool operator()(int val) {
        return val > 5;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    cout << "比5大的数字有" << count_if(v.begin(), v.end(), GreaterFive()) << "个" << endl;

}

int main() {
    test01();
    return 0;
}