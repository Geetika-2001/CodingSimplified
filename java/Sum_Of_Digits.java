import java.util.Scanner;  
public class SumDigits   
{  
public static void main(String args[])  
{  
int number, digit, sum = 0;  
Scanner sc = new Scanner(System.in);  
System.out.print("Enter the number: ");  
number = sc.nextInt();  
while(number > 0)  
{  
//finds the last digit of the given number    
digit = number % 10;  
//adds last digit to the variable sum  
sum = sum + digit;  
//removes the last digit from the number  
number = number / 10;  
}  
//prints the result  
System.out.println("Sum of Digits: "+sum);  
}  
}  
