#include<iostream>
using namespace std;
struct Point{
	int x;
	int y;
};
int main()
{
	Point p;
	cout<<&p<<endl<<&p.x<<endl<<&p.y;
	//x duoc luu cung vi tri voi dia chi cua p
}
