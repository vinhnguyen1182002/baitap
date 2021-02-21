#include<iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Nhap x:";
    cin >> a;
    cout<< "Nhap y :";
    cin>> b;
    int answer = 1;
    for (; b > 0; answer *= a, b--);
    cout <<"Ket qua cua x^y la :" <<answer;
    return 0;
}
