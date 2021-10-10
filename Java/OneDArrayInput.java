import java.util.Arrays;
import java.util.Scanner;//Importing essential package for using Scanner class

public class OneDArrayInput {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();  //Input Integer for Number of elements in Array arr
        int[] arr=new int[n];//Declaration of array arr of size n

        for(int i=0; i<n; i++)//iterating through each element from 0-n
        {
            arr[i]=in.nextInt();//taking input of each element of array
        }
        System.out.println(Arrays.toString(arr));//Printing the array in String format
    }

}
