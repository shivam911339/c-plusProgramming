#include<iostream>
using namespace std;
int show(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

int main()
{
	int a,b,c;
	a=10;
	b=20;
	c=show(a,b);
	cout<<"The sum is "<<c;
	return 0;
}
