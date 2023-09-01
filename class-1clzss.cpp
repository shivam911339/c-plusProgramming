#include<iostream>
using namespace std;
class demo
{
public:
int a,b;
void ip()
{
a=9;
b=7;
}
void show()
{
cout<<a<<" "<<b<<endl;
}
}d;
int main()
{
//demo d;//another way of creating object
d.ip();//public so accessible in main
d.show();//same
d.a=90;//same
d.b=89;//same
d.show();//same
return 0;
}
