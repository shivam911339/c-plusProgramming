#include<iostream>
#include<iomanip>
using namespace std;
void fun(float a,float b)
{
   cout<<a+b<<endl;
}
void fun(int a,float b,int c)
{
    cout<<a+b+c<<endl;
}
void fun(int a,float b,int c,int d)
{
    cout<<a+b+c+d<<endl;

}int main()
{
    fun(1,2,3,4);
    fun(11,22,33);
    fun(111,222);

    return 0;
}
