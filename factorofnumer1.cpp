#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<"It is factor of "<<i<<endl;
		}
		else 
			cout<<"It is not factor of "<<i<<endl;
	}
}
