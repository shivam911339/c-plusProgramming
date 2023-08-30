#include<iostream>
using namespace std;
class emp
{
    char name[20];
    int id;
    float sal;
public:
    void take()
    {
     cout<<"enter the data=: ";
     cin>>name>>id>>sal;
    }

    void process()
    {

     cout<<"the data is: "  <<endl;
     cout<<name<<endl<<id<<endl<<sal<<endl;
    }
    float salary()
    {

        return sal;
    }
};
int main()
{

    emp e[4];//array of the objects
    int i,j=0;
    float largest;
    for(i=0;i<4;i++)
    {
        e[1].take();

    }
    largest=e[0].salary();
    for(i=0;i<4;i++)
    {
        if(largest<e[i].salary())
        {
            largest=e[i].salary();
            j=i;
        }


    }
    cout<<"the details of the employe with larger salary=: ";
    e[j].process();

}
