#include<stdio.h>
#include<string.h>

int main()
{
    char str[10][20] ={"riya","shriya","soniya","rahul","akshita"}, s[20][20];
    for(int i=0;i<5;i++)
    {
      for(int j=i+1;j<5;j++)
      {
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
    printf("\nThe sorted order of names are:\n");
    for(int i=0;i<5;i++)
    {
      printf("%s\t",str[i]);
    }
}