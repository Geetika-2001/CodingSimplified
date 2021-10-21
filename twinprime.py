a=int(input("Enter a number"))
b=int(input("Enter a number"))
e=f=0
for c in range(2,a):
    if(a%c==0):
        e=e+1
for d in range(2,b):
    if(b%d==0):
        f=f+1
if(e==0 and f==0):
    if(a-b==2 or a-b==-2):
        print("The numbers are twin prime numbers")
    else:
        print("The numbers are not twin prime numbers")
else:
    if(e!=0 or f!=0):
        print("One or more number is not prime")