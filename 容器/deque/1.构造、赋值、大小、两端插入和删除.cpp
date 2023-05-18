#include<iostream>
using namespace std;
#include<deque>

void PrintDeque(const deque<int> &d) {          //加const，容器中的数据不可修改
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {                             //构造
    deque<int> d1;
    for (int i = 0; i < 5; i++)
        d1.push_front(i);                   //头部插入
    PrintDeque(d1);
    for (int i = 0; i < 5; i++)
        d1.push_back(i);                    //尾部插入
    PrintDeque(d1);
    d1.pop_back();                          //尾部删除
    PrintDeque(d1);
    d1.pop_front();                         //头部删除
    PrintDeque(d1);

    deque<int> d2(d1.begin(), d1.end()-1);
    PrintDeque(d2);

    deque<int> d3(7,10);
    PrintDeque(d3);

    deque<int> d4(d3);
    PrintDeque(d4);
}

void test02() {             //赋值
    deque<int> d2;
    d2.assign(4, 10);
    PrintDeque(d2);

    deque<int> d3;
    d3 = d2;
    PrintDeque(d3);

    deque<int> d4;
    d4.assign(d3.begin(), d3.end() - 1);
    PrintDeque(d4);
}

void test03() {
    deque<int> d;
    for (int i = 0; i < 10; i++)
        d.push_back(i);
    PrintDeque(d);
    if (d.empty())                                      //判空
        cout << "deque is empty." << endl;
    else
        cout << "deque is not empty." << endl;
    cout << "deque's size = " << d.size() << endl;      //deque大小
    d.resize(20);                                       //resize
    PrintDeque(d);
    d.resize(5);
    PrintDeque(d);
    d.resize(10,99);
    PrintDeque(d);
}

int main() {
    //test01();
    //test02();
    test03();
    return 0;
}