#include<iostream>
using namespace std;
int main()
{
	int A[5],i;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the value ";
		cin>>A[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	for(i=0;i<=5;i++)
	{
		if(num==A[i])
		{
			cout<<"The position is "<<i+1;
		return 0;	
		}
	}
	cout<<"Enter valid number.";
}
