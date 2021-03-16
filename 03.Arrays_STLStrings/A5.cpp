#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int s[100];
	for(int i = 0;i<30;i++)
	{
		s[i]= rand()%100 + 1;
		cout<<s[i]<<" ";
	}
    int sort;
    for(int i = 0;i<29;i++)
    {
       for(int j = i+1;j<30;j++)
       {
       	if(s[i]>s[j])
       	{
       		sort = s[i];
       		s[i] = s[j];
       		s[j] = sort;
		   }
	   }
	}
	for(int i = 0;i<30;i++){
	cout<<s[i]<<" ";
}
}

