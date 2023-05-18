#include<iostream>
using namespace std;
/*   在开发中，提倡开闭原则——————对扩展进行开放，对修改进行关闭
*/
class AbstractCalculator {          //抽象类
public:
    virtual int getResult() = 0;  //纯虚函数
    int m_Num1;
    int m_Num2;
};
class AddCalculator: public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 + m_Num2;
    }
};
class SubCalculator: public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 - m_Num2;
    }
};
class MulCalculator: public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 * m_Num2;
    }
};


void test01() {
    AbstractCalculator * abc = new AddCalculator;     //父类指针指向子类对象
    abc->m_Num1 = 10;
    abc->m_Num2 = 5;
    cout << "+ " << abc->getResult() << endl;
    
    AbstractCalculator * a = new SubCalculator;
    a->m_Num1 = 10;
    a->m_Num2 = 5;
    cout << "- " << a->getResult() << endl;
    
    AbstractCalculator * c = new MulCalculator;
    c->m_Num1 = 10;
    c->m_Num2 = 5;
    cout << "* " << c->getResult() << endl;
}

void test02() {
    //AbstractCalculator abc;         //抽象类不能实例化对象
}

int main() {
    test01();
    return 0;
}