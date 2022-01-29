import java.util.Arrays;
import java.util.Scanner;

public class Medianmain {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();

        int []arr =new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
            Arrays.sort(arr);
            int median=(n-1)/2;
            System.out.println(Arrays.toString(arr));
            System.out.println(median);

    }


}
