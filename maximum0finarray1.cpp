#include<iostream>
using namespace std;
int main()
{
	int A[]={1,2,3,4,5,67,8};
	for(int i=0;i<9;i++)
	{
		int max=A[0];
		if(A[i]>max){
			max=A[i];
		}
		
	}
	cout<<"The max in array is "<<max;
	
}
