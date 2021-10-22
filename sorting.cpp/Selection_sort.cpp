// selection sort -select the smallest key in the unsorted array
//We prefer selection sort where swaping is expensive
//Time Complexity = O(n^2)
#include<iostream>
using namespace std;
void fill(int a[],int n)
{
    cout<<"\n enter element in the array : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
}

void display(int a[],int n)
{

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void swap(int &x,int &y)
{
    int t=x; 
    x=y;
    y=t;

}

void selection(int a[],int n)
{
    int i,j,min;
    for ( i = 0; i <=n-2; i++)
    {
        min=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[min]>a[j]) min=j;
        }
        if(min!=i)
        swap(a[i],a[min]);
        
    }
    cout<<"\n array after sorting : ";
    display(a,n);
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
    selection(a,n);
    return 0;
}
/*
OUTPUT:
 enter size of array : 5

 enter element in the array : 11 3 45 56 9 

 array before sorting : 11 3 45 56 9 
 array after sorting : 3 9 11 45 56
 }
