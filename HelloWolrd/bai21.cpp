#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap do dai 3 canh:";
	cin >> a>>b>>c;
	double s;
	double area;
	s = (double)(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "Dien tich cua tam giac la: " << area;
}
