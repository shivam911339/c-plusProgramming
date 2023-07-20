#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c;
	float r1;
	float r2;
	cout<<"Enter three number for finding roots: ";
	cin>>a>>b>>c;
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<r1<<" "<<r2;	
	return 0;
	
}
