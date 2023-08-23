#include<iostream>
using namespace std;
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<x<<" "<<y<<endl;
}

int main()
{
	int a,b;
	cout<<"enter the number: ";
	cin>>a;
	cout<<"enter the second number: ";
	cin>>b;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}
