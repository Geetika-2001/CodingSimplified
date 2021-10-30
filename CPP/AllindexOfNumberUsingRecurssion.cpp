#include<iostream>
using namespace std;

int allindex (int a[], int size , int value, int currIndex){
    if(size == currIndex){
        return -1;
    }
    if(a[currIndex] == value){
        return currIndex;
    }
    int is_allIndex = allindex(a,size,value,currIndex + 1);
}

int main(){
    int arr[12] = {1,4,2,3,5,4,1,2,3,4,5,5};
    cout << allindex(arr,12,5,0);
}
