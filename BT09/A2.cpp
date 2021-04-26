#include<iostream>
using namespace std;
int main()
{
	int* p = new int;
    int* p2 = p;
 	*p = 10;
    delete p;//p2 va p dang tro vao 1 vi tri,giai phong p lam mat gia tri dan den khong in ra duoc ket qua mong muon
    cout << *p2;
    delete p2;
}
