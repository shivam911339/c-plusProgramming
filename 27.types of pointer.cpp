//dangling pointer
/*#include<iostream>
using namespace std;
int main()
{

    int *p;
    {
        int x=20;
        p=&x;
        cout<<*p<<endl;
    }
    cout<<*p<<endl;
}
*/

#include<iostream>
using namespace std;
int  main()
{

    void *a;
    float x=23.39;
    a=&x;
    cout<<*(float*)a<<endl;
    char name ='w';
    a=&name;
    cout<<*(char*)a;
}
