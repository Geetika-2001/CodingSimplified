#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,max,min,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    max=*max_element(arr, arr + n);
    min=*min_element(arr, arr + n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            a=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
       if(arr[i]==min)
        {
            b=i;
            break;
        }
    }
    cout<<a+(n-1-b)-(a>b);
    return 0;
}
