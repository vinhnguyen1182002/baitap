#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b;
	int max;
	cout <<"Nhap vao 2 so nguyen a,b: ";
	cin>>a>>b;
	max = (int)(abs(a-b)+abs(a+b))/2;
	cout<<"So lon nhat trong 2 so la: " << max;
}
