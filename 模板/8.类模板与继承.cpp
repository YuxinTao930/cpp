#include<iostream>
using namespace std;
/*
*/
template<typename T>
class Base {
    T m;
};

class Son: public Base<int> {       //继承时需要说明父类T的数据类型

};

template<typename T1, typename T2>      //子类也变成类模板
class Son2: public Base<T2> {
    T1 obj;
};

int main() {

    return 0;
}