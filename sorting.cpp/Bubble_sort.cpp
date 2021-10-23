
#include<iostream>
using namespace std;
void fill(int a[],int n)
{
    cout<<"\n enter elements in the array : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
}
void display(int a[],int n)
{

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void swap(int &m,int &n)
{
    int t=m;
    m=n;
    n=t;
}
void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<=n-2;i++)
    {
        int s=0;
        for(j=0;j<n-i-1;j++) 
        {
            if(a[j]>a[j+1]) 
            {
                swap(a[j],a[j+1]);
                s=1;
            }
        }
         if(s!=1)
             break;
         
    }
}
int main()
{
    int n;
    cout<<"\n enter size of array : ";
    cin>>n;
    int a[n];
    fill(a,n);
    cout<<"\n array before sorting : ";
    display(a,n);
    bubble(a,n);
    cout<<"\n array after sorting : ";
    display(a,n);
    return 0;
}
/*
OUTPUT:
enter size of array : 5

 enter element in the array : 23 456 77 90 4

 array before sorting : 23 456 77 90 4 
 array after sorting : 4 23 77 90 456
 */
