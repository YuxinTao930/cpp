#include<iostream>
using namespace std;
/*
*/
template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void mySort(T arr[], int len) {
    for (int i = 0; i < len; i++) {
        int max = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[max] < arr[j]) {
                max = j;
            }
        }
        if (max != i) {
            mySwap(arr[max], arr[i]);
        }
    }
}

template<typename T>
void myPrint(T arr[], int len) {
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
}


void test01() {
    //char ch[5] = {'a','c','b','e','d'};
    char ch[] = "wdiac";
    int i[5] = {2,6,1,9,45};
    mySort(ch, 5);
    mySort(i, 5);
    myPrint(ch, 5);
    cout << endl;
    cout << "+++++++++++" << endl;
    myPrint(i, 5);

}

int main() {
    test01();
    return 0;
}