import java.util.Arrays;

public class SelectionSort {
    // Selection sort is an in-place comparison sorting algorithm.
    //Time Complexity:Best Case O(n2), Average Case O(n2) ,Worst Case O(n2)
    //It is not suitable for large data sets.
    //Algorithm Explanation :https://www.javatpoint.com/selection-sort
    public static void main(String[] args) {
        int[] arr= {3 , 7 , 0 , 4 , 8};
        selection(arr);
        System.out.println(Arrays.toString(arr));
    }

    static int[] selection(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            // find the max item in the remaining array and swap with correct index
            int last = arr.length - i - 1;
            int maxIndex = getMaxIndex(arr, 0, last);
            //index of maximum element is returned now swap max element to the last position
            swap(arr, maxIndex, last);
        }
        return arr;
    }

    static int getMaxIndex(int[] arr, int start, int end) {
        //searching for maximum element in array and return it's index
        int max = start;
        for (int i = start; i <= end; i++) {
            if (arr[max] < arr[i]) {
                max = i;
            }
        }
        return max;
    }
    static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
     }

    }


