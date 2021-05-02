#include"Fraction.h"
using namespace std;
int Fraction::print(){
	cout<<numerator <<"/"<<denominator<<endl ;
	return 0;
}
int Fraction::add(int x1, int x2){
	return x1 + x2;
}
int Fraction::subtract(int x1, int x2){
	return x1 - x2;
}
int Fraction::multi(int x1, int x2){
	return x1 * x2;
}
int main()
{
	int x1 = 2;
	int x2 = 3;
	Fraction f(1,2);
	f.print();
	cout<<f.add(x1,x2)<<endl;
	cout<<f.subtract(x1,x2)<<endl;
	cout<<f.multi(x1,x2)<<endl;
	return 0;
}



