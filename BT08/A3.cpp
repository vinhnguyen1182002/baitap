#include <iostream>
#include<conio.h>
using namespace std;

void swap_pointers(char **x, char **y)
{
  char *temp = *x;
  *x = *y;
  *y = temp;
} 

int main()
{
 char *a = "I should print second";
 char *b = "I should print first";
 //char *s1 = a;
 //char *s2 = b;
 swap_pointers(&a,&b);
 cout << "s1 is " << a << endl;
 cout << "s2 is " << b << endl;
 return 0;
}
