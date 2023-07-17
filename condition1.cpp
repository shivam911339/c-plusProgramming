#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the number: ";
	cin>>x;
	cout<<"Enter the number: ";
	cin>>y;
	if(x>y)
	{
		cout<<"First is greater"<<endl;
		cout<<"Second is lesser"<<endl;
	}
	else
	{
		cout<<"Second is greater"<<endl;
		cout<<"First is lesser"<<endl;
	}
	return 0;
}
