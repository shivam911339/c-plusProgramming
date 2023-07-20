#include<iostream>
using namespace std;
int main()
{
	int days;
	cout<<"Enter a number: ";
	cin>>days;
	switch(days)
	{
		case 1:
			cout<<"mon";
			break;
		case 2:
			cout<<"tue";
			break;
		case 3:
			cout<<"wed";
			break;
		case 4:
			cout<<"thu";
			break;
		case 5:
			cout<<"fri";
			break;
		case 6:
			cout<<"sat";\
		case 7:
			cout<<"sun";
		default:
			cout<<"Invalid number."	;					
	}
}
