#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
	cout<<"Enter a number: ";
	cin>>a>>b;
	if(b==0)
	{
		cout<<"Are you mad!"<<endl;
	}
	else{
		c=a/b;
		cout<<(float)c;
	}
}
