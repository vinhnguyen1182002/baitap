#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1 , x2, y1, y2;
	double distance;
	cout <<"Nhap x1 va y1 :";
	cin >> x1 >> y1;
	cout << "Nhap x2 va y2:";
	cin >> x2 >> y2;
	distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout << "Khoang cach giua 2 diem la: "<< distance;
}
