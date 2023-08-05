#include<iostream>
using namespace std;
int main()
{
	int n,m,r=0;
	cout<<"Enter the first number: ";
	cin>>n;
	cout<<"Enter the second number: ";
	cin>>m;
	while(m!=n)
	{
		if(m>n)
		{
			m=m-n;
		}
		else
			n=n-m;
	}
	cout<<m;

}
