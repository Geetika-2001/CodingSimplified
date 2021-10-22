#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any number "<<endl;
    cin>>a;
    for(b=2;a>1;)
    {
        if(a%b==0)
        {
            cout<<b<<" ";
            a=a/b;
        }
        else
        {
            b++;
        }
    }
    return 0;
}