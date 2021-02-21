#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int count = 0;
	if(n<2)
	{
		cout<<"No";
		return 0;
	}
	for(int i = 2; i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
	

	
	
}
