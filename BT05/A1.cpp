#include <iostream>
using namespace std;
int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++)
	{
        cout << (void*)&a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
	{
        cout << (void*)&b[i] << " ";
    }
    cout << endl;
    a[0] = 11;
    b[0] = 8;
    for (int i = 0; i < 3; i++)
	{
        cout << (void*)&a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
	{
        cout << (void*)&b[i] << " ";
    }
    
    return 0;
    // Dia chi truoc va sau khi khai bao them giong nhau
    // Ket qua khong co gi thay doi
}
