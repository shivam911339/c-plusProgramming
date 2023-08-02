#include<iostream>
using namespace std;
int main()
{
	int num,fac,i;
	fac=1;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fac=fac*i;
		
	}
	cout<<"the factorial is: "<<fac;	
}
