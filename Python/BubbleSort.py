def bubblesort(list1):

	#loop to access each element in the list
	for i in range (len(list1)):

		#loop to compare between two elements and go through the entire list
		for j in range (0,len(list1)-1):

			#comparing two adjacent elements
			if list1[j]>list1[j+1]:
        
				#swapping the two elements using a temp variable
				tempVariable = list1[j]
				list1[j] = list1 [j+1]
				list1[j+1] = tempVariable

data = [5,21,33,11,9,31]
bubblesort(data)
print (data)


