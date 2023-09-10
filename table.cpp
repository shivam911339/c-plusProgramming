#include<iostream>
using namespace std;
int main()
{
	cout<<"Welcome to table programm"<<endl;
	int a;
	cout<<"Which table you want to perform.";
	cin>>a;
	for(int i=a;i<=a*10;i+=a)
	{
		cout<<i<<endl;
	}
	return 0;
}
