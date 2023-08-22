#include<iostream>
using namespace std;
int max(int x,int y=0,int z=0)
{
	if(x>y && x>z)
	{
		return x;
	}
	else
		{
			if(y>x && y>>z)
				return y;
			else
				return z;	
		}
		
}
int main()
{
	cout<<max(2)<<endl;
	cout<<max(2,3)<<endl;
	cout<<max(2,4,5)<<endl;
	return 0;
}
