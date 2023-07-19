#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter three number: ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0)
	{
		cout<<"Real and equal"<<endl<<(-b/(2*a));
	}
	else
	{
		if(d>0){
		
			cout<<"Real and unequal"<<endl<<(-b+sqrt(b*b-4*a*c)/(2*a))<<endl;
			cout<<"Real and unequal"<<endl<<(-b-sqrt(b*b-4*a*c)/(2*a))<<endl;
		}
		else
			cout<<"Imaginary";	
	}
}
