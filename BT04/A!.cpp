#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));

	int a[20];
	cout<<"Phan a: "; //a
	for(int i=0;i<20;i++){
		a[i]=rand() % (20-0+1) - 0;
	}
	for(int i=0;i<19;i++){
		for(int j = i+1;j<20;j++){
		if(a[i]>a[j])
		{
			int sx = a[i];
			a[i] = a[j];
			a[j] = sx;
			}	
		}
	for(int i=0;i<20;i++){
        cout << a[i] << " ";
	}

	int b;
		cout<<"Phan c: "; //c
	b=rand() % (100-0+1);
	cout << b<<endl;
	
	int d[100]; //d
		cout<<"Phan d: ";
	for(int i=0;i<100;i++){
		d[i]=rand() % (100-0+1) - 0;
	}
    for(int i=0;i<100;i++){
        cout << d[i] << " ";
    }
//e
	cout<<"Phan e: ";
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(d[i]>d[j])
			{
				int temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)
	cout << d[i] << " ";

//f
	cout<<"Phan f: ";
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++)
		{
			if(d[i]<d[j])
			{
				int temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(int i=0;i<100;i++){
	
	cout << d[i] << " ";
}}}
