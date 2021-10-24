#include<iostream>
int main() {
int i;
int j;
int row;
int col;
std::cin>>row;
std::cin>>col;
for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
        if(i==1 || i==row){
            std::cout<<"*";
        }
        else if(j==1 || j==col){
            std::cout<<"*";
        }
        else {
            std::cout<<" ";
        }
    }std::cout<<"\n";
}
}