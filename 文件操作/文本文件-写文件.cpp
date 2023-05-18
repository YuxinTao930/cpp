#include<iostream>
using namespace std;
#include<fstream>

/*
1.包含头文件	#include <fsteam>

2.创建流对象	ofstream ofs;

3.打开文件		ofs.open("文件路径"，打开方式);

4.写数据		ofs <<"写入的数据";

5.关闭文件		ofs.close();

**打开方式**：ios::in ------为读文件而打开			ios::out --------为写文件而打开


*/

void test01() {
    ofstream ofs;                        //创建流对象
    ofs.open("text.txt", ios::out);     //指定打开方式  为写文件而打开
    ofs << "12345" << endl;
    ofs << "abcde" << endl;
    ofs << "*****" << endl;             //写文件
    ofs.close();                        //关闭文件
}
void test02() {

}


int main() {
    test01();
    return 0;
}