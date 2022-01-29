import java.net.SocketTimeoutException;
import java.sql.SQLOutput;
import java.util.Scanner;

class hastagpattern {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        pattern5(n);
    }

    static void pattern1(int n) {
        for (int row = 1; row <=n; row++) {
            for (int col = 1; col <=n ; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void pattern2(int n) {
        for (int row = 1; row <=n; row++) {
            for (int col = 1; col <=row ; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void pattern3(int n) {
        for (int row = 1; row <=n; row++) {
            for (int col = 1; col <=n-row+1 ; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void pattern4(int n) {
        for (int row = 1; row <=n; row++) {
            for (int col = 1; col <=n ; col++) {
                System.out.print(col);
            }
            System.out.println();
        }
    }

    static void pattern5(int n) {
        for (int row = 1; row <=n; row++) {
            for (int col = 1; col <=n ; col++) {
                if(col==n){
                    System.out.print(" *");
                }
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}


