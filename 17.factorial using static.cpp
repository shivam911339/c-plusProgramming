#include<iostream>
using namespace std;
class mem
{
    int a;
    static int factorial;
public:
    void in();
    void out();
};
void mem::in()
    {
        cout<<"enter the number for factorial: ";
        cin>>factorial;
    }
void mem::out()
{
    for(int i=0;i<a;i++)
        factorial=i*i;
}
int main()
{
   mem fac1();
   fac1::in();
   fac1::out();

return 0;
}

