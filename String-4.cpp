#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	/*char A[]="Hello!";
	cout<<strlen(A)<<endl;*/
	
/*	char A[100];
	cout<<"Enter the string: ";
	cin.getline(A,100);
	cout<<strlen(A);*/
	
	
	char *p;
	cout<<"Enter the string: ";
	cin.getline(p,100);
	cout<<"Length "<<strlen(p);
	
	
}
