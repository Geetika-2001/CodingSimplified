#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cout<<"Enter a number to find its factorial "<<endl;
    cin>>a;
    cout<<"1";
    for(int i=2;i<=a;i++)
    {
        fact=fact*i;
        cout<<"*"<<i;
    }
    cout<<"="<<fact<<endl;
    return 0;
}