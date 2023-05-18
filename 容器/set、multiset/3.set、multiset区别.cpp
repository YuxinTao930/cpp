#include<iostream>
#include<set>
using namespace std;

void test01() {
    set<int> s;
    pair<set<int>::iterator, bool>ret = s.insert(10);
    if (ret.second)
        cout << "successed" << endl;
    else
        cout << "failed" << endl;
    
    ret = s.insert(10);
    if (ret.second)
        cout << "successed" << endl;
    else
        cout << "failed" << endl;
    
}

int main() {
    test01();
    return 0;
}