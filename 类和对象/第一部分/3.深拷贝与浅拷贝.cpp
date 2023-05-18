#include<iostream>
using namespace std;

/*浅拷贝——导致堆区内存重复释放 
            Person p2(p1);  p2和p1的m_Height指针指向同一块堆区内存空间，
            析构函数调用时，先释放p2.m_Height指向的堆区内存空间，再释放p1.m_Height指向的堆区内存空间
  深拷贝——防止浅拷贝操作带来的堆区内存重复释放问题
            重新再堆区开辟一块内存，p2.m_Height p1.m_Height 指向不同空间
            程序员要自己实现拷贝构造函数，解决浅拷贝带来的问题。

*/
class Person {
public:
    Person() {
        cout<<"Person默认构造函数调用"<<endl;
    }
    Person(int a, int Height) {
        m_Height = new int(Height);//用指针接收堆区的数据，堆区的数据由程序员手动开辟---new
        m_Age = a;
        cout<<"Person有参构造函数调用"<<endl;
    }
    Person(const Person &p) {
        cout<<"拷贝构造函数调用"<<endl;
        m_Age = p.m_Age;
        //m_Height = p.m_Height; 编译器默认浅拷贝的方法
        m_Height = new int(*p.m_Height); //深拷贝*********************
    }
   
    ~Person() {
        if (m_Height != NULL) {
            delete m_Height; //释放空间
            m_Height = NULL; //防止野指针
        }
        cout<<"Person析构函数调用"<<endl;//析构函数，将堆区开辟的数据做释放操作
    }

    int m_Age;
    int* m_Height; //指针--堆区
};
void test01() {
    Person p1(18,160);
    cout<<"p1的年龄为"<<p1.m_Age<<"  p1的身高为"<<*p1.m_Height<<endl;
    Person p2(p1);
    cout<<"p2的年龄为"<<p2.m_Age<<"  p2的身高为"<<*p2.m_Height<<endl;//编译器默认会做浅拷贝操作
}

int main() {
    test01();

    return 0;
}