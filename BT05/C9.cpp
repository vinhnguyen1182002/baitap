#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int x = rand()%n + 1;
	cout<<"So duoc sinh ra ngau nhien: "<<x;
}
