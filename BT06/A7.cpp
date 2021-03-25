#include <iostream>
using namespace std;
int mark[100] = {0};
int arr[100];
void release(int n) {
    for (int i = 1; i <= n; i++)
    cout << arr[i];
    cout << endl;
}
void test(int k,int n) 
{
    for (int i = 1; i <= n; i++) 
	{
        if (!mark[i]) 
		{
            arr[k] = i; 
            mark[i] = 1;
            if (k == n)
                release(n);
            else
                test(k + 1,n);
            mark[i] = 0;
        }
    }
}
int main() 
{
	int n;
    cout << "Nhap n: ";
    cin >> n;
    test(1,n);
}
