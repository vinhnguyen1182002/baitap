#include<iostream>
using namespace std;
int sobenhat(int a[],int n)
{
	int min = a[0];
	for(int i = 0;i<n;i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int solonnhat(int a[],int n)
{
	int max = a[0];
	for(int i = 0;i<n;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int tongchan(int a[],int n)
{
	int sum = 0;
	for(int i = 0;i<n;i++)
    {
    	if(a[i]%2==0)
    	{
    		sum += a[i];
		}
	}
	return sum;
}
int countle(int a[],int n)
{
	int count = 0;
	for(int i = 0;i<n;i++)
     {
     	if(a[i]%2==1)
     	{
     		count++;
		 }
	 }
	 return count;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cout<<"Nhap phan tu a["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"So lon nhat trong day la: "<<solonnhat(a,n)<<endl;
	cout<<"So nho nhat trong day la: "<<sobenhat(a,n)<<endl;
	cout<<"Tong cac so chan trong day la: "<<tongchan(a,n)<<endl;
	cout<<"So cac so le trong day la: "<<countle(a,n)<<endl;
}
