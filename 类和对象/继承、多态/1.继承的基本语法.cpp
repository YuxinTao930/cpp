#include<iostream>
using namespace std;
/*      语法---->   class 子类：继承方式 父类
*/
/*class Java {
public:
    void header() {
        cout<<"公共头部"<<endl;
    }
    void footer() {
        cout<<"公共底部"<<endl;
    }
    void left() {
        cout<<"公共分类列表"<<endl;
    }
    void content() {
        cout<<"java视频"<<endl;
    }
};
*/
class base {                //共同部分
public:
    void header() {
        cout<<"公共头部"<<endl;
    }
    void footer() {
        cout<<"公共底部"<<endl;
    }
    void left() {
        cout<<"公共分类列表"<<endl;
    }
};

class Java: public base {           //java页面继承base
public:
    void content() {
        cout<<"java视频"<<endl;
    }
};

class Python: public base {           //Python页面继承base
public:
    void content() {
        cout<<"Python视频"<<endl;
    }
};

void test01() {
    Java javaWeb;
    javaWeb.header();
    javaWeb.footer();
    javaWeb.left();
    javaWeb.content();
    cout<<"-------------"<<endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
}

int main() {
    cout<<"java页面:"<<endl;
    test01();
    return 0;
}