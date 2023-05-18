#include<iostream>
#include<deque>
using namespace std;

void PrintDeque(deque<int> &d) {
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) 
        cout << *it << " ";
    cout << endl;
}

void testo1() {
    deque<int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(40);
    d.push_back(50);
    PrintDeque(d);

    sort(d.begin(),d.end());        //排序
    PrintDeque(d);
    
}

int main() {
    testo1();
    return 0;
}