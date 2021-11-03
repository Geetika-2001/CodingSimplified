#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b,c;
    ifstream x("hi.txt");
    x>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c;
    x.close();
    return 0;
}