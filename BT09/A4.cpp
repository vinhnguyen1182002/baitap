#include<iostream>
using namespace std;
int main()
{
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p;//loi do giai phong du lieu cua p dan den du lieu cua p2 cung bi giai phong
	cout << *p2;
    delete p2;
}
