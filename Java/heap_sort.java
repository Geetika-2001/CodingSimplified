    //Heapsort is a comparison-based sorting algorithm. Heapsort can be thought of as an improved selection sort.
    //Worst complexity: n*log(n) ,Average complexity: n*log(n) ,Best complexity: n*log(n) ,Space complexity: 1,Stable: No
    //Algorithm Explaination: https://www.javatpoint.com/heap-sort
    public class heap_sort
    {
        public void sort(int A[])
        {
            int n = A.length;

            // Build heap (rearrange array)
            for (int i = n / 2 - 1; i >= 0; i--)
                heapify(A, n, i);   // To heapify a subtree rooted with node i which is
            // Heapify:- A process which helps regaining heap properties


            // One by one extract an element from heap
            for (int i=n-1; i>=0; i--)
            {
                // Move current root to end
                int temporary = A[0];
                A[0] = A[i];
                A[i] = temporary;

                // call max heapify on the reduced heap
                heapify(A, i, 0);
            }
        }

        // To heapify a subtree rooted with node i which is
        // an index in arr[]. n is size of heap
        void heapify(int A[], int n, int i)
        {
            int largest = i; // Initialize largest as root
            int left_child = 2*i + 1; // left = 2*i + 1
            int right_child = 2*i + 2; // right = 2*i + 2

            // If left child is larger than root
            if (left_child < n && A[left_child] > A[largest])
                largest = left_child;

            // If right child is larger than largest so far
            if (right_child < n && A[right_child] > A[largest])
                largest = right_child;

            // If largest is not root
            if (largest != i)
            {
                int swap = A[i];
                A[i] = A[largest];
                A[largest] = swap;

                // Recursively heapify the affected sub-tree
                heapify(A, n, largest);
            }
        }

        /* A utility function to print array of size n */
        static void print_array(int A[])
        {
            int n = A.length;
            for (int i=0; i<n; ++i)
                System.out.print(A[i]+" ");
            System.out.println();
        }

        public static void main(String args[])
        {
            int A[] = {22, 21, 3, 25, 26, 7};
            int n = A.length;

            heap_sort ob = new heap_sort();
            ob.sort(A);

            System.out.println("Sorted array is");
            print_array(A);
        }
    }

