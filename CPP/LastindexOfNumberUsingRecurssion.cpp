#include<iostream>
using namespace std;

int LastIndex(int a[], int size, int value, int currindex){
    if (currindex == size){
        return -1;
    }
    if (a[currindex] == value){
        return currindex;
    }
    int is_LastIndex = LastIndex(a, size, value, currindex -1 );
}

int main(){
    int arr[8] = {5,3,9,1,3,9,1,5};
    cout << LastIndex(arr,8,3,7);
}
