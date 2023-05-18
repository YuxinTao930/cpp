#include<iostream>
#include<queue>
#include<ctime>
using namespace std;

void test01() {
    queue<int> q;
    for (int i = 0; i < 10; i++) {
        q.push(rand() % 41 + 60);
        cout << q.back() << " ";
    }
    cout << endl;
    cout << q.size() << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << q.size() << endl;

}

int main() {
    srand((unsigned int)time(NULL));
    test01();
    return 0;
}