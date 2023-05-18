#include<iostream>
using namespace std;
/*
*/
template<typename T>                //模板
void mySwap (T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>                //模板必须确定T的数据类型，才可以使用
void myPrint () {
    cout << "abd" << endl;
}


/*
void swapInt(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
} 
void swapFloat(float &a, float &b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
} 
*/

void test01() {
    int a = 3, b = 4;
    //swapInt(a, b);
    float c = 3.1, d = 4.5;
    //swapFloat(c, d);
    mySwap(a, b);                   //自动类型推导
    //mySwap(a,c);                  //自动类型推导需要推导出一致的数据类型
    mySwap<float>(c, d);            //显示指定类型
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    //myPrint();                    模板必须要确定T的数据类心，才可以使用
}


int main() {
    test01();
    return 0;
}