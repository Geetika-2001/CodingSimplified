# Python code to demonstrate working of 
# numpy.lexsort()
import numpy as np
 
# Numpy array created
# First column
a = np.array([9, 3, 1, 3, 4, 3, 6])
 
# Second column 
b = np.array([4, 6, 9, 2, 1, 8, 7]) 
print('column a, column b')
for (i, j) in zip(a, b):
    print(i, ' ', j)
 
# Sort by a then by b
ind = np.lexsort((b, a)) 
print('Sorted indices->', ind)
