#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	int a[n];
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n - 2;i++){
	 	for (int j = i + 1;j < n - 1;j++){
	  		if (a[i] + a[j] == 0) {
			  	cout <<"Cap so co tong bang 0 la: "<< a[i] << "  " << a[j] << endl;
			  }}}
	return 0;  
} 
