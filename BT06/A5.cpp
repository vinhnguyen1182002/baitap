#include<iostream>
using namespace std;
long F(int n)
 {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<F(n)<<endl;
	int a[n];
	a[0] = 1;
	a[1] = 1;
	for(int i = 2;i<n;i++)
	{
		a[i] = a[i-1] + a[i-2];
    }
	cout<<a[n];
	return 0;
}
//vong lap bat dau khac 0 khi n = 6
