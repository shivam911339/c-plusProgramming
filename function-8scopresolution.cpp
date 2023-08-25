#include<iostream>
using namespace std;

int a=50;

void val()
{
	cout<<a<<endl;
	int a=10;
	cout<<a<<endl;
}

int main()
{
	int a=60;
	cout<<a<<endl;
	val();
	cout<<::a<<endl;
	
}
