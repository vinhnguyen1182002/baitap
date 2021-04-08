#include<iostream>
using namespace std;
int count_even(int* f,int n)
{
	int count = 0;
	for(int i = 1;i<=n;i++)
	{
		if(f[i]%2==0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
     int n;
     cin>>n;
     int* f = new int[n+1];
     for(int i = 1;i<=n;i++)
     {
     	cin>>f[i];
	 }
	 n = 5;
	 cout<<"5 phan tu dau: "<<count_even(f,n);
}
