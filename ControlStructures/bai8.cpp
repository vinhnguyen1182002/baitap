#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	float x, x1, x2;
	float denta;
	cin>>a>>b>>c;
	denta = b*b - 4*a*c;
	if(denta>0)
	{
		cout<<"Phuong trinh co 2 nghiem phan biet x1 va x2"<<endl;
		x1 = (int)(-b+sqrt(denta))/(2*a);
		x2 = (int)(-b-sqrt(denta))/(2*a);
		cout<<"x1 = " << x1 <<endl << "x2 = " << x2 << endl;
	}
	if(denta = 0)
	{
		cout<<"Phuong trinh co nghiem kep x";
		x = -(int)b/(2*a);
		cout<<" = " <<x;
	}
	if(denta < 0)
	{
		cout<<"Phuong trinh co 2 nghiem phuc z1 va z2";
	}
}
