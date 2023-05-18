#include<iostream>
using namespace std;
/*
*/

class MyInteger {
    friend ostream& operator<<(ostream &cout, MyInteger &myInt);
public:
    MyInteger() {
        m_num = 0;
    }
    //重载++  前置
    MyInteger& operator++() {
        m_num++;
        return *this;
    }
    //重载++  后置
    MyInteger operator++(int) {     //占位参数int，用于函数重载
        MyInteger temp = *this;
        m_num++;
        return temp;
    }  
private:
    int m_num;
};

ostream& operator<<(ostream &cout, MyInteger &myInt) {
    cout<<myInt.m_num<<endl;
    return cout;
}

void test01() {
    MyInteger myInt;
    cout<<++myInt<<endl;
}

void test02() {
    MyInteger myInt;
    
}

int main() {
    //test01();
    test02();
    return 0;
}