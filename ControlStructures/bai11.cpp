#include<iostream>
using namespace std;
int main()
{
	int n;
	int count = 0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i = 1; i<=n;i++)
	{
		if(n == i*i)
		{
			count++;
		}
	}
	if(count ==1)
	{
		cout<<"n la so chinh phuong";
	}
	else {
		cout<<"n khong p la so chinh phuong";
	}
}
