#include<iostream>
using namespace std;
/*
*/
class CPU {                              //抽象CPU
public:
    virtual void Calculate() = 0;
};
class VideoCard {                       //抽象显卡
public:
    virtual void Display() = 0;
};
class Memory {                          //抽象内存条
public:
    virtual void storage() = 0;
};

class Computer {                        //电脑
public:
    Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
       m_cpu = cpu;
       m_vc = vc;
       m_mem = mem;
    }
    void doWork() {
        m_cpu->Calculate();
        m_vc->Display();
        m_mem->storage();
    }
private:
    CPU* m_cpu;
    VideoCard* m_vc;
    Memory* m_mem;
};

class InterCPU: public CPU {                //Inter继承了CPU VideoCard Memory
public:
    virtual void Calculate() {
        cout << "Inter's cpu is calculating" << endl;
    }
};
class InterVideoCard: public VideoCard {
public:
    virtual void Display() {
        cout << "Inter's video card is displaying" << endl;
    }
};
class InterMemory: public Memory {
public:
    virtual void storage() {
        cout << "Inter's memory is storaging" << endl;
    }
};

class MacMemory: public Memory {
public:
    virtual void storage() {
        cout << "Mac's memory is storaging" << endl;
    }
};

void test01() {                             //组装并工作
    CPU* cpu = new InterCPU;
    VideoCard* vc = new InterVideoCard;
    Memory* mem = new InterMemory;
    Computer pc(cpu, vc, mem);
    pc.doWork();
}

void test02() {                             //交叉使用
    CPU* cpu = new InterCPU;
    VideoCard* vc = new InterVideoCard;
    Memory* mem = new MacMemory;
    Computer pc(cpu, vc, mem);
    pc.doWork();
}

int main() {
    //test01();
    test02();
    return 0;
}