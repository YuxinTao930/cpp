#include<iostream>
#include<map>
using namespace std;

void PrintMap(map<int, string> &m) {
    for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << " ";
    }
    cout << endl;
}

void test01() {
    map<int, string> m;
    m.insert(pair<int, string> (4, "A"));
    m.insert(make_pair(2, "B"));        //插入常用方法
    m.insert(make_pair(7, "C"));
    m.insert(make_pair(1, "D"));
    m.insert(make_pair(45, "E"));
    PrintMap(m);

    m.erase(45);    //删除key为45的元素
    PrintMap(m);

    m.erase(m.begin());
    PrintMap(m);

}

int main() {
    test01();
    return 0;
}