import java.util.*;
class circularprime
{
   public static void main(String args[])
   {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter the number");
      int n=sc.nextInt();
      int count=0;
      int n1=n;
      int c=0;int flag=0;
      int n3,n4=0;
      while(n1!=0)
      {
         count++;
         n1=n1/10;
      }
      n1=n;
      for(int i=1;i<=count;i++)
      {   
         c=0;
         for(int j=1;j<=n;j++)
         {
            if(n%j==0)
            {
               c++;
            }
         }
         if(c>2)
         {
            flag=1;
            break;
         }
         n3=n%(int)Math.pow(10,count-1);
         n4=n/(int)Math.pow(10,count-1);
         n=n3*10+n4;
         System.out.println(n);
      }
      if(flag==1)
      {
         System.out.println(n1+" Is not a circular prime number");
      }
      else
      {
         System.out.println(n1+" Is a circular prime number");
      }
   }
