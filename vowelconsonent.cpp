#include<iostream>
using namespace std;
int main()
{
	cout<<"Welcome to vowel consonent programm!"<<endl;
	char a;
	cout<<"Enter the character: ";
	cin>>a;
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"Vowel";
	}
	else
		cout<<"Consonent";
	
}
