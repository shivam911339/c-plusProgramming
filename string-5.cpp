#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char A[20]="Good";
	char B[30]="Morning";
//	strcat(A,B);
	strncat(A,B,3);
	cout<<A;
}
