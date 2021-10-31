def radix_sort(arr):
    max=arr[0]
    for i in arr:
        if max<i:
            max=i
            pos=1
            while max/pos>0:
                counting_sort(arr,pos)
                pos*=10
               
def counting_sort(arr,pos):
      temp_arr=[0 for i in range(0,n)]
      bucket=[0 for i in range(0,10)]
     
      for i in range(0,n):
          bucket[(arr[i]//pos)%10]+=1
         
      for i in range(1,10):
          bucket[i]+=bucket[i-1]  
         
      for i in range(n-1,-1,-1):
          temp_arr[bucket[(arr[i]//pos)%10]-1]=arr[i]
          bucket[(arr[i]//pos)%10]-=1
         
      for i in range(0,n):
          arr[i]=temp_arr[i]
       
arr = [6,14,16,1]
n=len(arr)
print("Unsorted List:",arr)
radix_sort(arr)
print("Sorted List:",arr)
