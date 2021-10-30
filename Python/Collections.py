from collections import Counter
from collections import namedtuple
from collections import deque

# Counter
a = "aaaabbbbbccccccddddd"
mycounter = Counter(a) # Prints a dictionary with the number of each character in that string 
print(mycounter)
print(mycounter.most_common(1)) # Gives you the most common character occurence, parameter can be defined for number of most common
print(mycounter.most_common()[0][0]) # To access first element of most common list and then to access the first element of the tuple
print(list(mycounter.elements())) # Prints all the elements
print((mycounter.items()))


# namedtuple
Point = namedtuple("Point","x,y") # Works as a constructor
pt = Point(1,7)
print(pt)
print(pt.x , pt.y)

# deque 
d = deque() # Its a list but the operations can be carried from both left and right side
d.append(1)
d.append(2)
print(d)
d.appendleft(4) # Appends to the left
print(d)
d.extendleft([4,5,6,7])
print(d)
d.rotate() # Rotates like a row in a classroom in school and parameter is given to specify how many roations
print(d) 