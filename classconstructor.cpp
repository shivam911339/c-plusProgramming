#include<iostream>
using namespace std;
class Rectangle
{
	private:
	int lenght;
	int breadth;
	public:
	int setLenght(int l)
	{
		if(l>=0){
			lenght=l;
		}
		else
			cout<<"Enter the valid breadth..";	
	}
	int setBreadth(int b)
	{
		if(b>=0)
		{
			breadth=b;	
		}
		else
			cout<<"Enter valid breadth...";
	}
	
	int getLenght()
	{
		return lenght;
	}
	
	int getBreadth()
	{
		return breadth;
	}
	
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
	Rectangle r;
	r.setLenght(10);
	r.setBreadth(5);
	cout<<r.area()<<endl;
	cout<<r.perimeter()<<endl;
}
