#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout << "Nhap hoanh do x: ";
	cin >> x;
	cout << "Nhap tung do y: ";
	cin >> y;
	double distance;
	distance = sqrt(x*x+y*y);
	cout << "khoang cach tu diem (x,y) den goc toa do la: "<< distance;
}
