#include<iostream>
using namespace std;
int search(int* p, int n, int x)
{
  for (int i = 0; i < n; i++)
    if (p[i]== x) 
      return i;
  return -1;
}
 
int main() 
{
  int* p = new int[n+1]; 
  int n = sizeof(p) / sizeof(p[0]);
  int x = 10;
  int result = search(*p, n, x);
  if (result != -1) {
   cout<<x<<" xuat hien tai chi so: "<< result);
  } else {
   cout<<x<<" khong co trong mang";
  }
  return 0;
