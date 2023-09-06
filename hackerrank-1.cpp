
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    string arr[]={"zero","one","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++)
    {
        if(i>=0 && i<=9)
            cout<<arr[i]<<endl;
        else
            cout << ((i% 2 == 0) ? "even" : "odd") << endl;
    }
    return 0;
}
