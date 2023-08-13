#include<iostream>
using namespace std;
int main()
{
	int A[3][4];
	int B[3][4];
	int c[3][4];
	cout<<"Enter the 12 value for matrix-1: ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"Enter the 12 value for Matrix-2: ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>B[i][j];			
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			c[i][j]=(A[i])*(B[j]);
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
