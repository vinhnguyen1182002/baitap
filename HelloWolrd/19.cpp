#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	bool b = true;
	cout << "Nhap vao 3 so ";
	cin >> x >> y >> z;
	if(x >y && y>z || x<y && y<z)
	{
		return b;
	}
	else {
		return 0;
	}
	
	
}
