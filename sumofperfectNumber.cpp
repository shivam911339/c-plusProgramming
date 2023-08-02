#include<iostream>
using namespace std;
int main()
{
	int num,sum,i;
	num=0;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;	
		}
	}
	if(2*num==sum)
	{
		cout<<"Perfect number."<<sum;
	}
	else
		cout<<"Not perfect number = "<<sum;
}
