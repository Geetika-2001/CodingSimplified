#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() 
{ 
    //For sin table 
    double deg=0,result=0,rad; 
    int i=0; 
    printf("__________###### The sin table is as follows ######__________\n"); 
    printf("\t0\t 15\t 30\t 45\t 60\t 75\t 90\n"); 
    //printf("\t0\t 30\t 45\t 60\t 90\n"); 
    while(i<7) 
    { 
        /*if(deg==15) 
      { 
        continue; 
      } 
    else if(deg==75) 
      { 
        continue; 
      }*/ 
    rad=deg*(3.141592653589793/180); 
    result=sin(rad); 
    printf("\t%.2lf",result); 
    deg=deg+15; 
    i++; 
    } 
    printf("\n_____________________________________________________________\n"); 
     
    //For cosine table 
    deg=0; 
    i=0; 
    printf("__________###### The cosine table is as follows ######__________\n"); 
    printf("\t0\t 15\t 30\t 45\t 60\t 75\t 90\n"); 
    //printf("\t0\t 30\t 45\t 60\t 90\n"); 
    while(i<7) 
    { 
    /*if(deg==15) 
      { 
        continue; 
      } 
    else if(deg==75) 
      { 
        continue; 
      } */ 
    rad=deg*(3.141592653589793/180); 
    result=cos(rad); 
    printf("\t%.2lf",result); 
    deg=deg+15; 
    i++; 
    } 
    printf("\n_____________________________________________________________"); 
     
     
} 
