#include<iostream>
using namespace std;
class Rectangle
{
	private:
	int lenght;
	int breadth;
	public:
	int setLenght(int lenght)
	{
		if(lenght>=0){
			this->lenght=lenght;
		}
		else
			cout<<"Enter the valid breadth..";	
	}
	int setBreadth(int breadth)
	{
		if(breadth>=0)
		{
			this->breadth=breadth;	
		}
		else
			cout<<"Enter valid breadth...";
	}
	
	Rectangle(int lenght=0,int breadth=0)
	{
		setLenght(lenght);
		setBreadth(breadth);
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

	Rectangle r1(10,5);
	cout<<r1.area()<<endl;
}
