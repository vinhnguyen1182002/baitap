#include <iostream>
using namespace std;
int main()
{
    int a;
    int* b = new int;
    cout << &a << " " << b << endl;
    *b = a;
    cout << &a << " " << b << endl;
    int c;
    b = &c;
    cout << &c << " " << b << endl;
    return 0;
}
//bien tham chieu va bien chi den 2 vi tri khac nhau
//Co the khai bao 1 tham chieu ma chua chieu ngay no toi 1 bien thuong
//Co the chieu 1 tham chieu toi 1 bien khac voi dich ban dau cua no 
