#include<iostream>
using namespace std;
struct Point{
	double x;
	double y;
	void getInformation(){
		cin>>x>>y;
	}
	void display(){
		cout<<"("<<x<<","<<y<<")";
	}
};
int main()
{
	Point p;
	p.getInformation();
	p.display();
	return 0;
}
