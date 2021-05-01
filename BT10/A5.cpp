#include<iostream>
using namespace std;
struct Point1{
	int arr1[100];
};
struct Point2{
	int *arr2 = new int[101];
};
int main()
{
	Point1 p1;
	Point2 p2;
	p2.arr2 = p1.arr1;
	cout<<p1.arr1<<endl<<p2.arr2;
}

