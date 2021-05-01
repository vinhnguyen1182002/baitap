#include<iostream>
using namespace std;
struct Point{

	
	void case1(int n)
	{
		cout<<"case 1 address: "<<&n<<"  "<<n<<endl;
	}
	void case2(int &n){
		cout<<"case 2 address: "<<&n<<"  "<<n<<endl;
	}
};
int main()
{
	int n;
	cin>>n;
	Point p;
	p.case1(n);
	p.case2(n);
	return 0;
}

