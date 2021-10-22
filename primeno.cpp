#include<iostream>
int main() {
    int a=0 ;
    int b=0 ;
    int i=0 ;
    int j=0 ;
    std::cin>>a;
    std::cin>>b;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            std::cout<<i<<"\n";
        }
    }
}
