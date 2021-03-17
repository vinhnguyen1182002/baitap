#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int doc;
	for (int i = 0;i < n;i++) 
	{
		cin >> doc;
		if (k == doc) cout << i + 1 << " ";
	}
	return 0;	
}
