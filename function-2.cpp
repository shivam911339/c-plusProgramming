#include<iostream>
using namespace std;
int add(int x,int y)
{
	int z=x+y;
	return z;
}

int add(int x,int y,int a)
{
	int k;
	k=x+y+a;
	return k;
}

float add(float x,float y)
{
	float p=x+y;
	return p;
}

int main()
{
	int m,n;
	float o;
	m=add(6,7);
	cout<<m<<endl;
	n=add(6,7,8);
	cout<<n<<endl;
	o=add(1.2f,3.2f);
	cout<<o<<endl;
	
	return 0;
}
