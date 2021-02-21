#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"Nhap 2 so x,y: ";
	cin>>x>>y;
	if (x == 0 || y == 0){
        return x + y;
    }
    while (x != y){
        if (x > y){
            x -= y; 
        }else{
            y -= x;
        }
    }
    cout<<"Uoc chung lon nhat cua 2 so x,y la: "<<x;
}

