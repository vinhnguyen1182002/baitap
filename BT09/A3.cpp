#include<iostream>
using namespace std;
int main()
{
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a';
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
//ham cerr thu 3 khong chay duoc do sau khi giai phong giu lieu cua c thi giu lieu cua a cung bi giai phong dan den ham cerr ko chay 
