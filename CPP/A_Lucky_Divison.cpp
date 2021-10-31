#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[]={4,7,47,74,444,447,474,477,744,747,774,777};

    cin>>n;

    for(int i=0;i<12;i++)
    {
        if(n==arr[i] || n%arr[i]==0)
        {
            cout<<"YES"<<endl;
            exit(0);
        }
    }
    cout<<"NO";

    return 0;
}
