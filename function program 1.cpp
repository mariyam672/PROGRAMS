#include<iostream>
using namespace std;
int main()
{
	int nth;
	long sum=0,fact;
	cout<<"enter the nth term";
	cin>>nth;
	for(int i=1;i<=nth;i++)
	{
		fact=1;
		for(int j=1;j<=i;j++)
		fact=fact*j;
		sum=sum+fact;
		}
		cout<<"sum of series ="<<sum;
}

