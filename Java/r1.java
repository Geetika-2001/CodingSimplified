import java.util.Scanner;

public class r1 {
    public static void main(String[] args) {
        printN(6);
    }
    static void printN(int n){
        if(n==1){
            System.out.println(1);
            return;
        }
        System.out.println(n);
        printN(n-1);
        System.out.println(n);
    }
}
