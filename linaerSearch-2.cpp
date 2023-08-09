#include<iostream>
using namespace std;
int main()
{
	int A[10],n=10,key;
	cout<<"Enter the array number: ";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];		
	}
	cout<<"enter a key: ";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==A[i]){
			cout<<"The position in array is "<<i;
		return 0;	
		}
				
	}
	cout<<"Data is not found!";
}
