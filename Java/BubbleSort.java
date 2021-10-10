import java.util.Arrays;

public class BubbleSort {
    //Bubble sort,is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
    // The pass through the list is repeated until the list is sorted.
    //Time Complexity:
    // Best Case :O(n) ,Average Case:	O(n2) ,Worst Case	:O(n2)
    //Alorithm Explaination:https://www.javatpoint.com/bubble-sort
    public static void main(String[] args) {
        int[] arr={ 3, 6, 1, 8 ,4};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }

    static int[] bubble(int[] arr) {
        //iterate n-1 times
        for (int i = 0; i < arr.length; i++) {
            //checking if adjacent right element is less than current element
            for (int j = i+1; j < arr.length; j++) {
                if(arr[j]<arr[i]){
                    //swapping the lesser element to the left position
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    return arr;
    }

}
