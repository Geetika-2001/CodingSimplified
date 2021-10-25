#include<stdio.h>  
void towers(int, char, char, char);  
 int main()  
 {  
       int num;  
       printf ("Enter the number of disks : ");  
        scanf ("%d", &num);  
      printf ("The sequence of moves involved in the Tower of Hanoi are :\n");  
      towers (num, 'A', 'C', 'B');  
      return 0;  
   
}  
     void towers( int num, char from peg, char topeg, char auxpeg)  
 {  
           if (num == 1)  
 {  
       printf ("\n Move disk 1 from peg %c to peg %c", from peg, topeg);  
           return;  
 }  
   Towers (num - 1, from peg, auxpeg, topeg);  
    Printf ("\n Move disk %d from peg %c to peg %c", num, from peg, topeg);  
   Towers (num - 1, auxpeg, topeg, from peg);  
 }  
