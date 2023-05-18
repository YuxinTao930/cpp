#include<iostream>
using namespace std;
/*
*/
class Person {
    int m_A;  //属于类的对象
    static int m_B;
    void func(){};
};
int Person::m_B = 100;

void test01() {
    Person p;
    cout<<"size of p = "<<sizeof(p)<<endl;   //空对象占用的空间为1个字节，以区分空对象占内存的位置
}
void test02() {
    Person p;
    cout<<"size of p = "<<sizeof(p)<<endl;   //含一个int 占用的空间为4个字节
}                                           //加一个static，还是4
                                            //加一个成员函数，还是4
int main() {
    //test01();
    test02();
    return 0;
}