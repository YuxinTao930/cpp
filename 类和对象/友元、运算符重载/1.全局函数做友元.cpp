#include<iostream>
using namespace std;
/*
*/
class Building {
    friend void goodGay(Building &building);    //友元说明  goodGay这个全局函数是Building的友元
public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom;
private:
    string m_BedRoom;
};

void goodGay(Building &building) {
    cout<<"good friend is visiting "<<building.m_SittingRoom<<endl;
    cout<<"good friend is visiting "<<building.m_BedRoom<<endl;     //友元可以访问私有成员
}
void test01() {
    Building building01;
    goodGay(building01);
}

int main() {
    test01();
    return 0;
}