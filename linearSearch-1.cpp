#include<iostream>
using namespace std;
int main()
{
	int A[]={6,5,7,3,9,2,1};
	int num;
	for(int i=0;i<7;i++)
	{
		num=A[i];
		if(num==9)
		{
			cout<<i;	
		}		
	}
}
