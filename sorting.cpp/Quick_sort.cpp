//Time complexity in worst case=O(n^2)
//In Quick sort partition is depend on the position of pivot 
//all element left side of pivot are smaller than pivot
//all element right side of pivot are greater than pivot
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
void swap(int &x,int &y)
{
    int tmp=x;
    x=y;
    y=tmp; 
}
int partition(int a[],int s,int e)
{
    int pivot=a[e];
    int j=s;
    int i=j-1;
    while(j<=e-1)
    {
        if(a[j]<pivot) swap(a[++i],a[j]);
        j++;
    }
    swap(a[++i],a[e]);
    return i;

}
void QuickSort(int a[],int s,int e)
{
    if(s<e)
    {
        int pos=partition(a,s,e);
        QuickSort(a,s,pos-1);
        QuickSort(a,pos+1,e);

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
    QuickSort(a,s,e);
    cout<<"\n array after sorting : ";
    display(a,n);

    return 0;
}
/*
OUTPUT:
enter size of array : 8

 enter element in array : 12 34 76 101 88 99 999 10

 array before sorting : 12 34 76 101 88 99 999 10 
 array after sorting : 10 12 34 76 88 99 101 999
 */
