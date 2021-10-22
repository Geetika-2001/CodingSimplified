// Author : shreyas
// McMurdo Station, Antartica
// Pengiun Intelligence Agency
// Date : 07-03-2981

#include <bits/stdc++.h>
using namespace std;

#define fast                    ios_base::sync_with_stdio(false);  cin.tie(NULL);
#define time                    cerr<<"Time taken : " <<(float)clock()/CLOCKS_PER_SEC <<" secs"<<"\n"  ;
#define F                       first
#define S                       second
#define pb                      push_back
typedef long long int           ll  ;


/***********************KADANE'S ALGORITHM******************************/

/*
  This is algorithm is usually used to find maximum sum subarray in O(N) time complexity
  Brute Force Approach : 
  Consider each element as a starting of new Subarray and calculate max sum for each element.
  Time complexity : O (N^2) 
*/
void solve() {
    
    ll arr[]={4,3,-2,6,7,-10,-10,4,5,9,-3,4,7,-28,2,9,3,2,11}  ; 
    ll n = sizeof(arr)/sizeof(arr[0])  ; 

    
    ll currentSum  = arr[0]  ;   // currentSum calculates the current Sum in array

    ll totalSum = arr[0] ;      // totalSum calculates the max sum of a subarray

     for(ll i = 1; i < n ; i++){

            if(currentSum >= 0){       
              currentSum += arr[i] ;   // if elements till index i  are positive we will consider it as currentSum and add in it.
            }
            else{
                   currentSum = arr[i]  ;  // if currentSum till i-1 is negative , we will initialize currentSum with new element and start a new subarray
            }

            if(currentSum > totalSum){
                   totalSum = currentSum  ;  // at each index i we will challenge the totalSum , if currentSum is greater than totalSum . Then totalSum = currentSum
            }
      }

      cout << totalSum <<"\n" ;

}


int32_t main() {

       fast ; time;

       int t = 1;
       //cin >> t;

       while (t--) {
              solve()  ;
       }


       return 0  ;
}

