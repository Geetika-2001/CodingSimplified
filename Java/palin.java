/*
Problem: To check if string is palindrome or not.
*/

import java.util.*;

public class palindrome
{
    public void main()
    {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number to check if it is palindrome or not : ");
        int st=s.nextLine();
int st2=reverse(st);
        if(st==st2)
            System.out.println(st+" is Palindrome.");
        else
            System.out.println(st+" is not Palindrome.");
    }
int reverse(int s)
{int t,sm;
while(s>0)
{
t=s%10;
sm=sm*10+t;
s=s/10;
}returm sm;
}
}