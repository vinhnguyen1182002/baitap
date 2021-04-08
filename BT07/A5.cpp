#include<iostream>
using namespace std;
char* weird_string() 
{
  char c[] = “123345”;
 return c;
}
int main()
{
	char* c= new char[100];
	cout<<c<<endl;
	c = weird_string();
	cout<<c;
	return 0;
}
//chuong trinh bao loi o dong so 5
