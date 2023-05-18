/*
五个选手ABCDE，各有10个分数，要求去掉一个最高分，去掉一个最低分，取平均值为选手的最终分数
1.创建class Person————name，score
2.创建选手，赋初值，创建vector，存放Person
3.每一个Person，用一个deque存放10个成绩
4.排序，头删除，尾删除，取平均
5.shouPerson
*/

#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;

class Person {                                      //选手类，name + score
public:
    Person(string name, int score) {
        m_Name = name;
        m_Score = score;
    }
    string m_Name;
    int m_Score;
};

void CreatPerson(vector<Person> &v) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < nameSeed.size(); i++) {
        string name = "选手";                       //创建选手A～E，放在vector中
        name += nameSeed[i];
        Person p(name, 0);
        v.push_back(p);
    }
}

void SetScore(vector<Person> &v) {
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 41 + 60;
            d.push_back(score);                         //vector, ->Person -> deque(10, score)
        }
        
        cout << (*it).m_Name << "'s scores :" << endl;      //测试
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
            cout << *it << " ";
        cout << endl;

        sort(d.begin(), d.end());       //排序，去掉max和min
        d.pop_back();
        d.pop_front();

        int sum = 0;
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
            sum += *it;
        int score = sum / d.size();         //取平均

        (*it).m_Score = score;              //选手成绩赋值

    }
}

void ShowPerson(vector<Person> &v) {        //打印选手名字和成绩
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
        cout << (*it).m_Name << "'s score = " << (*it).m_Score << endl;
}

int main() {
    srand((unsigned int)time(NULL));

    vector<Person> v;       //创建一个vector，存放Person类
    cout << "==========================" << endl;
    CreatPerson(v);

    ShowPerson(v);
    cout << "==========================" << endl;

    SetScore(v);
    cout << "==========================" << endl;
    ShowPerson(v);

    return 0;
}