#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			count++	;
			cout<<count<<" ";		
		}
		cout<<endl;
	}
	return 0;
}

