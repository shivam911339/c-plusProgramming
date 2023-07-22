#include<iostream>
using namespace std;
int main()
{
	cout<<"MAHA OFFER PAY KAPADA BILKOOL SASTA!!!"<<endl;
	float billAmount;
	float discount=0.0;
	cout<<"Enter a billAount: ";
	cin>>billAmount;
	if(billAmount>=500)
		discount=billAmount*20/100;     
	else if(billAmount>=100 && billAmount<500)
		discount=billAmount*10/100;
	else
		discount=0;
	cout<<"BillAmount is: "<<billAmount<<endl;
	cout<<"Discount is: "<<discount<<endl;
	cout<<"Discounted amount is: "<<billAmount-discount<<endl;	
}
