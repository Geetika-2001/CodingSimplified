import random

def gameWin(comp, you):
    if comp == you :
        return None
    elif comp == 's':
      if you== 'w':
           return False
      elif you== 'g':  
          return True 
    elif comp == 'w':    
      if you== 'g':
           return False
      elif you== 's':  
          return True
    elif comp == 'g':    
      if you== 's':
           return False
      elif you== 'w':  
          return True      
                

 
print("computer turn : snake(s) water(w) or gun(g) ?") 
randNO = random.randint(1, 3) 
print(randNO) 
if randNO == 1:
    comp = 's'
elif randNO == 2:
    comp = 'w'
elif randNO == 3:
    comp = 'g'
 
you = input ("Player's turn : snake(s) water(w) or gun(g) ?")
a = gameWin(comp, you)

print(f"computer choose {comp}")
print(f"computer choose {you}")
 
if a == None : 
    print("The game is tie!")
elif a:
    print("You win!")
else:
  print("You lose!")
