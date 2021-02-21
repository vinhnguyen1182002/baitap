#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a:";
	cin>> a;
	cout <<"Nhap b:";
	cin>> b;
	if(a % 7==0 && b%7==0)
	{
		cout <<"true";
	}
	else{
		cout <<"false";
	}
}
