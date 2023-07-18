#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three number: ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"First is greater!";
	}
	else
	{
		if(b>c)
			cout<<"Second is greater!";
		else
			cout<<"Third is greater!";	
	}
	return 0;
}
