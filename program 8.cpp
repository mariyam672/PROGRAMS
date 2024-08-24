#include <iostream>
using namespace std;
void modify(int []);
int main()
{ 
int arr[]={5,10,5,10,5};
modify(arr);
for(int i=0; i<5;i++)
cout<<arr[i]<<" ";
}
void modify(int x[])
{ 
for ( int i=0;i<5;i++)
x[i]=x[i]*2;
}
