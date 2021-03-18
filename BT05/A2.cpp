#include <iostream>
using namespace std;
long long factorial(int x)
{
    if (x == 1) return 1;
    else
    {
        cout << x << "! = " << x * factorial(x - 1) << " at: " << &x << endl;
        return x * factorial(x - 1);
    }
}
int main()
{
    int x = 5;
    factorial(x);
    return 0;
    // Cac gia tri duoc luu o gan nhau
}
