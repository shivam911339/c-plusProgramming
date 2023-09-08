class student
{
	private:
	int rollNo;
	char Name[30];
	public:
	int setRoll(int r)
	{
		if(r>0)
		{
			rollNo=r;	
		}
		else
			cout<<"Enter valid rollno: ";		
	}
	int getRoll()
	{
		return rollNo;	
	}
	
	char setName(char a[30])
	{
		Name=a[30];
	}
	
	char getName()
	{
		return Name;
	}
		
	int Subject(int marks1,int marks2,int marks3)
	{
		int total;
		total=marks1+marks2+marks3; 
		if(total<=30)
		{
			return "Your Grade is C."<<endl;	
		}
		else if(total>30 && total<=45)
			return "Your Grade is b."<<endl;
		else
			return "Your Grade is A."<<endl;		
	}	
		
};
int main()
{
	student s;
	s.setRoll(12);
	s.setName("Shivam");
	cout<<s.getRoll<<end;
	cout<<s.getName<<endl;
	cout<<s.subject(30,40,50);

	
}
