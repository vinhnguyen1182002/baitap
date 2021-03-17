#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int k = rand()%100 + 1;
	int n = rand()%3000 + 1;
	int a[n];
	for (int i = 0;i < n;i++) a[i] = rand()%100 + 1;
	cout << k << " " << n << endl;
	for (int i = 0;i < n;i++) cout << a[i] << " ";
	return 0;
}
