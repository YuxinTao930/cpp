#include<iostream>
#include<list>
using namespace std;

void PrintList(list<int> &lst) {
    for (list<int>:: iterator it = lst.begin(); it != lst.end(); it++)
        cout << *it << " ";
    cout << endl;
}

bool Compare(int a, int b) {
    return a > b;               //降序 >
}

void test01() {
    list<int> lst;
    for (int i = 0; i < 10; i += 2) {
        lst.push_back(i);
    }
    for (int i = 9; i > 0; i -= 2) {
        lst.push_front(i);
    }
    PrintList(lst);

    lst.reverse();
    PrintList(lst);

    lst.sort();         //所有不支持随机访问迭代器的容器，不可以用标准算法
    PrintList(lst);     //默认升序排序

    lst.sort(Compare);
    PrintList(lst);
}

int main() {
    test01();
    return 0;
}