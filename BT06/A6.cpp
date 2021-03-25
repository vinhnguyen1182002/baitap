#include <iostream>
using namespace std;
int a;
void array(int n)
{
    int arr[1000];
    a++;
    cout << a << endl;
    array(n);
}
int main()
{
    a = 0;
    int n;
    cin >> n;
    array(n);
    return 0;
}
//Voi n bat ki Mang 1000 phan tu sau khi de quy 511 lan thi tran 
