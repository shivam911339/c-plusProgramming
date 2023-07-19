#include<iostream>
using namespace std;
//typedef float Basic_Salary,Percentage_Allowances,Pecentage_deduction,Net_Salary;
int main()
{
	float Basic_Salary;
	cout<<"Enter BS: ";
	cin>>Basic_Salary;
	float Percentage_Allowances;
	cout<<"Enter PA: ";
	cin>>Percentage_Allowances;
	float Percentage_deduction;
	cout<<"Enter PD: ";
	cin>>Percentage_deduction;
	float Net_Salary=Basic_Salary+Basic_Salary*Percentage_Allowances/100-Basic_Salary*Percentage_deduction/100;
	cout<<"Your Net salary is: "<<Net_Salary;
	return 0;
}
