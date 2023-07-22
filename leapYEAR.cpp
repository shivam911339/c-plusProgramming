#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year! ";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<<year<<" It is a leap year!";
			}
			else
				cout<<year<<" It is not leap year!";
	
		}
		else
		{
			cout<<"it is leap year!";
		}
	}
}
	

