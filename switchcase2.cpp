#include<iostream>
using namespace std;
int main()
{
	cout<<"Menu"<<endl;
	cout<<"1.Add "<<"2.Sub "<<"3.Mult "<<"4.div"<<endl;
	int option;
	cout<<"Enter your option: ";
	cin>>option;
	float a,b,c;
	cout<<"Enter two number for performing operation: ";
	cin>>a>>b;
	switch(option)
	{
		case 1:
			c=a+b;
			cout<<"You choose addition so the answer is: "<<c;
			break;
		case 2:
			c=a-b;
			cout<<"You choose Subtraction so the answer is: "<<c;
			break;
		case 3:
			c=a*b;
			cout<<"You choose Multiplication so the answer is "<<c;
			break;
		case 4:
			c=a/b;
			cout<<"You choose Divide so the answer is "<<c;
			break;
		default:
			cout<<"Please choose from given optio.Go and run agin the program.";				
				
	}
	
	
}
