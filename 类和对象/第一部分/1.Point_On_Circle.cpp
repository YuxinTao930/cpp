#include<iostream>
using namespace std;

class Point 
{
public:
    void setX(int x) {
        m_X = x;
    }
    int getX() {
        return m_X;
    }
    void setY(int y) {
        m_Y = y;
    }
    int getY() {
        return m_Y;
    }
private:
    int m_X;//x坐标
    int m_Y;//y坐标

};

class Circle 
{
public:
    void setR(int r) {
        m_R = r;
    }
    int getR() {
        return m_R;
    }
    void setCenter(Point center) {
        m_Center = center;
    }
    Point getCenter() {
        return m_Center;
    }
private:
    int m_R;//圆半径
    Point m_Center;//圆心

};

void isInCircle(Circle &c, Point &p) {
    int distence =
    (c.getCenter().getX()-p.getX()) * (c.getCenter().getX() - p.getX()) + 
    (c.getCenter().getY()-p.getY()) * (c.getCenter().getY() - p.getY());
    int R2 = c.getR() * c.getR();
    if (distence == R2) {
        cout<<"on"<<endl;
    }
    else if (distence < R2) {
        cout<<"in"<<endl;
    }
    else {
        cout<<"out"<<endl;
    }

}

int main() {
    Circle c;
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    c.setR(10);

    Point p;
    p.setX(10);
    p.setY(10);

    isInCircle(c,p);

    return 0;
}