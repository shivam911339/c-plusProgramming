#include<iostream>
using namespace std;
template<class T>

T max(T x, T y)
{
	if(x>y)
	{
		return x;
	}
	else
		return y;	
}

void main()
{
	cout<<max(2,3)<<endl;
	cout<<max(2.1f,3.2f)<<endl;
		
}
