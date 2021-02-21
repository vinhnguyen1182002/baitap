#include<iostream>
using namespace std;
int main()
{
	double weight;
	double high;
	cout << "Nhap chieu cao:";
	cin >> high;
	cout<< "Nhap can nang:";
	cin >> weight;
	double BMI;
	BMI = (double)weight /( high*high);
	cout<<"Chi so BMI cua ban la: "<<BMI;
	
}
