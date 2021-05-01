#include<iostream>
using namespace std;
struct Point{
	int x;
	int y;
};
Point mid_point(Point d1, Point d2)
{
	Point mid;
	mid.x = (d1.x + d2.x)/2;
	mid.y = (d1.y + d2.y)/2;
	return mid;
}
int main()
{
	Point d1;
	Point d2;
	cin>>d1.x>>d1.y>>d2.x>>d2.y;
	cout<<"Trung diem: ("<<mid_point(d1,d2).x<<","<<mid_point(d1,d2).y<<")";
	return 0;
}
