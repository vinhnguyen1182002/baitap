#include <iostream>
using namespace std;
int main()
{
	int val,n;
	cin >> val >> n;
	int a[n];
	for (int i = 0;i < n;i++)
	{
	 cin >> a[i];
   }
	if (val < a[0] || val > a[n - 1]) 
	{
		cout << "Not found";
		return 1;
	}
	else 
	{
		int begin = 0,end = n - 1;
		int pos = -1;
		while (1>0)
		{
			
			if (pos == (begin + end)/2) 
			break;
			pos = (begin + end)/2;
			if (val == a[pos]) 
			break;
			else if (val < a[pos]) {	
			end = pos;
		}
			else if 
			(val > a[pos]) 
			{
			begin = pos;
		}
		if (val == a[pos]) 
		{
			begin = pos;
			end = pos;
			while (a[begin - 1] == val) 
			begin--;
			while (a[end + 1] == val) 
			end++;
			for (int i = begin;i <= end;i++) 
			{
			cout << i << " ";
		    }
		}
		else cout << "Not found";
	}
	return 0;
}}
