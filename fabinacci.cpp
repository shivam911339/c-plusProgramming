#include<iostream>
using namespace std;
int main()
{
	int a=0,n,nextTerm=0;
	int b=1;
	cout<<"Enter the range of fibo: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<a<<",";

		}
		if(i==2)
		{	
			cout<<b<<",";

		}
		nextTerm=a+b;
		a=b;
		b=nextTerm;
		cout<<b<<",";
		
	}
	return 0;
	
	
}
