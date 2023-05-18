#include<iostream>
using namespace std;
#include<vector>

void PrintVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    if(v1.empty()) 
        cout << "v1 is vacant." << endl;
    else
        cout << "v1 is not empty." << endl;

    cout << "v1's capacity = " << v1.capacity() << endl;
    cout << "v1's size = " << v1.size() << endl;

    v1.resize(15);
    PrintVector(v1);
    v1.resize(5);
    PrintVector(v1);
    v1.resize(15, 7);
    PrintVector(v1);

}

int main() {
    test01();
    return 0;
}