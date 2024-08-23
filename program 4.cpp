#include<iostream>
using namespace std;
void myfunc1(int&);
void myfunc2(int&);
int main()
{
    int t=10, x=30;
    myfunc1(t);
    cout<<t;
    myfunc2(x);
    cout<<x;
}
void myfunc1(int &y)
{
    y=20;
    cout<<y;
}
void myfunc2(int &y)
{
    y=20;
    cout<<y;
}

