#include<iostream>
using namespace std;
typedef float marks;
int main()
{
	marks m1,m2,m3;
	float average;
	cout<<"Enter three grade: ";
	cin>>m1>>m2>>m3;
	average=(m1+m2+m3)/3;
	if(average>=60)
	{
		cout<<"Youre grade is:"<<average<<" and you got A grade!";
	}
	else
	{
		if(average>=35 && average<60)
		{
			cout<<"Your grade is:"<<average<<" and you got B grade!";
		}
		else
			cout<<"Padh lo bhai!!!!!";
	}
	
	return 0;
	
}
