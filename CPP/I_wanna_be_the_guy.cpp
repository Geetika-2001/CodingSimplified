#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0,j=1,n,p,q;
    cin>>n>>p;
    int a[p];
    for(int i=0;i<p;i++)
    cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<p;i++)
    cin>>b[i];

    int m=max(p,q);

    for(int i=0;i<m;i++)
    {
        if(a[i]==j || b[i]==j) 
        c++;
        else
        { cout<<"Oh, my keyboard!";
        exit(0);}
        j++;
    }

    if(c==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";


    return 0;
}
