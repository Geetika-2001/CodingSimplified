// merge sort is a divide and conquer method
//Time Complexity=O(n*log n)
//disadvantage  space complexity=O(n);
#include<iostream>
using namespace std;
void fill(int a[],int n)
{
    cout<<"\n enter element in array : ";
    for(int i=0;i<n;i++ )
    cin>>a[i];

}
void display(int a[],int n)
{
    for(int i=0;i<n;i++ )
    cout<<a[i]<<" ";
}
void merge(int a[],int s,int mid,int e )
{
    int n1=mid-s+1;
    int n2=e-mid;
    int left[n1+1],right[n2+1];
    for(int i=0;i<=n1-1;i++)          
        left[i]=a[i+s];
    left[n1]=INT_MAX;
    for(int i=0;i<=n2-1;i++)          
        right[i]=a[i+mid+1];
    right[n2]=INT_MAX;
    
    int i=0,j=0,k=s;
    while(k<=e)
    {
        if(left[i]<right[j])           a[k++]=left[i++];
        else if(left[i]>right[j])      a[k++]=right[j++];
        else
        {
            a[k++]=left[i++];
            a[k++]=right[j++];
        }
    }

}
void ms(int a[],int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        ms(a,s,mid);
        ms(a,mid+1,e);
        merge(a,s,mid,e);
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
    int s=0,e=n-1;
    ms(a,s,e);
    cout<<"\n array after sorting : ";
    display(a,n);

    return 0;
}
/* output:
enter size of array : 6

 enter element in array : 11 45 7 8 59 100

 array before sorting : 11 45 7 8 59 100 
 array after sorting : 7 8 11 45 59 100
 */
