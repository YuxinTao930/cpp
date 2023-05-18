#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val) {
    cout << val << endl;
}

void test01() {

    vector<int> v;              //创建vector容器
    
    v.push_back(10);            
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //通过迭代器访问容器中的数据
    cout << "第一种遍历方法" << endl;
    vector<int>::iterator itBegin = v.begin();   //起始迭代器，指向第一个元素
    vector<int>::iterator itEnd = v.end();       //结束迭代器，指向最后一个元素的后一位

    while (itBegin != itEnd) {
        cout << *itBegin << endl;       //类似于指针，解引用获得数据
        itBegin++;
    }

    cout << "第二种遍历方法" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }

    cout << "第三种遍历方法" << endl;
    for_each(v.begin(), v.end(),myPrint);   //回调技术
}



int main() {
    test01();
    return 0;
}