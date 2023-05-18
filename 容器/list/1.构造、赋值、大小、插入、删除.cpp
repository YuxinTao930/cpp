#include<iostream>
#include<list>
using namespace std;

void PrintList(list<int> &lst) {
    for (list<int>::iterator it = lst.begin(); it != lst.end();it++)
        cout << *it << " ";
    cout << endl;
}

void test01() {                     //构造
    list<int> lst;
    for (int i = 0; i < 10; i++)
        lst.push_back(i);
    for (int i = 0; i < 10; i++)
        lst.push_front(i);
    PrintList(lst);

    list<int> lst2(lst);
    PrintList(lst2);

    list<int> lst3(lst.begin(), lst.end());
    PrintList(lst3);

}

void test02() {
    list<int> lst1;
    lst1.push_back(10);
    lst1.push_back(20);
    lst1.push_back(20);
    lst1.push_back(40);
    PrintList(lst1);

    list<int> lst2;
    lst2.assign(lst1.begin(), lst1.end());
    PrintList(lst2);

    cout << lst1.front() << endl;       //返回第一个
    cout << lst1.back() << endl;        //返回最后一个

    list<int> lst3;
    lst3.assign(10,100);
    PrintList(lst3);

    cout << lst1.size() << endl;        //size
    lst1.resize(5);                     //resize
    PrintList(lst1);

    lst1.remove(20);                    //删除和elem相同的元素
    PrintList(lst1);

    lst1.erase(lst1.begin());           //删除pos位置的元素
    PrintList(lst1);

    lst1.push_front(100);               //前插
    PrintList(lst1);

    lst1.clear();
    PrintList(lst1);
}

int main() {
    //test01();
    test02();
    return 0;
}