#Collatz Conjecture Testing on Numbers

"""
More Info @https://www.youtube.com/watch?v=5mFpVDpKX70

Input any number to get a sequence of collatz sequences from 1 upto that number.

>> Example:
In [1]: 4
Output:

1
--------------------------------------------------------------------------------

Steps: 0
--------------------------------------------------------------------------------
2
--------------------------------------------------------------------------------
1

Steps: 1
--------------------------------------------------------------------------------
3
--------------------------------------------------------------------------------
10
5
16
8
4
2
1

Steps: 7
--------------------------------------------------------------------------------
4
--------------------------------------------------------------------------------
2
1

Steps: 2
--------------------------------------------------------------------------------
1


"""

i = 1
d = {}

iterations = int(input('Please enter the number of iterations: '))

for i in range(1, iterations+1):
    n = i

    print(n)
    print('-'*80)
    steps = 0

    while n != 1:
        if n%2 == 0:
            n/=2
        else:
            n=3*n+1
        print(int(n))
        steps += 1

    d[n] = steps

    print()
    print('Steps: '+str(steps))
    print('-'*80)

    i += 1

for i in d:
    print(i)

temp = input('Enter any key to close: ')
