#include<iostream>
using namespace std;
int main()
{
//	char A[100];
//	char B[100];
//	cout<<"Enter the Name: ";
//	cin.get(A,100);
//	cout<<A<<endl;
//	
//	cin.ignore();
//	cout<<"Enter the name again: ";
//	cin.get(B,100);
//	cout<<B<<endl;

	char A[100];
	char B[100];
	cout<<"Enter the Name: ";
	cin.getline(A,100);
	cout<<A<<endl;
	
	cout<<"Enter the name again: ";
	cin.getline(B,100);
	cout<<B<<endl;
	
}
