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
	
	Rectangle(int l=0,int b=0)
	{
		setLenght(l);
		setBreadth(b);
	}
	
	Rectangle(Rectangle &rec)
	{
		lenght=rec.lenght;
		breadth=rec.breadth;
	}
	
	int getLenght()
	{
		return lenght;
	}
	
	int getBreadth()
	{
		return breadth;
	}
	
	int area();
	int perimeter();
		
	
};
int Rectangle::area()
{
	return lenght*breadth;
}
int Rectangle::perimeter()
{
	return 2*(lenght+breadth);
}
int main()
{	

	Rectangle r1(10,5);
	Rectangle r2(r1);
	cout<<r2.area()<<endl;
	
};
