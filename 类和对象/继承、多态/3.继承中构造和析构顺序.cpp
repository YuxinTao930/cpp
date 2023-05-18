#include<iostream>
using namespace std;
/*
Base的构造函数
Son的构造函数
Son的析构函数
Base的析构函数      先有爸爸再有儿子，儿子先没再没爸爸————析构顺序一般与构造顺序相反
*/
class Base {
public:
    Base() {
        cout<<"Base的构造函数"<<endl;
    }
    ~Base() {
        cout<<"Base的析构函数"<<endl;
    }
};

class Son: public Base {
public:
    Son () {
        cout<<"Son的构造函数"<<endl;
    }
    ~Son () {
        cout<<"Son的析构函数"<<endl;
    }
};

void test01() {
    
    Son s;
}

int main() {
    test01();
    return 0;
}