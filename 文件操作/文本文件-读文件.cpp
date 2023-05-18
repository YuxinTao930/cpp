#include<iostream>
using namespace std;
#include<fstream>
/*
1.包含头文件

2.创建流对象		if stream ifs;

3.打开文件			ifs.open("文件路径"，打开方式)

4.读数据

5.关闭文件			ifs.close();
*/

void test01() {
    ifstream ifs;                       //创建流对象

    ifs.open("text.txt", ios::in);      //打开文件，并判断是否打开成功
    if (!ifs.is_open()) {
        cout<<"false"<<endl;
        return;
    } 

    char buf[1024] = {0};               //读数据
    while (ifs >> buf) {
        cout << buf <<endl;
    }

    ifs.close();                        //关闭文件

    /*
    char buf[1024] = {0};
    while(ifs.getline(buf,sizeof(buf))) {
        cout << buf << endl;
    }                                   读文件的第二种方式
    */

   /*
   string buf;
   while (getline(ifs, buf)) {
        cout << buf << endl;
   }                                    读文件的第三种方式
   */

}

int main() {
    test01();
    return 0;
}