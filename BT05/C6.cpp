#include <iostream>
#include <algorithm>
using namespace std;
int UCLL(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a*b != 0){
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b; 
}
int main()
{
	int a, b;
	cin>>a>>b;
	if(UCLL(a,b)==1)
	{
		cout<<"Hai so nguyen to cung nhau";
	}
	else
	{
		cout<<"Hai so khong nguyen to cung nhau va UCLL cua 2 so la: "<<UCLL(a,b);
	}
	
}
