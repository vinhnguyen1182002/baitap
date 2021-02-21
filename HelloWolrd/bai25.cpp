#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i = 1; i<=5;i++)
    {
    	cout<<"Nhap vao a[" << i <<"]:";
    	cin>>a[i];
	}
	int tmp;
	for(int i = 1; i<=4;i++)
	{
		for(int j = i+1;j<=5;j++)
		{
			if(a[i]>a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			
		}
		
	}
	cout << "So trung vi la: " << a[3];
}
