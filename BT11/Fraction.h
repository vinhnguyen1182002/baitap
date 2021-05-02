#include<iostream>
using namespace std;
class Fraction{
	public:
		const int numerator;
		const int denominator;
		Fraction(int x, int y);
		void print();
		int add(int x1, int x2);
		int subtract(int x1, int x2);
		int multi(int x1, int x2);
};
