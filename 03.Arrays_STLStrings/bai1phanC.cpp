#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	double tb;
	int tong = 0;
	double ps = 0;
	double phuongsai;
	for(int i = 1;i<=n;i++)
	{
		cout<<"Nhap phan tu a["<<i<<"]: ";
		cin>>a[i];
		tong += a[i];
		tb = (double)tong/n;
	}
	cout<<"Gia tri trung binh cua day so la : "<<tb<<endl;
	for(int i = 1;i<=n;i++)
	{	
	  ps += (a[i] - tb)*(a[i] - tb);
	  phuongsai = sqrt(ps/(n-1));

    }
	cout<<"Phuong sai cua day so la : "<<phuongsai;
}
