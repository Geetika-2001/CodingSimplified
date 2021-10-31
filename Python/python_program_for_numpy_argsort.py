# Python code to demonstrate 
# working of  numpy.argsort
import numpy as np
 
# Numpy array created
a = np.array([9, 3, 1, 7, 4, 3, 6])
 
# unsorted array print
print('Original array:\n', a)
 
# Sort array indices
b = np.argsort(a)
print('Sorted indices of original array->', b)
 
# To get sorted array using sorted indices
# c is temp array created of same len as of b
c = np.zeros(len(b), dtype = int)
for i in range(0, len(b)):
    c[i]= a[b[i]]
print('Sorted array->', c)
