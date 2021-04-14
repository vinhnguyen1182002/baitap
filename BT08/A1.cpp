#include<iostream>
using namespace std;
void f(int xval)
{
 int x;
  x = xval;
  cout<<&x<<endl;
}
void g(int yval)
{
 int y;
 cout<<&y<<endl;
}
int main()
{
 f(7);
 g(11);
 return 0;
}
//dia chi cua x va y giong nhau,do ca 2 deu dc truyen tham so tu ham main
