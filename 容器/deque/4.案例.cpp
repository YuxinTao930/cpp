#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>             //用随机数所需的ctime头文件
using namespace std;

class Person {
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
        string name = "选手";
        name += nameSeed[i];
        
        int score = 0;

        Person p(name, score);
        v.push_back(p);
    }
}

void SetScore(vector<Person> &v) {
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }
        cout << (*it).m_Name << "'s score: " << endl;
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
            cout << *it << " ";
        cout << endl;

        sort(d.begin(), d.end());
        
        d.pop_front();
        d.pop_back();
        
        int sum = 0;
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
            sum += *it;
        }
        int p_score = sum / d.size();
        (*it).m_Score = p_score;
    }
}

int main() {
    srand((unsigned int)time(NULL));            //随机数种子
    vector<Person> v;
    CreatPerson(v);
    
    cout << "Before setting scores:" << endl;
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
        cout << (*it).m_Name << "'s score = " << (*it).m_Score << endl;

    cout << endl;
    cout << "After setting scores:" << endl;
    SetScore(v);
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
        cout << (*it).m_Name << "'s score = " << (*it).m_Score << endl;

    return 0;
}