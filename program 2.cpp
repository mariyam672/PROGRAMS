#include<iostream>
using namespace std;
void alpha();
int bravo();
double charli(int n);
int  main()
{

	cout<<bravo();
}

void alpha ()
{
	cout<<"i am in alpha";
	cout<<charli(2);
}
int bravo()
{
	int n=10;
	alpha();
	return n;
}
double charli(int n)
{
	double m=3.5;
	return m*n;
}

