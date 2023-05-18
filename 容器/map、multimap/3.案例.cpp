#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<ctime>

class Worker {
public:
    string m_Name;
    int m_Salary;
};

void CreatWorker(vector<Worker> &v) {
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++) {
        Worker worker;
        string name = "员工";
        name += nameSeed[i];
        worker.m_Name = name;
        worker.m_Salary = rand()%1000 + 1000;
        v.push_back(worker);
    }
}

void ShowGroup(multimap<int,Worker> &m, int i) {
    multimap<int, Worker>::iterator pos = m.find(i);
    int count_i = m.count(i);
    int count = 0;
    for (; pos != m.end() && count < count_i; pos++, count++)
        cout << (*pos).second.m_Name << " " << (*pos).second.m_Salary << endl;
}

void SetGroup(vector<Worker> &v) {
    multimap<int, Worker> m;
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
        int key = rand() % 3;
        m.insert(make_pair(key, *it));
    }
    for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
        cout << (*it).first << " " << (*it).second.m_Name << " " <<(*it).second.m_Salary << endl;
    
    cout << "=======================" << endl;
    cout << "策划部：" << endl;
    ShowGroup(m, 0);
    cout << "=======================" << endl;
    cout << "美术部：" << endl;
    ShowGroup(m, 1);
    cout << "=======================" << endl;
    cout << "技术部：" << endl;
    ShowGroup(m, 2);

}

int main() {
    srand((unsigned int)time(NULL));
    vector<Worker> v_worker;
    CreatWorker(v_worker);

    for (vector<Worker>::iterator it = v_worker.begin(); it != v_worker.end(); it++) 
        cout << (*it).m_Name << "'s salary = " << (*it).m_Salary << endl;
    cout << "=================" << endl;

    SetGroup(v_worker);

    return 0;
}