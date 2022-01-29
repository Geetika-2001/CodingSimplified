import java.util.Arrays;
import java.util.Scanner;

public class minmax {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr= new int[5];
        int i;
        for(i=0; i<5; i++){
            arr[i]=in.nextInt();
        }
        Arrays.sort(arr);
        
        //System.out.println(Arrays.toString(arr));

            int min=arr[0]+arr[1]+arr[2]+arr[3];
            int max=arr[1]+arr[2]+arr[3]+arr[4];

            System.out.print(min);
            System.out.print(" ");
            System.out.print(max);



    }
}
