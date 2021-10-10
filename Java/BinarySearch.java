import java.lang;
public class BinarySearch {
    //Binary Search is a search algorithm that finds the position of a target value within
    // a sorted array. Binary search compares the target value to the middle element of the array.
    //Question: Return the index of target element using binary search in array
    //Time Complexity:Worst case	O(log n) ,Best case	O(1) ,Average Case	O(log n)
    //Algorithm explaination:https://www.javatpoint.com/binary-search
    public static void main(String[] args) {
        int [] arr={2, 5 ,9, 11, 67, 345};
        int target= 67;
        int ans=binary(arr, target);
        System.out.println(Arrays.toString(ans));
    }

    static int binary(int[] arr, int target) {
        int start=0;
        int end=arr.length-1;// array length is always one greater the last element of array since array index begins from 0

        while(start<=end) {
            // find the middle element
//            int mid = (start + end) / 2; // might be possible that (start + end) exceeds the range of int in java
            int mid=start+(end-start)/2;

            if(target>arr[mid]){
                start=mid+1;
            }
            else if(target == arr[mid]){
                return mid;
            }
            else{
                end=mid-1;
            }

        }
        return -1;
    }
}
