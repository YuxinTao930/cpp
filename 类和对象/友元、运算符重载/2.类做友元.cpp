#include<iostream>
using namespace std;
#include<string>
/*
*/
class Building {
    friend class GoodGay;
public:
    Building();
public:
    string m_sittingRoom;
private:
    string m_bedRoom;
};

Building::Building() {      //类外实现构造函数
    m_sittingRoom = "客厅";
    m_bedRoom = "卧室";
}


class GoodGay {
public:
    GoodGay();
public:
    void visit();
    Building* building;
};

GoodGay::GoodGay() {
    building = new Building;
}

void GoodGay::visit() {
    cout<<"goodgay is visiting "<<building->m_sittingRoom<<endl;
    cout<<"goodgay is visiting "<<building->m_bedRoom<<endl;
}

void test01() {
    GoodGay goodFriend;
    goodFriend.visit();
}

int main() {
    test01();
    return 0;
}