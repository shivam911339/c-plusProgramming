#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the table number you want to revesre: "<<endl;
	cin>>a;
	for(int i=10*a;i>=a;i-=a)
	{
		cout<<i<<endl;
	}
	return 0;
}
