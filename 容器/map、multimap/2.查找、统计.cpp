#include<iostream>
#include<map>
using namespace std;

void test01() {
    multimap<int, string> m;
    m.insert(make_pair(1, "A"));
    m.insert(make_pair(2, "B"));
    m.insert(make_pair(3, "C"));

    multimap<int, string>::iterator pos = m.find(3);
    if (pos == m.end())
        cout << "不存在" << endl;
    else
        cout << "存在" << endl;
    
    cout << m.count(3) << endl;
}

int main() {
    test01();
    return 0;
}