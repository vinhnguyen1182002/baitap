#include<iostream>
using namespace std;
void reverse(char a[]) 
{
	int length = 0;

	while(a[length] != '\0' )
	{
		length++;
	}
	cout<<length<<endl;
		char* s = new char[length+1];
	for(int i = 1;i<=length;i++)
	{
		  *(s + i) = a[length - i];
	}
	for(int i = 1;i<=length;i++)
	
		cout<<*(s+i);
		cout<<endl;
		
}
void delete_char(char a[], char c)
{
	int length = 0;
	while(a[length] != '\0')
	{
		length++;
	}
	for(int i = 0;i<length;i++)
	{
		if(a[i] == c)
		{
			a[i] = '\0';
			cout<<a[i];
		}
		else if(a[i]!=c)
		{
			cout<<a[i];
		}
	}
}
void pad_right(char a[], int n)
{
	int length = 0;
	while(a[length] != '\0')
	{
		length++;
	}
	if(length<n)
	{
		for(int i = length;i<=n;i++)
		
			a[i] = '-';
			a[n] = '\0';
		
	}
	for(int i = 0;i<n;i++)
	{
		cout<<a[i];
	}
}
void pad_left(char a[], int n)
{
	int length = 0;
	while(a[length] != '\0')
	{
		length++;
	}
	if(length<n)
	{
		int b = n - length;
		for(int i = 0 ;i<length;i++)
		{
			a[i] = a[i+b];
		}
		for(int i = 0;i<b;i++)
		{
			a[i]='-';
		}
		for(int i = 0;i<n;i++)
		
			cout<<a[i];
			cout<<endl;
		
	}
}
void truncate(char a[], int n)
{
	int length = 0;
	while(a[length] != '\0')
	{
		length++;
	}
	if(length>n)
	{
		for(int i = 0;i<n;i++)
		
	    	cout<<a[i];
		cout<<endl;
	}
}
bool is_palindrome(char a[]) 
{
	int length = 0;
	while(a[length] != '\0')
	{
		length++;
	}
	for (int i=0; i<=length/2; i++)
        if (a[i]!=a[length-i-1])
            return 0;
    return 1;
}
int main()
{
	char a[100];
	cin>>a;
	reverse(a);
	char c;
	cin>>c;
	delete_char(a, c);
	int n;
	cin>>n;
	pad_right(a,n);
	cin>>a>>n;
    pad_left(a, n);
    cin>>a>>n;
    truncate(a,n);
    cin>>a;
    if (is_palindrome(a))
        cout << "La xau doi xung";
    else
        cout << "ko la xau doi xung";
}
