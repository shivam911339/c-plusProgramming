#include<iostream>
using namespace std;
int main()
{
	int A[]={1,2,3,4,5,6,7,8,9};
	int sum=0;
	for(int i=0;i<9;i++)
	{
		sum=sum+A[i];
	}
	cout<<"Sum is "<<sum;
}
