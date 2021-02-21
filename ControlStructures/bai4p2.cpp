#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b, lcm;
    cout<<"Nhap 2 so a,b: ";
    cin>>a>>b;
    int maxV = a*b;
    int step = std::max(a, b);
    for(int i = step; i <= maxV; i+= step){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    cout<<"Boi chung nho nhat cua 2 so a va b la: "<< lcm;
}
