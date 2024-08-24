#include<iostream>
using namespace std;
long factorial(int);
int main()
{
	cout<<factorial(5);
	return 0;
}
long factorial(int n)
{
	if (n==0)
	return 1;
	else
	return n*factorial(n-1);
}

