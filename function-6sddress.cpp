#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<"Enter the second value: ";
	cin>>b;
	swap(&a,&b);
	cout<<a<<" "<<b;
}
