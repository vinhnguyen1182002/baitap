#include <iostream>
using namespace std;
void swapval(int a, int b)
{
    int swap = a;
    a = b;
    b = swap;
    cout<<"Dia chi cua a khi doi gia tri la: " << &a <<endl<<"Dia Chi cua b khi doi gia tri la: " << &b << endl;
}

void swap(int& a, int& b)
{
    int swap = a;
    a = b;
    b = swap;
  cout<<"Dia chi cua a khi truyen tham chieu la: " << &a <<endl<<"Dia Chi cua b khi truyen tham chieu la: " << &b << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    swapval(a, b);
    swap(a, b);
    return 0;
    //Dia chi khi truyen tham chieu va khi chua thay doi la giong nhau
}
