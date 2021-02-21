#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Nhap vao 3 canh: ";
	cin>>a>>b>>c;
	if(a<b+c && b<a+c && c<a+b)
	{
		if(a==b&&a==c)
		{
			cout<<"Tam giac can chu vi: " << a*3;
		}
		if(a==b && a!=c || a==c && a!=b || b==c && b!=a)
		{
			cout<<"Tam giac can co chu vi bang: " << a+b+c;
		}
		if(a*a==b*b + c*c || b*b==a*a + c*c || c*c == a*a + b*b)
		{
			cout<<"Tam giac vuong co chu vi bang : "<< a+b+c;
		}
		else{
			cout<<"Tam giac thuong co chu vi bang: "<< a+b+c;
		}	
		}
		else{
			cout<<"Khong phai la tam giac";
		}
	}

