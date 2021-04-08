#include<iostream>
using namespace std;
int f(int a[])
{
	cout<< sizeof(a);
	   return 0;

}
int main()
{
   int a[100];
   cout<< sizeof(a)<<endl;
   cout<<f(a);	
}
