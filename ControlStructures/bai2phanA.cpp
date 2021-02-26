#include<iostream>
using namespace std;
int main()
{
	double k;
	cout<<"Nhap k: ";
	cin>>k;
	while(k>0){
        k=k/3;
        if (k<3)
            break;
    }
    cout<<"k sau khi thuc hien phep chia bang : "<<k;
    return 0;
}

