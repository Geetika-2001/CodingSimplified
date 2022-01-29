import java.util.Arrays;
//range 0 to N
public class missingnumber {
    public static void main(String[] args) {
        int[] arr={4,0,2,1};
        sort(arr);
        System.out.println(Arrays.toString(arr));

    }
    static int sort(int[] arr){
        int i=0;
        while(i<arr.length){
            int correct=arr[i];
            if(arr[i]< arr.length && arr[i] != arr[correct]){
                swap(arr ,i , correct);
            }
            else{
                i++;
            }
        }
        //search for missing element
        for (int index = 0; index < arr.length; index++) {
            if(arr[index] !=index){
                System.out.println(index);
                return index;
            }
        }
        return arr.length;
    }
    static void swap(int[] arr, int first ,int second){
        int temp= arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
}
