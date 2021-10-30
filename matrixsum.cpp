#include<iostream>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],m3[3][3];
    int a,b;
    cout<<"Enter value of first matrix"<<endl;
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            cin>>m1[a][b];
        }
    }
    cout<<"Enter value of second matrix"<<endl;
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            cin>>m2[a][b];
        }
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            m3[a][b]=m1[a][b]+m2[a][b];
        }
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            cout<<m3[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}