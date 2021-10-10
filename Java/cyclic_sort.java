import java.util.Arrays;
//Cycle Sort. Cycle sort is a comparison sorting algorithm which forces array to be factored into the number of cycles where each of them can be rotated to produce a sorted array.
//Worst complexity: n^2 ,Average complexity: n^2 ,Best complexity: n^2 ,Space complexity: 1
//Applied Algorithm:https://www.javatpoint.com/cycle-sort
//Applied only on Problems in which array elements range from 1 to n.
public class cyclic_sort {
        public static void main(String[] args) {
            int[] arr = {5, 4, 3, 2, 1};
            sort(arr);
            System.out.println(Arrays.toString(arr));
        }

        static void sort(int[] arr) {
            int i = 0;
            while (i < arr.length) {
                int correct = arr[i] - 1;
                if (arr[i] != arr[correct]) {
                    int temp = arr[i];
                    arr[i] = arr[correct];
                    arr[correct] = temp;
                } else {
                    i++;
                }
            }
        }
    }

