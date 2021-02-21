#include<iostream>
using namespace std;
int main()
{
	double f, c, as;
	cout<<"Fahrenheit   	Celsius  	Absolute Value"<<endl;
    cin>>f;
	c = (double)(f-32)*5/9;
	as = c + 273.15;
	cout<<"         	 "<<c<<"        	"<<as;
}
