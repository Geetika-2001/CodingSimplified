import random

randNumber = random.randint(1,100)
print(randNumber)
userguess = None
guesses = 0
while(userguess != randNumber):
     userguess = int(input("Enter your guess:"))
     if(userguess==randNumber):
         print("You gussed it right!")
     else:
         print("You gussed it wrong!")
         guesses += 1
print(f"You gussed the number in {guesses} gusses")
