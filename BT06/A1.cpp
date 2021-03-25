#include<iostream>
using namespace std;
void mang(int f[])
{
	cout<<&f[0];
}
int main()
{
	int a[100];
	cout<<&a[0]<<endl;
	mang(a);
	return 0;
	
}
