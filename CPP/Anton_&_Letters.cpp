#include<iostream>
using namespace std;
int s[26],w;
char k;
int main()
{
while(k!='}')
{
cin>>k;
if((k>=97) && (k<=122) && s[k-97]==0)
{
w++;
s[k-97]=1;
}
}
cout<<w;
}
