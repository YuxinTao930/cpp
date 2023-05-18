#include<iostream>
#include<stack>
#include<ctime>
using namespace std;

void test01() {
    stack<int> stk;
    for (int i = 0; i < 10; i++) {
        stk.push(rand() % 41 + 60);
        cout << stk.top() << " ";
    }
    cout << endl;

    cout << stk.size() << endl;
    
    int size = stk.size();
    while (!stk.empty()) {
        
        cout << stk.top() << " ";
        stk.pop();
    }
    
    cout << endl;
    cout << stk.size() << endl;
}

int main() {
    srand((unsigned int)time(NULL));
    test01();
    return 0;
}