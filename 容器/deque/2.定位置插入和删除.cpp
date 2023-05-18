#include<iostream>
using namespace std;
#include<deque>

void PrintDeque(const deque<int> &d) {
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {
    deque<int> d(10, 1);
    PrintDeque(d);

    d.insert(d.begin(), 3);
    PrintDeque(d);

    d.insert(d.end()-4, 3, 9);
    PrintDeque(d);
    
    d.erase(d.begin());
    PrintDeque(d);

    d.clear();
    PrintDeque(d);
    cout << "++++++++++" << endl;
    
}

int main() {
    test01();
    return 0;
}