#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"nhap tu so a=";
	cin>>a;
	cout<< "nhap mau so b=";
	cin>>b;
	if(b==0) cout<< "phan so khong ton tai";
	for(i=(int)(a/2);i>1;i--)
	{
		if(a%i==0 && b%i==0)
		{
		cout<<"Phan so toi gian: "<< a/i<<"/"<<b/i;
		break;}
	}
}
