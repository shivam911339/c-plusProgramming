#include<iostream>
using namespace std;
class square{
	public:
	int lenght;
	int breadth;
	int area()
	{
		return lenght*breadth;
	}
	int perimeter()
	{
		return 2*(lenght+breadth);
	}
	
};

int main()
{
	square r1;
	square *p;
	p=&r1;
	p->lenght=10;
	p->breadth=20;
	cout<<p->area()<<endl;
	cout<<p->perimeter()<<endl;
		
}
