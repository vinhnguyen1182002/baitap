#include<iostream>
using namespace std;
int main( )
{
 double a[4] = {1,2,3,4};
 for (double *cp = a; (*cp) != '\0'; cp+=2) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}
/*  kieu int kich thuoc lan luot la:
0x6ffdf0 : 1
0x6ffdf4 : 2
0x6ffdf8 : 3
0x6ffdfc : 4
   kieu double co kich thuoc la: 
0x6ffde0 : 1
0x6ffde8 : 2
0x6ffdf0 : 3
0x6ffdf8 : 4
   ket qua khi chay phan C:
0x6ffde0 : 1
0x6ffdf0 : 3
   */
