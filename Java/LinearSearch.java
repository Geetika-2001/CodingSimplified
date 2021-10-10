import java.util.Scanner;

public class LinearSearch {
    //It sequentially checks each element of the list until a match is found or the
    // whole list has been searched.
    //Question: Find the minimum integer in the array
    //Time Complexity:Best Case:O(1)	,Average Case: O(n),	Worst Case: O(n)
    //Algorithm Explaination:https://www.javatpoint.com/linear-search
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();//Input number of elements in array
        int[] arr=new int[n];//declaring the array with n number of elements

        for (int i = 0; i < n; i++) {
            arr[i]=in.nextInt();
        }
        System.out.println(min(arr));
    }

    // assume arr.length != 0
    // return the minimum value in the array
    static int min(int[] arr) {
        int ans = arr[0]; //initially assuming answer to be 0th element of array

        for (int i = 1; i < arr.length; i++) {
            //linear search in array
            if (arr[i] < ans) {
                ans = arr[i];
            }
        }
        return ans;
    }
}
