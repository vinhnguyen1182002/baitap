#include<iostream>
using namespace std;
int main(){
    int n;
    int sotachra;
    int s = 0;
    cout<<"Nhap n: ";
    cin>>n;
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    cout<<"Tong cac chu so bang: "<<s;
}
