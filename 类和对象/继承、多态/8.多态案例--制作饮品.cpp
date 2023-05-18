#include<iostream>
using namespace std;
/*
*/
class AbstractDrinking {
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void Pour() = 0;
    virtual void PutS() = 0;
    void MakeDrinking() {
        Boil();
        Brew();
        Pour();
        PutS();
    }
};
class Coffee: public AbstractDrinking {
public:
    void Boil() {                           //virtual可加可不加
        cout<<"Boiling"<<endl;
    }
    void Brew() {
        cout<<"Brewing"<<endl;
    }
    void Pour() {
        cout<<"Pour into Cup"<<endl;
    }
    void PutS() {
        cout<<"Put Lemon and Suger"<<endl;
    }
};
class Tea: public AbstractDrinking {
public:
    void Boil() {
        cout<<"Boiling"<<endl;
    }
    void Brew() {
        cout<<"Brewing"<<endl;
    }
    void Pour() {
        cout<<"Pour into Cup"<<endl;
    }
    void PutS() {
        cout<<"Put TeaLeaf"<<endl;
    }
};
void test01() {
    AbstractDrinking* make_coffee = new Coffee;     //父类指针指向子类对象
    make_coffee->MakeDrinking();
    AbstractDrinking* make_Tea = new Tea;
    make_Tea->MakeDrinking();
}

void doWork(AbstractDrinking* pointer) {
    pointer->MakeDrinking();
}
void test02() {
    doWork(new Coffee);
    cout<<"++++++++++"<<endl;
    doWork(new Tea);
}

int main() {
    //test01();
    test02();
    return 0;
}