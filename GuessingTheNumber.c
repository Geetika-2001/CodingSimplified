//Making a program/project of guessing a number, by using loops and random number generator.

#include<stdio.h>
#include<stdlib.h>        // to use rand() function
#include<time.h>          // to use time function
#include<process.h>
int main()
{
    int count=0,k,n;
    srand(time(0));       // to change the generated number everytime
    n = rand()%100 + 1;    //Generates a random number between 1-100
   
    while(k!=n){
    printf("Guess the number between 1-100 :\n");
    scanf("%d",&k);

    if(k>n)
    printf("Lower number please !.\n");
    else if(k<n)
    printf("Higher number please !.\n");
    count++;
    if(k==n)
    printf("Woohoo !! You guessed it in %d attempts.",count);
    }
    
    return 0;
}
