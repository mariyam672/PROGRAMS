#include<iostream>
using namespace std;
int main()
{
	int pin=5624;
    int	input_pin=0;
    int warnings=0;
    do{
    	cout<<"pin";
    	cin>>input_pin;
    	if(input_pin==pin)
		{
		cout<<"successfully logged in"<<endl;
		}	
		else
		{
	    warnings++;
		cout<<"try again"<<endl;
	}
		}
		while(warnings<=3&&input_pin!=pin);
		if(warnings>=3)
		{
		cout<<"your account has been blocked!"<<endl;
		}
		}
			
		
		
		
	

