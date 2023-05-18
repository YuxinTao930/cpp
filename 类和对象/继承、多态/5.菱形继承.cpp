#include<iostream>
using namespace std;
/*
*/
class Animal {      //虚基类
public:
    int m_Age;
};
class Sheep: virtual public Animal {        //虚继承 virtual

};
class Tuo: virtual public Animal {

};
class YangTuo: public Sheep, public Tuo {

};
void test01() {
    YangTuo st;
    st.Sheep::m_Age = 18;       //加作用域区分
    st.Tuo::m_Age = 28;
    cout<<st.m_Age<<endl;      //28
    
}

int main() {
    test01();
    return 0;
}