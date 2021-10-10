import java.util.Arrays;

public class InsertionSort {
    //Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time.
    //Time Complexity:Best Case O(n), Average Case O(n2) ,Worst Case O(n2)
    //Algortithm Explaination:https://www.javatpoint.com/insertion-sort
    public static void main(String[] args) {
        int[] arr= {3 , 7 , 0 , 4 , 8};
        insertion(arr);
        System.out.println(Arrays.toString(arr));
    }

    static int[] insertion(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i+1; j > 0; j--) {
                if (arr[j] < arr[j-1]) {
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                } else {
                    break;
                }
            }
        }
        return arr;
    }
}
