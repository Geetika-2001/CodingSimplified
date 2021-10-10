import java.util.Arrays;
import java.util.Scanner;

public class TwoDArrayInput {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();  //Input Integer for Number of elements in Array arr
        int m=in.nextInt();
        int[][] arr=new int[n][m];//Declaration of array arr of size n

        for(int i=0; i<n; i++)//iterating through each element from 0-n
        {
            for (int j = 0; j <m ; j++) {
                arr[i][j] = in.nextInt();//taking input of each element of array
            }
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
    }
}
