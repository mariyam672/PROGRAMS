#include<iostream>
using namespace std;
void swap(int &,int&);
int main()
{
	int n1=10; int n2=20;
	cout<<"before swaping \n";
	cout<<n1<<"\t"<<n2<<endl;
	swap(n1,n2);
	cout<<"after swaping \n";
	cout<<n1<<"\t"<<n2<<endl;
}
void swap( int&x,int&y)
{
	int z;
	z=x;
	x=y;
	y=z;
}
