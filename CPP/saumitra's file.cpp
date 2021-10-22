#include<iostream>
using namespace std;

int main() {
  	int n;
    cin>>n;
    int i=1;
    int prev,next;
    cin>>prev;
    bool mybool=true;
    bool isDec=true;
        while(i<=n-1){
            cin>>next;
            i++;
            if(next<prev && isDec==true){
                prev=next;
                continue;
            }
            else if(next==prev){
                mybool=false;
                cout<<"false";
                break;
            }
            else if(next>prev){
                isDec=false;
                prev=next;
                continue;
            }
            else if(next<prev){
                mybool=false;
                cout<<"false";
                break;
                
            }
            
        }
       
    if(mybool==true){    
    	cout<<"true";
    }    
        
}    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

