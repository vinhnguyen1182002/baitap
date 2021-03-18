#include <iostream>
using namespace std;
void Mang(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
	 cout << &arr[i] << " ";
    }
}
void Chuoi(string s)
{
    cout << &s << endl;
}
int main()
{
    int arr[3] = {1,2,3};
    for (int i = 0; i < 3; i++)
    {
	cout << &arr[i] << " ";
    }
    cout<<endl;
    Mang(arr);
    string s;
    cout << &s << endl;
    Chuoi(s);
    return 0;
    // Mang duoc truyen theo co che  pass-by-value
    // Chuoi duoc truyen theo co che pass-by-reference
}
